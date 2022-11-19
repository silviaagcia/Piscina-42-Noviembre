void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
    int *a;
    int *b;
    int i;
    int x;

    i = 1;
    x = 2;
    
    a = &i;
    b = &x;

    ft_swap(a, b);
    return (0);
}