/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubleConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 13:59:40 by aykrifa           #+#    #+#             */
/*   Updated: 2025/09/11 23:18:41 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cerrno>
#include <cstdlib>
#include <limits>

void	doubleConversion(std::string &str)
{
	double	nb = std::strtod(str.c_str(), NULL);

	if (errno)
	{
		std::cout << "DOUBLE Overflow !"
			<< std::endl;
		return ;
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
		<< std::flush;
	std::cout << static_cast<float>(nb) << 'f';
	if (nb > std::numeric_limits<float>::max() || nb < -std::numeric_limits<float>::max())
		std::cout << " (Overflow) ";
	std::cout << std::endl;
//DOUBLE
	std::cout << "double: "
		<< nb
		<< std::endl;
}
