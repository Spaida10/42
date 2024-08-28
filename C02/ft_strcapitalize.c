/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubaptis <gubaptis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 03:23:35 by gubaptis          #+#    #+#             */
/*   Updated: 2024/08/28 03:23:35 by gubaptis         ###   ########.fr       */
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

char *ft_strcapitalize(char *str)
{
	int idx;

	idx = 0;
	
	ft_strlowcase(str);

	if(str[0] >= 'a' || str[0] <= 'z')
	{
		str[0] -= 32;
	}

	while(str[idx] != '\0')
	{
		if(str[idx] == 32)
		{
			if(str[idx + 1] >= 'a' || str[idx + 1] <= 'z')
			{
				str[idx + 1] -= 32;
			}
		}
		idx++;
	}
	return(str);
}

//#include <stdio.h>
int main()
{
	char str[] = "O AFONSO COME BANANAS";
	printf("pega ai: %s", ft_strcapitalize(str));
}