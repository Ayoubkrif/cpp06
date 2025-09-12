/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charConverter.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 13:59:40 by aykrifa           #+#    #+#             */
/*   Updated: 2025/09/12 17:35:36 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <ostream>

void	charConversion(char c)
{
//CHAR
	std::cout << "char: '"
		<< c << '\'';
	if (c < 32)
		std::cout << " (Non displayable)";
	std::cout << std::endl;
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
