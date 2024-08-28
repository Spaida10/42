/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubaptis <gubaptis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 02:23:11 by gubaptis          #+#    #+#             */
/*   Updated: 2024/08/28 02:23:11 by gubaptis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_lowercase(char *str)
{
	int idx;

	idx = 0;

	while(str[idx] != '\0')
	{
		if(str[idx] >= 'a' && str[idx] <= 'z')
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
	printf("pega ai: %d", ft_str_is_lowercase("abcde"));
}