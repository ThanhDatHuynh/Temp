#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
/*----------------------------------------------------------------------------------------*/
inline void set_io()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
#ifdef MY_LIB
#include "my_library.h"
#endif
}
#define get_bit(a, n) ((a) >> (n)&1)
int count_test_case = 0;
#define print_case(result) cout << "Case #" << count_test_case++ << ": " << result << endl;
template <class T>
std::istream &operator>>(std::istream &in_stream, vector<T> &data)
{
    for (T &i : data)
        in_stream >> i;
    return in_stream;
}
/*----------------------------------------------------------------------------------------*/
int main(int argc, char **argv)
{
    set_io();

}