/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   equr_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 17:33:57 by lprior            #+#    #+#             */
/*   Updated: 2018/01/25 20:57:49 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str, int i)
{
	int l;

	l = 0;
	while (l < i)
	{
		ft_putchar(str[l]);
		l++;
	}
}

void epur_str(char *str)
{
	int i;
	
	i = -1;
	while (*str != '\0')
	{
		while (*str == ' ' || *str == '\t')
			str++;
		if (i != -1 && *str != '\0')
			ft_putchar(' ');
		i = 0;
		while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
			i++;
		ft_putstr(str, i);
		str += i;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	ft_putchar('\n');
	return (0);
}
