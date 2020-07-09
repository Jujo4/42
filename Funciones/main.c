#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <xlocale.h>

//void	*ft_memset(void *str, int c, size_t n);
//void	ft_bzero(void *str, size_t n);
//void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
//void	*ft_memmove(void *dest, const void *src, size_t n);
//void	*ft_memchr(const void *str, int c, size_t n);
//int	ft_memcmp(const void *s1, const void *s2, size_t n);
//size_t	ft_strlen(const char *str);
//char	*ft_strchr(const char *str, int c);
//char	*ft_strrchr(const char *str, int c);
//char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
//int	ft_strncmp(const char *s1, const char *s2, size_t n);
//int	ft_atoi(const char *str);
//int	ft_isalpha(int c);
//int	ft_isdigit(int c);
//int	ft_isalnum(int c);
//int	ft_isascii(int c);
//int	ft_isprint(int c);
//int	ft_toupper(int c);
//int	ft_tolower(int c);

int main()
{
	char s1[50] = "		  -hol6a mamonazo";
	char s2[50] = "hlla";
	// ft_memset(s1 + 5, '*', 5);
	// printf("%s\n", s1);

	// ft_bzero(s1, 5);
	// printf("%s", s1);
	
	//ft_memcpy(s2, s1, 7);
	//printf("%s\n", s2);

	ft_memccpy(s2, s1, 'm', 8);
	printf("%s\n", s2);
	
	// ft_memmove(s2, s1, 3);
	// printf("%s\n", s2);

	//printf("%s", ft_memchr(s1, 'h', 6));

	//printf("%d", ft_memcmp(s1, s2, 6));

	//printf("%zu", ft_strlen(s1));

	//printf("%s\n", ft_strchr(s1, 'm'));
	//printf("%s", strchr(s1, 'm'));

	//printf("%s\n", ft_strrchr(s1, 'o'));
	//printf("%s", strrchr(s1, 'o'));

	// printf("%s\n", strnstr(s1, s2, 9));
	// printf("%s", ft_strnstr(s1, s2, 9));

	// printf("%d\n", strncmp(s1, s2, 1));
	// printf("%d", ft_strncmp(s1, s2, 1));

	// printf("%d\n", atoi(s1));
	// printf("%d\n", ft_atoi(s1));

	// printf("%d\n", isalpha('y'));
	// printf("%d\n", ft_isalpha('y'));

	// printf("%d\n", isdigit('5'));
	// printf("%d\n", ft_isdigit('5'));

	// printf("%d\n", isalnum('t'));
	// printf("%d\n", ft_isalnum('t'));

	// printf("%d\n", isalnum('t'));
	// printf("%d\n", ft_isalnum('t'));

	// printf("%d\n", isascii('='));
	// printf("%d\n", ft_isascii('='));

	// printf("%d\n", isprint(0));
	// printf("%d\n", ft_isprint(0));

	// printf("%c\n", toupper('='));
	// printf("%c\n", ft_toupper('='));

	// printf("%c\n", tolower('!'));
	// printf("%c\n", ft_tolower('!'));

	return 0;
}