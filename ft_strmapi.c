/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbaabu <smbaabu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 00:01:31 by smbaabu           #+#    #+#             */
/*   Updated: 2019/02/27 00:37:18 by smbaabu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	int		i;

	if (!s || !f)
		return (NULL);
	if ((ret = ft_strnew(ft_strlen(s))) == NULL)
		return (NULL);
	if (!s || !f)
		return (NULL);
	i = 0;
	while (*(s + i))
	{
		ret[i] = (*f)(i, *(s + i));
		i++;
	}
	return (ret);
}
