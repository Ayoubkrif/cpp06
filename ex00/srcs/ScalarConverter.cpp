/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 14:39:12 by aykrifa           #+#    #+#             */
/*   Updated: 2025/09/09 11:14:19 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <climits>
#include <cstddef>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <ostream>

void	str_tolower(std::string &s)
{
	size_t	size = s.size();

	for (size_t i = 0; i < size; i++)
		s[i] = std::tolower(static_cast<unsigned char>(s[i]));
}


void	intConversion(std::string &str)
{
	size_t	size = str.size();
	size_t	i = 0;
	bool	minus = false;
	int		nb = 0;

	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = true;
		i++;
	}
	while (i < size && str[i] == '0')
		i++;
	if (i == size)
		nb = 0;
	else if (size - i > 9)
	{
		if (minus)
			nb = INT_MIN;
		else
			nb = INT_MAX;
	}
	else if (size - i == 9)
	{
		if (minus)
		{
			if (std::strcmp("2147483648", &str.c_str()[i]) < 0)
				nb = INT_MIN;
			else
				nb = std::atoi(str.c_str());
		}
		else
		{
			if (std::strcmp("2147483647", &str.c_str()[i]) < 0)
				nb = INT_MAX;
			else
				nb = std::atoi(str.c_str());
		}
	}
	else
		nb = std::atoi(str.c_str());
}

void	ScalarConverter::convert(std::string &str)
{
	bool	f = false;
	bool	d = false;
    size_t	size = str.size();
	size_t	i = 0;

	std::cout << std::setw(10)        // largeur totale 10
		  << std::setfill('-')    // caractère de padding
		  << std::left            // alignement à gauche
		  << '[' + str + ']'
		  << "-> "
		  << std::flush;
	if (!size)
	{
		// empty str;
		std::cout << "Empty str !"
			<< std::endl;
		return ;
	}

	if (size == 1 && !std::isdigit(str[i]))
	{
		// charConversion(str);
		std::cout << "charConversion(str)"
			<< std::endl;
		return ;
	}

	str_tolower(str);
	if (str == "-inf" || str == "+inf" || str == "inf"
		|| str == "+inff" || str == "-inff" || str == "inff"
		|| str == "nan" || str == "nanf")
	{
		//nanConverter;
		std::cout << "nanConverter(str)"
			<< std::endl;
		return ;
	}

	if (str[i] == '+' || str[i] == '-')
		i++;
    if (!std::isdigit(str[i]))
	{
		//Need number;
		std::cout << "Need number !"
			<< std::endl;
		return ;
	}

    while (i < size && std::isdigit(str[i]))
        i++;
    if (i < size && str[i] == '.')
	{
		d = true;
        i++;
        if (i >= size || !std::isdigit(str[i]))
		{
			//Need number after .;
			std::cout << "Need number after '.' !"
				<< std::endl;
			return ;
		}
        while (i < size && std::isdigit(str[i]))
            i++;
    }

    if (i < size && str[i] == 'f')
	{
		i++;
		f = true;
	}

    if (i != size)
	{
		//Too much character;
		std::cout << "Too much characters !"
			<< std::endl;
		return ;
	}

	if (f)
	{
		// floatConversion(str);
		std::cout << "floatConversion(str)"
			<< std::endl;
		return ;
	}

	if (d)
	{
		// doubleConversion(str);
		std::cout << "doubleConversion(str)"
			<< std::endl;
		return ;
	}

		// intConversion(str);
		std::cout << "intConversion(str)"
			<< std::endl;
}
