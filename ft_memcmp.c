/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:53:58 by claville          #+#    #+#             */
/*   Updated: 2017/11/25 19:17:43 by claville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int					i;
	unsigned char		*tmp1;
	unsigned char		*tmp2;

	if (!s1 && !s2 && !n)
		return (0);
	i = 0;
	tmp1 = (unsigned char*)s1;
	tmp2 = (unsigned char*)s2;
	while (n--)
	{
		if (tmp1[i] != tmp2[i])
			return (tmp1[i] - tmp2[i]);
		i++;
	}
	return (0);
}
