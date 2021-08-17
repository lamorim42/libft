/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamorim <lamorim@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:20:48 by lamorim           #+#    #+#             */
/*   Updated: 2021/08/17 16:35:21 by lamorim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s_cpy;

	i = 0;
	s_cpy = ft_strdup(s);
	while (s_cpy[i])
	{
		s_cpy[i] = (*f)(i, s_cpy[i]);
		i++;
	}
	return (s_cpy);
}
