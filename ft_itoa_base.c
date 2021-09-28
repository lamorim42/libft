/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamorim <lamorim@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:13:31 by lamorim           #+#    #+#             */
/*   Updated: 2021/09/28 18:34:09 by lamorim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count_digit(long int c);
static void	ft_return_str(int n, long int n_cpy, char **str, int base);

char	*ft_itoa_base(int n, int base)
{
	char				*str;
	long int			n_cpy;
	int					count;

	n_cpy = n;
	if (n < 0 && base == 10)
		n_cpy *= -1;
	count = ft_count_digit(n_cpy);
	printf("n_cpy = \t%ld\ncount = \t%d\n", n_cpy, count);
	if (n < 0)
	{
		str = (char *)malloc(count + 2);
		str[count + 1] = '\0';
		str = (str + count + 1);
	}
	else
	{
		str = (char *)malloc(count + 1);
		printf("alocou\n");
		str[count] = '\0';
		printf("colocou \\0\n");
		str = (str + count);
		printf("mudou a posição do ponteiro\n");
	}
	if (!str)
		return (NULL);
	ft_return_str(n, n_cpy, &str, base);
	printf("itoa -> %s\n", str);
	return (str);
}

static int	ft_count_digit(long int c)
{
	int	count;

	if (!c)
		return (1);
	count = 0;
	while (c > 0)
	{
		c /= 10;
		count++;
	}
	return (count);
}

static void	ft_return_str(int n, long int n_cpy, char **str, int base)
{
	const char	*hold_base;
	
	hold_base = "0123456789abcdef";
	if (!n)
		*(--(*str)) = hold_base[n_cpy / base];
	while (n_cpy)
	{
		*(--(*str)) = hold_base[n_cpy % base];
		printf("%s\n", *str);
		n_cpy /= base;
		printf("%ld\n", n_cpy);
	}
	if (n < 0 && base == 10)
		*(--(*str)) = '-';
}
