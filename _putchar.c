#include <unistd.h>


static char buffer[BUFFER_SIZE];
static int buffer_index = 0;

/**
* _putchar - writes a character to the buffer and flushes when full.
* @c: the character to be written
*
* Return: 1 on success, -1 on error
*/

int _putchar(char c)
{
	if (buffer_index >= BUFFER_SIZE)
	{
	_flush_buffer();
	}

	buffer[buffer_index++] = c;
	return (1);
}

/**
* _flush_buffer - flushes the buffer by writing its contents to stdout.
*/
void _flush_buffer(void)
{
	if (buffer_index > 0)
	{
		write(1, buffer, buffer_index);
		buffer_index = 0;
	}
}

