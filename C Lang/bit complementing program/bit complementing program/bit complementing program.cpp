#include <stdio.h>

#include <stdlib.h>




#include <iostream>

#include <string>

#include <cmath>




using namespace std;




int DecimalToBinary(unsigned int dec, char *bptr)

{



	int ix = 32; // subscript of current character

	do

	{

		bptr[--ix] = '0' + dec % 2;

		dec /= 2;

	} while (dec);



	return  (ix);    // ix is offset into char array where answer begins

}




int main()

{

	int decimal, index, i;

	char binary[33] = { 0 };



	while (1) {

		printf("\n십진수 값을 입력(종료 0): ");

		scanf_s("%d", &decimal, 4);

		if (decimal == 0)

			break;

		else {

			index = DecimalToBinary(decimal, binary);

			printf("Binary code: %s\n", (binary + index));



		}

		if (decimal > 0) {

			for (i = 0; i < 32; i++) {   // 1's complement 수행: 비트가 1이면 0으로, 0이면 1로 바꿈 

				if ((binary[i] == NULL) || (binary[i] == '0'))

					binary[i] = '1';

				else

					binary[i] = '0';

			}

			printf("\n-%d의 Binary code 변환\n", decimal);

			printf("1's complement 수행후: %s\n", binary);




			if (binary[31] == '0')    // 2's complement 수행: 1's complement 결과에 1을 더함 (제일 오른쪽 bit부터 검사)

				binary[31] = '1';     // 제일 오른쪽 bit가 '0'이면 '1'로 바꾼 후 작업종료

			else {

				binary[31] = '0';     // 제일 오른쪽 bit가 '1'이면 '0'으로 바꾼 후 다음 왼쪽 bit부터 0이 나올 때까지 진행 

				for (i = 30; ((binary[i] == '1') && (i >= 0)); i--)   // '1'이면 '0'으로 바꾼 후 다음 왼쪽 bit로 1을 올림.  

					binary[i] = '0';

				if (i >= 0)           // 마지막으로 '0' bit인 배열방을 찾아 올라온 1을 설정 후 작업 종료

					binary[i] = '1';

			}

			printf("2's complement 수행후: %s\n", binary);

		}

		for (i = 0; i <33; i++)

			binary[i] = '\0';

	}




	return 0;

}