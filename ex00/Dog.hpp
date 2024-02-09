/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:35:38 by acomet            #+#    #+#             */
/*   Updated: 2024/02/05 12:11:41 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class	Dog : public Animal{

public:

	Dog(void);
	Dog(Dog const &src);
	~Dog(void);

	Dog	&operator=(Dog const &rhs);

	std::string	getType(void) const;

	void		makeSound(void) const;

private:

	std::string	_type;

};

#endif
