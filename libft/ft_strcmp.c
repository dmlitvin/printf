/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlitvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 20:02:30 by dmlitvin          #+#    #+#             */
/*   Updated: 2018/10/27 19:20:08 by dmlitvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	const unsigned char *p1;
	const unsigned char *p2;
	unsigned char		c1;
	unsigned char		c2;

	p1 = (const unsigned char*)s1;
	p2 = (const unsigned char*)s2;
	c1 = (unsigned char)*p1;
	c2 = (unsigned char)*p2;
	while (c1 == c2)
	{
		c1 = *p1++;
		c2 = *p2++;
		if (!c1)
			return (c1 - c2);
	}
	return (c1 - c2);
}
