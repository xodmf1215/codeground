// codeground.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

// �Ʒ� �⺻ ������ �ڵ带 ���� �Ǵ� �����ϰ� ������ �ڵ带 ����ϼŵ� �˴ϴ�.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

class num_selection {
public:
	int init(void);
};
int num_selection::init(void) {
	/* �Ʒ� freopen �Լ��� input.txt�� read only �������� ����, ǥ���Է�(Ű����) ��� input.txt �� ���� �о���ڴٴ� �ǹ��� �ڵ��Դϴ�.
	���� ���� PC ���� �׽�Ʈ �� ����, �Է°��� input.txt�� ������ �� freopen �Լ��� ����ϸ�
	�� �Ʒ����� scanf �Լ��� ����Ͽ� ǥ���Է� ��� input.txt ���Ϸ� ���� �Է°��� �о� �� �� �ֽ��ϴ�.
	����, ���� PC���� freopen �Լ��� ������� �ʰ� ǥ���Է��� ����Ͽ� �׽�Ʈ�ϼŵ� �����մϴ�.
	��, Codeground �ý��ۿ��� "�����ϱ�" �� ������ �ݵ�� freopen �Լ��� ����ų� �ּ�(//) ó�� �ϼž߸� �մϴ�. */
	// freopen("input.txt", "r", stdin);

	setbuf(stdout, NULL);

	int TC;
	int test_case;
	int i, n;
	unsigned int tmp, result;

	scanf("%d", &TC);
	for (test_case = 1; test_case <= TC; test_case++) {
		// �� �κп��� �˰��� ���α׷��� �ۼ��Ͻʽÿ�. �⺻ ������ �ڵ带 ���� �Ǵ� �����ϰ� ������ �ڵ带 ����ϼŵ� �˴ϴ�.
		scanf("%d", &n);
		scanf("%u", &result);
		for (i = 2; i <= n; i++) {
			scanf("%u", &tmp);
			result = result^tmp;
		}

		// �� �κп��� ������ ����Ͻʽÿ�.
		printf("Case #%d\n", test_case);
		printf("%u\n", result);
	}

	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
}
class expect_candidate {
public:
	static int compare(const void * a, const void * b) {
		return (*(int*)a - *(int*)b);
	}
	int init(void) {
		setbuf(stdout, NULL);

		int TC;
		int test_case;
		int i,n;
		int count,tmp,max,pos;
		short arr[300000];
		scanf("%d", &TC);
		for (test_case = 1; test_case <= TC; test_case++) {
			count = 0, max = 0;
			scanf("%d", &n);
			for (i = 0; i < n; i++) {
				scanf("%d", &tmp);
				arr[i] = tmp;
			}
			qsort(arr, n, sizeof(int),compare);//sort + input

			for (i = 0; i < n; i++) {
				if (arr[i] +n -i > max) max = arr[i] + n - i;
			}

			printf("Case #%d\n", test_case);
			for (i = 0; i < n; i++) {
				if ((max - n) <= arr[i]) count++;
			}
			printf("%d\n", count);
		}
		return 0;
	};
};
class test_study {
public:
	static int compare(const void *a, const void *b) {
		if ((*(int*)a - *(int*)b) > 0) return -1;
		else return 1;
	}
	int init() {
		setbuf(stdout, NULL);
		int arr[200000];
		int TC;
		int test_case;
		int i, n, k,count;

		scanf("%d", &TC);
		for (test_case = 1; test_case <= TC; test_case++) {
			// �� �κп��� �˰��� ���α׷��� �ۼ��Ͻʽÿ�. �⺻ ������ �ڵ带 ���� �Ǵ� �����ϰ� ������ �ڵ带 ����ϼŵ� �˴ϴ�.
			count = 0;
			scanf("%d", &n);
			scanf("%d", &k);
			for (i = 0; i < n; i++) {
				scanf("%d", &arr[i]);
			}
			qsort(arr, n, sizeof(int), compare);

			// �� �κп��� ������ ����Ͻʽÿ�.
			printf("Case #%d\n", test_case);
			for (i = 0; i < k; i++) {
				count += arr[i];
			}
			printf("%d\n", count);
		}

		return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
	}
};
int main(void) {
	//num_selection n_s;
	//expect_candidate n_s;
	test_study n_s;
	n_s.init();
	return 0;
}