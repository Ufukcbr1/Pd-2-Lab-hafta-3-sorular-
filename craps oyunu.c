#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int zaratma(void){


	int zar1yuz,zar2yuz;
	int zartoplam=0;



	zar1yuz=1+rand()%6;

	printf("zar1:%d\n",zar1yuz);

	zar2yuz=1+rand()%6;

	printf("zar2:%d\n",zar2yuz);

	zartoplam=zar1yuz+zar2yuz;

	return zartoplam;
}






int main (){

	srand(time(NULL));
	int zartoplam=0;
	int puan1=0;
	int puan2=0;


	zartoplam=zaratma();
	printf("Baslangict aatilan zarlarýn toplami:%d\n",zartoplam);


	if(zartoplam==7||zartoplam==11){

			printf("Tebrikler kazandiniz!!");


	}





	else if(zartoplam==2||zartoplam==3||zartoplam==12){

			printf("Maalesef kaybettiniz!!");
	}




	else if(zartoplam==4||zartoplam==5||zartoplam==6||zartoplam==8||zartoplam==9||zartoplam==10){
	printf("Benim puanim:%d\n",zartoplam);
	puan1=zartoplam;


	while(puan1!=puan2){


		puan2=zaratma();
		printf("Benim puanim:%d\n",puan2);
		if(puan1==puan2){

				printf("Tebrikler kazandiniz!!");

				 break;
		}



		else if(puan2==7){


				printf("Maalesef kaybettiniz!!");
			    break;
		}
	}



	}
	return 0 ;
}
