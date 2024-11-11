/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:06:16 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/11 13:18:04 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	std::cout << "-------------------------" << std::endl;
	ClapTrap man1("man1");
	ClapTrap man2("man2");
	ClapTrap man3("man3");
	std::cout << "-------------------------" << std::endl;

	std::cout << "----turn1---" << std::endl;
	man1.attack("Slime");
	man1.takeDamage(1);
	std::cout << std::endl;

	std::cout << "----turn2---" << std::endl;
	man2.attack("Golden Slime");
	man2.takeDamage(430);
	man2.beRepaired(10);
	std::cout << std::endl;

	std::cout << "----turn3---" << std::endl;
	for (int i = 0; i < 15; i++)
		man3.attack("Liquid metal slime");
	std::cout << std::endl;

	std::cout << "-------------------------" << std::endl;
}