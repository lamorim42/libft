/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamorim <lamorim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:28:00 by lamorim           #+#    #+#             */
/*   Updated: 2021/08/12 08:40:03 by lamorim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*obj;
	int		i;

	i = 0;
	if (!nmemb || !size)
		return (NULL);
	obj = (size_t *) malloc(size * nmemb);
	ft_bzero(obj, size * nmemb);
	return (obj);
}
