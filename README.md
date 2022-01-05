<h1> libft </h1>
<p>Primeiro projeto da fase 1 na 42. Esse é o projeto onde recriamos algumas funções de bibliotecas C bem conhecidas. Esse projeto se constitui de duas partes e a parte bônus. </p>
<p>Na parte 1 temos as funções:
<p><a href="#isalpha">• isalpha </a></p>
<p>• isdigit </p>
• isalnum 
• isascii 
• isprint 
• strlen 
• memset 
• bzero 
• memcpy 
• memmove 
• strlcpy 
• strlcat 
• toupper 
• tolower 
• strchr 
• strrchr 
• strncmp 
• memchr 
• memcmp 
• strnstr 
• atoi</p>

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

<h2 id="isalpha">isalpha</h2>
<p>Verifica se o argumento passado é um caractere alfabético.</p>

```c
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
```
