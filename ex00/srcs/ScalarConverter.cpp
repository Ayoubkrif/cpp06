/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 14:39:12 by aykrifa           #+#    #+#             */
/*   Updated: 2025/09/11 16:51:31 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip>

void	str_tolower(std::string &s)
{
	size_t	size = s.size();

	for (size_t i = 0; i < size; i++)
		s[i] = std::tolower(static_cast<unsigned char>(s[i]));
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
		std::cout << "Empty str !"
			<< std::endl;
		return ;
	}

	if (size == 1 && !std::isdigit(str[i]))
	{
		charConversion(str[1]);
		std::cout << "char"
			<< std::endl;
		return ;
	}

	str_tolower(str);

	if (str == "-inff" || str == "+inff" || str == "inff"
		|| str == "nanf" || str == "+nanf" || str == "-nanf")
	{
		std::cout << "float"
			<< std::endl;
		floatConversion(str);
		return;
	}
	if (str == "-inf" || str == "+inf" || str == "inf"
		|| str == "nan" || str == "+nan" || str == "-nan")
	{
		std::cout << "double"
			<< std::endl;
		doubleConversion(str);
		return;
	}

	if (str[i] == '+' || str[i] == '-')
		i++;
    if (!std::isdigit(str[i]))
	{
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
		std::cout << "float"
			<< std::endl;
		floatConversion(str);
		return ;
	}
	if (d)
	{
		std::cout << "double"
			<< std::endl;
		doubleConversion(str);
		return ;
	}
	std::cout << "int"
		<< std::endl;
	intConversion(str);
}
