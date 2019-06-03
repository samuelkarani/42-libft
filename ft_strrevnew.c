/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrevnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbaabu <smbaabu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 19:48:51 by smbaabu           #+#    #+#             */
/*   Updated: 2019/03/25 15:58:11 by smbaabu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrevnew(char *s)
{
	char	*ret;
	int		len;
	int		i;

	len = ft_strlen(s);
	if ((ret = ft_strnew(len)) == NULL)
		return (NULL);
	if (len > 0)
	{
		i = 0;
		len--;
		while (i < len)
		{
			ret[i] = s[len];
			ret[len] = s[i];
			i++;
			len--;
		}
		ret[i] = s[i];
	}
	return (ret);
}
