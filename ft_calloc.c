/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamorim <lamorim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:28:00 by lamorim           #+#    #+#             */
/*   Updated: 2021/08/11 16:56:31 by lamorim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*obj;
	int		i;

	i = 0;
	if (!nmemb || !size)
		return (0);
	obj = (size_t *) malloc(size * nmemb);
	while (obj[i])
		obj[i++] = 0;
	return (obj);
}
