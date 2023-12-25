//How many tiles of 50 square cm can be installed in an area of ​​2000 square meters? 

#include<stdio.h>
int main(){
    int tiles = 50;
    int area = 2000;
    int result = 2000 / 50;
    printf("%d tiles can be installed in an area of %d square meters",result,area);
    return 0;
}