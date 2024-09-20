

#include <iostream>
using namespace std;
int main()
{
    //1

    srand(time(0));
    int arr[10];

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 41 - 20;
        if (arr[i] < 0) {
            arr[i] = -arr[i];
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

    //2

    srand(time(0));
    char arr[10];

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 94 + 33;
    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] >= '0' && arr[i] <= '9') {
            arr[i] = 'A' + (arr[i] - '0');
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

    //3


    srand(time(0));
    int arr[10];
    int sum = 0, closestIndex = 0;

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 101;
        sum += arr[i];
    }

    double average = sum / 10.0;
    double closestDiff = (arr[0] - average) < 0 ? -(arr[0] - average) : (arr[0] - average);

    for (int i = 1; i < 10; i++) {
        double diff = (arr[i] - average) < 0 ? -(arr[i] - average) : (arr[i] - average);
        if (diff < closestDiff) {
            closestDiff = diff;
            closestIndex = i;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Ədədi ortasına ən yaxın element: " << arr[closestIndex] << endl;

    return 0;

    //4

    int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int n;

    cout << "N ədədini daxil edin: ";
    cin >> n;

    n = n % 10;

    for (int i = 0; i < 10; i++) {
        cout << arr[(i + n) % 10] << " ";
    }
    cout << endl;

    return 0;

    //5


    double arr[10] = { 1.5, 2, 3.7, 4, 5.2, 6, 7.3, 8, 9.8, 10 };
    double result[10];
    int index = 0;

    for (int i = 0; i < 10; i++) {
        if (arr[i] != (int)arr[i]) {
            result[index++] = arr[i];
        }
    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] == (int)arr[i]) {
            result[index++] = arr[i];
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}


