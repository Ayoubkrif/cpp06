/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floatConverter.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 13:59:40 by aykrifa           #+#    #+#             */
/*   Updated: 2025/09/11 16:44:59 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cerrno>
#include <cstdlib>
#include <limits>

void	floatConversion(std::string &str)
{
	float	nb = std::strtof(str.c_str(), NULL);

	if (errno)
	{
		std::cout << "FLOAT Overflow !"
			<< std::endl;
		return ;
	}
//CHAR
	std::cout << "char: "
		<< std::flush;
	if (nb < 32 || nb > 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(nb) << std::endl;
//INT
	std::cout << "int: "
		<< std::flush;
	if (nb < std::numeric_limits<int>::min() || nb > std::numeric_limits<int>::max())
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<int>(nb) << std::endl;
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
