/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorgana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:50:39 by tmorgana          #+#    #+#             */
/*   Updated: 2019/09/23 21:36:01 by tmorgana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*a1;
	unsigned char		*a2;

	i = 0;
	if (n == 0 || s1 == s2)
		return (s1);
	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	while (i < n)
	{
		a1[i] = a2[i];
		i++;
	}
	return (s1);
}
