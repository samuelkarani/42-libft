/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbaabu <smbaabu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 13:59:36 by smbaabu           #+#    #+#             */
/*   Updated: 2019/02/27 00:08:02 by smbaabu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	int		l;

	if (!s1 && !s2)
		return (NULL);
	l = 0;
	if (s1)
		l += ft_strlen(s1);
	if (s2)
		l += ft_strlen(s2);
	if ((ret = ft_strnew(l)) == NULL)
		return (NULL);
	if (s1)
		ft_strcpy(ret, s1);
	if (s2)
		ft_strcat(ret, s2);
	return (ret);
}
