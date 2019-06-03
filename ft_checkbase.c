/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkbase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbaabu <smbaabu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 18:44:02 by smbaabu           #+#    #+#             */
/*   Updated: 2019/03/21 23:23:46 by smbaabu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checkbase(char *base)
{
	int i;

	if (base == NULL || *base == 0 || !base[1])
		return (0);
	i = 1;
	while ((base[i]))
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] - base[i - 1] != 1)
			if (!(ft_isdigit(base[i - 1])
				&& (base[i] == 'a' || base[i] == 'A')))
				return (0);
		i++;
	}
	if (base[i])
		return (0);
	return (i);
}
