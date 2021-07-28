#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>

	/**
	 * @brief Checks for an alphabetic character
	 *
	 * @param c Character to be checked
	 *
	 * @return int The values returned are 1 (true)
	 * if c is alphabetic and 0 (false) if c is not alphabetic
	 */
int		ft_isalpha(int c);

	/**
	 * @brief Checks for an digit (0 through 9) character
	 *
	 * @param c Character to be checked
	 *
	 * @return int The values returned are 1 (true)
	 * if c is digit and 0 (false) if c is not digit
	 */
int		ft_isdigit(int c);

	/**
	 * @brief Checks for an alphanumeric character
	 *
	 * @param c Character to be checked
	 *
	 * @return int The values returned are 1 (true)
	 * if c is alphanumeric and 0 (false) if c is not alphanumeric
	 */
int		ft_isalnum(int c);

	/**
	 * @brief Checks for a 7-bit US-ASCII character
	 *
	 * @param c Character to be checked
	 *
	 * @return int The values returned are 1 (true)
	 * if c is 7-bit and 0 (false) if c is not 7-bit
	 */
int		ft_isascii(int c);

	/**
	 * @brief Checks for printable character
	 *
	 * @param c Character to be checked
	 *
	 * @return int The values returned are 1 (true)
	 * if c is printable and 0 (false) if c is not printable
	 */
int		ft_isprint(int c);

	/**
	 * @brief Calculates the length of the string pointed to by s,
	 * excluding the terminating null byte ('\0').
	 *
	 * @param *s The string to be measured
	 *
	 * @return size_t returns the number of bytes in the string
	 */
size_t	ft_strlen(const char *s);

	/**
	 * @brief copies up to dstsize - 1 characters from the string src to dst,
	 * NUL-terminating the result if dstsize is not 0
	 *
	 * @param 
	 * *dst string copy of *src
	 * *src string font
	 * dstsize size of dst
	 *
	 * @return size_t returns size of src
	 */
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);

	/**
	 * @brief fills the first n bytes of the memory area
	 * pointed to by s with the constant byte c.
	 *
	 * @param 
	 * s pointer to memory area
	 * c constant byte 
	 * n the amount of bytes
	 *
	 * @return * returns point to s
	 */
void	*ft_memset(void *s, int c, size_t n);

int	ft_toupper(int c);
#endif
