/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbaabu <smbaabu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 22:58:51 by smbaabu           #+#    #+#             */
/*   Updated: 2019/02/22 20:24:16 by smbaabu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*d;

	d = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (d == NULL)
		return (NULL);
	return (ft_strcpy(d, s1));
}
