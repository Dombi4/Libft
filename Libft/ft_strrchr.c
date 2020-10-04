/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorgana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:22:26 by tmorgana          #+#    #+#             */
/*   Updated: 2019/09/12 18:32:19 by tmorgana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int ch)
{
	char		*c;

	c = (char *)str + ft_strlen(str);
	while (*c != ch)
	{
		if (c == str)
			return (NULL);
		c--;
	}
	return (c);
}
