/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:22:34 by laumoral          #+#    #+#             */
/*   Updated: 2022/11/13 13:27:04 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			str++;
		else
			return (0);
	}
	return (1);
}
/*int main(void)
{
    char str[] = "hola";

    int result = ft_str_is_lowercase(str);
    
    if (result == 0)
        write(1,"KO", 2);
    else if (result == 1)
        write(1, "OK", 2);
    return (0);
}*/
