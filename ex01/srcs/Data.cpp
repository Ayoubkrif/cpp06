/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 17:02:50 by aykrifa           #+#    #+#             */
/*   Updated: 2025/09/13 17:31:49 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"


Data::Data(void)	:	_str("Default")
{
	return ;
}

Data::Data(const Data &copy)	:	_str(copy._str)
{
	return ;
}

Data	&Data::operator=(const Data &rhs)
{
	this->_str = rhs._str;
	return (*this);
}

Data::~Data(void)
{
	return ;
}

Data::Data(std::string str)	: _str(str)
{
	return ;
}

std::string const	&Data::getStr() const
{
	return (_str);
}

std::ostream			&operator<<(std::ostream &lhs, Data const &rhs)
{
	lhs << rhs.getStr();
	return (lhs);
}
