# 						Cpp实践

### 问题01：

```cpp
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

```cpp
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

```cpp
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

```cpp
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

```cpp
5、通过键盘给6个变量赋值，然后将变量的值打印在屏幕上打印输出
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

```cpp
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

### 问题07：

```cpp
7、将小写字母改为大写，大写改为小写
```

```cpp
/*7、将小写字母改为大写，大写改为小写*/
void Retu_Char(char para){
   if(para>='a'&&para<='z'){
       para-=32;
   } else if(para>='A'&&para<='Z'){
       para+=32;
   }
   cout<<para;
}
int main(){
    cout<<"请输入一个字母：";
    char c;
    cin>>c;
    Retu_Char(c);
    return 0;
}
```

![](./Run_result/7.png)

### 问题08：

```cpp
/*8、计算下列的分段函数：
 * f(x)=x^2+x-6 x<0 && x=\-3
 * f(x)=x^2-5x+6 0<=x<10 && x=\2 && x=\3
 * f(x)=x^2-x-1 others*/
```

```cpp
/*8、计算下列的分段函数：
 * f(x)=x^2+x-6 x<0 && x=\-3
 * f(x)=x^2-5x+6 0<=x<10 && x=\2 && x=\3
 * f(x)=x^2-x-1 others*/
int Jud(int x){
    if(x<0 && x!=3){
        return (x*x+x-6);
    } else if(x>=0 && x<10 && x!=2 && x!=3){
        return (x*x-5*x+6);
    } else{
        return (x*x-x-1);
    }
}
int main(){
    cout<<"请输入一个数字："<<endl;
    int x;
    cin>>x;
    cout<<Jud(x);
    return 0;
}
```

![](./Run_result/8.png)

### 问题09：

```cpp
/*9、键盘接收一个字符串(只含大、小写英文字母)，将该字符串加密后输出。
 * 规则为：小写字母不变，大写的将其转换为小写后再向后移动一位，如：A->b、
 * Z->a*/
```



```cpp
/*9、键盘接收一个字符串(只含大、小写英文字母)，将该字符串加密后输出。
 * 规则为：小写字母不变，大写的将其转换为小写后再向后移动一位，如：A->b、
 * Z->a*/
void Trans_A_Z(string para){
    for(int i=0;i<para.length();i++){
        if(para[i]>='A'&&para[i]<='Z'){
            para[i]+=33;
        }
        cout<<para[i];
    }
}
int main(){
    cout<<"请输入字符串："<<endl;
    string str;
    cin>>str;
    Trans_A_Z(str);
    return 0;
}
```

![](./Run_result/9.png)

### 问题10：

```cpp
/*10、使用键盘输入任意两个变量,若a大于b,则直接输出a,b,否则将a,b的值互换输出*/
```



```cpp
/*10、使用键盘输入任意两个变量,若a大于b,则直接输出a,b,否则将a,b的值互换输出*/
void swap(int *para1,int *para2){
        int *temp=para1;
        para1=para2;
        para2=temp;
        cout<<*para1<<"\t"<<*para2<<endl;
}
int main(){
    cout<<"请输入两个数字："<<endl;
    int num1,num2;
    cin>>num1>>num2;
    if(num1>num2){
        cout<<num1<<"\t"<<num2<<endl;
    } else{
        swap(&num1,&num2);
    }
    return 0;
}
```

![](./Run_result/10.png)

### 问题11：

```cpp
/*11、由系统随机生成一个10以内的数字，
 * 用户随机输入一个10以内的数字，若二者相等则返回ok,否则返回ERROR*/
```

```cpp
/*11、由系统随机生成一个10以内的数字，
 * 用户随机输入一个10以内的数字，若二者相等则返回ok,否则返回ERROR*/
void Equal(int para){
    srand(time(NULL));
    int num=rand();
    num=num%10;
    cout<<"随机产生的数字为："<<num<<endl;
    if(para==num) cout<<"OK";
    cout<<"ERROR";
}
int main(){
    cout<<"请输入一个10以内的数字："<<endl;
    int num;
    cin>>num;
    Equal(num);
    return 0;
}
```

![](./Run_result/11.png)