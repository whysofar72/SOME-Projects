#include <stdio.h>
int main()
{
	int num1 = 20, num2 = 16; //�� ���ڸ� ��Ʈ ������ OR�����Ͽ� ���� ��Ʈ �������� 0,0������ ��ġ�ϴ� ��츦 �����ϰ� ��� 1�� ����Ͽ� ����
	int result1;

	result1 = num1 | num2;
	printf("��Ʈ ���� | ������ ��� %d \n", result1);

	return 0;
}