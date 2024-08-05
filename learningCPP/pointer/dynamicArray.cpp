#include <iostream>
using namespace std;

int main()
{

    size_t size{10};

    double *p_salaries{new double[size]};
    int *p_students{new (std::nothrow) int[size]{}};
    double *p_scores{new (std::nothrow) double[size]{10, 20, 30, 40, 50}};

    if (p_scores)
    {
        for (size_t i{0}; i < size; i++)
        {
            cout << i << " value : " << p_scores[i] << " : " << *(p_scores + i) << endl;
        }
    }

    // releasing memory;

    delete[] p_salaries;
    p_salaries = nullptr;

    delete[] p_students;
    p_students = nullptr;

    delete[] p_scores;
    p_scores = nullptr;
    return 0;
}