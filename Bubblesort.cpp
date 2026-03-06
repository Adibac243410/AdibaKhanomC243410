#include <iostream>
using namespace std;

void bubbleSort(int A[], int N)
{
    for(int i = 0; i < N - 1; i++)
    {
        for(int j = 0; j < N - i - 1; j++)
        {
            if(A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int N;
    cout << "Enter number of elements: ";
    cin >> N;

    int A[N];

    cout << "Enter elements:\n";
    for(int i = 0; i < N; i++)
        cin >> A[i];

    bubbleSort(A, N);

    cout << "Sorted array:\n";
    for(int i = 0; i < N; i++)
        cout << A[i] << " ";

    return 0;
}
