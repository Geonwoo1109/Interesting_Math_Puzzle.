#include <stdio.h>

main() {
	int Num;
	
	while(1) {
		printf("세자릿수 하나를 입력하세요: ");
		scanf("%d", &Num);
		
		if (Num < 100 || Num > 1000) {
			printf("잘못된 값입니다.");
			continue;
		}
		
		printf("\n당신이 작성한 숫자: %d\n\n", Num);
		
		printf("%d / 7 = %d\n", Num*1001, Num/7);
		printf("%d / 11 = %d\n", Num*1001/7, Num, Num/(7*11));
		printf("%d / 13 = %d\n", Num*1001/7/11, Num/(7*11*13));
		
		printf("\n%d x 7 x 11 x 13 = %d\n\n\n", Num, Num*1001);
		
	}
}
