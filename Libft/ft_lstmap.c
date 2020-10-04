/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorgana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 21:12:25 by tmorgana          #+#    #+#             */
/*   Updated: 2019/09/23 16:41:16 by tmorgana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new;

	new = NULL;
	if (f != 0 && lst != 0)
	{
		if (!(new = (t_list	*)malloc(sizeof(t_list))))
			return (NULL);
		new = f(lst);
		new->next = ft_lstmap(lst->next, f);
	}
	return (new);
}
