/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 10:03:53 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/12 15:43:14 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONTACT_H
# define CONTACT_H
# include <cstring>
# include <iostream>

// ************************************************************************** //
//                               Contact Class                                //
// ************************************************************************** //

class Contact
{

public:

	Contact(void);
	Contact(std::string FirstName,
		    std::string LastName,
		    std::string NickName,
			std::string PhoneNumber,
			std::string Secret);
	~Contact(void);

	void		setContact(	std::string FirstName,
							std::string LastName,
							std::string NickName,
							std::string PhoneNumber,
							std::string Secret);
	void		setFirstName(std::string name);
	std::string	getFirstName(void) const;
	void		setLastName(std::string name);
	std::string	getLastName(void) const;
	void		setNickName(std::string name);
	std::string	getNickName(void) const;
	void		setPhoneNumber(std::string nb);
	std::string	getPhoneNumber(void) const;
	void		setDarkestSecret(std::string secret);
	std::string	getDarkestSecret(void) const;
	
private:

	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
	
};

#endif
