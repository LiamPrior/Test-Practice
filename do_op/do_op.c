/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 14:51:44 by lprior            #+#    #+#             */
/*   Updated: 2018/01/26 15:09:10 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void do_op(char *num1, char *op, char *num2)
{
	int n1;
	int n2;

	n1 = atoi(num1);
	n2 = atoi(num2);
	if (*op == '+')
		printf("%d", n1 + n2);
	else if (*op == '-')
		printf("%d", n1 - n2);
	else if (*op == '/')
		printf("%d", n1 / n2);
	else if (*op == '*')
		printf("%d", n1 * n2);
	else if (*op == '%')
		printf("%d", n1 % n2);
}

int main(int argc, char **argv)
{
	if (argc == 4)
		do_op(argv[1], argv[2], argv[3]);
	printf("\n");
	return (0);
}
