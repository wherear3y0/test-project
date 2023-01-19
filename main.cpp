#include <iostream>
#include <string>

using namespace std;

//одно из заданий в учебе - пока что не понимаю что мне учить и куда двигаться

int main() {
      int x, y;
      cin >> x >> y;

      if(x <= y){
          for(int z = x; z <= y; z++){
              cout << x << endl;
              ++x;
          }
      } else if (x > y){
          for(int z = x; z >= y; z--){
              cout << x << endl;
              --x;
          }
      }

}
