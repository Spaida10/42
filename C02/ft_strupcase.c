/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubaptis <gubaptis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 03:05:29 by gubaptis          #+#    #+#             */
/*   Updated: 2024/08/28 03:05:29 by gubaptis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str)
{
	int idx;

	idx = 0;

	while(str[idx] != '\0')
	{
		if(str[idx] >= 'a' && str[idx] <= 'z')
		{
			str[idx] -= 32;
		}
		idx++;
	}
	return(str);
}

int main()
{
	char str[] = "lorem ipsum";
	printf("pega ai: %s", ft_strupcase(str));
}