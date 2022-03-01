#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	char	simb;
	char	*str;

	simb = (char)c;
	str = (char *)s;
	while (*str && *str != simb)
		str++;
	if (*str == simb)
		return (str);
	else
		return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*megazord;
	int		len;
	int		i;
	int		j;

	if (!s1)
		return (0);
	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	megazord = (char *)malloc(sizeof(char) * (len + 1));
	if (!megazord)
		return (NULL);
	while (s1[i])
	{
		megazord[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		megazord[i + j] = s2[j];
		j++;
	}
	megazord[i + j] = '\0';
	return (megazord);
}

char	*ft_strdup(const char *s)
{
	char	*str;

	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str)
		return (ft_strcpy(str, s));
	else
		return (str);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*mem;
	size_t			len;
	unsigned char	*str;
	unsigned char	b;
	size_t			i;

	len = nmemb * size;
	mem = malloc(len);
	if (mem)
	{
		str = (unsigned char *)mem;
		b = 0;
		i = 0;
		while (len > 0)
		{
			str[i] = b;
			i++;
			len--;
		}
		return ((void *)str);
	}
	else
		return (mem);
}
