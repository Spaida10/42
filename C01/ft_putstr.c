/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <gubaptis@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:49:13 by marvin            #+#    #+#             */
/*   Updated: 2024/08/27 14:49:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void ft_putstr(char *str)
{
	int idx;
	idx = 0;

	while(str[idx] != '\0')
	{
		write(1, &str[idx], 1);
		idx++;
	}
}

int main()
{
	ft_putstr("abcde");
}