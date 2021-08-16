/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamorim <lamorim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:28:00 by lamorim           #+#    #+#             */
/*   Updated: 2021/08/16 00:12:47 by lamorim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*obj;

	if (!nmemb || !size)
		return (NULL);
	obj = (size_t *) malloc(size * nmemb);
	ft_bzero(obj, size * nmemb);
	return (obj);
}
