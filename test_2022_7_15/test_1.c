
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int my_strlen(char*arr)
{
	int count = 0;
	while (*arr !='\0')
	{
		count++;
		arr++;
	}
	return count;
}
int Facl(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
int Fac2(int n)
{
	if (n == 1)
		return 1;
	if (n > 1)
		return n * Fac2(n - 1);
}
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
