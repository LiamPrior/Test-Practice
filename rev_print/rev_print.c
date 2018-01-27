/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 12:57:15 by lprior            #+#    #+#             */
/*   Updated: 2018/01/26 13:06:09 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void rev_print(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (str[i])
	{
		ft_putchar(str[i]);
		i--;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		rev_print(argv[1]);
	write(1, "\n", 1);
	return (0);
}
		
