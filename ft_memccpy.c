/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:22:53 by claville          #+#    #+#             */
/*   Updated: 2017/11/25 18:45:50 by claville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*tmp1;
	unsigned char		*tmp2;

	i = 0;
	tmp1 = (unsigned char*)dst;
	tmp2 = (unsigned char*)src;
	while (i < n)
	{
		tmp1[i] = tmp2[i];
		if (tmp1[i] == (unsigned char)c)
			return (tmp1 + (i + 1));
		i++;
	}
	return (NULL);
}
