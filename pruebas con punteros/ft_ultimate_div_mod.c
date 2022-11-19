void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}

int main()
{
    int *a;
    int *b;
    int numb1;
    int numb2;

    numb1 = 10;
    numb2 = 5;
    
    a = &numb1;
    b = &numb2;

    ft_ultimate_div_mod(a, b);

    return(0);
}