/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:13:29 by gansard           #+#    #+#             */
/*   Updated: 2023/09/06 13:13:30 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class AForm;

class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(Intern const & src);
        
        Intern & operator=(Intern const & src);

        AForm * makeForm(std::string const & formName, std::string const & target);
        AForm * makeRobotomyRequestForm(std::string const & target);
        AForm * makePresidentialPardonForm(std::string const & target);
        AForm * makeShrubberyCreationForm(std::string const & target);
        typedef AForm * (Intern::*makeFormPtr)(std::string const & target);
        class FormNotFoundException : public std::exception
        {
            public:
                virtual const char * what() const throw();
        };
};

#endif