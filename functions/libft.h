#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void    *ft_memset(void *b, int n, size_t l);
int	ft_isalpha(int c);
void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
size_t	ft_strlen(const char *s);
int	ft_isdigit(int d);
int	ft_isalnum(int arg);
int	ft_isalnum(int arg);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
void *ft_calloc(size_t nelem, size_t elsize);
// size_t    ft_strlen(char *c);
// int        ft_atoi(const char *str);
// int        ft_toupper(int n);
// int     ft_tolower(int n);
// char *ft_strrchr(const char *ch, int x);
// char    *ft_strnstr(const char *ha, const char *ne, size_t l);
// int ft_strncmp(const char *ch1, const char *ch2, size_t l);
// size_t    ft_strlcpy(char * dst, char * src, size_t l);
// size_t    ft_strlcat(char *dest, const char *src, size_t size);
// char    *ft_strdup(const char *s);
// char *ft_strchr(const char *str, int n);
// void    *ft_memmove(void *dest, const void *src, size_t l);
// int    ft_memcmp(const void *s1, const void *s2, size_t n);
// void    *ft_memchr(const void *s, int c, size_t n);
// int    ft_isprint(int c);
// int    ft_isdigit(int c);
// int    ft_isascii(int c);
// int    ft_isalnum(int c);
// void    *calloc(size_t c, size_t s);
// void ft_bzero(void *ch, size_t n);


#endif