/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:15:54 by gansard           #+#    #+#             */
/*   Updated: 2023/07/27 16:46:50 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
private :
    std::string _type;

public :
    Weapon(std::string type);
	//Weapon(void);                 
    ~Weapon(void);
    void setType(std::string type);
    std::string getType(void);
};

#endif // WEAPON_HPP
