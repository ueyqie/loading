#include <stdio.h>
int main(void)
{
	float nian;
	double sui;
	double miao;
	printf("输入你的年龄:\n");
	scanf("%f",&nian);
	
	printf("输入参数:\n");
	scanf("%e",&sui);

	miao=wait(nian,sui);
	
	printf("我活了%e秒",miao);
	return 0;
}
double wait(float nian,double sui)
{
	double miao =nian*sui;
	return miao;
}
