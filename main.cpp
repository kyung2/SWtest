#include <cstdio>
#include <cstring>

#pragma warning (disable : 4996)
#define MAX 101
using namespace std;

int main() {
	char input[MAX], input2[MAX], input3[10], input4[MAX];


	puts("test1 그냥 scanf 공백포함");
	scanf("%s", input);
	puts(input);
	getchar();

	puts("test2 공백포함");
	scanf("%[^\n]", input2);
	input2[strlen(input2) - 1] = '\0';
	puts(input2);
	getchar();

	puts("test3 fgets 함수 공백포함");
	fgets(input3, sizeof(input3), stdin);
	printf("%s",input3);

	//getchar();
	puts("test3 fgets 함수 공백포함");
	gets_s(input4);
	puts(input4);




}
/*
//11723 집합문제 
int main() {
	char input[30];
	int num; //명령 수행할 수 
	int m; //수행해야하는연산수
	int s = 0; //비어 있는 공집함 S 
	scanf("%d", &m);
//	if (m < 1 && m > 300000) return 0;

	while (m--) {
		scanf("%s", &input);
		if (!strcmp(input, "add")) {
			scanf("%d", &num);
			if (num < 1 && num > 20) return 0;
			else num--;
			s = s | (1 << num);
		}
		else if (!strcmp(input, "remove")) {
			scanf("%d", &num);
			if (num < 1 && num > 20) return 0;
			else num--;
			s = s & (~(1 << num));
		}
		else if (!strcmp(input, "check")) {
			scanf("%d", &num);
			if (num < 1 && num > 20) return 0;
			else {
				num--;
				int tmp = s & ((1 << num));
				if (tmp) puts("1");
				else puts("0");
			}
		}
		else if (!strcmp(input, "toggle")) {
			scanf("%d", &num);
			if (num < 1 && num > 20) return 0;
			else num--;
			s = s ^ ((1 << num));

		}
		else if (!strcmp(input, "all")) {
			s = (1 << num) - 1;
		}
		else if (!strcmp(input, "empty")) {
			s = 0;
		}
	}
}
*/

/*1008 float double
int main() {
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("%.9lf", a / b);
}
*/



/*
나누기 test 사칙연산
int main() {
	int test, a, b;
	float result =0;
		scanf("%d%d", &a, &b);
		result =(float) a / b;
		printf("%1f \n", result);
			}
	*/

	// 2741
	/*
	int main() {
		int input;
		scanf("%d", &input);
		int i = 1;
		while (input--) {
			printf("%d\n", i);
			i++;
		}
	}
	*/