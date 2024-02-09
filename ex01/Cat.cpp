/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:37:18 by acomet            #+#    #+#             */
/*   Updated: 2024/02/05 16:12:05 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : _type("Cat") {

	std::cout << "Cat Default constructor called" << std::endl;
	this->_brain = new Brain();
	return;
}

Cat::Cat(Cat const &src) {


	std::cout << "Cat Copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = src;
	return;
}

Cat::~Cat(void) {

	std::cout << "Cat Default destructor called" << std::endl;
	if (this->_brain)
		delete this->_brain;
	return;
}

std::string	Cat::getType(void) const {

	return (this->_type);
}

Brain	*Cat::get_brain(void) const {

	return (this->_brain);
}

Cat	&Cat::operator=(const Cat &src) {

	Brain	*temp = src.get_brain();

	this->_type = src.getType();
	if (this->_brain && temp)
	{
		delete this->_brain;
		this->_brain = new Brain();
		*(this->_brain) = *(temp);
	}
	return (*this);
}

void	Cat::makeSound(void) const {

	std::cout << "MIAOUUUUUUUUUUUUUSE !" << std::endl;
	return;
}
