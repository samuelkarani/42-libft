/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbaabu <smbaabu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 14:24:03 by smbaabu           #+#    #+#             */
/*   Updated: 2019/02/27 01:36:13 by smbaabu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_space(char c)
{
	return ((c == '\n' || c == '\t' || c == ' '));
}

char		*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;

	if (!s)
		return (NULL);
	start = 0;
	while (s[start] && ft_is_space(s[start]))
		start++;
	end = ft_strlen(s) - 1;
	while (end > start && ft_is_space(s[end]))
		end--;
	if (end - start == 0)
		return (ft_strdup(s));
	return (ft_strsub(s, start, end - start + 1));
}
