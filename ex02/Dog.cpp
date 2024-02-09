/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:37:18 by acomet            #+#    #+#             */
/*   Updated: 2024/02/05 16:13:03 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : _type("Dog") {

	std::cout << "Dog Default constructor called" << std::endl;
	this->_brain = new Brain();
	return;
}

Dog::Dog(Dog const &src) {

	std::cout << "Dog Copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = src;
	return;
}

Dog::~Dog(void) {

	std::cout << "Dog Default destructor called" << std::endl;
	if (this->_brain)
		delete this->_brain;
	return;
}

std::string	Dog::getType(void) const {

	return (this->_type);
}

Brain	*Dog::get_brain(void) const {

	return (this->_brain);
}

Dog	&Dog::operator=(const Dog &src) {

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

void	Dog::makeSound(void) const {

	std::cout << "WAAAAAF WAAAAAAAF !" << std::endl;
	return;
}
