/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:25:53 by gansard           #+#    #+#             */
/*   Updated: 2023/09/07 14:49:31 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150), _target("none"){
	return ;
}

AForm::~AForm(){
	return ;
}


std::ostream & operator<<(std::ostream & os, AForm const &obj){
	os << obj.getName() << ", Aform grade " << obj.getGradeToSign() << ", signed state : " << obj.getSignedState();
	return (os);
}

AForm::AForm(std::string name, std::string target, int gradeToSign, int gradeToExecute) 
    : _name(name),_signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _target(target)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
}


AForm::AForm(AForm const &copy) 
    : _name(copy._name), _signed(copy._signed), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute), _target(copy._target) 
{}

const std::string AForm::getName() const{
	return (this->_name);
}

const std::string AForm::getTarget() const{
	return (this->_target);
}


int AForm::getGradeToSign() const{
	return (this->_gradeToSign);
}

int AForm::getGradeToExecute() const{
	return (this->_gradeToExecute);
}

bool AForm::getSignedState() const{
	return (this->_signed);
}

AForm &AForm::operator=(AForm const &copy) {
    if (this != &copy)
        this->_signed = copy.getSignedState();
    return *this;
}

void AForm::beSigned(Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	else
		this->_signed = true;
}

void AForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getGradeToSign())
        throw AForm::GradeTooLowException();
    else if (!this->getSignedState())
        throw AForm::NotSignedException();
    else
    {
        std::cout << executor.getName() << " executes " << this->getName() << std::endl;
        this->action();
    }
}

