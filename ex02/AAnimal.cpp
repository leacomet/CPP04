/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 22:22:33 by acomet            #+#    #+#             */
/*   Updated: 2024/02/05 15:43:48 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("AAnimal") {

	std::cout << "AAnimal Default constructor called" << std::endl;
	return;
}

AAnimal::AAnimal(AAnimal const &src) {

	std::cout << "AAnimal Copy constructor called" << std::endl;
	*this = src;
	return;
}

AAnimal::~AAnimal(void) {

	std::cout << "AAnimal Default destructor called" << std::endl;
	return;
}

std::string	AAnimal::getType(void) const {

	return (this->_type);
}

AAnimal	&AAnimal::operator=(const AAnimal &rhs) {

	this->_type = rhs.getType();
	return (*this);
}

void	AAnimal::makeSound(void) const {

	std::cout << "unknown sound O-O ..." << std::endl;
	return;
}
