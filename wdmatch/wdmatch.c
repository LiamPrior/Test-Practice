/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 14:04:57 by lprior            #+#    #+#             */
/*   Updated: 2018/01/23 14:14:48 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int wdmatch(char *str, char *str2)
{
	int i;
	int l;

	i = 0;
	l = 0;
	while(str[i] && str2[l])
	{
		if (str2[l] == str[i])
			i++;
		l++;
	}
	if (str[i] == '\0')
		write(1, str, i);
	write(1, "\n", 1);
	return (0);
}

int main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	else
		write(1, "\n", 1);
	return (0);
}
