/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhamsan <mkhamsan@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 21:12:07 by mkhamsan          #+#    #+#             */
/*   Updated: 2021/03/29 21:19:26 by mkhamsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_strlen(char *str);

int	main(void)
{
char *ptrstring;
int result;
char mystring[] = "Hello World";

ptrstring = &mystring[0];
result = ft_strlen(ptrstring);
printf("The length of your string is %d", result);
}
