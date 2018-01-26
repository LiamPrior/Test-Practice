/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 14:40:57 by lprior            #+#    #+#             */
/*   Updated: 2018/01/25 15:03:59 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int rotone(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'z' || str[i] == 'Z')
			ft_putchar(str[i] -= 25);
		else if ((str[i] >= 'A' && str[i] <= 'Y') || (str[i] >= 'a' && str[i] <= 'y'))
			ft_putchar(str[i] += 1);
		else
			ft_putchar(str[i]);
		i++;
	}	
	ft_putchar('\n');
	return (0);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		rotone(argv[1]);
	else
		write(1,"\n", 1);
	return (0);
}
