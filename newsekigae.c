/*
 CREATED BY @QTYO_KARAAGE
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MEMBER 40

int main(void)
{
	
	int seat[MEMBER];
	int number;
	int i;
	int x;
	int n;
	int seat_no;
	
	srand((unsigned int)time(NULL));
	
	for (i = 0; i < MEMBER; i++){
		seat[i] = 0;
	}
	i = 0;
	while (i < MEMBER){
		seat_no = (rand() % MEMBER + 1);
		
		x = 0;
		while(x < MEMBER){ //被りがないかチェック
			for (n = 0; n < MEMBER; n++){
				if(seat[n] == seat_no){
					seat_no = (rand() % MEMBER + 1);
					n = 0;
				}
			}
			x++;
		}
		seat[i] = seat_no;
		i++;
	}
	
	for (i = 0; i < MEMBER; i++){
		printf("座席番号%2d >> 出席番号%2d\n", i + 1, seat[i]);
	}
	return (0);
}
