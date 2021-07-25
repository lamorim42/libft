#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned long	t_size;

/**
 * @brief Checks for an alphabetic character
 *
 * @param c Character to be checked
 *
 * @return int The values returned are 1 (true)
 * if c is alphabetic and 0 (false) if c is not alphabetic
 */
int	ft_isalpha(int c);

/**
 * @brief Checks for an digit (0 through 9) character
 *
 * @param c Character to be checked
 *
 * @return int The values returned are 1 (true)
 * if c is digit and 0 (false) if c is not digit
 */
int	ft_isdigit(int c);

/**
 * @brief Checks for an alphanumeric character
 *
 * @param c Character to be checked
 *
 * @return int The values returned are 1 (true)
 * if c is alphanumeric and 0 (false) if c is not alphanumeric
 */
int	ft_isalnum(int c);

/**
 * @brief Checks for a 7-bit US-ASCII character
 *
 * @param c Character to be checked
 *
 * @return int The values returned are 1 (true)
 * if c is 7-bit and 0 (false) if c is not 7-bit
 */
int	ft_isascii(int c);

/**
 * @brief Checks for printable character
 *
 * @param c Character to be checked
 *
 * @return int The values returned are 1 (true)
 * if c is printable and 0 (false) if c is not printable
 */
int	ft_isprint(int c);

/**
 * @brief Calculates the length of the string pointed to by s,
 * excluding the terminating null byte ('\0').
 *
 * @param *s Character to be checked
 *
 * @return t_size returns the number of bytes in the string
 */
t_size	ft_strlen(const char *s);
#endif
