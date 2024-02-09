/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:37:18 by acomet            #+#    #+#             */
/*   Updated: 2024/02/05 12:11:18 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : _type("Cat") {

	std::cout << "Cat Default constructor called" << std::endl;
	return;
}

Cat::Cat(Cat const &src) {

	std::cout << "Cat Copy constructor called" << std::endl;
	*this = src;
	return;
}

Cat::~Cat(void) {

	std::cout << "Cat Default destructor called" << std::endl;
	return;
}

std::string	Cat::getType(void) const {

	return (this->_type);
}

Cat	&Cat::operator=(const Cat &rhs) {

	this->_type = rhs.getType();
	return (*this);
}

void	Cat::makeSound(void) const {

	std::cout << "MIAOUUUUUUUUUUUUUSE !" << std::endl;
	return;
}
