/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <gubaptis@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:52:27 by marvin            #+#    #+#             */
/*   Updated: 2024/08/27 14:52:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>

int ft_strlen(char *str)
{
	char idx;
	idx = 0;

	while(str[idx] != '\0')
	{
		idx++;
	}
	return(idx);
}
//#include <stdio.h>
int main()
{
	printf("pega ai: %d", ft_strlen("abcde"));
}
