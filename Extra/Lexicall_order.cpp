#include <iostream>
using namespace std;

int main()
{
    string str[10], temp;
    int n;
    
    cout<<"Enter The Number Of Words :";
    cin>>n;
    
    cout << "Enter "<< n << " words:\n";
    for(int i = 0; i <= n; i++)
    {
        getline(cin, str[i]);
    }
    
    for(int i = 0; i <= n-1; ++i)
        for( int j = i+1; j <= n; ++j)
        {
            if(str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    
    cout << "In lexicographical order: " << endl;
    
    for(int i = 1; i <= n; i++)
    {
        cout << str[i] << endl;
    }
    return 0;
}