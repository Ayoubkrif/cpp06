/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charConverter.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 13:59:40 by aykrifa           #+#    #+#             */
/*   Updated: 2025/09/11 16:46:33 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	charConversion(char c)
{
//CHAR
	std::cout << "char: "
		<< std::flush;
	if (c < 32)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << c << std::endl;
//INT
	std::cout << "int: "
		<< static_cast<int>(c)
		<< std::endl;

//FLOAT
	std::cout << "float: "
		<< static_cast<float>(c)
		<< 'f'
		<< std::endl;
//DOUBLE
	std::cout << "double: "
		<< static_cast<double>(c)
		<< std::endl;
}

