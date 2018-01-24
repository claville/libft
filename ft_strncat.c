/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 12:09:19 by claville          #+#    #+#             */
/*   Updated: 2018/01/23 15:59:31 by claville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t len)
{
	char *str1;
	char *str2;

	str1 = (char*)dest;
	str2 = (char*)src;
	while (*str1)
		str1++;
	while (*str2 && len--)
	{
		*str1++ = *str2++;
	}
	*str1 = '\0';
	return (dest);
}
