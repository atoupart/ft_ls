#include "ft_ls.h"

int		lest_go(char *path)
{
	DIR				*fd_dir;
	t_2lst_info		*begin_lst;

	if ((fd_dir = opendir(path)) == NULL)
	{
		fail(path);
		return (-1);
	}
	if ((begin_lst = read_dir(fd_dir, path)) == NULL)
		return (-1);
	if ((closedir(fd_dir)) == -1)
	{
		fail("closedir");
		exit(EXIT_FAILURE);
	}
	print(begin_lst, 1);
	if (g_flag & ARG_RR)
		recursive(path, begin_lst);
	else
		del_2lst_info(&begin_lst);
	ft_strdel(&path);
	return (1);
}
