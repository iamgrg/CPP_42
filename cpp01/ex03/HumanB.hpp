/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:15:43 by gansard           #+#    #+#             */
/*   Updated: 2023/07/27 17:16:29 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanB {

private :
    std::string _name;
    Weapon *_weapon;

public :
    HumanB(std::string name);                      
    ~HumanB(void);
    void setWeapon(Weapon& weapon);
	Weapon getWeapon(void);
	void attack(void);
};