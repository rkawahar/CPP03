/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:31:47 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/11 14:36:40 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScabTrap.hpp"

int main(void) {
	std::cout << "-------------------------" << std::endl;
	ScabTrap man4("man4");
	std::cout << std::endl;

	std::cout << "----turn1---" << std::endl;
	man4.attack("Slime");
	man4.takeDamage(1);
	man4.beRepaired(10);
	man4.guardGate();
	std::cout << std::endl;

	std::cout << "----turn2---" << std::endl;
	man4.attack("Golden Slime");
	man4.takeDamage(430);
	man4.beRepaired(10);
	std::cout << std::endl;

	std::cout << "-------------------------" << std::endl;
}