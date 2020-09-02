#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	char exp[20];
	char num[6];
	int i = 0, j = 0, k = 0, result = 0, g = 0;
	scanf("%s", exp);
	while (exp[i] != '\0'){
		if (exp[i] == '+' || exp[i] == '-') {
			g ? (result -= atoi(num)) : (result += atoi(num));
			
			for(k=0;k<6;k++){
				num[k]='\0';
			}
			
			j = 0;
			if (exp[i] == '-') g = 1;
		}
		else {
			num[j] = exp[i];
			j++;
		}
		i++;
		
	}
	g ? (result -= atoi(num)) : (result += atoi(num));
	printf("%d", result);
	return 0;
}
