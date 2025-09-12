/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floatConverter.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 13:59:40 by aykrifa           #+#    #+#             */
/*   Updated: 2025/09/11 23:14:21 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cerrno>
#include <cstdlib>
#include <limits>
#include <ostream>

void	floatConversion(std::string &str)
{
	float	nb = std::strtof(str.c_str(), NULL);

	if (errno)
	{
		std::cout << "FLOAT Overflow !"
			<< std::endl;
	}
//CHAR
	std::cout << "char: '"
		<< static_cast<char>(nb) << '\'';
	if (nb < 32 || nb > 127)
		std::cout << " (Non displayable)";
	std::cout << std::endl;
//INT
	std::cout << "int: ";
	std::cout << static_cast<int>(nb);
	if (nb < std::numeric_limits<int>::min() || nb > std::numeric_limits<int>::max())
		std::cout << " (Overflow)";
	std::cout << std::endl;
// FLOAT
	std::cout << "float: "
		<< nb
		<< 'f'
		<< std::endl;
//DOUBLE
	std::cout << "double: "
		<< static_cast<double>(nb)
		<< std::endl;
}
