/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:47:19 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/11 15:13:08 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	std::cout << "FragTrap " << _name << " constructor called" << std::endl;
	this->_hitPoint = 100;
	this->_attackDamage = 30;
	this->_energyPoint = 100;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other) { //自己代入の確認
		std::cout << "FragTrap assignation operator called" << std::endl;
		_name = other._name;
		_hitPoint = other._hitPoint;
		_energyPoint = other._energyPoint;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}

void FragTrap::attack(const std::string& target) {
	if (_hitPoint <= 0) {
		std::cout << "FragTrap " << _name << " is dead." << std::endl;
		return ;
	}
	if (_energyPoint <= 0) {
		std::cout << "FragTrap " << _name << "don't have energy points." << std::endl;
		return ;
	}
	std::cout << "FragTrap " << _name << " attacks " << target << ": " << _attackDamage << " damages." << std::endl;
	this->_energyPoint--;
	return ;
}

void FragTrap::highFiveGuys(void) {
	if (_hitPoint <= 0) {
		std::cout << "ScabTrap " << _name << " is dead" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << _name << " HIGH FIVE!" << std::endl;
}