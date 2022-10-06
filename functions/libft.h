#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void    *ft_memset(void *b, int n, size_t l);
int	ft_isalpha(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
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
int	ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start,	size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);


#endif