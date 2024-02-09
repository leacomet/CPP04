/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 22:16:07 by acomet            #+#    #+#             */
/*   Updated: 2024/02/04 19:06:15 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class	WrongAnimal {

public:

	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &src);
	virtual ~WrongAnimal(void);

	WrongAnimal	&operator=(WrongAnimal const &rhs);

	std::string	getType(void) const;

	void		makeSound(void) const;

protected:

	std::string	_type;

};

#endif
