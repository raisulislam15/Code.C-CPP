#include <iostream>
using namespace std;

int knapSack(int capacity, int obj, int wi[], int vi[]) {

    int array[obj + 1][capacity + 1];

    for (int i = 0; i <obj+1; ++i){
        for (int j = 0; j < capacity+1; ++j){
            if (i == 0 || j == 0){
                array[i][j] = 0;
            }
            else if (wi[i - 1] <= j){
                array[i][j] = max(vi[i - 1] + array[i - 1][j - wi[i - 1]],
                                  array[i - 1][j]);
            }
            else{
                array[i][j] = array[i - 1][j];
            }
        }
    }
    return array[obj][capacity];
}

int main()
{
    int vi[] = {3,4,5,6};
    int wi[] = {2,3,4,5};
    int capacity = 10;
    int obj = 4;

    int max = knapSack(capacity, obj, wi, vi);

    cout << " Maximum Value: " << max << endl;
    return 0;
}
