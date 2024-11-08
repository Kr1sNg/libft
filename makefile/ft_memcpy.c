/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:45:51 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/08 17:59:53 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The memcpy() function copies n bytes (even 'null' characters) from memory 
// area src to memory area dest. The memory areas must not overlap. */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest || !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char	src[] = "R";
	char	dst1[] = "A";
	char	dst2[] = "A";

	printf("memcpy: %s\n", (char *)memcpy(dst1, src, 2));
	printf("ft_memcpy: %s\n", (char *)ft_memcpy(dst2, src, 2));
}
*/