/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 13:39:01 by claville          #+#    #+#             */
/*   Updated: 2018/01/21 12:53:39 by claville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*cpy;
	char			*str;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	str = (char*)s;
	while (str != NULL && str[i])
		i++;
	if ((cpy = (char*)malloc(sizeof(char) * (i + 1))) == NULL)
		return (NULL);
	while (str != NULL && *str)
		*(cpy++) = f(j++, *(str++));
	*cpy = '\0';
	return (cpy - i);
}
