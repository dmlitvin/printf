/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlitvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 15:51:22 by dmlitvin          #+#    #+#             */
/*   Updated: 2018/10/26 17:25:38 by dmlitvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *out;

	out = (char*)malloc(size + 1);
	if (!out)
		return (NULL);
	out[size] = '\0';
	while (size--)
		out[size] = '\0';
	return (out);
}
