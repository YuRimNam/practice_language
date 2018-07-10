#include <stdio.h>

int main()
{
	int i;
	char in[5]; 
	FILE *fp=fopen("me.txt", "w");
	fputs("이름 : 김효정\n",fp);
	fputs("주민번호 : 050106-2123456\n",fp);
	fputs("전화번호 : 010-1111-2222\n",fp);
	fputs("좋아하는 음식 : 떡볶이, 잡채\n",fp);
	fputs("좋아하는 노래 : 한남자\n",fp);
	
	fclose(fp); 
}
