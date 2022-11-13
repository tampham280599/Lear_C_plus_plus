//in n so fibonacy dau tien
void fibonacy_1(int n, int *p)
{
	p[0] = 1;
	p[1] = 1;
	for (int index = 2; index < n; ++index)
	{
		p[index] = p[index - 1] + p[index - 2];
	}
}