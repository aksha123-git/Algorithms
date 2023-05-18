#include<bits/stdc++.h>
using namespace std;
#include<queue>
#define maxq 5
class dequeue{
    int data[maxq];
    int left , right;
    public:
    dequeue(){
        left = right = -1;
    }
    void add_right_q(int item){
        if(left == 0 and right == maxq-1  || right == left -1){
            cout<<"overflow"<<endl;
            return;
        }
        if(left == -1)
            left = right = 0;
        else if(right == maxq-1)
             right = 0;
        else
             right++;
             data[right] = item;
        

    }
    void add_left_q(int item){
        if(left == 0 and right == maxq-1  || right == left -1){
            cout<<"overflow"<<endl;
            return;
        }
        if(left == -1)
            left = right = maxq-1;
        else if(left == 0)
             left = maxq-1;
        else
             left--;
             data[left] = item;
        

    }

    int del_left_q(){
        if(left == -1){
            cout<<"underflow"<<endl;
           return 0 ;
        }
        int item = data[left];
        if(left == right)
           left = right = -1;
        else if(left = maxq-1)
            left = 0;
        else
             left++;
        return item ;

    }
     int del_right_q(){
        if(right == -1){
            cout<<"underflow"<<endl;
            return 0;
        }
        int item = data[right];
        if(left == right)
           left = right = -1;
        else if(right = 0)
            right = maxq-1;
        else
             right--;
        return item;

    }
    bool empty(){
        if(left == -1)
           return true;
        return false;

    }

};
int main(){
    dequeue q1;
    q1.add_left_q(10);
    q1.add_left_q(20);
    q1.add_left_q(30);
    q1.add_right_q(50);
    q1.add_right_q(40);
    q1.add_right_q(30);
    while(!q1.empty())
        cout<<q1.del_left_q()<<endl;
        //cout<<q1.del_right_q()<<endl;
}
