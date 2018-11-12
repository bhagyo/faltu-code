#include <functional>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cassert>
#include <sstream>
#include <numeric>
#include <string>
#include <vector>
#include <cstdio>
#include <bitset>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <map>
#include <set>

using namespace std;

#define forit(it, s) for(__typeof(s.begin()) it = s.begin(); it != s.end(); it++)
#define np(v) next_permutation(v.begin(), v.end())
#define pll pair < long long, long long>
#define all(a) a.begin(), a.end()
#define ull unsigned long long
#define vll vector <long long>
#define pii pair < int, int >
#define sz(a) (int)a.size()
#define sqr(x) ((x) * (x))
#define y1 stupid_cmath
#define vi vector <int>
#define pb push_back
#define mp make_pair
#define ll long long
#define f first
#define s second

const int inf = (int)1e9;
const int mod = inf + 7;
const double eps = 1e-9;
const double pi = acos(-1.0);

int n;
int a[100100];
int b[100100];
bool win[100100];
bool was[100100];

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> n;
    string s;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        b[a[i]] = i;
        s += "A";
    }
    int k=1;
    win[n] = 0;
    for(int i = n - 1; i >= 1; --i)
    {
        k=1;
        for(int j = b[i] % i; j <= n; j += i)
        {
            printf("j = %d,i = %d\n",j,i);
            printf("a[j] = %d,i = %d\n\n",a[j],i);
            if(a[j] > i && !win[a[j]])
            {
                win[i] = 1;
                printf("yes\n");
            }
            printf("k = %d\n\n",k);
            k++;
        }
    }
    for(int i = 1; i <= n; ++i)
    {
        if(win[a[i]]) s[i - 1] = 'A';
        else s[i - 1] = 'B';
    }
    cout << s << endl;
}
