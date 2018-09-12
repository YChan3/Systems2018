#include <stdio.h>
#include <stdlib.h>

int solve35(int num_stop){
  int answer = 0;
  int counter = 3;
  for(;counter < num_stop; counter++){
      if(counter % 3 == 0 || counter % 5 == 0){
          answer += counter;
      }
  }
  return answer;
}

int sum_prime(int num_stop){
  int largest_prime = -1;
  int total = 1;
  int counter = 1;
  int ans = 0;
  for(; largest_prime < num_stop; counter++){
    if(total % counter != 0){
      largest_prime = counter;
      ans += largest_prime;
      printf("largest_prime:%d total:%d counter:%d ans:%d\n", largest_prime, total, counter, ans);
    }
    total *= counter;
  }
  return ans;
}

int sum_sqr_diff(int num_stop){
  int counter = 1;
  int sqr_sum = 0;
  int total = 0;
  for(; counter <= num_stop; counter++){
    total += counter;
    sqr_sum += counter * counter;
  }
  return total*total - sqr_sum;
}

int main(){
  //printf( "%d\n", solve35(1000));
  printf("%d\n", sum_prime(10));
  //printf("%d\n", sum_sqr_diff(100));
}
