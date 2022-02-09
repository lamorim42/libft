<h1> libft </h1>
<p>Primeiro projeto da fase 1 na 42. Esse é o projeto onde recriamos algumas funções de bibliotecas C bem conhecidas. Esse projeto se constitui de duas partes e a parte bônus. </p>
<div align="center"></div>
<p>Na parte 1 temos as funções:
<h2>Funções ctype.h</h2>
<p><a href="#isalpha">• ft_isalpha </a></p>
<p><a href="#isdigit">• ft_isdigit </a></p>
<p><a href="#isalnum">• ft_isalnum </a></p>
<p><a href="#isascii">• ft_isascii </a></p>
<p><a href="#isprint">• ft_isprint </a></p>
<p><a href="#toupper">• ft_toupper </a></p>
<p><a href="#tolower">• ft_tolower </a></p>
<h2>Funções string.h</h2>
<p><a href="#strlen">• ft_strlen </a></p>
<p><a href="#strlcpy">• ft_strlcpy </a></p>
• ft_strlcat 
• ft_strchr 
• ft_strrchr 
• ft_strncmp 
• ft_strnstr 
<p><a href="#memset">• ft_memset </a></p>
• ft_memchr 
• ft_bzero 
• ft_memcpy 
• ft_memmove 
• ft_memcmp 
<h2>Funções stdlib.h</h2>
• ft_atoi</p>

<p>Na parte 2, temos:
• substr 
• strjoin 
• strtrim 
• split 
• itoa 
• strmapi 
• striteri 
• putchar_fd 
• putstr_fd 
• putendl_fd 
• putnbr_fd</p>

<p>Meu projeto foi entregue sem a parte bônus, mas algumas funções já foram implementadas a minha biblioteca.</p>

<h2 id="isalpha">ft_isalpha</h2>
<p>Verifica se o argumento passado é um caractere alfabético. Retorna 1 se não for alfabético ou 0 se for.</p>

```c
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
```

<h2 id="isdigit">ft_isdigit</h2>
<p>Verifica se o argumento passado é um caractere numérico. Retorna 1 se não for um número ou 0 se for.</p>

```c
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
```

<h2 id="isalnum">ft_isalnum</h2>
<p>Verifica se o argumento passado é um caractere numérico ou alfabético. Retorna 1 se não for ou um 0 se for.</p>

```c
int	ft_isalnum(int c)
{
	if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) \
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
```

<h2 id="isascii">ft_isascii</h2>
<p>Verifica se o argumento passado é um caractere da tabela ascii. Retorna 1 se não for ou um 0 se for.</p>

```c
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
```

<h2 id="isprint">ft_isprint</h2>
<p>Verifica se o argumento passado é um caractere "printável". Retorna 1 se não for ou um 0 se for.</p>

```c
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
```

<h2 id="toupper">ft_toupper</h2>
<p>Se o argumento passado é uma letra minúscula, a retorna maiúscula.</p>

```c
int	ft_toupper(int c)
{
	if (c > 64 && c < 91)
		c += 32;
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}
```

<h2 id="tolower">ft_tolower</h2>
<p>Se o argumento passado é uma letra maiúscula, a retorna minúscula.</p>

```c
int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c += 32;
	return (c);
}
```

<h2 id="strlen">ft_strlen</h2>
<p>Retorna a quantidade de bytes em uma string.</p>

```c
size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
```

<h2 id="strlcpy">ft_strlcpy</h2>
<p>Copia <i>destsize - 1</i> caracteres de <i>srt</i> para <i>dst</i>.</p>

```c
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	src_size;
	size_t	dst_size;

	src_size = 0;
	dst_size = 0;
	while (src[src_size])
		src_size++;
	if (dstsize != 0)
	{
		while (dst_size < dstsize - 1 && src[dst_size] != '\0')
		{
			dst[dst_size] = src[dst_size];
			dst_size++;
		}
		dst[dst_size] = '\0';
	}
	return (src_size);
}
```

<h2 id="memset">ft_memset</h2>
<p>Preenche os primeiros n bytes da memória apontada por str com o byte constante c.</p>

```c
void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*s;

	s = (char *) str;
	i = 0;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
```
