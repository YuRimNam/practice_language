#include <stdio.h>

/*union student {
	int id;
	int no;
} s1;

int main() {
	s1.id = 1517;
	printf("%d %d\n", s1.id, s1.no);
	s1.no = 17;
	printf("%d %d", s1.id, s1.no);
}*/

union ip_addr {
	unsigned int addr;
	unsigned char saddr[4];
} ip;

int main() {
	ip.addr=0x01020304;
	printf("%d.%d.%d.%d", ip.saddr[3],ip.saddr[2],ip.saddr[1],ip.saddr[0]); 
}
