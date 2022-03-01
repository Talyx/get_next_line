#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_gnl
{
	int		byte_read;
	int		fd;
	int		rp;
	char	buf[BUFFER_SIZE + 1];
	char	*tmp;

}				t_gnl;

char				*ft_strchr(const char *str, int c);

size_t				ft_strlen(const char *s);

char				*ft_strjoin(const char *s1, const char *s2);

char				*ft_strdup(const char *s1);

char				*ft_strcpy(char *dst, const char *src);

void				ft_bzero(void *s, size_t n);

void				*ft_calloc(size_t nmemb, size_t size);

int					get_next_line(int fd, char **line);

char				*ft_strnew(size_t size);

void				*ft_memset(void *s, int c, size_t n);
#endif
