/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbaabu <smbaabu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 14:37:21 by smbaabu           #+#    #+#             */
/*   Updated: 2019/02/21 18:48:55 by smbaabu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src,
	size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	bytes;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	bytes = dstsize - dstlen - 1;
	ft_strncat(dst, (char *)src, bytes);
	return (dstlen + srclen);
}
