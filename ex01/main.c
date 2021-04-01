/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhamsan <mkhamsan@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:23:49 by mkhamsan          #+#    #+#             */
/*   Updated: 2021/03/30 14:17:00 by mkhamsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int main(void)
{
int value;
int *ptr;
int **ptr2;
int ***ptr3;
int ****ptr4;
int *****ptr5;
int ******ptr6;
int *******ptr7;
int ********ptr8;
int *********ptr9;

ptr = &value;
ptr2 = &ptr;
ptr3 = &ptr2;
ptr4 = &ptr3;
ptr5 = &ptr4;
ptr6 = &ptr5;
ptr7 = &ptr6;
ptr8 = &ptr7;
ptr9 = &ptr8;

value = 32;
printf("Value is %d\n", value);
ft_ultimate_ft(ptr9);
printf("Value is now %d\n", value);
}
