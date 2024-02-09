/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:35:38 by acomet            #+#    #+#             */
/*   Updated: 2024/02/05 12:09:46 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class	Cat : public Animal{

public:

	Cat(void);
	Cat(Cat const &src);
	~Cat(void);

	Cat	&operator=(Cat const &rhs);

	std::string	getType(void) const;

	void		makeSound(void) const;

private:

	std::string	_type;

};

#endif
