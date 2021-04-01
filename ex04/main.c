/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhamsan <mkhamsan@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 19:19:57 by mkhamsan          #+#    #+#             */
/*   Updated: 2021/03/29 19:45:49 by mkhamsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
int a;
int b;
int *ptra;
int *ptrb;

a = 10;
b = 5;

ptra = &a;
ptrb = &b;

printf("The value of var a is %d. The value of var b is %d\n", a, b);
printf("The value of pointer a is %d. The value of pointer b is %d\n", *ptra, *ptrb);

ft_ultimate_div_mod(ptra, ptrb);

printf("The value of A divided by B (var a) is %d. The value of A modulo B (var b) is %d\n", *ptra, *ptrb);
return 0;
}
