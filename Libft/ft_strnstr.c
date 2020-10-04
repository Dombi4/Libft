/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorgana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 19:28:15 by tmorgana          #+#    #+#             */
/*   Updated: 2019/09/23 23:25:29 by tmorgana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		m;

	if (*s2 == '\0')
		return ((char *)s1);
	if (!(*s1))
		return (NULL);
	m = ft_strlen(s2);
	while (m <= n && *s1 != '\0')
	{
		if (*s1 == *s2 && ft_memcmp(s1, s2, m) == 0)
			return ((char *)s1);
		n--;
		s1++;
	}
	return (NULL);
}
