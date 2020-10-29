#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define SIZE 5   //매크로에서 더 자세하게 다룸..define아래에서부터는 size의 단어를 모두5로 지정.  
int main(int argc, char *argv[]) {
	
	int i, average,sum, grade[SIZE];
	
	sum=0;
	for(i=0;i<SIZE;i++){
		
		printf("성적입력하시오:");
		scanf("%d",&grade[i]);
		sum+=grade[i];
	}
	
	average=sum/SIZE;
	printf("성적평균:%d\n",average);
	
	return 0;
}
