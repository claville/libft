/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 15:52:59 by claville          #+#    #+#             */
/*   Updated: 2017/11/29 18:02:30 by claville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memallac(size_t size)
{
	void retour;

	if(size == 0)
		return (NULL);
	if(!(retour = (void*)malloc(size)))
		return (NULL);
	ft_memset(retour, 0, size);
	return (retour);
}
