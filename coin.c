#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char* coin_toss(){
  return rand()%2==0 ? "Heads":"Tails";
}

int main(){
  int heads_count=0;
  int tails_count=0;

  srand(time(NULL));

  printf("Tossing a coin...\n");
  for(int i=1;i<=3;i++){
    const char* result=coin_toss();
    printf("Round %d: %s\n", i,result);
    if(result=="Heads"){
      heads_count++;
    }else{
      tails_count++;
    }
  }
  printf("Heads: %d, Tails: %d\n", heads_count, tails_count);
  return 0;
}

    
