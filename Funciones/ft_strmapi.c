#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	size_t i;
	
	i = 0;
	if (!s || !f)
		return (NULL);
	if(!(str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
	   return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(s[i], i);
		i++;
	}
	str[i] = '\0';
	return (str);
}

