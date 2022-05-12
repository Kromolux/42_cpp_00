/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:39:43 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/12 15:44:04 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{

}

Contact::Contact(std::string FirstName,
				 std::string LastName,
				 std::string NickName,
				 std::string PhoneNumber,
				 std::string Secret) :
				 _firstName(FirstName),
				 _lastName(LastName),
				 _nickName(NickName),
				 _phoneNumber(PhoneNumber),
				 _darkestSecret(Secret)
{

}

Contact::~Contact(void)
{
	
}

void	Contact::setContact(std::string FirstName,
							std::string LastName,
							std::string NickName,
							std::string PhoneNumber,
							std::string Secret)
{
	this->_firstName = FirstName;
	this->_lastName = LastName;
	this->_nickName = NickName;
	this->_phoneNumber = PhoneNumber;
	this->_darkestSecret = Secret;
}

void	Contact::setFirstName(std::string name)
{
	this->_firstName = name;
}

std::string	Contact::getFirstName(void) const
{
	return (this->_firstName);
}

void	Contact::setLastName(std::string name)
{
	this->_lastName = name;
}

std::string	Contact::getLastName(void) const
{
	return (this->_lastName);
}

void	Contact::setNickName(std::string name)
{
	this->_nickName = name;
}

std::string	Contact::getNickName(void) const
{
	return (this->_nickName);
}

void	Contact::setPhoneNumber(std::string np)
{
	this->_phoneNumber = np;
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

void	Contact::setDarkestSecret(std::string secret)
{
	this->_darkestSecret = secret;
}

std::string	Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}
