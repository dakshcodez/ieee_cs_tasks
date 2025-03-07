#include<iostream>
#include<vector>

using namespace std;

class DataStructure{
    private:
        vector<vector<int>> vec;
    public:
        void addInterval(int start, int end){
            vector<int> interval = {start, end};
            vec.push_back(interval);
        }

        void mergeIntervals(){
            
        }

        void getInterval(){
            mergeIntervals();
            cout<<"Intervals are: ";
            for (int i = 0; i < vec.size(); i++){
                cout<<"["<<vec[i][0]<<", "<<vec[i][1]<<"] ";
            }
            cout<<endl;
        }
};