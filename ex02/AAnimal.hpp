/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 22:16:07 by acomet            #+#    #+#             */
/*   Updated: 2024/02/05 15:49:08 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class	AAnimal {

public:

	AAnimal(void);
	AAnimal(AAnimal const &src);
	virtual ~AAnimal(void);

	AAnimal	&operator=(AAnimal const &rhs);

	virtual std::string	getType(void) const;

	virtual void		makeSound(void) const = 0;

protected:

	std::string	_type;

};

#endif
