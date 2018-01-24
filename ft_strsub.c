/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 14:42:45 by claville          #+#    #+#             */
/*   Updated: 2018/01/18 17:59:08 by claville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	str = (char*)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	if (s)
	{
		i = 0;
		while (i < len)
		{
			str[i] = s[i + start];
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
