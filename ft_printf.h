/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmlitvin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 12:46:26 by dmlitvin          #+#    #+#             */
/*   Updated: 2018/11/14 12:46:28 by dmlitvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include "libft/libft.h"

/*
** Defines for standart output modification.
*/

# define BOLD "\x1b[1m"
# define UNDERLINED "\x1b[4m"
# define BLINK "\x1b[5m"
# define INVERT "\x1b[7m"
# define BLACK "\x1b[30m"
# define RED "\x1b[31m"
# define GREEN "\x1b[32m"
# define YELLOW "\x1b[33m"
# define BLUE "\x1b[34m"
# define PINK "\x1b[35m"
# define AQUA "\x1b[36m"
# define WHITE "\x1b[37m"

/*
** Macro for end of standart output modification.
*/

# define EOM "\x1b[0m"

/*
** Some usefull defines.
*/

# define ABS(x) ((x) < 0) ? (-(x)) : (x)
# define ULL unsigned long long

/*
** Data conversion types.
*/

# define CHAR 0
# define STRING 1
# define POINTER 2
# define DECIMAL 3
# define OCTAL 4
# define UINT 5
# define SMALL_HEX 6
# define BIG_HEX 7
# define PERCENTAGE 8
# define BINARY 9
# define FLOAT 10
# define NO_TYPE 11

/*
** Structure t_flags for flags in ft_printf.
*/

typedef struct			s_flags
{
	unsigned int		sharp : 1;
	unsigned int		space : 1;
	unsigned int		plus : 1;
	unsigned int		minus : 1;
	unsigned int		big_longness : 1;
}						t_flags;

/*
** Structure t_printf for modificators inf ft_printf.
*/

typedef	struct			s_printf
{
	int					width;
	int					accurace;
	int					size;
	char				zero;
	unsigned int		type;
	t_flags				*flags;
}						t_printf;

/*
** ft_printf functions.
*/

void					parse_flag(t_printf *info, char **pointer);
void					parse_size(t_printf *info, char **pointer);
void					parse_type(t_printf *info, char **pointer);
void					parse_nbr(t_printf *info, char **pointer, va_list *ap);
int						stop_conversion(char c);
int						is_conversion_type(char c);
char					*ft_itoa_for_printf(char *base,
							__int128 nb, t_printf *info);
int						print_char(t_printf *info, void *data);
int						print_percent(t_printf *info);
int						print_pointer(t_printf *info, void *data);
int						print_string(t_printf *info, void *data);
int						print_pointer(t_printf *info, void *data);
int						print_decimal(t_printf *info, void *data);
int						print_numeric(t_printf *info, void *data);
int						print_float(t_printf *info, float data);
int						print_double(t_printf *info, long double data);
int						ft_printf(const char *format, ...);

#endif
