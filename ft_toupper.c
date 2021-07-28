int	ft_toupper(int c)
{
	if (c > 64 && c < 91)
		c += 32;
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}
