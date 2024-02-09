/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 22:22:33 by acomet            #+#    #+#             */
/*   Updated: 2024/02/04 21:01:10 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal") {

	std::cout << "Animal Default constructor called" << std::endl;
	return;
}

Animal::Animal(Animal const &src) {

	std::cout << "Animal Copy constructor called" << std::endl;
	*this = src;
	return;
}

Animal::~Animal(void) {

	std::cout << "Animal Default destructor called" << std::endl;
	return;
}

std::string	Animal::getType(void) const {

	return (this->_type);
}

Animal	&Animal::operator=(const Animal &rhs) {

	this->_type = rhs.getType();
	return (*this);
}

void	Animal::makeSound(void) const {

	std::cout << "unknown sound O-O ..." << std::endl;
	return;
}
