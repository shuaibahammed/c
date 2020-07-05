#include<stdio.h>
int main(){
    int i, mark;
    printf("enter the mark percentage");
    scanf("%d",&mark);
    if(mark>90){
        printf("A");
    }else if(mark<89 && mark>80){
        printf("B");
    }else if(mark<89 && mark>80){
        printf("c");
    }else if(mark<79 && mark>70){
        printf("d");
    }else if(mark<69 && mark>60){
        printf("e");
    }else if(mark<59 && mark>50){
        printf("f");
    }else{
        printf("fail");
    }
}



