/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 15:55:06 by lprior            #+#    #+#             */
/*   Updated: 2018/01/26 16:21:45 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *str)
{
	char *swag;
	int i;

	i = 0;
	while (str[i])
		i++;
	swag = (char *)malloc(i + 1);
	i = -1;
	while (str[++i])
		swag[i] = str[i];
	printf("%s\n", swag);
	swag[i] = '\0';
	return (swag);
}

int main(int argc, char **argv)
{
	if (argc)
		ft_strdup(argv[1]);
	return (0);
}
