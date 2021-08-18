/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamorim <lamorim@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:37:48 by lamorim           #+#    #+#             */
/*   Updated: 2021/08/18 15:56:10 by lamorim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int			sign;
	long int	n_long;
	char		digit;

	n_long = n;
	if (n < 0)
	{
		sign = -1;
		write(1, "-", 1);
	}
	else
		sign = 1;
	n_long = n_long * sign;
	if (n_long > 9)
		ft_putnbr_fd(n_long / 10, fd);
	digit = '0' + (n_long % 10);
	write(fd, &digit, 1);
}
