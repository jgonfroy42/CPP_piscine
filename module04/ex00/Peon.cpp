/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 21:33:17 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/05 21:55:33 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

	Peon::Peon(void): Victim("illegal"){}

	Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

	Peon::Peon(Peon const &src): Victim(src)
{
	*this = src;
}

	Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

Peon	&Peon::operator=(Peon const &src)
{
	this->_name = src.get_name();
	return *this;
}

void	Peon::getPolymorphed(void)	const
{
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}
