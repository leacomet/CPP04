/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:35:38 by acomet            #+#    #+#             */
/*   Updated: 2024/02/05 14:58:00 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal{

public:

	Cat(void);
	Cat(Cat const &src);
	~Cat(void);

	Cat	&operator=(Cat const &src);

	std::string	getType(void) const;
	Brain	*get_brain(void) const;

	void		makeSound(void) const;

private:

	std::string	_type;
	Brain		*_brain;

};

#endif
