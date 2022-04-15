# libft :books:

<figure>
	<img height="80" width="80" src="https://game.42sp.org.br/static/assets/achievements/libfte.png" alt="libft_img">
</figure>
	
Primeiro projeto da trilha de fundamentos da [`Ecole 42 SP`](https://www.42sp.org.br/). Nesse projeto temos que recodar funções famosas de algumas bibliotecas da linguagem `C`.

## Como navegar por esse repositório

- [`src`](https://github.com/lamorim42/libft/tree/master/src): códigos fonte das funções implementadas no projeto;
- [`include`](https://github.com/lamorim42/libft/tree/master/include): arquivo de header da `libft`;
- [`obj`](https://github.com/lamorim42/libft/tree/master/obj): arquivos objetos pós compilação;
- [`Makefile`](https://github.com/lamorim42/libft/blob/master/Makefile): makefile para compiçar o projeto;
- [wiki](https://github.com/lamorim42/libft/wiki): Documetação detalhada do projeto.

## Funções implementadas

### Funções da ctype.h

| Função | resumo | input | return |
| :----: | :----- | :---- | :----- |
| [ft_isalpha](https://github.com/lamorim42/libft/blob/master/src/ft_isalpha.c) | Verifica se um character é alfabetico | caracter a ser verificado | 1 se for alfabetico, 0 se não for |
| [ft_isdigit](https://github.com/lamorim42/libft/blob/master/src/ft_isdigit.c) |  |  |  |
| [ft_isalnum](https://github.com/lamorim42/libft/blob/master/src/ft_isalnum.c) |  |  |  |
| [ft_isascii](https://github.com/lamorim42/libft/blob/master/src/ft_isascii.c) |  |  |  |
| [ft_isprint](https://github.com/lamorim42/libft/blob/master/src/ft_isprint.c) |  |  |  |
| [ft_toupper](https://github.com/lamorim42/libft/blob/master/src/ft_toupper.c) |  |  |  |
| [ft_tolower](https://github.com/lamorim42/libft/blob/master/src/ft_tolower.c) |  |  |  |

### Funções da string.h

| Função | resumo | input | return |
| :----: | :----- | :---- | :----- |
| [ft_strlen](https://github.com/lamorim42/libft/blob/master/src/ft_strlen.c) | TODO |  |  |
| [ft_strlcpy](https://github.com/lamorim42/libft/blob/master/src/ft_strlcpy.c) | TODO |  |  |
| [ft_strlcat](https://github.com/lamorim42/libft/blob/master/src/ft_strlcat.c) | TODO |  |  |
| [ft_strchr](https://github.com/lamorim42/libft/blob/master/src/ft_strchr.c) | TODO |  |  |
| [ft_strrchr](https://github.com/lamorim42/libft/blob/master/src/ft_strrchr.c) | TODO |  |  |
| [ft_strncmp](https://github.com/lamorim42/libft/blob/master/src/ft_strncmp.c) | TODO |  |  |
| [ft_strnstr](https://github.com/lamorim42/libft/blob/master/src/ft_strnstr.c) | TODO |  |  |
| [ft_memset](https://github.com/lamorim42/libft/blob/master/src/ft_memset.c) | TODO |  |  |
| [ft_memchr](https://github.com/lamorim42/libft/blob/master/src/ft_memchr.c) | TODO |  |  |
| [ft_bzero](https://github.com/lamorim42/libft/blob/master/src/ft_bzero.c) | TODO |  |  |
| [ft_memcpy](https://github.com/lamorim42/libft/blob/master/src/ft_memcpy.c) | TODO |  |  |
| [ft_memmove](https://github.com/lamorim42/libft/blob/master/src/ft_memmove.c) | TODO |  |  |
| [ft_memcmp](https://github.com/lamorim42/libft/blob/master/src/ft_memcmp.c) | TODO |  |  |
| [ft_strdup](https://github.com/lamorim42/libft/blob/master/src/ft_strdup.c) | TODO |  |  |

### Funções da stdlib.h

| Função | resumo | input | return |
| :----: | :----- | :---- | :----- |
| [ft_atoi](https://github.com/lamorim42/libft/blob/master/src/ft_atoi.c) | TODO |  |  |
| [ft_itoa](https://github.com/lamorim42/libft/blob/master/src/ft_itoa.c) | TODO |  |  |

### Standard functions

| Função | resumo | input | return |
| :----: | :----- | :---- | :----- |
| [ft_substr](https://github.com/lamorim42/libft/blob/master/src/ft_substr.c) | TODO |  |  |
| [ft_strjoin](https://github.com/lamorim42/libft/blob/master/src/ft_strjoin.c) | TODO |  |  |
| [ft_strtrim](https://github.com/lamorim42/libft/blob/master/src/ft_strtrim.c) | TODO |  |  |
| [ft_split](https://github.com/lamorim42/libft/blob/master/src/ft_split.c) | TODO |  |  |
| [ft_strmapi](https://github.com/lamorim42/libft/blob/master/src/ft_strmapi.c) | TODO |  |  |
| [ft_striteri](https://github.com/lamorim42/libft/blob/master/src/ft_striteri.c) | TODO |  |  |
| [ft_putchar_fd](https://github.com/lamorim42/libft/blob/master/src/ft_putchar_fd.c) | TODO |  |  |
| [ft_putstr_fd](https://github.com/lamorim42/libft/blob/master/src/ft_putstr_fd.c) | TODO |  |  |
| [ft_putendl_fd](https://github.com/lamorim42/libft/blob/master/src/ft_putendl_fd.c) | TODO |  |  |
| [ft_putnbr_fd](https://github.com/lamorim42/libft/blob/master/src/ft_putnbr_fd.c) | TODO |  |  |

## Como usar a minha libft

1. Cone esse repositório

```bash
git clone https://github.com/lamorim42/libft.git
```

2. Compile a libft com `make`

3. Compile seu projeto com as flags

```
-I libft/include -L ./libft -lft
```

### Uso

```c
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	a;
	
	a = 'a';
	if (ft_isalpha(a))
		printf("%c's alpha char!\n", a);
	else
		printf("%c's not alpha char!\n", a);
	return (0);
}
```
