void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int main()
{
    int a;
    int b;
    int *div;
    int *mod;

    a = 10;
    b = 5;
    div = &a;
    mod = &b;

    ft_div_mod(a, b, div, mod);

    return(0);
}