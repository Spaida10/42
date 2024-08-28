/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubaptis <gubaptis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 03:19:44 by gubaptis          #+#    #+#             */
/*   Updated: 2024/08/28 03:19:44 by gubaptis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
	int idx;

	idx = 0;

	while(str[idx] != '\0')
	{
		if(str[idx] >= 'A' && str[idx] <= 'Z')
		{
			str[idx] += 32;
		}
		idx++;
	}
	return(str);
}
//#include <stdio.h>
int main()
{
	char str[] = "lorem ipsum";
	printf("pega ai: %s", ft_strlowcase(str));
}