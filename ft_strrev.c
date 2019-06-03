/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbaabu <smbaabu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 23:58:25 by smbaabu           #+#    #+#             */
/*   Updated: 2019/03/27 23:25:03 by smbaabu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strrev(char *s)
{
	char	temp;
	int		start;
	int		end;
	int		len;

	len = ft_strlen(s);
	if (len > 1)
	{
		start = 0;
		end = len - 1;
		while (start < end)
		{
			temp = s[start];
			s[start] = s[end];
			s[end] = temp;
			start++;
			end--;
		}
	}
}
