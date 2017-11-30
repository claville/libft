/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 11:38:23 by claville          #+#    #+#             */
/*   Updated: 2017/11/26 16:33:43 by claville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char	*cpy;
	int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	cpy = (char *)malloc(sizeof(*cpy) * (len + 1));
	len = 0;
	while (str[len] != '\0')
	{
		cpy[len] = str[len];
		len++;
	}
	cpy[len] = '\0';
	return (cpy);
}
