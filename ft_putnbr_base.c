/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbaabu <smbaabu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 23:46:45 by smbaabu           #+#    #+#             */
/*   Updated: 2019/03/27 22:59:56 by smbaabu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_base(int n, char *base)
{
	int		base_len;

	if ((base_len = ft_checkbase(base)) == 0)
		return ;
	if (n < 0)
		ft_putchar('-');
	if (n >= base_len || n < 0)
		ft_putnbr_base(ft_abs(n / base_len), base);
	ft_putchar(base[ft_abs(n % base_len)]);
}
