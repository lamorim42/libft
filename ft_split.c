/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamorim <lamorim@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 23:06:44 by lamorim           #+#    #+#             */
/*   Updated: 2021/08/14 20:44:40 by lamorim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words_count(const char *s, char c);
static int	ft_letter_count(char *s, char c);

char	**ft_split(const char *s, char c)
{
	char	**arr;
	char	*ptr;
	char	*c_ptr;
	int		i;

	i = 0;
	arr = (char **) malloc(sizeof(char *) * ft_words_count(s, c) + 1);
	ptr = ft_strtrim(s, c_ptr);
	while (ptr[i])
	{
		//TODO fazer as cópias das palavras de s
	}
	return (arr);
}

static int	ft_words_count(const char *s, char c)
{
	int	wc;
	int	i;
	int	flag;

	wc = 0;
	i = 0;
	flag = 0;
	while (s[i])
	{
		if (s[i] == c)
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			++wc;
		}
		i++;
	}
	return (wc);
}

static int	ft_letter_count(char *s, char c)
{
	int	lc;

	lc = 0;
	while (*s)
	{
		if (*s != c)
			lc++;
		s++;
	}
	return (lc);
}
int	main(void)
{
	const char	s[] = "----Bom---dia----galera----";
	char		c = '-';
	char		**arr;

	arr = ft_split(s, c);
	printf("%s\n", *arr);
	return (0);
}
