#include <iostream>

int main(int ac, char **av)
{
	int	i;
	int	j;
	char	c;

	i = 1;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (av[i] != NULL)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			if (av[i][j] > 96 && av[i][j] < 123)
				c = av[i][j] - 32;
			else
				c = av[i][j];
			std::cout << c;
			j++;
		}
		std::cout << " ";
		i++;
	}
	std::cout << std::endl;
}
