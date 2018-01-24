/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 15:52:59 by claville          #+#    #+#             */
/*   Updated: 2018/01/18 14:01:39 by claville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *retour;

	retour = malloc(size);
	if (retour)
	{
		ft_bzero(retour, size);
		return (retour);
	}
	else
		return (NULL);
}
