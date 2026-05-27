/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 09:49:14 by jodone            #+#    #+#             */
/*   Updated: 2026/05/27 10:34:16 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
	
public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack() {};
	MutantStack(const MutantStack& copy) : std::stack<T>(copy) {};
	MutantStack& operator=(const MutantStack& copy)
	{
		std::stack<T>::operator=(copy);
		return *this;
	}
	~MutantStack() {};

	iterator begin()
	{
		return this->c.begin();
	}

	iterator end()
	{
		return this->c.end();
	}
};


#endif