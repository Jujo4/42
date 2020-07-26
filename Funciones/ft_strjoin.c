#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char *s;
	size_t i;
	size_t j;
	size_t len;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	if(!(s = (char *) malloc(sizeof(char) * len + 1)));
		return (0);
	while (s1)
	{
		s[i] = s1[i];
		i++;
	}
	while (s2)
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}