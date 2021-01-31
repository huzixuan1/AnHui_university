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
