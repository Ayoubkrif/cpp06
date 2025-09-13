/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 14:38:18 by aykrifa           #+#    #+#             */
/*   Updated: 2025/09/13 17:31:40 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
class	Data
{
	public:
		Data(void);
		Data(const Data &);
		Data	&operator=(const Data &);
		~Data(void);
	
		Data(std::string);
		std::string const &getStr(void) const;
	private:
		std::string	_str;
};

std::ostream		&operator<<(std::ostream &, Data const &);
