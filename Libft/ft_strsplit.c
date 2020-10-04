/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorgana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 21:06:25 by tmorgana          #+#    #+#             */
/*   Updated: 2019/09/24 13:03:14 by tmorgana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_slov(char *s, char c)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			j++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (j);
}

static size_t		ft_bukv(char *s, char c)
{
	size_t		i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

char				**ft_strsplit(char const *s, char c)
{
	char		**ch;
	size_t		slov;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	slov = ft_slov((char *)s, c);
	if (!(ch = (char **)malloc(sizeof(char *) * (slov + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != '\0' && s[i] != c)
		{
			ch[j] = ft_strsub(s, i, ft_bukv((char *)&s[i], c));
			j++;
			i = i + ft_bukv((char *)&s[i], c);
		}
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	ch[j] = NULL;
	return (ch);
}
