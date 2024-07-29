#include <iostream>
using namespace std;
#include<algorithm>
#include<vector>


int main(){
  vector<int> v;
  v.push_back(1);
  v.push_back(3);
  v.push_back(6);
  v.push_back(7);
  
  cout<<"6 is at "<<binary_search(v.begin(),v.end(),6)<<endl;
  
  //to rotate vector
  rotate(v.begin(),v.begin()+1,v.end());
  for(int i: v){
    cout<<i<<" ";
  }
  
  //sort function
  
  //reverse string
  string abcd = "abcd";
  reverse(abcd.begin(),abcd.end());
  cout<<abcd<<endl;

  
}
