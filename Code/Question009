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
