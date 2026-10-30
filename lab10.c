 #include<stdio.h>
 int num_binary(int num);
 int binary=0;
 int main()
 {int num;
    printf("enter a number ");
    scanf("%d",&num);
    
    printf("Binary of %d is",num);
    int Binary = num_binary(num);
    printf("%d",Binary);
    return 0;
 }


 int num_binary(int num)
 {while(num>0)
    {int rem=num%2;
     num=num/2;  
     binary=rem+binary*10; }

    return binary;

 }

