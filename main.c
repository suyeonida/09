#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define SIZE 5   //��ũ�ο��� �� �ڼ��ϰ� �ٷ�..define�Ʒ��������ʹ� size�� �ܾ ���5�� ����.  
int main(int argc, char *argv[]) {
	
	int i, average,sum, grade[SIZE];
	
	sum=0;
	for(i=0;i<SIZE;i++){
		
		printf("�����Է��Ͻÿ�:");
		scanf("%d",&grade[i]);
		sum+=grade[i];
	}
	
	average=sum/SIZE;
	printf("�������:%d\n",average);
	
	return 0;
}
