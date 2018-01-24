/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 13:06:53 by claville          #+#    #+#             */
/*   Updated: 2018/01/23 15:48:37 by claville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t i;

	i = 0;
	if (len == 0)
		return (0);
	while ((unsigned char)s1[i] == (unsigned char)s2[i] &&
			s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < (len - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
