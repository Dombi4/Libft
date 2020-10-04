/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorgana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 22:23:54 by tmorgana          #+#    #+#             */
/*   Updated: 2019/09/23 18:31:23 by tmorgana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *src)
{
	char		*c;
	int			i;
	int			j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (!(c = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	while (src[j])
	{
		c[j] = src[j];
		j++;
	}
	c[j] = '\0';
	return (c);
}
