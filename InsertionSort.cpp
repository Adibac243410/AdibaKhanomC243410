#include <iostream>
#include <climits>
using namespace std;

void insertionSort(int A[], int N)
{
    A[0] = INT_MIN;

    for(int K = 2; K <= N; K++)
    {
        int TEMP = A[K];
        int PTR = K - 1;

        while(TEMP < A[PTR])
        {
            A[PTR + 1] = A[PTR];
            PTR = PTR - 1;
        }

        A[PTR + 1] = TEMP;
    }
}

int main()
{
    int N;
    cout << "Enter number of elements: ";
    cin >> N;

    int A[N+1];

    cout << "Enter elements:\n";
    for(int i = 1; i <= N; i++)
        cin >> A[i];

    insertionSort(A, N);

    cout << "Sorted array:\n";
    for(int i = 1; i <= N; i++)
        cout << A[i] << " ";

    return 0;
}
