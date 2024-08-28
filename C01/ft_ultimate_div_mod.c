/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 02:39:14 by marvin            #+#    #+#             */
/*   Updated: 2024/08/23 02:39:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/
/*#include <stdio.h>*/

void ft_ultimate_div_mod(int *a, int *b)
{
	*a = *a / *b;
	*b = *a % *b;
}

int main()
{
	int *a = 95;
	int *b = 2;
	ft_ultimate_div_mod(*a, *b);
	printf("pega aí: %d, %d\n", *a, *b);
}