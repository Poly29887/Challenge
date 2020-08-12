#include<stdio.h>
#include<math.h>
int main()
{
	long n1, n2,i,k,sum=0;
	double avg,ans,count=0,sumP=0;
	printf("Input : ");
	scanf("%ld",&n1);
	scanf("%ld", &n2);
	if (n1 < n2)
	{
		printf("Output : \n");
		for (i = n1; i <= n2; i++)
		{
			printf("%ld ", i);
			sum += i;
			count++;
		}
		avg = sum / count;
		printf("\n%.1lf", avg);
		for (i = n1; i <= n2; i++)
		{
			sumP += pow(i - avg, 2);
		}
		ans = sqrt(sumP / (count - 1));
		printf("\n%.2lf", ans);
	}
	else
	{
		printf("Output : \n");
		for (i = n1; i >= n2; i--)
		{
			printf("%ld ", i);
			sum += i;
			count++;
		}
		avg = sum / count;
		printf("\n%.2lf", avg);
		for (i = n2; i <= n1; i++)
		{
			sumP += pow(i - avg, 2);
		}
		ans = sqrt(sumP / (count - 1));
		printf("\n%.2lf", ans);
	}
	

}