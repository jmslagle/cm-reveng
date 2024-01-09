#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char secret1[8] = {4,13,15,6,21,25,82,19};
char secret2[8] = {45,8,0,47,20,20,29,13};


void fail(char *);
int check1(char *string) {
	char *a = string;
	int i;
	for (i=0;i<=7;i++) {
		switch(i%6) {
			case 0:
				if ((a[i]^'b')!=secret1[i]) {
					fail(a);
				}
				break;
			case 1:
				if ((a[i]^'a')!=secret1[i]) {
					fail(a);
				}
				break;
			case 2:
				if ((a[i]^'n')!=secret1[i]) {
					fail(a);
				}
				break;
			case 3:
				if ((a[i]^'a')!=secret1[i]) {
					fail(a);
				}
				break;
			case 4:
				if ((a[i]^'n')!=secret1[i]) {
					fail(a);
				}
				break;
			case 5:
				if ((a[i]^'a')!=secret1[i]) {
					fail(a);
				}
				break;


		} 
	printf("Char %c\n",a[i]);
	}
	return(1);
}

int check2(char *string) {
	char *a = string;
	char b[] = "rasp";
	int i;
	for (i=8;i<=15;i++) {
		if ((a[i]^b[i%4]) != secret2[i-8]) {
			fail(a);
		}

	printf("Char %c\n",a[i]);
	}
	return 1;
}


void fail(char *string) {
	printf("Sorry %s is not correct\n",string);
	exit(-1);
}

void hurray(char *string) {
	printf("Hurray!  %s is correct!\n",string);
	exit(0);
}

void usage(char **argv) {
	printf("Usage: %s <key>\n",argv[0]);
	exit(-1);
}
int main (int argc, char **argv) {


	if (argc<=1) {
		usage(argv);
	}

	if (strnlen(argv[1],1000)!=16) {
		fail(argv[1]);
	}

	if (!check1(argv[1])) {
		fail(argv[1]);
	}

	if (!check2(argv[1])) {
		fail(argv[1]);
	}
	hurray(argv[1]);
		
}

