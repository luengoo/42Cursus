/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:05:56 by alluengo          #+#    #+#             */
/*   Updated: 2025/10/18 17:34:16 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(char const *str, ...);
int	ft_putchar_pf(int i);
int	ft_putstr_pf(char *str);
int	ft_putnbr_pf(long long nb);
int	ft_unsigned_pf(long long nb);

#endif
