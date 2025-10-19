// Ahmed fekry Ezzat  (Sec-5)

#include <bits/stdc++.h>
using namespace std;

 //  دالة لطباعة المصفوفة بشكل منسق
void printArray(const vector<int> &arr, const string &message){
    cout << message;
    cout << "[ ";
    for (int i = 0; i < arr.size(); ++i){
        cout << arr[i];
        if (i < arr.size() - 1){
            cout << ", ";
        }
    }
    cout << " ]" << endl;

}

//  Selection Sort
void selectionSort(vector<int> &arr){

    int n = arr.size();
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++){
        min_idx = i;
        for (j = i + 1; j < n; j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        //  عملت تبديل بمتغيرين بس بعمليه حسابيه بسيطه
        if (min_idx != i){
            arr[i] += arr[min_idx];
            arr[min_idx] = arr[i] - arr[min_idx];
            arr[i] -= arr[min_idx];
        }
    }
}
//  End of Selection Sort

int main(){
    cout  << "============================================================\n"
          << "           Welcome to Selection Sort Program            \n"
          << "============================================================\n\n";

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "\nEnter " << n << " numbers separated by space: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "\n============================================================\n";
    printArray(arr, "Original Array: ");

    selectionSort(arr);

    printArray(arr, "Sorted Array: ");
    cout << "============================================================\n\n";

    return 0;
}