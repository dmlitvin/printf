/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlitvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 22:57:40 by dmlitvin          #+#    #+#             */
/*   Updated: 2018/10/28 15:17:18 by dmlitvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check(char const *s)
{
	size_t size;
	size_t i;

	i = 0;
	size = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[i])
	{
		i++;
		size++;
	}
	i--;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i--;
		size--;
		if (!i)
			return (i);
	}
	return (size);
}

char			*ft_strtrim(char const *s)
{
	char	*out;
	size_t	s_size;
	size_t	i;

	if (!s)
		return (NULL);
	s_size = check(s);
	i = 0;
	out = ft_strnew(s_size);
	if (!out)
		return (NULL);
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	while (s_size--)
	{
		out[i] = s[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
