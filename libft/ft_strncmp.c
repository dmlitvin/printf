/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlitvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 12:35:03 by dmlitvin          #+#    #+#             */
/*   Updated: 2018/10/29 19:33:02 by dmlitvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	void			*p1;
	void			*p2;
	unsigned char	c1;
	unsigned char	c2;

	p1 = (void*)s1;
	p2 = (void*)s2;
	c1 = *(unsigned char*)p1;
	c2 = *(unsigned char*)p2;
	if (!n)
		return (n);
	while ((n-- - 1) && c1 == c2)
	{
		if (!c1 || c1 != c2)
			return (c1 - c2);
		p1++;
		p2++;
		c1 = *(unsigned char*)p1;
		c2 = *(unsigned char*)p2;
	}
	return ((int)c1 - c2);
}
