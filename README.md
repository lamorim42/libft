# libft :books:

<figure>
	<img height="80" width="80" src="https://game.42sp.org.br/static/assets/achievements/libfte.png" alt="libft_img">
</figure>
	
Primeiro projeto da trilha de fundamentos da [`Ecole 42 SP`](https://www.42sp.org.br/). Nesse projeto temos que recodar funções famosas de algumas bibliotecas da **linguagem C**.

> :warning: Essa versão da _libft_ já foi atualizada com funções necessárias em projetos futuros.

## Índice

1. [Como navegar por esse repositório](#como-navegar)
2. [Funções implementadas](#funcoes)
3. [Como usar minha libft](#usando_lib)

<h2 id="como-navegar">Como navegar por esse repositório</h2>

- [`src`](./src): códigos fonte das funções implementadas no projeto;
- [`include`](./include): arquivo de header da `libft`;
- [`obj`](./obj): arquivos objetos pós compilação;
- [`Makefile`](./Makefile): makefile para compiçar o projeto;
- **[:closed_book: wiki](https://github.com/lamorim42/libft/wiki): Documetação detalhada do projeto.**

<h2 id="funcoes">Funções implementadas</h2>

### Funções da ctype.h

| Função | resumo | input | return |
| :----: | :----- | :---- | :----- |
| [ft_isalpha](./src/ft_isalpha.c) | Verifica se um caractere é alfabetico | caractere a ser verificado | 1 se for alfabetico, 0 se não for |
| [ft_isdigit](./src/ft_isdigit.c) | Verifica se um caractere é numérico | caractere a ser verificado | 1 se for numérico, 0 se não for |
| [ft_isalnum](./src/ft_isalnum.c) | Verifica se um caractere é alfanumérico | caractere a ser verificado | 1 se for alfanumérico, 0 se não for |
| [ft_isascii](./src/ft_isascii.c) | Verifica se um caractere é 7-bit US-ASCII | caractere a ser verificado | 1 se for ascii, 0 se não for |
| [ft_isprint](./src/ft_isprint.c) | Verifica se um caractere é "printável" | caractere a ser verificado | 1 se for "printável", 0 se não for |
| [ft_toupper](./src/ft_toupper.c) | Se o caractere é minúsculo retorna-o em maiúsculo e vice versa | caractere a ser convertido | caractere em maiúsculo ou minúsculo |
| [ft_tolower](./src/ft_tolower.c) | Se o caractere é maiúsculo retorna-o em minúsculo | caractere a ser convertido | caractere em minúsculo |

> :bulb: **Lidando com caracteres**
> 
> As funções da ctype.h são muito úteis para lidar com caracteres. Lembre-se, sempre que precisar tratar caracteres a libft tem ferramentas
> para auxiliar no processo.

> [:closed_book:](https://github.com/lamorim42/libft/wiki) Veja mais detalhademente sobre essas funções na [documentação](https://github.com/lamorim42/libft/wiki)

### Funções da string.h

| Função | resumo | input | return |
| :----: | :----- | :---- | :----- |
| [ft_strlen](./src/ft_strlen.c) | calcula o tamanho da string passada | string a ser medida | tamanho da string |
| [ft_strlcpy](./src/ft_strlcpy.c) | copia *n bits* da string passada para o destino passado | memória destino, string fonte e o tamanho a ser copiado | tamanho da string copiada |
| [ft_strlcat](./src/ft_strlcat.c) | concatena as strings passadas | string destino, string a ser concatenada, tamanho do buffer | o tamanho da string que foi criada |
| [ft_strchr](./src/ft_strchr.c) | procura um caractere em uma string | string para busca e o caractere alvo | um ponteiro para a primeira ocorrência do caractere alvo ou nulo |
| [ft_strrchr](./src/ft_strrchr.c) | procura um caractere em uma string | string para busca e o caractere alvo | um ponteiro para a última ocorrência do caractere alvo ou nulo |
| [ft_strncmp](./src/ft_strncmp.c) | compara os primeiros *n bits* de duas strings | string a serem comparadas e o tamanho a ser comparado | um `inteiro > 0 ou < 0` se forem diferentes, ou `0` se forem iguais |
| [ft_strnstr](./src/ft_strnstr.c) | acha a primeira ocorrência de uma string menor em uma maior | string fonte, string a ser procurada, tamanho da procura | um ponteiro para string que procuramos |
| [ft_memset](./src/ft_memset.c) | preenche os primeiros *n bytes* da memória apontada por *s* com o caractere *c* | ponteiro para memória, caractere para preencher, quantidade de bytes para preencher | pronteiro para memória |
| [ft_memchr](./src/ft_memchr.c) | scaneia os primeiros *n bytes* da memória a procura da primeira ocorrência do caractere *c* | memória a ser scaneada, caractere a ser procurado, tamanho da busca | ponteiro para a primeira ocorrencia de *c* ou nulo |
| [ft_bzero](./src/ft_bzero.c) | Apaga os *n* primeiros *bytes* da memória | pronteiro para memória, aqunatidades de bytes a serem apagados | *void* |
| [ft_memcpy](./src/ft_memcpy.c) | copia *n bytes* de uma área de memória para outra | área a ser copiada, área cópia e quantidade de bytes a ser copiado | ponteiro para área cópia |
| [ft_memmove](./src/ft_memmove.c) | copia *n bytes* de uma área de memória para outra[^overlapping] | área a ser copiada, área cópia e quantidade de bytes a ser copiado | ponteiro para área cópia |
| [ft_memcmp](./src/ft_memcmp.c) | compara, *n bytes*, de duas áreas de memória | áreas a serem comparadas, quantidade de bytes a serem comparados | `> 0` ou `< 0` se forem diferentes ou `0` se forem iguais |
| [ft_strdup](./src/ft_strdup.c) | duplica uma string | string a ser duplicada | ponteiro para nova string |

[^overlapping]: Leva em consideração sobreposição de memória.

> :bulb: **Lidando com Strings**
> 
> As funções da string.h são muito úteis para lidar com strings. Lembre-se, sempre que precisar tratar strings a libft tem ferramentas
> para auxiliar no processo.

> [:closed_book:](https://github.com/lamorim42/libft/wiki) Veja mais detalhademente sobre essas funções na [documentação](https://github.com/lamorim42/libft/wiki)

### Funções da stdlib.h

| Função | resumo | input | return |
| :----: | :----- | :---- | :----- |
| [ft_atoi](./src/ft_atoi.c) | converte uma string em inteiro | string a ser convertida | ponteiro para o inteiro |
| [ft_itoa](./src/ft_itoa.c) | converte um inteiro em string | inteiro a ser convertido | ponteiro para string |
| [ft_calloc](./src/ft_calloc.c) | aloca espaço na memória e limpa esse espaço com 0 | quantidade a ser alocada e tamanho da alocação | ponteiro para o espaço alocado |

### Standard functions

| Função | resumo | input | return |
| :----: | :----- | :---- | :----- |
| [ft_substr](./src/ft_substr.c) | TODO |  |  |
| [ft_strjoin](./src/ft_strjoin.c) | TODO |  |  |
| [ft_strtrim](./src/ft_strtrim.c) | TODO |  |  |
| [ft_split](./src/ft_split.c) | TODO |  |  |
| [ft_strmapi](./src/ft_strmapi.c) | TODO |  |  |
| [ft_striteri](./src/ft_striteri.c) | TODO |  |  |
| [ft_putchar_fd](./src/ft_putchar_fd.c) | TODO |  |  |
| [ft_putstr_fd](./src/ft_putstr_fd.c) | TODO |  |  |
| [ft_putendl_fd](./src/ft_putendl_fd.c) | TODO |  |  |
| [ft_putnbr_fd](./src/ft_putnbr_fd.c) | TODO |  |  |

<h2 id="usando_lib">Como usar a minha libft</h2>

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
