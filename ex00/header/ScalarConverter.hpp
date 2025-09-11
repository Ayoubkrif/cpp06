/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 14:38:18 by aykrifa           #+#    #+#             */
/*   Updated: 2025/09/10 14:07:11 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	ScalarConverter
{
	public:
		static void	convert(std::string &);

	private:
		ScalarConverter();
}	;

void	intConversion(std::string &);
void	charConversion(std::string &);
void	nanConversion(std::string &);
void	floatConversion(std::string &);
void	doubleConversion(std::string &);
