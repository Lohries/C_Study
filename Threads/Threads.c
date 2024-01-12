
#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h>  
#include <pthread.h> 
  

void *myThreadFun(void *vargp) 
{ 
    int i = 0;
    while(i < 10)
    { 
        printf("%i\n", i);
        i++;
    
    }

} 
   
int main() 
{ 
    int j = 0;
    pthread_t thread_id; //Creating a thread if type pthread_t
    printf("Before Thread\n"); 
    pthread_create(&thread_id, NULL, myThreadFun, NULL); 
    while (j < 20) {
      printf("%i\n", j);
      j+=2;
     }
    pthread_join(thread_id, NULL); 
    printf("After Thread\n"); 
    exit(0); 
}
