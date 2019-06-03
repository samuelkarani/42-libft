/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbaabu <smbaabu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 01:26:43 by smbaabu           #+#    #+#             */
/*   Updated: 2019/02/27 01:37:19 by smbaabu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
{
	int i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char	*ret;
	size_t	len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_intlen(n);
	if ((ret = ft_strnew(len)) == NULL)
		return (NULL);
	if (n == 0)
		ret[0] = '0';
	if (n < 0)
	{
		ret[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		ret[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (ret);
}
