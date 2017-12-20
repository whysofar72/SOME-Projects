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

		printf("\n������ ���� �Է�(���� 0): ");

		scanf_s("%d", &decimal, 4);

		if (decimal == 0)

			break;

		else {

			index = DecimalToBinary(decimal, binary);

			printf("Binary code: %s\n", (binary + index));



		}

		if (decimal > 0) {

			for (i = 0; i < 32; i++) {   // 1's complement ����: ��Ʈ�� 1�̸� 0����, 0�̸� 1�� �ٲ� 

				if ((binary[i] == NULL) || (binary[i] == '0'))

					binary[i] = '1';

				else

					binary[i] = '0';

			}

			printf("\n-%d�� Binary code ��ȯ\n", decimal);

			printf("1's complement ������: %s\n", binary);




			if (binary[31] == '0')    // 2's complement ����: 1's complement ����� 1�� ���� (���� ������ bit���� �˻�)

				binary[31] = '1';     // ���� ������ bit�� '0'�̸� '1'�� �ٲ� �� �۾�����

			else {

				binary[31] = '0';     // ���� ������ bit�� '1'�̸� '0'���� �ٲ� �� ���� ���� bit���� 0�� ���� ������ ���� 

				for (i = 30; ((binary[i] == '1') && (i >= 0)); i--)   // '1'�̸� '0'���� �ٲ� �� ���� ���� bit�� 1�� �ø�.  

					binary[i] = '0';

				if (i >= 0)           // ���������� '0' bit�� �迭���� ã�� �ö�� 1�� ���� �� �۾� ����

					binary[i] = '1';

			}

			printf("2's complement ������: %s\n", binary);

		}

		for (i = 0; i <33; i++)

			binary[i] = '\0';

	}




	return 0;

}