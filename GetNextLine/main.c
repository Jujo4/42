#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFF_SIZE 512

int main (int argc, char *argv[])
{
	char *text;
	int readed;

	if(!(text = malloc(BUFF_SIZE + 1)))
		return(-1);

	int file = open("text.txt", O_RDONLY);

	if (file != -1)
	/*{
		while(read(file, &text, sizeof(text != 0)))
		{
			printf("%c", text);
		}
	}*/
	{
		readed = read(file, text, BUFF_SIZE);
		text[readed] = 0;
	}
	printf("%s", text);
}
