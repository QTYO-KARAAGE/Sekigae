/*
 11/16/2021 8:30 am
 THIS PROGRAM HAS FATAL BUG!
 DO NOT USE THIS PROGRAM!
 
 11/16/2021 10:00 am
 FIXED BUG!
 YOU CAN USE THIS PROGRAM.
 THANK YOU.
 
 CREATED BY @QTYO_KARAAGE
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MEMBER 39

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
		while(x < MEMBER){ //��肪�Ȃ����`�F�b�N
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
		printf("���Ȕԍ�%2d >> �o�Ȕԍ�%2d\n", i + 1, seat[i]);
	}
	return (0);
}