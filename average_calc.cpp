#include<iostream>
using namespace std;
int main(){
  int n,m,a[10][10],sum=0,avg,c=0;
  cout<<"Enter no of students: ";
  cin>>n;
  cout<<"enter no of subjects: ";
  cin>>m;
  for(int i=0;i<n;i++){
    cout<<"Enter Marks for student "<<i+1<<", if absent enter \"-1\""<<endl;
    for(int j=0;j<m;j++){
      cout<<"Subject " <<j+1<<": ";
      cin>>a[i][j];
    }
  }
  for(int i=0;i<n;i++){
    cout<<"Avg Marks of student "<<i+1<<": ";
    for(int j=0;j<m;j++){
      if(a[i][j]!=-1){
        sum+=a[i][j];
      }
    }
    avg = sum/m;
    cout<<avg<<endl;
  }
  //no. of abs student
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(a[i][j]==-1){
        c+=1;
      }
    }
    cout<<"Student "<<i+1<<"was absent on "<< c << " day(s)"<<endl;
    c=0;
  }
  return 0;
}
