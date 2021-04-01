/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhamsan <mkhamsan@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 19:48:04 by mkhamsan          #+#    #+#             */
/*   Updated: 2021/03/29 20:56:00 by mkhamsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */\

void	ft_putstr(char *str);

int	main(void)
{
char mystring[] = "Hello World";
char *firstchar;
firstchar = &mystring[0];
ft_putstr(firstchar);
return 0;
}
