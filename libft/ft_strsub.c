/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlitvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 19:58:59 by dmlitvin          #+#    #+#             */
/*   Updated: 2018/10/28 13:41:50 by dmlitvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*out;
	size_t	i;

	i = 0;
	out = ft_strnew(len);
	if (!out || !s)
		return (NULL);
	out[len] = '\0';
	while (len--)
	{
		out[i] = s[start];
		start++;
		i++;
	}
	return (out);
}
