#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	storage;

	storage = *a;
	*a = *b;
	*b = storage;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	enough;

	i = size;
	while (i > 0)
	{
		enough = 1;
		j = 0;
		while (j < i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap (&tab[j], &tab[j + 1]);
				enough = 0;
			}
			j++;
		}
		i--;
		if (enough == 1)
		{
			break ;
		}
	}
}

int main(void)
{
    int tab[]= { 10, 500, 6, 400, 290, 900 }, size = 6;
    ft_sort_int_tab(tab, size);
    int i = 0;

    while (i<size)
    {
    printf("%d\t", tab[i]);
    i++;

    }
}