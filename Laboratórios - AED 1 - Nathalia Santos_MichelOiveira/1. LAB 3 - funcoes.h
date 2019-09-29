

int soma(int a,int b,int c){
a = a + b + c;
printf("%d\n",a);

}
int max(int a,int b,int c){

    int max = 0;
    if(a > b && a > c){
        max = a;
    }
    else if(b > a && b > c){
        max = b;
    }
    else{
        max = c;
    }
    return max;
}

int min(int a,int b,int c){

    int min = 0;
    if(a < b && a < c){
        min = a;
    }
    else if(b < a && b < c){
        min = b;
    }
    else{
        min = c;

    }
    return min;
}
int mul(int a,int b,int c, int max){
    int r = 0;
    r = a*b*c*max;
    printf("%d\n", r);

}

int mul2(int a, int b, int c, int min){
    int r = 0;
    r = a*b*c*min;
    printf("%d\n", r);
}
