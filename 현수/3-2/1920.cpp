#include<cstdio>
#include<algorithm>
int ar[100000] = { 0 }, n, m, a;
void search(int k)
{
	int start = 0, end = n - 1, mid = (start + end) >> 1;
	while (ar[mid] != k)
	{
		mid = (start + end) >> 1;
		if (end < start)
		{
			printf("0\n");
			return;
		}
		if (ar[mid] > k)
			end = mid - 1;
		else if (ar[mid] < k)
			start = mid + 1;
	}
	printf("1\n");
}
int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		ar[i] = a;
	}
	std::sort(ar, ar + n);
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &a);
		search(a);
	}
}