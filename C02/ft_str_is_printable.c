/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubaptis <gubaptis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 02:45:30 by gubaptis          #+#    #+#             */
/*   Updated: 2024/08/28 02:45:30 by gubaptis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int idx;

	idx = 0;

	while(str[idx] != '\0')
	{
		if(str[idx] >= 32 && str[idx] <= 127)
		{
			idx++;
		}

		else
		{
			return(0);
		}
	}
	return(1);
}

//#include <stdio.h>
int main()
{
	printf("pega ai: %d", ft_str_is_printable("abcde"));
}