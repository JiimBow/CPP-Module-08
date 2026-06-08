/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimbow <jimbow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 13:52:23 by jodone            #+#    #+#             */
/*   Updated: 2026/06/08 12:30:17 by jimbow           ###   ########.fr       */
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
		if (_numbers.size() + std::distance(begin, end) > _maxSize)
			throw std::runtime_error("Not enough space in span");

		_numbers.insert(_numbers.end(), begin, end);
	}
};


#endif