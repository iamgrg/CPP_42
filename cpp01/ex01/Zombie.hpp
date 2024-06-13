/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:24:43 by gansard           #+#    #+#             */
/*   Updated: 2023/07/25 17:30:05 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {

private :
    std::string _name;

public :
    Zombie();                      
    Zombie(std::string name);     
    ~Zombie(void);
    void setName(std::string name);
    void announce(void);
};
