#include <stdio.h>



long long gcd(long long a, long long b){
    if(b == 0) return a;
    if(a == 0) return b;

    if(a >= b){
        return gcd(a%b, b);
    } else{
        return gcd(a, b%a);
    }
}





int main(){
  int line;
  scanf("%d", &line);
  int cnt;
  int num[100];
  int result = 0;
  while(line){

      long long result = 0;
    scanf("%d", &cnt);

    for(int i = 0; i < cnt; i++){
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < cnt; i++){
        for(int j = i + 1; j < cnt; j++){

            result += gcd(num[i], num[j]);
        }
    }


    printf("%d\n", result);
    line--;
  }


    return 0;
}