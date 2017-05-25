#include <stdio.h>
#include <stdlib.h>


typedef struct Foo {
   int a;
   int b;
   int c;
   int d;
} Foo;

int main() {
  int size = 1000000000;
  int iterations = 10;
  int val = 0;

  Foo *blah = (Foo *)malloc(sizeof(Foo)*size);

  for(int j = 0; j < iterations; j++) {

	  for(int i = 0; i < size; i++) {
		  val+= blah[i].a + blah[i].b;
	  }
  }
  printf("Val = %d\n",val);
  

}
