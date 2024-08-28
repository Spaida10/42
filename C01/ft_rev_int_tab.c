/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <gubaptis@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 22:57:57 by marvin            #+#    #+#             */
/*   Updated: 2024/08/27 22:57:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int idx;
	int decrem; 
	decrem = size - 1;

	idx = 0;

	while(idx < size / 2)
	{
		temp = tab[idx];
		tab[idx] = tab[decrem];
		tab[decrem] = temp;

		idx++;
		decrem--;
	}
}

int main()
{
	int tab[] = {0, 1, 2, 3, 4};
	ft_rev_int_tab(tab, 5);
}