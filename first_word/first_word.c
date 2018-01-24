/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 13:48:23 by lprior            #+#    #+#             */
/*   Updated: 2018/01/23 14:02:50 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int first_word(char *str)
{
	int i;

	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	while (str[i] > ' ' && str[i])
		ft_putchar(str[i++]);
	ft_putchar('\n');
	return (0);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
