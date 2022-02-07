<h1> libft </h1>
<p>Primeiro projeto da fase 1 na 42. Esse é o projeto onde recriamos algumas funções de bibliotecas C bem conhecidas. Esse projeto se constitui de duas partes e a parte bônus. </p>
<p>Na parte 1 temos as funções:
<h2>funções ctype.h</h2>
<p><a href="#isalpha">• ft_isalpha </a></p>
<p><a href="#isdigit">• ft_isdigit </a></p>
<p><a href="#isalnum">• ft_isalnum </a></p>
<p><a href="#isascii">• ft_isascii </a></p>
<p><a href="#isprint">• ft_isprint </a></p>
<p><a href="#toupper">• ft_toupper </a></p>
<p><a href="#tolower">• ft_tolower </a></p>
<h2>It's coming</h2>
<p><a href="#strlen">• ft_strlen </a></p>
<p><a href="#memset">• ft_memset </a></p>
• ft_bzero 
• ft_memcpy 
• ft_memmove 
• ft_strlcpy 
• ft_strlcat 
• ft_strchr 
• ft_strrchr 
• ft_strncmp 
• ft_memchr 
• ft_memcmp 
• ft_strnstr 
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
