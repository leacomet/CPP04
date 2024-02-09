/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:35:38 by acomet            #+#    #+#             */
/*   Updated: 2024/02/04 18:29:11 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal{

public:

	WrongCat(void);
	WrongCat(WrongCat const &src);
	~WrongCat(void);

	WrongCat	&operator=(WrongCat const &rhs);

	std::string	getType(void) const;

	void		makeSound(void) const;

private:

	std::string	_type;

};

#endif
