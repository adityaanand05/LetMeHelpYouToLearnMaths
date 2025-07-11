#include <iostream>
#include <vector>
using namespace std;

class Median
{
public:
    int x;
    vector<int> num;
    Median()
    {
        cout << "Enter Total Number of Elements :";
        cin >> x;
        cout << "Your Number sould be in accending order" << endl;
        for (int i = 0; i < x; i++)
        {
            cout << "Enter " << i + 1 << " Element :";
            int a;
            cin >> a;
            num.push_back(a);
        }
        sortAscending();
    }
    void sortAscending()
    {
        // Bubble sort
        for (int i = 0; i < x - 1; i++)
        {
            for (int j = 0; j < x - i - 1; j++)
            {
                if (num[j] > num[j + 1])
                {
                    // Swap
                    int temp = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = temp;
                }
            }
        }
    }

    int printMedian()
    {
        cout << "Your numbers are : ";
        for (auto &p : num)
        {
            cout << p << " ";
        }
        if (x % 2 == 0)
        {
            cout << "\nYour Median is at " << num.size() / 2 << " or " << (num.size() / 2) + 1 << " and value : " << num[(num.size() / 2) - 1] << " or " << num[num.size() / 2] <<" or equivalent Median ->"<<(float)(num[(num.size() / 2) - 1] + num[num.size() / 2])/2 << endl;
        }
        else
        {
            cout << "\nYour Median is at " << (num.size() + 1) / 2 << " and value : " << num[num.size() / 2] << endl;
        }
    }
};

int main()
{
    Median x;
    x.printMedian();

    return 0;
}