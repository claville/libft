/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 10:49:37 by claville          #+#    #+#             */
/*   Updated: 2018/01/21 12:45:30 by claville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*cpy;
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char*)s;
	while (str != NULL && str[i])
		i++;
	if ((cpy = (char*)malloc(sizeof(char) * (i + 1))) == NULL)
		return (NULL);
	while (str != NULL && *str)
		*(cpy++) = f(*(str++));
	*cpy = '\0';
	return (cpy - i);
}
