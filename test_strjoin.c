/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltun <aaltun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 13:49:21 by aaltun            #+#    #+#             */
/*   Updated: 2021/01/06 16:30:50 by aaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void test(char const *string, ...)
{
	va_list argList;
	
	va_start(argList, string);
	printf(string, argList);
	va_end(argList);
}
	
int main()
{
	test("Test print %s %d\n", "string", 55);
	return 0;
}
	
/* 	char			*dst;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!(dst = malloc(sizeof(*dst) * (strlen(s1) + strlen(s2) + 1))))
		return (NULL);
	while (s1[i] != '\0')
	{
		dst[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		dst[i + j] = s2[j];
		j++;
	}
	dst[i + j] = '\0';
	return (dst);
} */
