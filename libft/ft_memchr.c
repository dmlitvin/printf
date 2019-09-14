/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlitvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 11:12:59 by dmlitvin          #+#    #+#             */
/*   Updated: 2018/10/25 13:46:35 by dmlitvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*t_s;

	i = 0;
	t_s = (unsigned char*)s;
	while (i < n)
	{
		if (t_s[i] == (unsigned char)c)
			return ((void*)&t_s[i]);
		i++;
	}
	return (NULL);
}
