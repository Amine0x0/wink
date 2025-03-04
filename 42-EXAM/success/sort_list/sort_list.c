/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:05:57 by gicomlan          #+#    #+#             */
/*   Updated: 2025/02/26 01:07:37 by maboulah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

void    ft_swap(int *a, int *b)
{
    int    tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

t_list    *sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list    *tmp;

    tmp = lst;
    while (lst->next != NULL)
    {
        if (((*cmp)(lst->data, lst->next->data)) == 0)
        {
            ft_swap(&lst->data, &lst->next->data);
            lst = tmp;
        }
        else
            lst = lst->next;
    }
    lst = tmp;
    return (lst);
}
