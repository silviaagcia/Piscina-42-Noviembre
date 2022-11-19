/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:26:42 by laumoral          #+#    #+#             */
/*   Updated: 2022/11/13 12:35:48 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
			str++;
		else
			return (0);
	}
	return (1);
}
/*int main(void)
{
    char str[] = "t7";

    int result = ft_str_is_alpha(str);
    
    if (result == 0)
        write(1,"KO", 2);
    else if (result == 1)
        write(1, "OK", 2);
    return (0);
}*/
