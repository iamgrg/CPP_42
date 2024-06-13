/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:15:36 by gansard           #+#    #+#             */
/*   Updated: 2023/07/27 11:08:28 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanA {

private :
    std::string _name;
    Weapon& _weapon;

public :
    HumanA(std::string name, Weapon& weapon);                      
    ~HumanA(void);
    void setWeapon(Weapon weapon);
	Weapon getWeapon(void);
	void attack(void);
};