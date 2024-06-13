/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:52:43 by gansard           #+#    #+#             */
/*   Updated: 2023/07/27 15:47:06 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {

	private :
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

		//void (Harl::*complaintFuncs[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
		void (Harl::*complaintFuncs[4])();

	public :
		void complain(std::string level);
		Harl(void);
		~Harl(void);
};

#endif