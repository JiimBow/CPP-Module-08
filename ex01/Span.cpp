/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 13:54:42 by jodone            #+#    #+#             */
/*   Updated: 2026/05/26 17:06:42 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span() : _maxSize(0)
{
}

Span::Span(unsigned int N) : _maxSize(N)
{

}

Span::Span(const Span& copy) : _maxSize(copy._maxSize), _numbers(copy._numbers)
{

}

Span& Span::operator=(const Span& copy)
{
	if (this != &copy)
	{
		_maxSize = copy._maxSize;
		_numbers = copy._numbers;
	}
	return *this;
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
	if (_numbers.size() >= _maxSize)
		throw std::runtime_error("Span is full");

	_numbers.push_back(n);
}

int Span::shortestSpan()
{
	if (_numbers.size() < 2)
		throw std::runtime_error("Not enough number in Span");

	std::vector<int> tmp = _numbers;
	std::sort(tmp.begin(), tmp.end());

	int minSpan = tmp[1] - tmp[0];

	for (unsigned int i = 1; i < tmp.size(); i++)
	{
		int diff = tmp[i] - tmp[i - 1];
		if (diff < minSpan)
			minSpan = diff;
	}

	return minSpan;
}

int Span::longestSpan()
{
	if (_numbers.size() < 2)
		throw std::runtime_error("Not enough number in Span");

	int min = *std::min_element(_numbers.begin(), _numbers.end());
	int	max = *std::max_element(_numbers.begin(), _numbers.end());

	return max - min;
}
