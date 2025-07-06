#include <stdio.h>
int main()
{
    int A0l,A0s ,A1l, A1s, A2l, A2s, A3l, A3s, A4l, A4s;
    A0l = 1189;
    A0s =841;
    printf("vaishnavi: %d mm x %d mm\n", A0l, A0s);
    A1l = A0s;

    A1s = A0l/2;
    printf("A1 dimensions: %d mm x %d mm\n", A1l, A1s);
    A2l = A1s;
    A2s = A1l/2;
    printf("A2 dimensions: %d mm x %d mm\n", A2l, A2s);
    A3l = A2s;
    //A2s = A1
   printf("A1 :%d mm x %d mm , A2: %d mm x %d mm\n", A1l, A1s, A2l, A2s);
    return 0;
  // end
    
  
   

}