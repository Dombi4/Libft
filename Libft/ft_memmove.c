/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorgana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 20:24:00 by tmorgana          #+#    #+#             */
/*   Updated: 2019/09/23 22:22:09 by tmorgana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			i;

	i = 0;
	if (!(s1) && !(s2) && n > 0)
		return (NULL);
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	if (c1 > c2)
	{
		while (++i <= n)
			c1[n - i] = c2[n - i];
	}
	else
	{
		while (n-- > 0)
			*(c1++) = *(c2++);
	}
	return (s1);
}
