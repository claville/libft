/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 17:26:56 by claville          #+#    #+#             */
/*   Updated: 2017/11/25 18:22:35 by claville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *cpy1;
	unsigned char *cpy2;

	cpy1 = (unsigned char *)dst;
	cpy2 = (unsigned char *)src;
	while ((int)--len >= 0)
	{
		if (cpy2 < cpy1)
			*(cpy1 + len) = *(cpy2 + len);
		else
			*(cpy1++) = *(cpy2++);
	}
	return (dst);
}
