/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbaabu <smbaabu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:06:50 by smbaabu           #+#    #+#             */
/*   Updated: 2019/02/28 15:09:00 by smbaabu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*ptr;

	if (!lst)
		return (NULL);
	ret = (*f)(lst);
	lst = lst->next;
	ptr = ret;
	while (lst)
	{
		ret->next = (*f)(lst);
		lst = lst->next;
		ret = ret->next;
	}
	return (ptr);
}
