#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
	int student_no;
	int seat_no;
	int seat[39];
	int i;
	int key_hit;
	
	srand((unsigned int)time(NULL));
	
	for (i = 0; i < 40; i++){
		seat[i] = 0;
	}
	
	seat_no = 0;
	
	for (student_no = 1; student_no <= 39; student_no++){
		//printf("oÈ”Ô†:%d\n", student_no);
		
		key_hit = 0;
		while (key_hit == 0){
			if (seat[seat_no] == 0){
				printf("È”Ô†=%2d", seat_no + 1);
				seat[seat_no] = student_no;
				key_hit = 1;
			}
			seat_no ++;
			if (seat_no >= 39){
			seat_no = 0;
			}	
		}
	}
	
	for (seat_no = 0; seat_no < 39; seat_no++){
		printf("È”Ô†:%2d==>ŠwĞ”Ô†:2013%2d\n", seat_no + 1, seat[seat_no]);
	}
	
	return (0);
	}