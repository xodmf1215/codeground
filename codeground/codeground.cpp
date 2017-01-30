// codeground.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

// �Ʒ� �⺻ ������ �ڵ带 ���� �Ǵ� �����ϰ� ������ �ڵ带 ����ϼŵ� �˴ϴ�.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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