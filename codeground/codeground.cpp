// codeground.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

// 아래 기본 제공된 코드를 수정 또는 삭제하고 본인이 코드를 사용하셔도 됩니다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

class num_selection {
public:
	int init(void);
};
int num_selection::init(void) {
	/* 아래 freopen 함수는 input.txt를 read only 형식으로 열고, 표준입력(키보드) 대신 input.txt 로 부터 읽어오겠다는 의미의 코드입니다.
	만약 본인 PC 에서 테스트 할 때는, 입력값을 input.txt에 저장한 후 freopen 함수를 사용하면
	그 아래에서 scanf 함수를 사용하여 표준입력 대신 input.txt 파일로 부터 입력값을 읽어 올 수 있습니다.
	또한, 본인 PC에서 freopen 함수를 사용하지 않고 표준입력을 사용하여 테스트하셔도 무방합니다.
	단, Codeground 시스템에서 "제출하기" 할 때에는 반드시 freopen 함수를 지우거나 주석(//) 처리 하셔야만 합니다. */
	// freopen("input.txt", "r", stdin);

	setbuf(stdout, NULL);

	int TC;
	int test_case;
	int i, n;
	unsigned int tmp, result;

	scanf("%d", &TC);
	for (test_case = 1; test_case <= TC; test_case++) {
		// 이 부분에서 알고리즘 프로그램을 작성하십시오. 기본 제공된 코드를 수정 또는 삭제하고 본인이 코드를 사용하셔도 됩니다.
		scanf("%d", &n);
		scanf("%u", &result);
		for (i = 2; i <= n; i++) {
			scanf("%u", &tmp);
			result = result^tmp;
		}

		// 이 부분에서 정답을 출력하십시오.
		printf("Case #%d\n", test_case);
		printf("%u\n", result);
	}

	return 0;	// 정상종료 시 반드시 0을 리턴해야 합니다.
}
class expect_candidate {
public:
	int init(void) {
		setbuf(stdout, NULL);

		int TC;
		int test_case;
		int i,n;
		int count,tmp,max;
		short arr[300000];
		scanf("%d", &TC);
		for (test_case = 1; test_case <= TC; test_case++) {
			count = 0, max = 0;
			scanf("%d", &n);
			for (i = 0; i < n; i++) {
				scanf("%d", &tmp);
				arr[i] = tmp;
				if (tmp > max) max = tmp;
			}
			printf("Case #%d\n", test_case);
			for (i = 0; i < n; i++) {
				if ((max - n) < arr[i]) count++;
			}
			printf("%d\n", count);
		}
		return 0;
	};
};
int main(void) {
	//num_selection n_s;
	expect_candidate n_s;
	n_s.init();
	return 0;
}