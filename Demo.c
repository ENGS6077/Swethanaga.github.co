#include<stdio.h>
int main()
{
	int n,sum=0;
	float avg;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the marks of students\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
		}
		avg=sum/n;
		printf("sum:%d",sum);
		printf("avg:%f",avg);
			
		return 0;

}