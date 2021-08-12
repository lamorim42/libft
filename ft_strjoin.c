/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamorim <lamorim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 08:49:36 by lamorim           #+#    #+#             */
/*   Updated: 2021/08/12 20:19:25 by lamorim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*join;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	join = (char *) malloc(s1_len + s2_len + 1);
	if (!join)
		return (NULL);
	ft_strlcpy(join, (char *) s1, s1_len + 1);
	ft_strlcpy(join + s1_len, (char *) s2, s2_len + 1);
	return (join);
}
