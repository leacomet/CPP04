/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:49:47 by acomet            #+#    #+#             */
/*   Updated: 2024/02/05 13:12:02 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class	Brain{

public:

	Brain(void);
	Brain(Brain const &src);
	~Brain(void);

	Brain &operator=(Brain const &src);

	std::string	get_idea(int i) const;

private:

	std::string	_ideas[100];

};


#endif
