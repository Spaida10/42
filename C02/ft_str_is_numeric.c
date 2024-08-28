/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubaptis <gubaptis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 02:06:53 by gubaptis          #+#    #+#             */
/*   Updated: 2024/08/28 02:06:53 by gubaptis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str)
{
	int idx;

	idx = 0;

	while(str[idx] != '\0')
	{
    	if (!(str[idx] >= 48 && str [idx] <= 57))
    	{
    		return(0);
    	}

		idx++;
    }
	return(1);
}
//#include <stdio.h>
int main()
{
	printf("pega ai: %d", ft_str_is_numeric("1234"));
}
