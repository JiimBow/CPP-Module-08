/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 12:50:44 by jodone            #+#    #+#             */
/*   Updated: 2026/05/26 13:28:22 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template <typename T>
typename T::iterator easyfind(T& container, int n)
{
	for (typename T::iterator it = container.begin(); it != container.end(); ++it)
	{
		if (*it == n)
			return it;
	}
	
	return container.end();
}

#endif