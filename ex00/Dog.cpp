/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:37:18 by acomet            #+#    #+#             */
/*   Updated: 2024/02/05 12:12:33 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : _type("Dog") {

	std::cout << "Dog Default constructor called" << std::endl;
	return;
}

Dog::Dog(Dog const &src) {

	std::cout << "Dog Copy constructor called" << std::endl;
	*this = src;
	return;
}

Dog::~Dog(void) {

	std::cout << "Dog Default destructor called" << std::endl;
	return;
}

std::string	Dog::getType(void) const {

	return (this->_type);
}

Dog	&Dog::operator=(const Dog &rhs) {

	this->_type = rhs.getType();
	return (*this);
}

void	Dog::makeSound(void) const {

	std::cout << "WAAAAAF WAAAAAAAF !" << std::endl;
	return;
}
