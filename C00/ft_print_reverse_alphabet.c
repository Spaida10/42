/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 00:52:19 by marvin            #+#    #+#             */
/*   Updated: 2024/08/23 00:52:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

void ft_print_reverse_alphabet(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		write(1, &z, 1);
		z--;
	}
}

int main()
{
	ft_print_reverse_alphabet();
}