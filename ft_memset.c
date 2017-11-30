/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 16:43:02 by claville          #+#    #+#             */
/*   Updated: 2017/11/27 16:50:21 by claville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char *ptr;

	ptr = (unsigned char*)str;
	if (len == 0)
		return (str);
	while (len--)
		*(ptr++) = c;
	return (str);
}
