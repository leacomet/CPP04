/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:37:18 by acomet            #+#    #+#             */
/*   Updated: 2024/02/04 18:29:12 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : _type("WrongCat") {

	std::cout << "WrongCat Default constructor called" << std::endl;
	return;
}

WrongCat::WrongCat(WrongCat const &src) {

	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = src;
	return;
}

WrongCat::~WrongCat(void) {

	std::cout << "WrongCat Default destructor called" << std::endl;
	return;
}

std::string	WrongCat::getType(void) const {

	return (this->_type);
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs) {

	this->_type = rhs.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const {

	std::cout << "MIAOUUUUUUUUUUUUUSE !" << std::endl;
	return;
}
