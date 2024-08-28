/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 02:06:15 by marvin            #+#    #+#             */
/*   Updated: 2024/08/23 02:06:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/
/*#include <stdio.h>*/

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main()
{
	int num = 19;
	int *nbr1 = &num;
	int **nbr2 = &nbr1;
	int ***nbr3 = &nbr2;
	int ****nbr4 = &nbr3;
	int *****nbr5 = &nbr4;
	int ******nbr6 = &nbr5;
	int *******nbr7 = &nbr6;
	int ********nbr8 = &nbr7;
	int *********nbr9 = &nbr8;

	ft_ultimate_ft(nbr9);
	
	printf("pega aí: %d", num);
}