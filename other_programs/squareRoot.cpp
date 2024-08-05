#include <bits\stdc++.h>
using namespace std;

class squareRoot
{
public:
    double findSquareRoot(int num, int p)
    {
        double root = 0.0;
        int start = 0;
        int end = num;

        while (start <= end)
        {
            int m = start + (end - start) / 2;

            if (m * m == num)
            {
                return m;
            }

            // binary search.
            if (m * m > num)
            {
                end = m - 1;
            }
            else
            {
                start = m + 1;
            }
        }

        double increment = 0.1;
        for (int i = 0; i < p; i++)
        {
            while (root * root < num)
            {
                root += increment;
            }

            root -= increment;
            increment /= 10;
        }
        return root;
    }
};
int main()
{
    int num = 7;
    int p = 3; // precission
    squareRoot ob;
    cout << ob.findSquareRoot(num, p) << endl;
}