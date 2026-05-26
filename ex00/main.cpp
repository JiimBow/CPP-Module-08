/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 12:50:35 by jodone            #+#    #+#             */
/*   Updated: 2026/05/26 13:35:49 by jodone           ###   ########.fr       */
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

	std::vector<int>::iterator it = easyfind(v, 6);
	if (it != v.end())
		std::cout << "Find : " << *it << std::endl;
	else
		std::cout << "Integer given not found" << std::endl;
	
	it = easyfind(v, 8);
	if (it != v.end())
		std::cout << "Find : " << *it << std::endl;
	else
		std::cout << "Integer given not found" << std::endl;
	
	it = easyfind(v, 2);
	if (it != v.end())
		std::cout << "Find : " << *it << std::endl;
	else
		std::cout << "Integer given not found" << std::endl;
	return 0;
}