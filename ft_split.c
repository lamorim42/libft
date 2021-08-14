/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamorim <lamorim@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 23:06:44 by lamorim           #+#    #+#             */
/*   Updated: 2021/08/14 00:50:17 by lamorim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_occurrence(const char *s, char c);

char	**ft_split(const char *s, char c)
{
	char	**arr;
	char	*ptr;
	int		i;
	size_t	len;
	char	*s_cpy;

	i = 0;
	arr = (char **) malloc(ft_strlen(s) * ft_count_occurrence(s, c) + 1);
	s_cpy = ft_strdup(s);
	while (i < ft_count_occurrence(s, c))
	{
		ptr = ft_strchr(s_cpy, c);
		len = ptr - s_cpy;
		ptr = ft_substr(s_cpy, *s_cpy, len);
		ft_strlcpy((char *) arr[i], ptr, len + 1);
		free(ptr);
		ft_bzero(s_cpy, len + 1);
		i++;
	}
	return (arr);
}

static int	ft_count_occurrence(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}
