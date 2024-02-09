/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:35:38 by acomet            #+#    #+#             */
/*   Updated: 2024/02/05 15:50:08 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class	Dog : public AAnimal{

public:

	Dog(void);
	Dog(Dog const &src);
	~Dog(void);

	Dog	&operator=(Dog const &src);

	std::string	getType(void) const;
	Brain	*get_brain(void) const;

	void		makeSound(void) const;

private:

	std::string	_type;
	Brain		*_brain;

};

#endif
