/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 13:33:28 by claville          #+#    #+#             */
/*   Updated: 2018/01/21 14:16:02 by claville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_wordslen(const char *s, char c)
{
	size_t i;
	size_t retour;

	i = 0;
	retour = 0;
	while (i < ft_strlen(s))
	{
		if (i == 0 && s[i] != c)
			retour++;
		if (s[i] == c && s[i + 1] != c && s[i] != '\0')
			retour++;
		i++;
	}
	return (retour);
}

static char		**ft_filltab(const char *s, char c, char **tab)
{
	size_t i;
	size_t itab;
	size_t start;

	i = 0;
	itab = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			tab[itab] = ft_strsub(s, start, i - start);
			itab++;
			tab[itab] = NULL;
		}
	}
	tab[itab] = 0;
	return (tab);
}

char			**ft_strsplit(char const *s, char c)
{
	char **tab;

	if (s == NULL)
		return (NULL);
	tab = (char**)malloc(sizeof(char*) * (ft_wordslen(s, c) + 1));
	if (!tab)
		return (NULL);
	ft_bzero(tab, (ft_wordslen(s, c) + 1));
	return (ft_filltab(s, c, tab));
}
