/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimbow <jimbow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 12:50:44 by jodone            #+#    #+#             */
/*   Updated: 2026/06/08 12:19:20 by jimbow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <exception>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T& container, int n)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), n);

	if (it == container.end())
		throw std::runtime_error("Value not found");

	return it;
}

#endif