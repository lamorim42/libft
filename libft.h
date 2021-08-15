/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamorim <lamorim@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 23:07:56 by lamorim           #+#    #+#             */
/*   Updated: 2021/08/14 19:37:08 by lamorim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
//TODO Retirar stdio anstes de enviar
# include <stdio.h>
# include <stdlib.h>

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
 * @brief If c is a lowercase letter, returns its uppercase,
 * if c is a uppercase letter, returns its lowercase
 *
 * @param c char to be converted
 *
 * @return int returns lowercase c or uppercase c
 */
int		ft_toupper(int c);

/**
 * @brief If c is a lowercase letter, returns its uppercase.
 *
 * @param c char to be converted
 *
 * @return int returns uppercase c
 */
int		ft_tolower(int c);

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
 * @brief returns a pointer to the first occurrence of the
 * character c in the string s.
 *
 * @param 
 * s pointer to string
 * c letter to looking for
 *
 * @return c returns the corresponding lower-case letter
 */
char	*ft_strchr(const char *s, int c);

/**
 * @brief returns a pointer to the last occurrence of the
 * character c in the string s.
 *
 * @param 
 * s pointer to string
 * c letter to looking for
 *
 * @return c returns the corresponding lower-case letter
 */
char	*ft_strrchr(const char *s, int c);


/**
 * @brief compares the first n bytes of s1 and s2
 *
 * @param 
 * s1 pointer to string
 * s2 pointer to string
 * n number of characters to be compared
 *
 * @return size_t It returns an integer less than, equal to, or greater
 * than zero if s1 is found, respectively, to be less than, to  match,
 * or be greater than s2.
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief concatenate src to dst string
 *
 * @param 
 * dst string destiny
 * src string source
 * size size of dst buff
 *
 * @return size_t return the total length of the string they tried to create
 *
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/**
 * @brief find the firts occurrence of little string in big string
 *
 * @param 
 * big string base
 * little string to be find
 * len limit of search
 *
 * @return char return ponter to string
 *
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);

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

/**
 * @brief erases the data in the n bytes of the memory starting at
 * the location pointed to by s
 * 
 * @param 
 * s pointer to memory area
 * n the number of bytes to be 0
 *
 * @return void
 */
void	ft_bzero(void *s, size_t n);

/**
 * @brief cans the initial n bytes of the memory area pointed to by s
 * for the first instance of c
 * 
 * @param 
 * s pointer to memory area
 * c char to looking for
 * n the number of bytes to be scaned
 *
 * @return void pointer to first instance of c or NULL
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief copies n bytes from memory area src to memory area dest
 * 
 * 
 * @param 
 * dest memory area destination
 * src memory area source
 * n the number of bytes to be copy
 *
 * @return void pointer to dest
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief copies n bytes from memory area src to memory area dest
 * 
 * 
 * @param 
 * dest memory area destination
 * src memory area source
 * n the number of bytes to be copy
 *
 * @return void pointer to dest
 */
void	*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief compares the first n bytes (each interpreted as unsigned char)
 * of the memory areas s1 and s2.
 * 
 * 
 * @param
 * s1 memory area to be compare with
 * s2 memory area to be compare
 * n the number of bytes to be compare
 *
 * @return void function returns an integer less than, equal to, or greater
 * than zero if the first n bytes  of  s1 is found, respectively,
 * to be less than, to match, or be greater than the first n bytes of s2.
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief converts the initial portion of the string pointed to by nptr to int.
 * 
 * @param
 * nptr initial string area
 *
 * @return int converted value
 */
int		ft_atoi(const char *nptr);

/**
 * @brief allocates memory for an array of nmemb elements of size bytes each
 * and returns a pointer to the allocated memory. The memory is set to zero.
 * If nmemb or size is 0, then calloc() returns either NULL
 * 
 * @param
 * nmemb number elements of the array
 * size size to be allocated
 *
 * @return void pointer to the allocated memory
 */
void	*ft_calloc(size_t nmemb, size_t size);

char	*ft_strdup(const char *s);

// Part 2

char	*ft_substr(const char *s, unsigned int start, size_t len);

char	*ft_strjoin(const char *s1, const char *s2);

char	*ft_strtrim(const char *s1, const char *set);

char	**ft_split(const char *s, char c);

#endif
