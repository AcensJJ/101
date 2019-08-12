/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_grille.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 16:18:17 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 16:18:18 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void    ft_print_grille(char grille[4][4])
{
    int x;
    int y;

    x = 0;
    y = 0;
    while (x != 4)
    {
        y = 0;
        while (y != 4)
        {
            write(1, &grille[x][y], 1);
            y++;
        }
        write(1, "\n", 1);
        x++;
    }
}