/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strslice.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbaabu <smbaabu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 19:41:54 by smbaabu           #+#    #+#             */
/*   Updated: 2019/03/25 16:03:12 by smbaabu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strslice(char const *s, int start, int end)
{
	char	*ret;
	int		len;

	len = end - start;
	if ((ret = ft_strnew(len)) == NULL)
		return (NULL);
	if (start < 0)
	{
		start *= -1;
		return (ft_strsub(&s[ft_strlen(s) - start], 0, len));
	}
	return (ft_strsub(s, start, len));
}
