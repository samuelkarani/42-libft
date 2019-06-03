/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbaabu <smbaabu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 19:23:14 by smbaabu           #+#    #+#             */
/*   Updated: 2019/02/26 00:00:36 by smbaabu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*lst;

	lst = NULL;
	while (*s)
	{
		if (*s == (char)c)
			lst = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (lst);
}
