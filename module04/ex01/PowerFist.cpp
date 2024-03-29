/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 19:08:21 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/07 14:31:16 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

	PowerFist::PowerFist(void): AWeapon("Power Fist", 8, 50) {}

	PowerFist::PowerFist(PowerFist const &src): AWeapon(src) {}

	PowerFist::~PowerFist(void) {}

PowerFist	& PowerFist::operator=(PowerFist const & src)
{
	if (this != &src)
	{
		_name = src.getName();
		_apcost = src.getAPCost();
		_damage = src.getDamage();
	}
	return *this;
}

void	PowerFist::attack(void) const
{
	std::cout << "*pschhh... SBAM!*" << std::endl;
}
