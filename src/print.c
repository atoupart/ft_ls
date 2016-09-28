#include "ft_ls.h"

void	print(t_2lst_info *lst, int bol)
{
	if (bol)
	{
		if (g_flag & ARG_L)
			print_list(lst);
		else
			print_name(lst);
	}
	else
	{
		if (g_flag & ARG_L)
			print_one(lst);
		else
			ft_putendl(lst->print_l[L_NAME]);
	}
}
