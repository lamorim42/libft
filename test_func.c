#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	const char	s[6] = "carro";
	int	i;
	// test @ft_isalpha
	printf("----------------isalpha----------------\n");
	i = 60;
	while (i < 128)
	{
		if (ft_isalpha(i) && ((i > 64 && i < 91) || (i > 96 &&  i < 123)))
			printf("OK ----- c = %d ----- ft_isalpha(%d) = %d | isalpha(%d) = %d\n", i, i, ft_isalpha(i), i, isalpha(i));
		else if ((ft_isalpha(i) && !((i > 64 && i < 91) || (i > 96 &&  i < 123)))
				|| (!ft_isalpha(i) && ((i > 64 && i < 91) || (i > 96 &&  i < 123))))
			printf("KO ----- c = %d ----- ft_isalpha(%d) = %d | isalpha(%d) = %d\n", i, i, ft_isalpha(i), i, isalpha(i));
		else
			printf("OK ----- c = %d ----- ft_isalpha(%d) = %d | isalpha(%d) = %d\n", i, i, ft_isalpha(i), i, isalpha(i));
		i++;
	}
	// test @ft_isdigit
	printf("----------------isdigit----------------\n");
	i = 40;
	while (i < 60)
	{
		if (ft_isdigit(i) && (i > 47 && i < 58))
			printf("OK ----- c = %d ----- ft_isdigit(%d) = %d | isdigit(%d) = %d\n", i, i, ft_isdigit(i), i, isdigit(i));
		else if ((ft_isdigit(i) && !(i > 47 && i < 58)) || (!ft_isdigit(i) && (i > 47 && i < 58)))
			printf("KO ----- c = %d ----- ft_isdigit(%d) = %d | isdigit(%d) = %d\n", i, i, ft_isdigit(i), i, isdigit(i));
		else
			printf("OK ----- c = %d ----- ft_isdigit(%d) = %d | isdigit(%d) = %d\n", i, i, ft_isdigit(i), i, isdigit(i));
		i++;
	}
	// test @ft_isalnum
	printf("----------------isalnum----------------\n");
	i = 40;
	while (i < 130)
	{
		if (ft_isalnum(i) && ((i > 47 && i < 58) || ((i > 64 && i < 91) || (i > 96 &&  i < 123))))
			printf("OK ----- c = %d ----- ft_isalnum(%d) = %d | isalnum(%d) = %d\n", i, i, ft_isalnum(i), i, isalnum(i));
		else if ((ft_isalnum(i) && !((i > 47 && i < 58) || ((i > 64 && i < 91) || (i > 96 &&  i < 123))))
				|| (!ft_isalnum(i) && ((i > 47 && i < 58) || ((i > 64 && i < 91) || (i > 96 &&  i < 123)))))
			printf("KO ----- c = %d ----- ft_isalnum(%d) = %d | isalnum(%d) = %d\n", i, i, ft_isalnum(i), i, isalnum(i));
		else
			printf("OK ----- c = %d ----- ft_isalnum(%d) = %d | isalnum(%d) = %d\n", i, i, ft_isalnum(i), i, isalnum(i));
		i++;
	}
	// test @ft_isascii
	printf("----------------isascii----------------\n");
	i = 0;
	while (i < 135)
	{
		if (ft_isascii(i) && (i >= 0 && i <= 127))
			printf("OK ----- c = %d ----- ft_isascii(%d) = %d | isascii(%d) = %d\n", i, i, ft_isascii(i), i, isascii(i));
		else if ((ft_isascii(i) && !(i >= 0 && i <= 127)) || (!ft_isascii(i) && (i >= 0 && i <= 127)))
			printf("KO ----- c = %d ----- ft_isascii(%d) = %d | isascii(%d) = %d\n", i, i, ft_isascii(i), i, isascii(i));
		else
			printf("OK ----- c = %d ----- ft_isascii(%d) = %d | isascii(%d) = %d\n", i, i, ft_isascii(i), i, isascii(i));
		i++;
	}
	// test @ft_isprint
	printf("----------------isprint----------------\n");
	i = 0;
	while (i < 128)
	{
		if (ft_isprint(i) && (i > 31 && i < 127))
			printf("OK ----- c = %d ----- ft_isprint(%d) = %d | isprint(%d) = %d\n", i, i, ft_isprint(i), i, isprint(i));
		else if ((!ft_isprint(i) && (i > 31 && i < 127)) || (ft_isprint(i) && !(i > 31 && i < 127)))
			printf("KO ----- c = %d ----- ft_isprint(%d) = %d | isprint(%d) = %d\n", i, i, ft_isprint(i), i, isprint(i));
		else
			printf("OK ----- c = %d ----- ft_isprint(%d) = %d | isprint(%d) = %d\n", i, i, ft_isprint(i), i, isprint(i));
		i++;
	}
	// test @ft_strlen
	printf("----------------strlen----------------\n");
	if (ft_strlen(s) == strlen(s))
		printf("OK --- %lu = %lu\n", ft_strlen(s), strlen(s));
	else
		printf("KO --- %lu != %lu\n", ft_strlen(s), strlen(s));
	return (0);
}
