#include <stdio.h>
#include <math.h>
  connter(){
   	int a;
    char b;
	printf("��ѡ�������ģʽ��1(�򵥼�����)  2(���Ǽ�����)");
	scanf("%d",&a); 
	if(a==1){	
	double num1,num2;
	char c;
		printf("���������ʽ��");
	scanf("%lf%c%lf",&num1,&c,&num2);
	switch(c){
		case '+' :printf("%lf",num1+num2);break;
		case '-' :printf("%lf",num1-num2);break;
		case '*' :printf("%lf",num1*num2);break;
		case '/' :printf("%lf",num1/num2);break;
		case '%' :printf("%lf",(int)num1%(int)num2);break;
		default :printf("�ü�����ֻ�ܽ���+ - * / %  sin  cos tag ������"); 
	       }
	}
	else if(a==2){
		int choose; 
		double num3; 
	printf("����sin������1(���Ƚ�)\n"); 
	printf("����cos������2(���Ƚ�)\n");
	printf("����tan������3(���Ƚ�)\n");
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
	printf("����Y�������м���\n"); 
	fflush(stdin);
	scanf("%c",&b);
	if(b=='Y')
    connter();
	else 
	printf("����");
}
int main()
{
	connter();	
    return 0;
}
