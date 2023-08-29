#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>

long long timeInMilliseconds(void) {
    struct timeval tv;

    gettimeofday(&tv,NULL);
    return (((long long)tv.tv_sec)*1000)+(tv.tv_usec/1000);
}

int main(void) {
  long start = timeInMilliseconds();
  int x = 1;
  int y = 1;
  long int i;
  // long int lng = 4294967295;
  long int lng = 80000000;
  long int num = 2;
  
  for (x = 0; x <= num; x++) {
    for (i = 0; i <= lng; i++) {
        int mult = x || y;
        255 * mult;
    }
  }
  
  long end = timeInMilliseconds();
  printf("%ld - %ld\n", end, start);
  long total = end - start;

  printf("%ld ms for comparative\n", total);
  
  start = timeInMilliseconds();
  
  for (x = 0; x <= num; x++) {
    for (i = 0; i <= lng; i++) {
        if (x || y) {
            255;
        }
    }
  }
  
  end = timeInMilliseconds();
  printf("%ld - %ld\n", end, start);
  total = end - start;

  printf("%ld ms for if\n", total);
}