#include <stdio.h>

int main()
{
	int i;
	char in[5]; 
	FILE *fp=fopen("me.txt", "w");
	fputs("�̸� : ��ȿ��\n",fp);
	fputs("�ֹι�ȣ : 050106-2123456\n",fp);
	fputs("��ȭ��ȣ : 010-1111-2222\n",fp);
	fputs("�����ϴ� ���� : ������, ��ä\n",fp);
	fputs("�����ϴ� �뷡 : �ѳ���\n",fp);
	
	fclose(fp); 
}
