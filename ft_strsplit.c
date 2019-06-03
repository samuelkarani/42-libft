/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbaabu <smbaabu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 15:20:02 by smbaabu           #+#    #+#             */
/*   Updated: 2019/02/28 17:32:59 by smbaabu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_strdelcnt(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && (i > 0 && s[i - 1] != c))
			count++;
		if (!s[i + 1] && s[i] != c)
			count++;
		i++;
	}
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	idx;
	int		count;
	char	**ret;

	if (!s || !c)
		return (NULL);
	count = ft_strdelcnt(s, c);
	if ((ret = (char **)ft_memalloc(sizeof(char *) * count + 1)) == NULL)
		return (NULL);
	i = 0;
	idx = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || (i > 0 && s[i - 1] == c)))
			start = i;
		if (i > 0 && s[i] == c && s[i - 1] != c)
			ret[idx++] = ft_strsub(s, start, i - start);
		if (i > 0 && !s[i + 1] && s[i] != c)
			ret[idx++] = ft_strsub(s, start, i - start + 1);
		i++;
	}
	ret[idx] = NULL;
	return (ret);
}
