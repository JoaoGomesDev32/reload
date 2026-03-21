#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int	fd;
	char	buffer[100];
	int	bytes;

	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
}