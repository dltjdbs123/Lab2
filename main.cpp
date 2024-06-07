#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> vec;

void func(int cnt) 
{
    if (cnt == M)
    {
         for (int i : vec)
         {
             cout << i << ' ';
         }
         cout << endl;
         vec.clear();
    }
 
    else
    {
        if(!vec.empty())
        {
            for(int i=vec.back()+1; i<=N; i++)
            {
                vector <int> tmp = vec;
                vec.push_back(i);
                func(cnt+1);
                vec = tmp;
            }
        }
        else
        {
            for(int i=1; i<=N-M+1; i++)
            {
                vector <int> tmp = vec;
                vec.push_back(i);
                func(cnt+1);
                vec = tmp;
            }
        }
         
     }
 
}

 int main() {
     cin >> N >> M;
     func(0);
 }
