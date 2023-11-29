/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:13:39 by livliege          #+#    #+#             */
/*   Updated: 2023/11/29 18:33:07 by livliege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_pointer_address(void *p)
{
	printf("%p", p);
	return(0);
}

// -------------------------------------------------------------

int ft_print_string(char *str)
{
	int len;

	if (str == NULL)
		return(write(1, "(null)", 6));
	len = ft_strlen(str);
	return(write(1, str, len));
}
// -------------------------------------------------------------

int ft_print_hexadecimal(unsigned int h, char placeholder)
{
	if(placeholder == 'x')
		printf("%x", h);
	if(placeholder == 'X')
		printf("%X", h);
	return(0);
}
// -------------------------------------------------------------

int ft_print_digit(int d)
{
	
	return(0);
}

// -------------------------------------------------------------

int ft_print_unsigned_digit(unsigned int u)
{
	printf("%u", u);
	return(0);
}

// -------------------------------------------------------------

int ft_print_char(char c)
{
	return(write(1, &c, 1));
}

// -------------------------------------------------------------

int ft_format_specefier(char placeholder, va_list arguments)
{ 
	if(placeholder == 'c')
		return(ft_print_char(va_arg(arguments, int)));
		
	if(placeholder == 's')
		return(ft_print_string(va_arg(arguments, char *)));
	
	if(placeholder == 'p')
		return(ft_print_pointer_address(va_arg(arguments, void *))); // or use long?
	
	if(placeholder == 'd'|| placeholder == 'i')
		return(ft_print_digit(va_arg(arguments, int)));
		
	if(placeholder == 'u')
		return(ft_print_unsigned_digit(va_arg(arguments, int)));

	if(placeholder == 'x' || placeholder == 'X')
		return(ft_print_hexadecimal(va_arg(arguments, unsigned int), placeholder));

	else if(placeholder == '%')
		return(ft_print_char('%'));
}

int ft_printf(const char *string_to_print, ...)
{
	int i;
	int char_count;
	va_list arguments;
	va_start(arguments, string_to_print);
	
	i = 0;
	char_count = 0;
	while(string_to_print[i] != '\0')
	{
		if(string_to_print[i] == '%')
		{
			char_count += ft_format_specefier(string_to_print[i + 1], arguments);
			i++;	
		}
		else
		{
			char_count += ft_print_char(string_to_print[i]);
		}
		i++;
	}
	va_end(arguments);
	return (char_count);
}

int main()
{
	char *str;

	str = "Hallo World!";
	// ft_printf("%d %d %d \n", 42, 8, 3);
	// ft_printf("%s\n", str);
	// ft_printf("%c\n", 'L');
	// ft_printf("%%\n");
	// ft_printf("%p\n", str);
	// ft_printf("%x\n", 42);
	// ft_printf("%X\n", 42);
	// ft_printf("%d %i %s %c %u %% %p %x %X\n", -635643, -635643, str, 'L', 827364, str, 42, 42);

	ft_printf("%s\n", str);
	ft_printf("%s\n", NULL);
	printf("%s\n", NULL);

	return(0);
}
