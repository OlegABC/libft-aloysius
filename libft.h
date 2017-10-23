//
// Created by Tim Keynes on 23/10/2017.
//

#ifndef FT_LIBFT_H
#define FT_LIBFT_H

#include <stdlib.h>

int		ft_atoi(char *str);
void    *ft_memset(void *b, int c, size_t len);
char	*ft_strcat(char *dest, char *src);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, int nb);
int		ft_strlen(char *str);
char	*ft_strncat(char *dest, char *src, int nb);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void    *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int     ft_isascii(int c);
int		ft_isprint(char c);
int	    ft_toupper(int c);
int	    ft_tolower(int c);
char	*ft_strdup(char *src);
size_t  ft_strlcat(char *dest, char *src, size_t size);

#endif //FT_LIBFT_H