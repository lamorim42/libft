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
| TODO   |        |       |        |

### Funções da string.h

| Função | resumo | input | return |
| :----: | :----- | :---- | :----- |
| [ft_strlen](https://github.com/lamorim42/libft/blob/master/src/ft_strlen.c) | TODO |  |  |
| TODO   |        |       |        |

### Funções da stdlib.h

| Função | resumo | input | return |
| :----: | :----- | :---- | :----- |
| [ft_atoi](https://github.com/lamorim42/libft/blob/master/src/ft_atoi.c) | TODO |  |  |
| TODO   |        |       |        |

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
