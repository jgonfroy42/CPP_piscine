/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 17:43:49 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/02/28 20:59:11 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	private:
		std::string	_name;
		std::string	_type;

	public:
		Zombie(void);
		~Zombie(void);
		void set_name(std::string name);
		void set_type(std::string type);
		void announce(void) const;
};

#endif
