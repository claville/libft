/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 15:17:47 by claville          #+#    #+#             */
/*   Updated: 2018/01/21 13:08:16 by claville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	while (s1 != NULL && s2 != NULL)
	{
		if (!ft_strncmp(s1, s2, n))
			return (1);
		else
			return (0);
	}
	return (0);
}
