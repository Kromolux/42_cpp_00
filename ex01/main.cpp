/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 10:00:37 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/12 15:37:29 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include <cstring>

//static void	popuplate_phonebook(PhoneBook *book);

int	main(void)
{
	PhoneBook	my_book;
	std::string	userinput = "";

	//popuplate_phonebook(&my_book);
	while (true)
	{
		my_book.prompt();
		std::cout << COLOR_GREEN;
		std::getline(std::cin, userinput);
		std::cout << COLOR_DEFAULT;
		if (userinput.compare("ADD") == 0)
			my_book.add();
		else if (userinput.compare("SEARCH") == 0)
			my_book.search();
		else if (userinput.compare("EXIT") == 0)
			break ;
		else
			std::cout << COLOR_RED << "Invalid command!\n" << COLOR_DEFAULT;
	}
	return (0);
}
/*
static void	popuplate_phonebook(PhoneBook *book)
{
	book->add_contact("Rene", "Kaufmann", "Kromolux", "555-012345789", "C/C++ Coder");
	book->add_contact("Rudi Roger", "The Rabbit Man", "RRRRRRRRRRRRRR", "555-Rabbit", "loves to eat carrots");
	book->add_contact("Arnold", "Schwarzenegger", "Arni", "555-California", "Mr. Universe");
	book->add_contact("Elon", "Musk", "Muski", "555-America", "Tesla founder");
	book->add_contact("Jesus", "Christus", "JC", "555-Heaven", "Gods son");
	book->add_contact("Tom", "Harly", "TH", "555-South_west", "Fascion desginer");
}
*/