/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:23:53 by alluengo          #+#    #+#             */
/*   Updated: 2025/08/20 14:53:59 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	tmp;

	index = 0;
	while (index < size / 2)
	{
		tmp = tab[index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = tmp;
		index++;
	}
}

/*int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array original: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    ft_rev_int_tab(arr, size);

    printf("Array invertido: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}*/
