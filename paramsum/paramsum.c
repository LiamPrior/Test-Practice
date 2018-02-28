/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 18:44:30 by lprior            #+#    #+#             */
/*   Updated: 2018/02/26 19:03:01 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int ac)
{
	char c;
	if (ac > 9)
	{
		ft_putnbr(ac / 10);
		ft_putnbr(ac % 10);
	}
	else
	{
		c = ac + 48;
		write(1, &c, 1);
	}
}

int main(int argc, char **argv)
{
	int i = argc - 1;
	ft_putnbr(i);
	write(1, "\n", 1);
	**argv = 0;
	return (0);
}
