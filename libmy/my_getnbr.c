/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** libmy
*/

static int nb_compare(char const *str, int i, int *nb, int *tmp)
{
	if (str[i] >= '0' && str[i] <= '9') {
		(*nb) = (*nb) * 10 + (str[i] - '0');
		if (str[i + 1] < '0'
		|| str[i + 1] > '9' || str[i + 1] == '\0') {
			*nb = (*nb) * (*tmp);
			return (*nb);
		}
	}
	return (0);
}

int my_getnbr(char const *str)
{
	int i = 0;
	int nb = 0;
	int tmp = 1;

	if (str[i] == '-') {
		tmp = tmp * (-1);
		i = i + 1;
	}
	while (str[i] != '\0') {
		if (nb > 2147483647 || nb < -2147483647) {
			return (0);
		}
		if (nb_compare(str, i, &nb, &tmp) != 0)
			return (nb);
		i = i + 1;
	}
	nb = nb * tmp;
	return (nb);
}
