/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbaabu <smbaabu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 19:35:14 by smbaabu           #+#    #+#             */
/*   Updated: 2019/02/26 00:43:02 by smbaabu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*h;
	char	*n;

	if (*needle == 0)
		return ((char *)haystack);
	n = (char *)needle;
	while (*haystack)
	{
		h = (char *)haystack;
		while (*haystack && *haystack && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (!*needle)
			return (h);
		haystack = ++h;
		needle = n;
	}
	return (NULL);
}
