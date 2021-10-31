# include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int cnt_a, cnt_f, cnt_p, i, n, score;   
	

	printf("Enter n(n>0): ");   	
	scanf("%d", &n);
	cnt_a = cnt_p = cnt_f = 0; 		
	for(i = 1; i <= n; i++){
    	scanf ("%d", &score);  		
    	if(score >= 60){			
    	    cnt_p++;
    	}else (score >= 85){		
    	    cnt_a++;
    	}else{						
    		cnt_f++;
		}
	}
	printf("%d %d %d\n", cnt_a, cnt_p, cnt_f);
	system("pause");
    return 0;
}
