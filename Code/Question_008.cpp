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
