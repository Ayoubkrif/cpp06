/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:07:36 by aykrifa           #+#    #+#             */
/*   Updated: 2025/09/13 17:38:48 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//🟰🔧💥

#include "Serializer.hpp"
#include "Data.hpp"

int	main(void)
{
	Data		*data = new Data("Data");
	uintptr_t	p = Serializer::serialize(data);
	Data		*data_copy = Serializer::deserialize(p);
	std::cout << p << std::endl;
	std::cout << *(reinterpret_cast<Data *>(p)) << std::endl;
	/*std::cout << *p << std::endl;*/
	delete	data_copy;
	return (0);
}
