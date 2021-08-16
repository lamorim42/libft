/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamorim <lamorim@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:13:31 by lamorim           #+#    #+#             */
/*   Updated: 2021/08/16 17:25:00 by lamorim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digit(int c);

char	*ft_itoa(int n)
{
	char		*str_n;
	int			signal;
	long int	cpy_n;
	int			count;
	int			i;

	signal = 0;
	if (n < 0)
	{
		signal = 1;
		cpy_n = -1 * n;
	}
	else
		cpy_n = n;
	count = ft_count_digit(cpy_n);
	str_n = (char *) malloc(count + signal + 1);
	if (str_n == NULL)
		return (NULL);
	i = count + signal;
	str_n[i] = '\0';
	i -= 1;
	while (i >= 0)
	{
		str_n[i] = cpy_n % 10 + '0';
		if (i == 0 && signal == 1)
			str_n[i] = '-';
		printf("%s\n", &str_n[i]);
		i--;
		cpy_n /= 10;
	}
	return (str_n);
}

static int	ft_count_digit(int c)
{
	int	count;

	count = 0;
	while (c > 0)
	{
		c /= 10;
		count++;
	}
	return (count);
}

int	main(void)
{
	int		i = -12345;
	char	*str;

	str = ft_itoa(i);
	printf("%s\n", str);
	return (0);
}
