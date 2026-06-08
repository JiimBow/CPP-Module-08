/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimbow <jimbow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 12:50:35 by jodone            #+#    #+#             */
/*   Updated: 2026/06/08 12:19:04 by jimbow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int	main()
{
	std::vector<int> v;

	v.push_back(4);
	v.push_back(7);
	v.push_back(6);
	v.push_back(9);
	v.push_back(2);

	try
	{
		std::vector<int>::iterator it;

		it = easyfind(v, 6);
		std::cout << "Find : " << *it << std::endl;

		it = easyfind(v, 2);
		std::cout << "Find : " << *it << std::endl;

		it = easyfind(v, 5);
		std::cout << "Find : " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	


	return 0;
}