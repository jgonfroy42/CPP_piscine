/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 21:33:17 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/04 22:26:22 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

	Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

	Sorcerer::Sorcerer(Sorcerer const &src)
{
	*this = src;
}

	Sorcerer::~Sorcerer(void)
{
	std::cout  <<_name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer	&Sorcerer::operator=(Sorcerer const &src)
{
	this->_name = src.get_name();
	this->_title = src.get_title();
	return *this;
}

std::string	Sorcerer::get_name(void) const
{
	return _name;
}

std::string	Sorcerer::get_title(void) const
{
	return _title;
}

void		Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::ostream	& operator<<(std::ostream & o, Sorcerer const & src)
{
	std::string name = src.get_name();
	std::string title = src.get_title();

	o << "I am " << name << ", " << title << ", and I like ponies!" << std::endl;
	return o;
}
