#include <stdio.h>

main() {
	int Num;
	
	while(1) {
		printf("���ڸ��� �ϳ��� �Է��ϼ���: ");
		scanf("%d", &Num);
		
		if (Num < 100 || Num > 1000) {
			printf("�߸��� ���Դϴ�.");
			continue;
		}
		
		printf("\n����� �ۼ��� ����: %d\n\n", Num);
		
		printf("%d / 7 = %d\n", Num*1001, Num/7);
		printf("%d / 11 = %d\n", Num*1001/7, Num, Num/(7*11));
		printf("%d / 13 = %d\n", Num*1001/7/11, Num/(7*11*13));
		
		printf("\n%d x 7 x 11 x 13 = %d\n\n\n", Num, Num*1001);
		
	}
}
