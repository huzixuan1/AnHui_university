# 						Cpp实践

### 问题01：

```
1、编写一个程序，从键盘接收3个实数（10.0,20.0,5.0）分别输出3个数的和s,乘积t,平均值a
```

```cpp
#include <iostream>
using namespace std;
/* 1.编写一个程序，从键盘接收3个实数（10.0,20.0,5.0）分别输出3个数的和s,乘积t,平均值a*/
int Sum(float num1, float num2, float num3){
    return num1+num2+num3;
}
int pix(float num1, float num2, float num3){
    return num1*num2*num3;
}
int main(){
    cout<<"请输入三个数字："<<endl;
    float reciv1,reciv2,reciv3;
    cin>>reciv1>>reciv2>>reciv3;
    float s=Sum(reciv1,reciv2,reciv3);
    float t=pix(reciv1,reciv2,reciv3);
    float a=s/3;
    cout<<"运算的和为："<<s<<"\n"<<"运算的积为："<<t<<"\n"<<"运算的平均数为："<<a<<endl;
    return 0;
}
```

![](./Run_result/1.png)

### 问题02：

```
2、要求用户输入两个整数a,b（分别为20,10），读取从键盘输入的值，然后：
 * 1）、用整数输出这两个数的和、差;
 * 2）、用长整型输出这两个数的乘积，用float输出商;
 * 3）、用整数输出两个数的余数，用float输出商。
```

```cpp
#include <iostream>
using namespace std;
int Sum(int num1,int num2){
    return num1+num2;
}
int Diff(int num1,int num2){
    return num1-num2;
}
long Accu(int num1,int num2){
    return num1*num2;
}
float Merch(int num1,int num2){
    return num1/num2;
}
int Remain(int num1,int num2){
    return num1%num2;
}
float Average(int num1,int num2){
    float result=num1+num2;
    return result/2;
}
int main(){
   cout<<"请输入两个数字：";
   int reciv1,reciv2;
   cin>>reciv1>>reciv2;
   cout<<"和为："<<Sum(reciv1,reciv2)<<"\t"
   <<"差为："<<Diff(reciv1,reciv2)<<"\t"<<"积为："<<Accu(reciv1,reciv2)<<"\t"
   <<"商为："<<Merch(reciv1,reciv2)<<"\t"<<"余为："<<Remain(reciv1,reciv2)<<"\t"
   <<"平均为："<<Average(reciv1,reciv2)<<"\t"<<endl;
    return 0;
}
```

![](./Run_result/2.png)

### 问题03：

```
3、从键盘接收一个一位的整型数，经转换，用字符函数putchar输出。
例如输入整数5,程序运行后输出字符5
```

 

```cpp
#include <iostream>
using namespace std;
/*3、从键盘接收一个一位的整型数，经转换，用字符函数putchar输出*/
int Trans(int num){
    return putchar(num);
}

int main(){
    cout<<Trans(66);
    return 0;
}
```

![](./Run_result/3.png)

### 问题04：

```
4、输入半径，计算球的表面积
```

```cpp
#include <iostream>
#include <math.h>
#define PI acos(-1)
using namespace std;
/*4、输入半径，计算球的表面积*/
float Acculate(float R){
    return 4*R*R*PI;
}
int main(){
    cout<<Acculate(4);
    return 0;
}

```

![](./Run_result/4.png)

### 问题05：

```
通过键盘给6个变量赋值，然后将变量的值打印在屏幕上打印输出
这6个值分别为：10 -10 40000 3.14 a hello 
```

```cpp
/*5、通过键盘给6个变量赋值，然后将变量的值打印在屏幕上打印输出
 * 这6个值分别为：10 -10 40000 3.14 a hello */
void Writer(){
    int reciv1,reciv2,reciv3;
    float reciv4;
    char str1;
    string str2;
    cout<<"请分别输入三个整型变量："<<endl;
    cin>>reciv1>>reciv2>>reciv3;
    cout<<"请输入一个浮点型数字："<<endl;
    cin>>reciv4;
    cout<<"请输入一个字符："<<endl;
    cin>>str1;
    cout<<"请输入一个字符串："<<endl;
    cin>>str2;
    cout<<"输入的参数如下："<<reciv1<<"\t"<<reciv2<<"\t"
        <<reciv3<<"\t"<<reciv4<<"\t"<<str1<<"\t"<<str2<<endl;
}
```

![](./Run_result/5.png)

### 问题06：

```
6、键盘输入三个整数，分别存放在变量num1 num2 num3中，找出其中最小的数
```

```cpp
/*6、键盘输入三个整数，分别存放在变量num1 num2 num3中，找出其中最小的数*/
int FindMin(int num1,int num2,int num3){
    if(num1<num2&&num2>num3&&num1<num3)
        return num1;
    if(num2<num1&&num1>num3&&num2<num3)
        return num2;
    if(num3<num1&&num1>num3&&num3<num2)
        return num3;
    return 0;
}
```

![](./Run_result/6.png)