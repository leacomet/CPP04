/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 22:22:33 by acomet            #+#    #+#             */
/*   Updated: 2024/02/04 18:29:10 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal") {

	std::cout << "WrongAnimal Default constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {

	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = src;
	return;
}

WrongAnimal::~WrongAnimal(void) {

	std::cout << "WrongAnimal Default destructor called" << std::endl;
	return;
}

std::string	WrongAnimal::getType(void) const {

	return (this->_type);
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs) {

	this->_type = rhs.getType();
	return (*this);
}

void	WrongAnimal::makeSound(void) const {

	std::cout << "ROUCOUUUUUUUULE" << std::endl;
	return;
}
