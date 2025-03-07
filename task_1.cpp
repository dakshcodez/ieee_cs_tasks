#include<iostream>
#include<vector>
const int MAX = 10;

using namespace std;

class Stack{
    private:
        int top = -1;
        vector<int> vec = vector<int>(MAX, 0);
        int min = 0;
        int max = 0;
    public:
        bool isFull(){
            return top == MAX - 1;
        }
        
        bool isEmpty(){
            return top == -1;
        }

        void push(int val){
            if (!isFull()){
                vec[++top] = val;
                cout<<"Pushed "<<val<<endl;
                if (val < min){
                    min = val;
                }else if (val > max){
                    max = val;
                }
            }else{
                cout<<"Stack is full, couldn't push "<<val<<endl;
            }
        }

        int pop(){
            if (!isEmpty()){
                int temp = vec[top--];
                cout<<"Popped "<<temp<<endl;
                return temp;
            }
            cout<<"Stack is empty"<<endl;
            return -1;
        }

        void display(){
            if (!isEmpty()){
                cout<<"Stack elements are: ";
                for (int i = 0; i <= top; i++){
                    cout<<vec[i]<<" ";
                }
                cout<<endl;
            }else{
                cout<<"Stack is empty"<<endl;
            }
        }

        int getMin(){
            return min;
        }

        int getMax(){
            return max;
        }

        int topElement(){
            return vec[top];
        }
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);
    s.push(11);
    s.display();
    cout<<s.topElement()<<endl;
    cout<<s.getMax()<<endl;
    cout<<s.getMin()<<endl;
    return 0;
}