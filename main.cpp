#include <cstdio>
#include <cstring>
#pragma warning (disable : 4996)

//11723 ���չ��� 
int main() {
	char input[30];
	int num; //��� ������ �� 
	int m; //�����ؾ��ϴ¿����
	int s = 0; //��� �ִ� ������ S 
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

/*1008 float double
int main() {
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("%.9lf", a / b);
}
*/



/*
������ test ��Ģ����
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