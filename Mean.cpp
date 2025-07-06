#include <iostream>
#include <vector>
using namespace std;

class Mean{
public :
    int x;
    vector<int>num;
    Mean (){
        cout<<"Enter Total Number of Elements :";
        cin>>x;
        cout<<"Enter Your Elements :";
        for(int i=0;i<x;i++){
            int a;
            cin>>a;
            num.push_back(a);
        }
    }
    int printMean(){
        int sum = 0;
        cout<<"Your numbers are : ";
        for(auto &p : num) {
            cout << p << " ";
            sum += p;
        }
        cout<<"\nTotal : "<<sum<<endl;

        cout<<"Mean is "<<(double)sum/num.size()<<endl;

    }
    
    
    
};

int main() {
    Mean x;
    x.printMean();

    return 0;
}