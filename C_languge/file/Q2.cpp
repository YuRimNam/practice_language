#include <stdio.h>
#include <string.h>

int main()
{
	char st[100], dst[50][100];
	int len;
	int cnt1=0, cnt2=0;
	int i;
	
	FILE *in=fopen("input2.txt","r");
	FILE *out=fopen("output2.txt","w");
	
	fgets(st, 101, in);
	len=strlen(st);
	
	for (i=0;i<=len;i++)
	{
		if (st[i]==' '||st[i]=='NULL')
		{
			dst[cnt1][cnt2]='\0';
			cnt1++;
			cnt2=0;
		}
		else
		{
			dst[cnt1][cnt2]=st[i];
			cnt2++;
		}
	}
	for (i=0; i<=cnt1;i++)
	{
		fputs(dst[i],out);
		fputc('\n',out);
	}
	fclose(in);
	fclose(out);
	return 0;
}
