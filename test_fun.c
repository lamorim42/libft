/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_fun.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamorim <lamorim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 21:41:31 by lamorim           #+#    #+#             */
/*   Updated: 2021/08/11 19:48:41 by lamorim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include "libft.h"

//Regular text
#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"

//Regular bold text
#define BBLK "\e[1;30m"
#define BRED "\e[1;31m"
#define BGRN "\e[1;32m"
#define BYEL "\e[1;33m"
#define BBLU "\e[1;34m"
#define BMAG "\e[1;35m"
#define BCYN "\e[1;36m"
#define BWHT "\e[1;37m"

//Regular underline text
#define UBLK "\e[4;30m"
#define URED "\e[4;31m"
#define UGRN "\e[4;32m"
#define UYEL "\e[4;33m"
#define UBLU "\e[4;34m"
#define UMAG "\e[4;35m"
#define UCYN "\e[4;36m"
#define UWHT "\e[4;37m"

//Regular background
#define BLKB "\e[40m"
#define REDB "\e[41m"
#define GRNB "\e[42m"
#define YELB "\e[43m"
#define BLUB "\e[44m"
#define MAGB "\e[45m"
#define CYNB "\e[46m"
#define WHTB "\e[47m"

//High intensty background
#define BLKHB "\e[0;100m"
#define REDHB "\e[0;101m"
#define GRNHB "\e[0;102m"
#define YELHB "\e[0;103m"
#define BLUHB "\e[0;104m"
#define MAGHB "\e[0;105m"
#define CYNHB "\e[0;106m"
#define WHTHB "\e[0;107m"

//High intensty text
#define HBLK "\e[0;90m"
#define HRED "\e[0;91m"
#define HGRN "\e[0;92m"
#define HYEL "\e[0;93m"
#define HBLU "\e[0;94m"
#define HMAG "\e[0;95m"
#define HCYN "\e[0;96m"
#define HWHT "\e[0;97m"

//Bold high intensity text
#define BHBLK "\e[1;90m"
#define BHRED "\e[1;91m"
#define BHGRN "\e[1;92m"
#define BHYEL "\e[1;93m"
#define BHBLU "\e[1;94m"
#define BHMAG "\e[1;95m"
#define BHCYN "\e[1;96m"
#define BHWHT "\e[1;97m"

//Reset
#define reset "\e[0m"

#define STR_SIZE 12

void	test_isalpha(void);
void	test_isdigit(void);
void	test_isalnum(void);
void	test_isascii(void);
void	test_isprint(void);
void	test_toupper(void);
void	test_tolower(void);
void	test_strlen(void);
void	test_strlcpy(void);
void	test_strchr(void);
void	test_strrchr(void);
void	test_strncmp(void);
void	test_memset(void);
void	test_strlcat(void);

int	main(void)
{
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_toupper();
	test_tolower();
	test_strlen();
	test_strlcpy();
	test_strchr();
	test_strrchr();
	test_strncmp();
	test_strlcat();
	test_memset();
	return (0);
}

void	test_isalpha(void)
{
	char	isalpha_test[4] = {'A', 'Z', 'a', 'z',};
	char	isnotalpha_test[5] = {0, '@', '[', '`', '{'};
	int		i = 0;

	printf(BHYEL "----------------isalpha----------------\n" reset);
	printf(BMAG "Alphabetic characters: " reset);
	while (i < 4)
	{
		if (ft_isalpha(isalpha_test[i]) > 0)
			printf(GRN "[OK]" reset);
		else
			printf(RED "[KO]" reset);
		i++;
	}
	printf(BMAG "\nNot alphabetic characters: " reset);
	i = 0;
	while (i < 5)
	{
		if (ft_isalpha(isnotalpha_test[i]) == 0)
			printf(GRN "[OK]" reset);
		else
			printf(RED "[KO]" reset);
		i++;
	}
	printf("\n\n");
}

void	test_isdigit(void)
{
	char	isdigit_test[2] = {'1', '9'};
	char	isnotdigit_test[2] = {'/', ':'};
	int		i = 0;

	printf(BHYEL "----------------isdigit----------------\n" reset);
	printf(BMAG "Digit characters: " reset);
	while (i < 2)
	{
		if (ft_isdigit(isdigit_test[i]) > 0)
			printf(GRN "[OK]" reset);
		else
			printf(RED "[KO]" reset);
		i++;
	}
	printf(BMAG "\nNot digit characters: " reset);
	i = 0;
	while (i < 2)
	{
		if (ft_isdigit(isnotdigit_test[i]) == 0)
			printf(GRN "[OK]" reset);
		else
			printf(RED "[KO]" reset);
		i++;
	}
	printf("\n\n");
}

void	test_isalnum(void)
{
	char	isalnum_test[6] = {'1', '9', 'A', 'Z', 'a', 'z'};
	char	isnotalnum_test[7] = {'/', ':', 0, '@', '[', '`', '{'};
	int		i = 0;

	printf(BHYEL "----------------isalnum----------------\n" reset);
	printf(BMAG "Alphanumeric characters: " reset);
	while (i < 6)
	{
		if (ft_isalnum(isalnum_test[i]) > 0)
			printf(GRN "[OK]" reset);
		else
			printf(RED "[KO]" reset);
		i++;
	}
	printf(BMAG "\nNot alphanumeric characters: " reset);
	i = 0;
	while (i < 7)
	{
		if (ft_isalnum(isnotalnum_test[i]) == 0)
			printf(GRN "[OK]" reset);
		else
			printf(RED "[KO]" reset);
		i++;
	}
	printf("\n\n");
}

void	test_isascii(void)
{
	int	isascii_test[2] = {0, 127};
	int	isnotascii_test[2] = {-1 , 178};
	int	i = 0;

	printf(BHYEL "----------------isascii----------------\n" reset);
	printf(BMAG "Is ascii characters: " reset);
	while (i < 2)
	{
		if (ft_isascii(isascii_test[i]) > 0)
			printf(GRN "[OK]" reset);
		else
			printf(RED "[KO]" reset);
		i++;
	}
	printf(BMAG "\nIs not ascii characters: " reset);
	i = 0;
	while (i < 2)
	{
		if (ft_isascii(isnotascii_test[i]) == 0)
			printf(GRN "[OK]" reset);
		else
			printf(RED "[KO]" reset);
		i++;
	}
	printf("\n\n");
}

void	test_isprint(void)
{
	int	isprint_test[2] = {32, 126};
	int	isnotprint_test[2] = {31 , 127};
	int	i = 0;

	printf(BHYEL "----------------isprint----------------\n" reset);
	printf(BMAG "Is a printable characters: " reset);
	while (i < 2)
	{
		if (ft_isprint(isprint_test[i]) > 0)
			printf(GRN "[OK]" reset);
		else
			printf(RED "[KO]" reset);
		i++;
	}
	printf(BMAG "\nIs not a printable characters: " reset);
	i = 0;
	while (i < 2)
	{
		if (ft_isprint(isnotprint_test[i]) == 0)
			printf(GRN "[OK]" reset);
		else
			printf(RED "[KO]" reset);
		i++;
	}
	printf("\n\n");
}

void	test_strlen(void)
{
	const char	s[7] = "string";

	printf(BHYEL "----------------strlen----------------\n" reset);
	printf(BMAG "String length = %ld " reset, ft_strlen(s));
	if (ft_strlen(s) == strlen(s))
		printf(GRN "[OK]" reset);
	else
		printf(RED "[KO]" reset);
	printf("\n\n");
}

void	test_strlcpy(void)
{
	char		str_src[STR_SIZE] = "string test";
	char		str_dst[] = " ";

	printf(BHYEL "----------------strlcpy----------------\n" reset);
	if (ft_strlcpy(str_src, str_dst, STR_SIZE) == strlcpy(str_src, str_dst, STR_SIZE))
		printf(GRN "[OK]\n\n" reset);
	else
		printf(RED "[KO]\n\n" reset);
}

void	test_memset(void)
{
	int			arr0[4] = {1, 2, 3, 4};
	int			arr1[4] = {1, 2, 3, 4};

	printf(BHYEL "----------------memset----------------\n" reset);
	if (ft_memset(arr0, -1, 2) == memset(arr0, -1, 2))
		printf(GRN "[OK]" reset);
	else
		printf(RED "[KO]" reset);
	if (ft_memset(arr1, 0, 7) == memset(arr1, 0, 7))
		printf(GRN "[OK]" reset);
	else
		printf(RED "[KO]" reset);
	printf("\n\n");
}

void	test_toupper(void)
{
	char	toupper_test[3] = {'a', 'A', '{'};
	int		i = 0;
	
	printf(BHYEL "----------------toupper----------------\n" reset);
	while (i < 3)
	{
	if (ft_toupper(toupper_test[i]) == toupper(toupper_test[i]))
		printf(GRN "[OK]" reset);
	else
		printf(RED "[KO]" reset);
	i++;
	}
	printf("\n\n");
}

void	test_tolower(void)
{
	char	tolower_test[3] = {'a', 'A', '{'};
	int		i = 0;

	printf(BHYEL "----------------tolower----------------\n" reset);
	while (i < 3)
	{
		if (ft_tolower(tolower_test[i]) == tolower(tolower_test[i]))
			printf(GRN "[OK]" reset);
		else
			printf(RED "[KO]" reset);
		i++;
	}
	printf("\n\n");
}

void	test_strchr(void)
{
	char	str_src[STR_SIZE] = "string test";
	char	strchr_test[4] = {'g', 'w', ' ', '\0'};
	int		i = 0;

	printf(BHYEL "----------------strchr----------------\n" reset);
	while (i < 4)
	{
		if (ft_strchr(str_src, strchr_test[i]) == strchr(str_src, strchr_test[i]))
			printf(GRN "[OK]" reset);
		else
			printf(GRN "[KO]" reset);
		i++;
	}
	printf("\n\n");
}

void	test_strrchr(void)
{
	char	str_src[STR_SIZE] = "string test";
	char	strrchr_test[4] = {'s', 'w', ' ', '\0'};
	int		i = 0;

	printf(BHYEL "----------------strrchr----------------\n" reset);
	while (i < 4)
	{
	if (ft_strrchr(str_src,strrchr_test[i]) == strrchr(str_src,strrchr_test[i]))
		printf(GRN "[OK]" reset);
	else
		printf(GRN "[KO]" reset);
	i++;
	}
	printf("\n\n");
}

void	test_strncmp(void)
{
	char	s0[] = "string test";
	char	s1[] = "string test";
	char	s2[] = "test string";

	printf(BHYEL "----------------strncmp----------------\n" reset);
	if (ft_strncmp(s0, s1, 11) == strncmp(s0, s1, 11))
		printf(GRN "[OK]" reset);
	else
		printf(RED "[KO]" reset);
	if (ft_strncmp(s0, s1, 4) == strncmp(s0, s1, 4))
		printf(GRN "[OK]" reset);
	else
		printf(RED "[KO]" reset);
	if (ft_strncmp(s1, s2, 11) == strncmp(s1, s2, 11))
		printf(GRN "[OK]" reset);
	else
		printf(RED "[KO]" reset);
	if (ft_strncmp(s1, s2, 3) == strncmp(s1, s2, 3))
		printf(GRN "[OK]" reset);
	else
		printf(RED "[KO]" reset);
	printf("\n\n");
}

void	test_strlcat(void)
{
	char	src0[] = "test";
	char	dst0[] = "string";
	char	src1[] = "";
	char	dst1[] = "testing";
	char	src2[] = "testing";
	char	dst2[] = "";

	printf(BHYEL "----------------strlcat----------------\n" reset);
	if (ft_strlcat(dst0, src0, sizeof(dst0)) == strlcat(dst0, src0, sizeof(dst0)))
		printf(GRN "[OK]" reset);
	else
		printf(RED "[KO]" reset);
	if (ft_strlcat(dst1, src1, sizeof(dst1)) == strlcat(dst1, src1, sizeof(dst1)))
		printf(GRN "[OK]" reset);
	else
		printf(RED "[KO]" reset);
	if (ft_strlcat(dst2, src2, sizeof(dst2)) == strlcat(dst2, src2, sizeof(dst2)))
		printf(GRN "[OK]" reset);
	else
		printf(RED "[KO]" reset);
	printf("\n");
}
