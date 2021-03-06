/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 11:38:23 by claville          #+#    #+#             */
/*   Updated: 2018/01/23 12:42:42 by claville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *str;

	if ((str = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1))) == 0)
		return (NULL);
	ft_strcpy(str, s1);
	return (str);
}
