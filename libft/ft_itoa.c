/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsniezhk <nsniezhk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 15:17:09 by nsniezhk          #+#    #+#             */
/*   Updated: 2017/11/27 14:15:12 by nsniezhk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t		ft_numlen(int n)
{
	size_t length;

	length = 1;
	while (n /= 10)
		length++;
	return (length);
}

char				*ft_itoa(int n)
{
	unsigned int	num;
	size_t			len;
	char			*res;

	len = ft_numlen(n);
	num = n;
	if (n < 0)
	{
		num = -n;
		len++;
	}
	if (!(res = ft_strnew(len)))
		return (NULL);
	res[--len] = num % 10 + '0';
	while (num /= 10)
		res[--len] = num % 10 + '0';
	if (n < 0)
		res[0] = '-';
	return (res);
}
