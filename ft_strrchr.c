/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 12:18:41 by claville          #+#    #+#             */
/*   Updated: 2018/01/23 15:43:44 by claville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;

	i = ft_strlen((char*)str);
	while (i != 0 && str[i] != (char)c)
		i--;
	if (str[i] == (char)c)
		return ((char*)&str[i]);
	return (NULL);
}
