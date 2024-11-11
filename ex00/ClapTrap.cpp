/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:06:10 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/11 13:22:02 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0) {
	std::cout << _name << " constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << _name << " destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other; 
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) { //自己代入の確認
		std::cout << "Assignation operator called" << std::endl;
		_name = other._name;
		_hitPoint = other._hitPoint;
		_energyPoint = other._energyPoint;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target) {
	if (_hitPoint <= 0) {
		std::cout << _name << " is dead." << std::endl;
		return ;
	}
	if (_energyPoint <= 0) {
		std::cout << _name << "don't have energy points." << std::endl;
		return ;
	}
	std::cout << _name << " attacks " << target << ": " << _attackDamage << " damages." << std::endl;
	this->_energyPoint--;
	return ;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoint <= 0) {
		std::cout << _name << " is dead." << std::endl;
		return ;
	}
	std::cout << _name << " takes " << amount << " damages." << std::endl;
	_hitPoint -= amount;
	if (_hitPoint <= 0)
		std::cout << _name << " is dead." << std::endl;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoint <= 0) {
		std::cout << _name << " is dead." << std::endl;
		return ;
	}
	if (_energyPoint <= 0) {
		std::cout << _name << "don't have energy points." << std::endl;
		return ;
	}
	std::cout << _name << " repairs itself for " << amount << "hit points" << std::endl;
	this->_energyPoint--;
	return ;
}
