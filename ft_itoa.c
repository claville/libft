/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 17:06:53 by claville          #+#    #+#             */
/*   Updated: 2018/01/20 16:31:41 by claville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(int n)
{
	int i;

	i = 0;
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char		*str;
	int			count;
	int			i;
	long int	num;

	count = ft_size(n);
	i = 0;
	num = n;
	if (num < 0 || count == 0)
		count++;
	if (!(str = ft_strnew(count)))
		return (NULL);
	if (num < 0)
	{
		num *= -1;
		str[0] = '-';
		i++;
	}
	while (count > i)
	{
		count--;
		str[count] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
