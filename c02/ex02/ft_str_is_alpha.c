/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_str_is_alpha.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 17:01:30 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/04 19:00:17 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;
	int retourne;
	int j;

	i = 0;
	retourne = 1;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[j] != '\0')
		{
			if (!((str[i] < 91 && str[i] > 64) ||
			(str[i] < 123 && str[i] > 96)))
				retourne = 0;
			j++;
		}
		i++;
	}
	return (retourne);
}