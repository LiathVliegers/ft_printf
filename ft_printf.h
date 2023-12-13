/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:26:23 by livliege          #+#    #+#             */
/*   Updated: 2023/12/13 17:30:10 by livliege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

int		ft_format_specefier(char placeholder, va_list arguments);
int		ft_printf(const char *string_to_print, ...);
int		ft_print_char(char c);
int		ft_print_string(char *str);
void	ft_print_hexadecimal(unsigned long num, char placeholder);
int		ft_hexadecimal(unsigned long h, char placeholder);
int		ft_print_pointer_address(unsigned long p, char placeholder);
int		ft_print_number(int d);
int		ft_print_unsigned_number(unsigned int u);
size_t	ft_strlen(const char *str);
char	*itoa_converter(int n, char *str, size_t n_len);
char	*ft_itoa(int n, char *str);
char	*uitoa_converter(unsigned int n, char *str, size_t n_len);
char	*ft_uitoa(unsigned int n, char *str);

#endif
