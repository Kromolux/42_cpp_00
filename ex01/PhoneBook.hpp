/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 10:03:46 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/12 15:26:51 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"
# include <iostream>
# include <stdlib.h>
# define COLOR_DEFAULT "\033[0m"
# define COLOR_RED "\033[31m"
# define COLOR_GREEN "\033[32m"
# define COLOR_YELLOW "\033[33m"
# define COLOR_BLUE "\033[34m"
# define COLOR_MAGENTA "\033[35m"
# define COLOR_WHITE "\033[37m"

// ************************************************************************** //
//                               PhoneBook Class                              //
// ************************************************************************** //

class PhoneBook
{

public:
	
	PhoneBook(void);
	~PhoneBook(void);

	void	prompt(void) const;
	void	add(void);
	void	add_contact(std::string FirstName,
						std::string LastName,
						std::string NickName,
						std::string PhoneNumber,
						std::string Secret);
	void	search(void) const;

private:

	Contact			_contacts[8];
	void			_show_contact(int index) const;
	int				_index;
	int				_count;
	void			_check_index(void);
	void			_set_userinput(std::string message, void (Contact::*f)(std::string));
	std::string		_truncate(std::string input) const;
	static int const _WIDTH = 10;
};

#endif