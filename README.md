<h1> libft </h1>

<figure>
	<img height="80" width="80" src="https://game.42sp.org.br/static/assets/achievements/libfte.png" alt="libft_img">
</figure>
	
<p>Primeiro projeto da fase 1 na 42. Esse é o projeto onde recriamos algumas funções de bibliotecas C bem conhecidas. Esse projeto se constitui de duas partes e a parte bônus. </p>

<div>
<b>Na parte 1 temos as funções:</b>
<h3>Funções ctype.h</h3>
<p><a href="#isalpha">• ft_isalpha </a></p>
<p><a href="#isdigit">• ft_isdigit </a></p>
<p><a href="#isalnum">• ft_isalnum </a></p>
<p><a href="#isascii">• ft_isascii </a></p>
<p><a href="#isprint">• ft_isprint </a></p>
<p><a href="#toupper">• ft_toupper </a></p>
<p><a href="#tolower">• ft_tolower </a></p>

<h3>Funções string.h</h3>

<p><a href="#strlen">• ft_strlen </a></p>
<p><a href="#strlcpy">• ft_strlcpy </a></p>
<p><a href="#strlcat">• ft_strlcat </a></p>
<p><a href="#strchr">• ft_strchr </a></p>
<p><a href="#strrchr">• ft_strrchr </a></p>
<p><a href="#strncmp">• ft_strncmp </a></p>
• ft_strnstr 
<p><a href="#memset">• ft_memset </a></p>
• ft_memchr 
• ft_bzero 
• ft_memcpy 
• ft_memmove 
• ft_memcmp 
<h3>Funções stdlib.h</h3>
• ft_atoi
</div>

<div>
Na parte 2, temos:
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
• putnbr_fd
</div>

<p>Meu projeto foi entregue sem a parte bônus, mas algumas funções já foram implementadas a minha biblioteca.</p>

<hr>

<h3 id="isalpha">ft_isalpha</h3>
<p>Verifica se o argumento passado é um caractere alfabético. Retorna 1 se não for alfabético ou 0 se for.</p>

```c
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
```

<h3 id="isdigit">ft_isdigit</h3>
<p>Verifica se o argumento passado é um caractere numérico. Retorna 1 se não for um número ou 0 se for.</p>

```c
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
```

<h3 id="isalnum">ft_isalnum</h3>
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

<h3 id="isascii">ft_isascii</h3>
<p>Verifica se o argumento passado é um caractere da tabela ascii. Retorna 1 se não for ou um 0 se for.</p>

```c
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
```

<h3 id="isprint">ft_isprint</h3>
<p>Verifica se o argumento passado é um caractere "printável". Retorna 1 se não for ou um 0 se for.</p>

```c
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
```

<h3 id="toupper">ft_toupper</h3>
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

<h3 id="tolower">ft_tolower</h3>
<p>Se o argumento passado é uma letra maiúscula, a retorna minúscula.</p>

```c
int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c += 32;
	return (c);
}
```

<h3 id="strlen">ft_strlen</h3>
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

<h3 id="strlcpy">ft_strlcpy</h3>
<p>Copia <code>(destsize - 1)</code> caracteres de <code>srt</code> para <code>dst</code>.</p>

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

<h3 id="strlcat">ft_strlcat</h3>
<p>Concatena a string <code>str</code> na string <code>dst</code>.</p>

```c
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*dst_cpy;
	char	*src_cpy;
	size_t	src_len;
	size_t	dst_len;

	src_len = 0;
	dst_len = 0;
	while (src[src_len])
		src_len++;
	while (dst[dst_len])
		dst_len++;
	src_cpy = (char *) src;
	dst_cpy = dst;
	if (size <= dst_len)
		return (size + src_len);
	else
	{
		dst_cpy += dst_len;
		while (*src_cpy && --size > dst_len)
			*dst_cpy++ = *src_cpy++;
		*dst_cpy = '\0';
	}
	return (dst_len + src_len);
}
```

<h3 id="strchr">ft_strchr</h3>
<p>Retorna um ponteiro para primeira ocorrencia do caracter <code>c</code> na string <code>str</code>.</p>

```c
char	*ft_strchr(const char *s, int c)
{
	if (c == 0)
	{
		while (*s)
			s++;
		return ((char *)s);
	}
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return ((char *) '\0');
}
```

<h3 id="strrchr">ft_strrchr</h3>
<p>Retorna um ponteiro para última ocorrencia do caracter <code>c</code> na string <code>str</code>.</p>

```c
char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*str;

	len = ft_strlen(s);
	str = (char *)s;
	if (c == 0)
		return (&str[len]);
	while (len)
	{
		if (str[len] == (char)c)
			return (&str[len]);
		len--;
	}
	if (str[len] == (char)c)
		return (&str[len]);
	return (0);
}
```

<h3 id="strncmp">ft_strncmp</h3>
<p>Compara os primeiros <code>n</code> bytes da string apontada por <code>s</code> com <code>c</code>.</p>

```c
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
```

<h3 id="memset">ft_memset</h3>
<p>Preenche os primeiros <code>n</code> bytes da memória apontada por <var>str</var> com o byte constante <code>c</code>.</p>

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
