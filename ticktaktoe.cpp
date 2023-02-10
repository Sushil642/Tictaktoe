#include<iostream>
using namespace std;
void layout(char *a)
{
    cout<<" "<<a[0]<<" | "<<a[1]<<" | "<<a[2]<<endl;
    cout<<"---|---|---"<<endl;
    cout<<" "<<a[3]<<" | "<<a[4]<<" | "<<a[5]<<endl;
    cout<<"---|---|---"<<endl;
    cout<<" "<<a[6]<<" | "<<a[7]<<" | "<<a[8]<<endl;
     


}
int checkwin(char a[],int p)
{
    if(a[0]==a[1] && a[1]==a[2]){
    cout<<"Winner : "<<p<<endl;
    return 1;
    }
    else  if(a[0]==a[3] && a[3]==a[6]){
    cout<<"Winner : "<<p<<endl;
    return 1;
    }
    else  if(a[0]==a[4] && a[4]==a[8]){
     cout<<"Winner : "<<p<<endl;
     return 1;
    }
     else  if(a[1]==a[4] && a[4]==a[7]){
    cout<<"Winner : "<<p<<endl;
    return 1;
     }
    else  if(a[2]==a[5] && a[5]==a[8]){
    cout<<"Winner : "<<p<<endl;
    return 1;
    }
     else  if(a[3]==a[4] && a[4]==a[5]){
      cout<<"Winner : "<<p<<endl;
      return 1;
     }
      else if(a[6]==a[7] && a[7]==a[8]){
      cout<<"Winner : "<<p<<endl;
      return 1;
      }
      else
      return 0;




}

int main()
{
    int player=1,square,choice,count=0;
 char s[9]={'0','1','2','3','4','5','6','7','8'};
 layout(s);
 
 while(1){
    char mark=(player==1)?'X':'O';
    player=(player%2)?1:2;
 cout<<"Enter player: "<<player<<" Enter square number  :" ;
 cin>>square;
 if(player==1 )
s[square]='X';
else
s[square]='O';
// s[square]=mark;
count++;
if(count>3){
if(checkwin(s,player)==0)
cout<<"none"<<endl;
else{
layout(s);
exit(0);}
}
layout(s);
player++;


 }

}
