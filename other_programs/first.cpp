#include <iostream> 
// #include<bits/stdc++.h>
using namespace std;
int main(){
  // std::cout << "Hey Badal" << std::endl;
  // std::cout << "HI!";

  // int x, y;
  // cin >> x >> y;
  // cout << "dataue of X & Y are: " << x << ", " << y << endl;
  
  // string name;
  // getline(cin, name);
  // cout << "Your name is: "<< name;
  // cout << "\nhi";
  // number if positive or not
  
  // Finding Even odd
  // int n = 9;
  // cin >> n;
  // string message;
  // message = (n < 0) ? "Negative Number" : ((n > 0)? "Posive Number" : "Null dataue");
  // cout << message;
  // // if (n > 0)
  //   cout << "Positive Number";
  // else 
  //   if (n < 0)
  //     cout << "Negative Number";
  //   else  
  //     cout <<"Null number";

  // switch statement
  // int day;
  // cin >> day;

  // switch (day)
  // {
  // case 1:
  //   cout << "Monday";
  // case 2:
  //   cout << "Tuesday";
  //   break;
  // case 3:
  //   cout << "Wednesday";
  //   break;
  // case 4:
  //   cout << "Thursday";
  //   break;
  // case 5:
  //   cout << "Friday";
  //   break;
  // case 6:
  //   cout << "Saturday";
  //   break;
  // case 7:
  //   cout << "Sunday";
  //   break;
  // default:
  //   cout << "Wrong day Entered";
  // // cout << " Indataid number:"
  // }     

  // 1-D array 
  int arr[5];
  
  for(int i = 0; i < 5; i++){
    cin >> arr[i];
    cout << arr[i] << " ";
  }
  cout << "\n";
  // 2-D array

  int arr2d[3][3] = {1, 2, 3,
                    11, 12, 13,
                    21, 22, 23};
  // cout << arr2d[2][2];
  // printing whole array
  for(int i = 0; i<3; i++){
    for(int j = 0; j<3; j++){
      cout << arr2d[i][j] << " ";
    }
    cout << endl;
  }
  // printing size of the array
  cout << "Number of elements in array "<<sizeof(arr2d)/sizeof(arr2d[0][0]) << endl;
  cout << arr2d[3][-3];
  return 0;
}