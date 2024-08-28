/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubaptis <gubaptis@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 23:50:42 by gubaptis          #+#    #+#             */
/*   Updated: 2024/08/27 23:50:42 by gubaptis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int idx;

	idx = 0;

	while(src[idx] != '\0' && idx < n)
	{
		dest[idx] = src[idx];
		idx++;
	}

	while(idx < n)
	{
		dest[idx] = '\0';
		idx++;
	}

	return(dest);
}

//#include <stdio.h>
int main()
{
	char tsed[] = "Guilherme";
	char crs[] = "Afonso";
	ft_strncpy(tsed, crs, 8);
	printf("pega ai: %s", tsed);
}
