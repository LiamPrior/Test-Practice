/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 16:00:33 by lprior            #+#    #+#             */
/*   Updated: 2018/01/25 16:36:21 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_verif(char *str, char c, int idx)
{
	int i;

	i = 0;
	while (i < idx)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int ft_union(char *str, char *str2)
{
	int i;
	int len;

	i = 0;
	while(str[i])
	{
		if (ft_verif(str, str[i], i) == 1)
			ft_putchar(str[i]);
		i++;
	}
	len = i;
	i = 0;
	while (str2[i])
	{
		
		if (ft_verif(str2, str2[i], i) == 1)
			if (ft_verif(str, str2[i], len) == 1)
				ft_putchar(str2[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}

int main(int argc, char **argv)
{
	if(argc == 3)
		ft_union(argv[1], argv[2]);
	else
		write(1, "\n", 1);
	return (0);
}
