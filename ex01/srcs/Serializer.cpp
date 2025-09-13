/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 17:03:08 by aykrifa           #+#    #+#             */
/*   Updated: 2025/09/13 17:25:04 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t	Serializer::serialize(Data *d)
{
	return (reinterpret_cast<uintptr_t>(d));
}

Data		*Serializer::deserialize(uintptr_t p)
{
	return (reinterpret_cast<Data *>(p));
}
