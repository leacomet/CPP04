/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:17:16 by acomet            #+#    #+#             */
/*   Updated: 2024/02/05 15:37:46 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main(void) {

{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;
}
std::cout << std::endl << std::endl;
{
	Animal	*(arena[4]);
	int	i = 0;

	while (i < 2)
	{
		arena[i] = new Dog();
		i++;
	}
	while (i < 4)
	{
		arena[i] = new Cat();
		i++;
	}
	i = 0;
	while (i < 4)
	{
		delete arena[i];
		i++;
	}
}
std::cout << std::endl << std::endl;
{
	Cat		cat1;
	Cat		cat2(cat1);
	Brain	*ptr1 = cat1.get_brain();
	Brain	*ptr2 = cat2.get_brain();

	std::cout << "cat1 brain = " << ptr1->get_idea(0) << std::endl;
	std::cout << "cat2 brain = " << ptr2->get_idea(0) << std::endl;
}
std::cout << std::endl << std::endl;
{
	Dog		dog1;
	Dog		dog2(dog1);
	Brain	*ptr1 = dog1.get_brain();
	Brain	*ptr2 = dog2.get_brain();

	std::cout << "dog1 brain = " << ptr1->get_idea(0) << std::endl;
	std::cout << "dog2 brain = " << ptr2->get_idea(0) << std::endl;
}
std::cout << std::endl << std::endl;
{
	Brain	brain1;
	Brain	brain2(brain1);

	std::cout << "brain1 = " << brain1.get_idea(1) << std::endl;
	std::cout << "brain2 = " << brain2.get_idea(1) << std::endl;
}
return (0);
}
