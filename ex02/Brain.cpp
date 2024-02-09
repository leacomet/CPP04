/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:55:54 by acomet            #+#    #+#             */
/*   Updated: 2024/02/05 15:12:03 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {

	std::cout << "Brain Default constructor called" << std::endl;
	this->_ideas[0] = "thought 1";
	this->_ideas[1] = "thought 2";
	this->_ideas[2] = "thought 3";
	this->_ideas[3] = "thought 4";
	return;
}

Brain::Brain(Brain const &src) {

	std::cout << "Brain Copy constructor called" << std::endl;
	*this = src;
	this->_ideas[0] += " copied";
	this->_ideas[1] += " copied";
	this->_ideas[2] += " copied";
	this->_ideas[3] += " copied";
	return;
}

Brain::~Brain(void) {

	std::cout << "Brain Default destructor called" << std::endl;
	return;
}

Brain	&Brain::operator=(Brain const &src) {

	int	i = 0;

	while (i < 100)
	{
		this->_ideas[i] = "same " + src.get_idea(i);
		i++;
	}
	return (*this);
}

std::string	Brain::get_idea(int i) const {

	return (this->_ideas[i]);
}
