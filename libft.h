#ifndef LIBFT_H
#define LIBFT_H

int	ft_atoi(char *str);
void	ft_bzero(void *str, size_t n);
int	ft_isalum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memchr(void *str, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
ft_memmove();
void	*ft_memset(void *str, int c, size_t n);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strchr(const char *str, int c);
char	*ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *str);
char	*ft_strdup(char *str);
ft_strlcat();
int	ft_strlen(char *str);
char	*ft_strncat(char *s1, char *s2, unsigned int n);
char	*ft_strncmp(char *s1, char *s2, int n);
char	*ft_strncpy(char *str, int n);
ft_strnstr();
char	*ft_strrchr(const char *str, int c);
char	*ft_strstr(char *s1, char *s2);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif
