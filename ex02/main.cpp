/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:58:52 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/11 15:11:45 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
	std::cout << "-------------------------" << std::endl;
	FragTrap man5("man5");
	std::cout << std::endl;

	std::cout << "----turn1---" << std::endl;
	man5.attack("Slime");
	man5.takeDamage(1);
	man5.beRepaired(10);
	man5.highFiveGuys();
	std::cout << std::endl;

	std::cout << "----turn2---" << std::endl;
	man5.attack("Golden Slime");
	man5.takeDamage(430);
	man5.beRepaired(10);
	std::cout << std::endl;

	std::cout << "-------------------------" << std::endl;
}