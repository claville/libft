/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 11:10:14 by claville          #+#    #+#             */
/*   Updated: 2018/01/23 15:46:40 by claville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int h;
	int n;
	int len;

	h = 0;
	n = 0;
	len = ft_strlen(needle);
	if (!*needle)
		return ((char*)haystack);
	while (haystack[h])
	{
		while (haystack[h + n] && needle[n] == haystack[h + n])
		{
			if (n == len - 1)
				return ((char*)haystack + h);
			n++;
		}
		n = 0;
		h++;
	}
	return (0);
}
