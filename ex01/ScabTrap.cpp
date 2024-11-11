/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScabTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:52:17 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/11 14:31:00 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScabTrap.hpp"

ScabTrap::ScabTrap(std::string name): ClapTrap(name) {
	std::cout << "ScabTrap " << _name << " constructor called" << std::endl;
	this->_hitPoint = 100;
	this->_attackDamage = 20;
	this->_energyPoint = 50;
}

ScabTrap::~ScabTrap() {
	std::cout << "ScabTrap " << _name << " destructor called" << std::endl;
}

ScabTrap::ScabTrap(const ScabTrap& other) {
	std::cout << "ScabTrap copy constructor called" << std::endl;
	*this = other;
}

ScabTrap& ScabTrap::operator=(const ScabTrap& other) {
	if (this != &other) { //自己代入の確認
		std::cout << "Assignation operator called" << std::endl;
		_name = other._name;
		_hitPoint = other._hitPoint;
		_energyPoint = other._energyPoint;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}

void ScabTrap::attack(const std::string& target) {
	if (_hitPoint <= 0) {
		std::cout << "ScabTrap " << _name << " is dead." << std::endl;
		return ;
	}
	if (_energyPoint <= 0) {
		std::cout << "ScabTrap " << _name << "don't have energy points." << std::endl;
		return ;
	}
	std::cout << "ScabTrap" << _name << " attacks " << target << ": " << _attackDamage << " damages." << std::endl;
	this->_energyPoint--;
	return ;
}

void ScabTrap::guardGate(void) {
	if (_hitPoint <= 0) {
		std::cout << "ScabTrap " << _name << " is dead" << std::endl;
		return ;
	}
	std::cout << "ScabTrap " << _name << " is now in Gate keeper mode." << std::endl;
}