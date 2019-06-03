/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbaabu <smbaabu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 22:25:12 by smbaabu           #+#    #+#             */
/*   Updated: 2019/02/27 00:37:27 by smbaabu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ret;
	int		i;

	if (!s || !f)
		return (NULL);
	if ((ret = ft_strnew(ft_strlen(s))) == NULL)
		return (NULL);
	i = 0;
	while (*(s + i))
	{
		ret[i] = (*f)(*(s + i));
		i++;
	}
	return (ret);
}
