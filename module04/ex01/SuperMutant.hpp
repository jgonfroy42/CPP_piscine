/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 10:42:33 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/07 12:18:46 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

# include "Enemy.hpp"
# include <iostream>

class SuperMutant : public Enemy
{
	public:
		SuperMutant(void);
		SuperMutant(SuperMutant const &src);
		virtual ~SuperMutant(void);
		SuperMutant	& operator=(SuperMutant const & src);

		void virtual takeDamage(int damage);
};

#endif
