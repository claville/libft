/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 16:06:26 by claville          #+#    #+#             */
/*   Updated: 2017/11/27 16:50:32 by claville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t h;
	size_t n;
	size_t size;

	h = 0;
	n = 0;
	size = ft_strlen(needle);
	if (!*needle)
		return ((char*)haystack);
	while (haystack[h] && h < len)
	{
		while ((h + n) < len && needle[n] == haystack[h + n])
		{
			if (n == size - 1)
				return ((char*)haystack + h);
			n++;
		}
		n = 0;
		h++;
	}
	return (0);
}
