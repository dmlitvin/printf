/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlitvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:02:25 by dmlitvin          #+#    #+#             */
/*   Updated: 2018/10/25 14:33:54 by dmlitvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*t_dst;
	unsigned char	*t_src;
	size_t			i;

	i = 0;
	t_dst = (unsigned char*)dst;
	t_src = (unsigned char*)src;
	if (src < dst)
	{
		i = len - 1;
		while (i != (unsigned long)-1)
		{
			t_dst[i] = t_src[i];
			i--;
		}
	}
	else
		while (i < len)
		{
			t_dst[i] = t_src[i];
			i++;
		}
	return (dst);
}
