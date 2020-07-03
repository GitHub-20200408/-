#include <stdio.h>
#include <math.h>
  connter(){
   	int a;
    char b;
	printf("请选择计算器模式：1(简单计算器)  2(三角计算器)");
	scanf("%d",&a); 
	if(a==1){	
	double num1,num2;
	char c;
		printf("请输入计算式：");
	scanf("%lf%c%lf",&num1,&c,&num2);
	switch(c){
		case '+' :printf("%lf",num1+num2);break;
		case '-' :printf("%lf",num1-num2);break;
		case '*' :printf("%lf",num1*num2);break;
		case '/' :printf("%lf",num1/num2);break;
		case '%' :printf("%lf",(int)num1%(int)num2);break;
		default :printf("该计算器只能进行+ - * / %  sin  cos tag 的运算"); 
	       }
	}
	else if(a==2){
		int choose; 
		double num3; 
	printf("计算sin请输入1(弧度角)\n"); 
	printf("计算cos请输入2(弧度角)\n");
	printf("计算tan请输入3(弧度角)\n");
	scanf("%d(%lf)",&choose,&num3);
	if(choose==1)
	printf("sin(%lf)=%lf",num3,sin(num3));
	if(choose==2)
	printf("cos(%lf)=%lf",num3,cos(num3));
	if(choose==3)
	printf("sin(%lf)=%lf",num3,tan(num3));
	}
	printf("\n");
	printf("continue?");
	printf("输入Y继续进行计算\n"); 
	fflush(stdin);
	scanf("%c",&b);
	if(b=='Y')
    connter();
	else 
	printf("结束");
}
int main()
{
	connter();	
    return 0;
}
