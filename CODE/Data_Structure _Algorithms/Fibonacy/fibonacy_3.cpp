int fibonacy_dequy(int i)
{
	if (i == 0 || i == 1)
	{
		return (1);
	}
	else
	{
		return fibonacy_dequy(i - 1) + fibonacy_dequy(i - 2);
	}
}

void fibonacy_3(int n, int *p)
{
	for (int index = 0; index < n; ++index)
	{
		p[index] = fibonacy_dequy(index);
	}
}