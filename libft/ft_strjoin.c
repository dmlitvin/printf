/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlitvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 20:09:19 by dmlitvin          #+#    #+#             */
/*   Updated: 2018/11/24 11:52:11 by dmlitvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	size_t	end;

	if (!s1 || !s2)
		return (NULL);
	end = ft_strlen(s1) + ft_strlen(s2);
	out = ft_strnew(end);
	if (!out)
		return (NULL);
	out = ft_strcpy(out, s1);
	return (ft_strcat(out, s2));
}
