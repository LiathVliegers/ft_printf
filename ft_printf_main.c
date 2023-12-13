/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:18:49 by livliege          #+#    #+#             */
/*   Updated: 2023/12/13 14:47:02 by livliege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

#define RED "\033[91m"
#define GREEN "\033[92m"
#define BLUE "\033[94m"
#define YELLOW "\033[93m"
#define DEFAULT "\033[0m"

int main()
{
	char *str1;
	char *str2;
	char *str3;

	str1 = "Hallo Codam!";
	str2 = "This is my very own printf function :)";
	str3 = "Hopefully you like it";

	ft_printf("------------------------------------------------------------------------------------------------------------------------\n");
	ft_printf("%sHello! Welcome in my ft_printf program.\n%sWhen the text colour is green, I'm using my own ft_printf function.\n%sWhen the text colour is red, I'm using the official printf function to test if the result is the same.\n%sHAPPY TESTING!%s\n", BLUE, GREEN, RED, BLUE, DEFAULT);
	ft_printf("------------------------------------------------------------------------------------------------------------------------\n");

	// %d			-2147483648		till	2147483647
	int ft_printf_d = ft_printf("%s%%d:  %s%d %d %d %d %d %d%s ", YELLOW, GREEN, 42, -8, 0, INT_MAX, INT_MIN, 'L', DEFAULT);
	printf("							ft_printf printed %s%d%s characters\n", YELLOW, ft_printf_d, DEFAULT);
	int printf_d = printf("%s%%d:  %s%d %d %d %d %d %d%s ", YELLOW, RED, 42, -8, 0, INT_MAX, INT_MIN, 'L', DEFAULT);
	printf("   						   printf printed %s%d%s characters\n", YELLOW, printf_d, DEFAULT);
	
	// %i			-2147483648		till	2147483647
	int ft_printf_i = ft_printf("%s%%i:  %s%i %i %i %i %i %i%s ", YELLOW, GREEN, 42, -8, 0, INT_MAX, INT_MIN, 'L', DEFAULT);
	printf("							ft_printf printed %s%d%s characters\n", YELLOW, ft_printf_i, DEFAULT);
	int printf_i = printf("%s%%i:  %s%i %i %i %i %i %i%s ", YELLOW, RED, 42, -8, 0, INT_MAX, INT_MIN, 'L', DEFAULT);
	printf("   						   printf printed %s%d%s characters\n", YELLOW, printf_i, DEFAULT);

	// %u 					0		till 	4294967295
	int ft_printf_u = ft_printf("%s%%u:  %s%u %u %u %u %u%s ", YELLOW, GREEN, 42, -8, 0, UINT_MAX, 'L', DEFAULT);
	printf("							ft_printf printed %s%d%s characters\n", YELLOW, ft_printf_u, DEFAULT);
	int printf_u = printf("%s%%u:  %s%u %u %u %u %u%s ", YELLOW, RED, 42, -8, 0, UINT_MAX, 'L', DEFAULT);
	printf("   							   printf printed %s%d%s characters\n", YELLOW, printf_u, DEFAULT);

	// %c
	int ft_printf_c = ft_printf("%s%%c:  %s%c %c %c %c%s ", YELLOW, GREEN, 'L', 42, '8', str1[0], DEFAULT);
	printf("										ft_printf printed %s%d%s characters\n", YELLOW, ft_printf_c, DEFAULT);
	int printf_c = printf("%s%%c:  %s%c %c %c %c%s ", YELLOW, RED, 'L', 42, '8', str1[0], DEFAULT);
	printf("   							   		   printf printed %s%d%s characters\n", YELLOW, printf_c, DEFAULT);

	// %s
	int ft_printf_s = ft_printf("%s%%s:  %s%s %s %s %s %s ", YELLOW, GREEN, str1, str2, str3, (char *)NULL, DEFAULT);
	printf("	ft_printf printed %s%d%s characters\n", YELLOW, ft_printf_s, DEFAULT);
	int printf_s = printf("%s%%s:  %s%s %s %s %s %s ", YELLOW, RED, str1, str2, str3, (char *)NULL, DEFAULT);
	printf("	   printf printed %s%d%s characters\n", YELLOW, printf_s, DEFAULT);

	// %%
	int ft_printf_percentsign = ft_printf("%s%%%%:  %s%%%s ", YELLOW, GREEN, DEFAULT);
	printf("											ft_printf printed %s%d%s characters\n", YELLOW, ft_printf_percentsign, DEFAULT);
	int printf_percentsign = printf("%s%%%%:  %s%%%s ", YELLOW, RED, DEFAULT);
	printf("   										   printf printed %s%d%s characters\n", YELLOW, printf_percentsign, DEFAULT);

	// %p
	int ft_printf_p = ft_printf("%s%%p:  %s%p %p %p %p%s ", YELLOW, GREEN, str1, str2, str3, NULL, DEFAULT);
	printf("							ft_printf printed %s%d%s characters\n", YELLOW, ft_printf_p, DEFAULT);
	int printf_p = printf("%s%%p:  %s%p %p %p %p%s ", YELLOW, RED, str1, str2, str3, NULL, DEFAULT);
	printf("   						   printf printed %s%d%s characters\n", YELLOW, printf_p, DEFAULT);

	// %x
	int ft_printf_x = ft_printf("%s%%x:  %s%x %x %x %x %x%s ", YELLOW, GREEN, 42, -8, 0, UINT_MAX, 'L', DEFAULT);
	printf("								ft_printf printed %s%d%s characters\n", YELLOW, ft_printf_x, DEFAULT);
	int printf_x = printf("%s%%x:  %s%x %x %x %x %x%s ", YELLOW, RED, 42, -8, 0, UINT_MAX, 'L', DEFAULT);
	printf("								   printf printed %s%d%s characters\n", YELLOW, printf_x, DEFAULT);

	// %X
	int ft_printf_X = ft_printf("%s%%X:  %s%X %X %X %X %X%s ", YELLOW, GREEN, 42, -8, 0, UINT_MAX, 'L', DEFAULT);
	printf("								ft_printf printed %s%d%s characters\n", YELLOW, ft_printf_X, DEFAULT);
	int printf_X = printf("%s%%X:  %s%X %X %X %X %X%s ", YELLOW, RED, 42, -8, 0, UINT_MAX, 'L', DEFAULT);
	printf("								   printf printed %s%d%s characters\n", YELLOW, printf_X, DEFAULT);

	// ALL OF THEM
	int ft_printf_ALL = ft_printf("%sAll: %s%d %i %s %c %u %% %p %x %X%s ", YELLOW, GREEN, -635643, INT_MIN, str1, 'L', 827364, str1, 42, 42, DEFAULT);
	printf("			ft_printf printed %s%d%s characters\n", YELLOW, ft_printf_ALL, DEFAULT);
	int printf_ALL = printf("%sAll: %s%d %i %s %c %u %% %p %x %X%s ", YELLOW, RED, -635643, INT_MIN, str1, 'L', 827364, str1, 42, 42, DEFAULT);
	printf("			   printf printed %s%d%s characters\n", YELLOW, printf_ALL, DEFAULT);
	
	ft_printf("------------------------------------------------------------------------------------------------------------------------\n");
	
	ft_printf("%sWeird testcases:%s\n", BLUE, DEFAULT);
	int ft_trippelpercent = ft_printf("%sThis is the result of three %% and a new line character: %%%\n%s", GREEN, DEFAULT);
	int trippelpercent = printf("%sThis is the result of three %% and a new line character: %%%\n%s", RED, DEFAULT);
	printf("ft_printf printed %s%d%s characters\n", YELLOW, ft_trippelpercent, DEFAULT);
	printf("   printf printed %s%d%s characters\n", YELLOW, trippelpercent, DEFAULT);

	int ft_percentV = ft_printf("%sThis is the result of an %% and a different placeholder than expected (in this case V): %V\n%s", GREEN, DEFAULT);
	int percentV = printf("%sThis is the result of an %% and a different placeholder than expected (in this case V): %V\n%s", RED, DEFAULT);
	printf("ft_printf printed %s%d%s characters\n", YELLOW, ft_percentV, DEFAULT);
	printf("   printf printed %s%d%s characters\n", YELLOW, percentV, DEFAULT);

	int ft_percentNULL = ft_printf("%sThis is the result of an %% and a different placeholder than expected (in this case \\0): %\0%s", GREEN, DEFAULT);
	printf("\n");
	int percentNULL = printf("%sThis is the result of an %% and a different placeholder than expected (in this case \\0): %\0%s", RED, DEFAULT);
	printf("\n");
	printf("%sft_printf printed %s%d%s characters\n", DEFAULT, YELLOW, ft_percentNULL, DEFAULT);
	printf("   printf printed %s%d%s characters\n", YELLOW, percentNULL, DEFAULT);

	int ft_percentEND = ft_printf("%sThis is the result of an %% at the end of the string: %", GREEN);
	printf("%s\n", DEFAULT);
	int percentEND = printf("%s%sThis is the result of an %% at the end of the string: %", RED);
	printf("\n", DEFAULT);
	printf("%sft_printf printed %s%d%s characters\n", DEFAULT, YELLOW, ft_percentEND, DEFAULT);
	printf("   printf printed %s%d%s characters\n", YELLOW, percentEND, DEFAULT);

	int ft_big_ascii_number = ft_printf("%scharacter of ascii value 1024 will be invisible (using | cat-e will give you \"^@$\" ): %c\n%s", GREEN, 1024, DEFAULT);
	int big_ascii_number = printf("%scharacter of ascii value 1024 will be invisible (using | cat-e will give you \"^@$\" ): %c\n%s", RED, 1024, DEFAULT);
	printf("ft_printf printed %s%d%s characters\n", YELLOW, ft_big_ascii_number, DEFAULT);
	printf("   printf printed %s%d%s characters\n", YELLOW, big_ascii_number, DEFAULT);

	int ft_null = ft_printf(NULL);
	ft_printf("%sft_printf(NULL) printed %s%d%s characters\n", GREEN, YELLOW, ft_null, DEFAULT);
	int null = printf(NULL);
	printf("%s   printf(NULL) printed %s%d%s characters\n", RED, YELLOW, null, DEFAULT);
	
	
	ft_printf("------------------------------------------------------------------------------------------------------------------------\n");

	return(0);
}
