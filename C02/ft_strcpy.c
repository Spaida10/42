/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubaptis <gubaptis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 23:28:01 by gubaptis          #+#    #+#             */
/*   Updated: 2024/08/27 23:28:01 by gubaptis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int idx;

	idx = 0;

	while(src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
}

//#include <stdio.h>
int main ()
{
	char tsed[] = "";
	char crs[] = "Afonso";
	ft_strcpy(tsed, crs);
	printf("pega ai: %s", tsed);
}