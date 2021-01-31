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
