void fibonacy_2(int number, int* p)
{
	p[0] = 1;
	p[1] = 1;
	for (int index = 1; p[index] <= number; )
	{
		++index;
		p[index] = p[index - 1] + p[index - 2];
	}
}