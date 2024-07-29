//STL FOR C++
//array
#include<array>

int main() 
{
    
    array<int,4> a = {1,2,3,4};
    int size = a.size();
    
    for(int i = 0;i<size;i++){
      cout<<a[i]<<endl;
    }
}

//VECTORS
//#include<vector>
//capacity doubles
//size - how many elements - v.size()
//capacity - exact size - v.capacity()

int main(){
  vector<int> v;
  v.push_back(1);
  cout<<"size is"<<v.capacity()<<endl;
  
  v.push_back(2);
  cout<<"size is"<<v.capacity()<<endl;
  
  v.push_back(3);
  cout<<"size is"<<v.capacity()<<endl;
  
  cout<<"front element "<<v.front()<<endl;
  cout<<"last element "<<v.back()<<endl;
  
  //to clear whole vector
  v.clear();
  
  //if you know the size
  vector<int>a(5,1); //size is 5, initialises all with '1'

  //copy one vector into another
  vector<int> last(a);
}

#include<deque>
//DEQUE

int main(){
  deque<int> d;
  d.push_back(1);
  d.push_front(3);
  
  //d.pop_back()
  //d.pop_front()
  
  cout<<"print first elem index "<<d.at(1)<<endl;
  //empty/not - d.empty()
  
  //erase
  d.erase(d.begin(),d.begin()+1);
  //erases first element
}

//LISTS
#include<list>

int main(){
  list<int> l;
  l.push_back(9);
  l.push_front(6);
  
  l.erase(l.begin());//first elem erased
  
  
  for(int i:l){
    cout<<i<<" ";
  }
}

//stacks - last in, first out.
#include<stack>

int main(){
  stack<string> s;
  s.push("vansh");
  s.push("rohit");
  s.push("virat");
  
  //as last elem goes to top
  cout<<"top element is "<<s.top()<<endl;
  
  //now removing
  s.pop(); //virat removed
  cout<<"top element is "<<s.top()<<endl;
  
  cout<<"size of stack is "<<s.size()<<endl;
}

//queue - first in, first out
#include<queue>

int main(){
  queue<string> q;
  
  q.push("vansh");
  q.push("rohit");
  q.push("virat");
  
  //top element is first like a queue
  cout<<"first element: "<<q.front()<<endl;
  q.pop();
  cout<<"size after pop "<<q.size()<<endl;
}

//PRIORITY QUEUES
#include<queue>
//priority queue
//maxheap

int main(){
  //maxheap
  priority_queue<int> maxi;
  
  //minheap
  priority_queue<int, vector<int>, greater<int> > mini;
  
  maxi.push(1);
  maxi.push(3);
  maxi.push(2);
  maxi.push(0);
  int n = maxi.size();
  for(int i = 0;i<n;i++){
    cout<<maxi.top()<<" ";
    maxi.pop();
  }cout<<endl;
  
  mini.push(5);
  mini.push(4);
  mini.push(3);
  mini.push(2);
  mini.push(1);
  
  int z = mini.size();
  for(int i = 0;i<z;i++){
    cout<<mini.top()<<" ";
    mini.pop();
  }

//set - counts elements only once

int main(){
  set<int> s;
  
  //to insert elements
  s.insert(5);
  s.insert(5);
  s.insert(3);
  s.insert(2);
  s.insert(2);
  
  for(int i : s){
    cout<<i<<endl;
  }//returns SORTED SET
  
  set<int>::iterator it = s.begin();
  s.erase(s.begin());
  
  for(int i : s){
    cout<<i<<endl;
   }//3 is removed
  }

