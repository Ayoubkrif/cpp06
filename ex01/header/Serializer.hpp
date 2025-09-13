/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 14:38:18 by aykrifa           #+#    #+#             */
/*   Updated: 2025/09/13 17:08:08 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>
class	Data;

class	Serializer
{
	public:
		static uintptr_t	serialize(Data *);
		static Data			*deserialize(uintptr_t);

	private:
		Serializer();
}	;
