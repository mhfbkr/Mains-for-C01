/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhamsan <mkhamsan@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:55:57 by mkhamsan          #+#    #+#             */
/*   Updated: 2021/03/29 19:09:00 by mkhamsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
int a;
int b;
int divres;
int modres;
int *div;
int *mod;

a = 11;
b = 5;
div = &divres;
mod = &modres;

ft_div_mod(11, 5, div, mod);

printf("The value of the division of var a (%d) by var b (%d) is (%d)\n", a, b, divres);
printf("The value of the modulo of var a (%d) by var b (%d) is (%d)\n", a, b, modres);
}

