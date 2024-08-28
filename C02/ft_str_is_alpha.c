/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubaptis <gubaptis@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 01:03:59 by gubaptis          #+#    #+#             */
/*   Updated: 2024/08/28 01:03:59 by gubaptis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_alpha(char *str)
{
	int idx;

	idx = 0;

    while(str[idx] != '\0')
	{
		if((str[idx] >= 'a' && str[idx] <= 'z') || (str[idx] >= 'A' && str[idx] <= 'Z'))
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
	printf("%d", ft_str_is_alpha("a"));
}
