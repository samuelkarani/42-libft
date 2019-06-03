/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbaabu <smbaabu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 13:38:37 by smbaabu           #+#    #+#             */
/*   Updated: 2019/02/22 00:08:11 by smbaabu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, int nb)
{
	char	*p;

	p = dest;
	while (*p)
		p++;
	while (nb-- > 0 && *src)
		*p++ = *src++;
	*p = 0;
	return (dest);
}
