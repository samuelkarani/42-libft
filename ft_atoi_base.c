/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbaabu <smbaabu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 16:07:09 by smbaabu           #+#    #+#             */
/*   Updated: 2019/03/27 23:27:39 by smbaabu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_valid(int c, int baselen)
{
	if (ft_isdigit(c))
		return (c - '0' < baselen);
	if (ft_islower(c))
		return (c - 'a' + 10 < baselen);
	if (ft_isupper(c))
		return (c - 'A' + 10 < baselen);
	return (0);
}

static int	get_value(char c)
{
	if (ft_isdigit(c))
		return (c - '0');
	if (ft_islower(c))
		return (c - 'a' + 10);
	return (c - 'A' + 10);
}

int			ft_atoi_base(const char *str, char *base)
{
	int sum;
	int i;
	int sign;
	int baselen;

	if (str == NULL || !*str || (baselen = ft_checkbase(base)) == 0)
		return (0);
	i = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	sum = 0;
	while (is_valid(str[i], baselen))
	{
		sum *= baselen;
		sum += get_value(str[i]);
		i++;
	}
	return (sign * sum);
}
