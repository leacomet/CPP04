/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 22:16:07 by acomet            #+#    #+#             */
/*   Updated: 2024/02/04 21:01:14 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class	Animal {

public:

	Animal(void);
	Animal(Animal const &src);
	virtual ~Animal(void);

	Animal	&operator=(Animal const &rhs);

	virtual std::string	getType(void) const;

	virtual void		makeSound(void) const;

protected:

	std::string	_type;

};

#endif
