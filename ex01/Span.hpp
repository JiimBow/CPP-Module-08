/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 13:52:23 by jodone            #+#    #+#             */
/*   Updated: 2026/05/26 17:09:03 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <stdexcept>

class Span
{
private:
	unsigned int		_maxSize;
	std::vector<int>	_numbers;
public:
	Span();
	Span(unsigned int N);
	Span(const Span& copy);
	Span& operator=(const Span& copy);
	~Span();

	void	addNumber(int n);
	int		shortestSpan();
	int		longestSpan();

	template <typename It>
	void addMoreNumbers(It begin, It end)
	{
		while (begin != end)
		{
			if (_numbers.size() >= _maxSize)
				throw std::runtime_error("Span is full");
			
			_numbers.push_back(*begin);
			++begin;
		}
	}
};


#endif