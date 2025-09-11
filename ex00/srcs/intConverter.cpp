/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intConverter.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 13:59:40 by aykrifa           #+#    #+#             */
/*   Updated: 2025/09/10 14:06:18 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#include <climits>
#include <cstddef>
#include <cstdlib>
#include <cstring>
#include <limits>
#include <ostream>

void	intConversion(std::string &str)
{
	int		nb = 0;
	{
		size_t	size = str.size();
		size_t	i = 0;
		bool	minus = false;

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
		else if (size - i > 10)
		{
			std::cout << "Overflow !"
				<< std::endl;
			if (minus)
				nb = std::numeric_limits<int>::min();
			else
				nb = std::numeric_limits<int>::max();
		}
		else if (size - i == 10)
		{
			if (minus)
			{
				if (std::strcmp("2147483648", &str.c_str()[i]) < 0)
				{
					nb = std::numeric_limits<int>::min();
					std::cout << "Overflow !"
					<< std::endl;
				}
				else
					nb = std::atoi(str.c_str());
			}
			else
			{
				if (std::strcmp("2147483647", &str.c_str()[i]) < 0)
				{
					nb = std::numeric_limits<int>::max();
					std::cout << "Overflow !"
					<< std::endl;
				}
				else
					nb = std::atoi(str.c_str());
			}
		}
		else
			nb = std::atoi(str.c_str());
	}
	std::cout << "char: "
		<< std::flush;
	if (nb < 32 || nb > 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(nb) << std::endl;

	std::cout << "int: "
		<< nb
		<< std::endl;

	std::cout << "float: "
		<< static_cast<float>(nb)
		<< 'f'
		<< std::endl;

	std::cout << "double: "
		<< static_cast<double>(nb)
		<< std::endl;
}

