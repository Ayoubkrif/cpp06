/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 14:38:18 by aykrifa           #+#    #+#             */
/*   Updated: 2025/09/11 16:46:44 by aykrifa          ###   ########.fr       */
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
void	charConversion(char);
void	floatConversion(std::string &);
void	doubleConversion(std::string &);
