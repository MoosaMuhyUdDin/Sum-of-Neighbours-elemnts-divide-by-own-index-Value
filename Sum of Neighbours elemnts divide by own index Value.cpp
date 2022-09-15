
#include <iostream>
#include<iomanip>
using namespace std;

int rowCalculation(int arr[6][6], int elm1, int elm2){
            int west,north,mid,wholeRow;
            if ( elm2 == 0 ){
                west = 0;
            }
            else{
                west = arr[elm1][elm2 - 1];
            }
            if (elm2 == 5){
                north = 0;
            }
            else{
                north = arr[elm1][elm2 + 1];
            }
            mid = arr[elm1][elm2];
            wholeRow =  west + mid + north;
            return wholeRow;
}

int main(){

    float arr2[6][6];
    int elm1, elm2, indexValue;
    int upperRow, midRow, lowerRow;
    int tempElm, tempElm2 , sum;
    float result;
    int arr[6][6] = {
                    {1,2,1,4,2,1},
                    {2,1,1,1,3,1},
                    {1,1,1,1,1,1},
                    {2,1,1,2,1,1},
                    {1,1,2,1,1,1},
                    {2,1,2,1,1,2}
                    };

cout << "Input Array : " << endl;
for (int i = 0; i < 6; i++)
{
    for (int j = 0; j < 6; j++)
    {
    	cout << setw(3);
        cout << arr[i][j] << "  | " ;
    }
    cout << endl ;
}

for (int i = 0; i < 6; i++)
{
    for (int j = 0; j < 6; j++)
    {
        elm1 = i;
        elm2 = j;
        indexValue = arr[elm1][elm2];

        if(elm1 == 0){
                upperRow = 0;
            }
            else{
                tempElm = elm1 - 1;
                upperRow = rowCalculation(arr, tempElm, elm2);
            }
            
            midRow =  rowCalculation(arr, elm1, elm2);

            if(elm1 == 5){
                lowerRow = 0;
            }
            else{
            tempElm2 = elm1 + 1;
            lowerRow = rowCalculation(arr, tempElm2, elm2);
            }

            int sumRow = upperRow + midRow + lowerRow ;
            sum = sumRow - indexValue;
            result = sum / indexValue;
            arr2[elm1][elm2] = result;
    }
}

cout << "Output Array : " << endl;
for (int i = 0; i < 6; i++)
{
    for (int j = 0; j < 6; j++)
    {
        cout << setw(3);
        cout << arr2[i][j] << "  | ";
    }
    cout << endl ;
}



    return 0;
}


