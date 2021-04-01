/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhamsan <mkhamsan@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:41:59 by mkhamsan          #+#    #+#             */
/*   Updated: 2021/03/29 18:51:47 by mkhamsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
int avar;
int bvar;
int *a;
int *b;

avar = 111;
bvar = 222;
a = &avar;
b = &bvar;
printf("The value of A is %d\n", avar);
printf("The value of B is %d\n", bvar);
ft_swap(a, b);
printf("The value of A is %d\n", avar);
printf("The value of B is %d\n", bvar);
return (0);
}
