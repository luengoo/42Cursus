/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 13:48:01 by alluengo          #+#    #+#             */
/*   Updated: 2025/08/24 16:53:46 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memset(void *dest, int c, unsigned int n)
{
    int i;

    i = 0;
    c = (unsigned char)c;
    while (n > i)
    {
        dest[i] = c;
        i++;
    }
    return (dest);
}