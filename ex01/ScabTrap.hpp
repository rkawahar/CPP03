/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScabTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:52:21 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/11 14:15:09 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCABTRAP_HPP
# define SCABTRAP_HPP

# include "ClapTrap.hpp"

class ScabTrap :public ClapTrap {
	private:
		ScabTrap() : ClapTrap(){};
	
	public:
		ScabTrap(std::string name);
		~ScabTrap();
		ScabTrap(const ScabTrap& other);
		ScabTrap& operator=(const ScabTrap& other);
		void attack(const std::string& target);
		void guardGate();
};

#endif