/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorgana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:03:03 by tmorgana          #+#    #+#             */
/*   Updated: 2019/09/24 20:31:38 by tmorgana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *s1, const char *s2, size_t n)
{
	size_t		len;
	char		*cur;
	char		*read;

	if (!(cur = (char *)ft_memchr(s1, '\0', n)))
		return (n + ft_strlen(s2));
	read = (char *)s2;
	len = (size_t)(cur - s1) + ft_strlen(s2);
	while ((size_t)(cur - s1) < n - 1 && *read != '\0')
	{
		*cur = *read;
		cur++;
		read++;
	}
	*cur = '\0';
	return (len);
}
