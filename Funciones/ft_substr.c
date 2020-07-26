#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char *ft_substr (char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *s2;

	if(!(s2 = (char *)malloc(len)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		s2[i] = s[start + i];
		i++;
	}
	s2[i] = '\0';
	return(s2);
}

