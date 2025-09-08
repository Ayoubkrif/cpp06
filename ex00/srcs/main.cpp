/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:07:36 by aykrifa           #+#    #+#             */
/*   Updated: 2025/09/08 13:35:58 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//🟰🔧💥

#include "ScalarConverter.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc < 2) // at least 1 arg
		return (1);

	for (int i = 1; i < argc; i++) //
	{
		std::string		arg = argv[i];
		ScalarConverter::convert(arg);
	}

	return (0);
}
