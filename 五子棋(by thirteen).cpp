#include<stdio.h>
#include <unistd.h>
void Print(int qipan[15][15]);
int Panduan(int qipan[15][15]); 
int main(){
	printf("��ʼ���̣�\n");
	printf("δʹ��Ϊ+������Ϊ@������ΪO \n");
    	 
	int qipan[15][15];
	for(int i=0;i<15;i++){
		for(int j=0;j<15;j++){
			qipan[i][j]=0;
		}
	}
	Print(qipan);
	//��һ�γ�ʼ������
	
	int m,n;
//m ��  n�� 	
	while(1){
		printf("--------------------------------------------\n");
		printf("----------���ӳ���----------\n");
		printf("����������λ�� �� �У��Կո�ֿ���\n"); 
	    scanf("%d %d",&m,&n);
	    if(*(qipan[m-1]+n-1)==0){
	    	*(qipan[m-1]+n-1) = 1;
	    }
	    else{
	    	printf("��������ʹ�ã���������������\n");
			scanf("%d %d",&m,&n);
			*(qipan[m-1]+n-1) = 1;
	    } 
    	
    	
		printf("\n");
		Print(qipan);
		printf("---δʹ��Ϊ+������Ϊ@������ΪO---\n");
		
		if(Panduan(qipan) == true){
			printf("-----�ڷ���ʤ-----\n");
			break; 
		}
		
		printf("--------------------------------------------\n");
		printf("----------���ӳ���----------\n");
		printf("����������λ�� �� �У��Կո�ֿ���\n"); 
		scanf("%d %d",&m,&n);
	    if(*(qipan[m-1]+n-1)==0){
	    	*(qipan[m-1]+n-1) = 2;
	    }
	    else{
	    	printf("��������ʹ�ã���������������\n");
			scanf("%d %d",&m,&n);
			*(qipan[m-1]+n-1) = 2;
	    } 
    	
		printf("\n");
		Print(qipan);
		printf("---δʹ��Ϊ+������Ϊ@������ΪO---\n");
		if(Panduan(qipan) == true){
			printf("-----�׷���ʤ-----\n");
			break; 
		}
	}

    system("pause");
	return 0;
}

void Print(int qipan[15][15]){
	for(int i=0;i<15;i++){
		for(int j=0;j<15;j++){
//			printf("%d ", *(qipan[i]+j) );
			if(*(qipan[i]+j) == 0){
				printf("+ ");
			} 
			if(*(qipan[i]+j) == 1){
				printf("@ ");
			}
			if(*(qipan[i]+j) == 2){
				printf("O ");
			}
		}
		printf("\n");
	}
}

int Panduan(int qipan[15][15]){
	int pd;
	for(int i=0;i<15;i++){
		for(int j=0;j<15;j++){
			if(*(qipan[i]+j)==1 && *(qipan[i+1]+j)==1 && *(qipan[i+2]+j)==1 && *(qipan[i+3]+j)==1 && *(qipan[i+4]+j)==1){
				pd=1;
				break;
			}
			if(*(qipan[i]+j)==1 && *(qipan[i]+j+1)==1 && *(qipan[i]+j+2)==1 && *(qipan[i]+j+3)==1 && *(qipan[i]+j+4)==1){
				pd=1;
				break;
			}
			if(*(qipan[i]+j)==1 && *(qipan[i+1]+j+1)==1 && *(qipan[i+2]+j+2)==1  && *(qipan[i+3]+j+3)==1 && *(qipan[i+4]+j+4)==1 ){
				pd=1;
				break;
			} 
			// �׺� һ���ж� 
			if(*(qipan[i]+j)==2 && *(qipan[i+1]+j)==2 && *(qipan[i+2]+j)==2 && *(qipan[i+3]+j)==2 && *(qipan[i+4]+j)==2){
				pd=1;
				break;
			}
			if(*(qipan[i]+j)==2 && *(qipan[i]+j+1)==2 && *(qipan[i]+j+2)==2 && *(qipan[i]+j+3)==2 && *(qipan[i]+j+4)==2){
				pd=1;
				break;
			}
			if(*(qipan[i]+j)==2 && *(qipan[i+1]+j+1)==2 && *(qipan[i+2]+j+2)==2  && *(qipan[i+3]+j+3)==2 && *(qipan[i+4]+j+4)==2 ){
				pd=1;
				break;
			} 
		}
	}
	
	if(pd==1){
		return true;
	}
	else{
		return false;
	}
} 

// by thirteen  
