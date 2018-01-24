
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 14:28:58 by lprior            #+#    #+#             */
/*   Updated: 2018/01/23 16:31:14 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
	int i;

	i = 0;
	if (a <= 0 || b <= 0)
		return (0);
	if (a % b == 0)
	{
		if (a > b)
			return (a);
		if (b > a)
			return (b);
	}	
	while ((i/a != b) && (i/b != a))
			i++;
	printf("%d\n", i);
	return (i);
}

int main()
{
	lcm(9, 2);
	return (0);
}
