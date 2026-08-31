#include<stdio.h>

//for循环
int forLoop(int n) {
    int res = 0;  //结果储存变量

    for (int i = 1; i <= n; i++) {
        res += i;      //循环累加
    }
    //return res;
    printf("%d\n",res);
}

//while循环
int whileLoop(int n){
    int res=0;
    int i=1;
    while(i<=n){

        res+=i;
        i++;
    }
    printf("%d\n",res);
}

//嵌套循环
int DoubleLoop(int n){
    int res=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            res+=j;
    }
     printf("%d\n",res);
}

int main(){

//printf("%d",forLoop(100));
forLoop(100);

whileLoop(100);

DoubleLoop(10);

return 0;

}
