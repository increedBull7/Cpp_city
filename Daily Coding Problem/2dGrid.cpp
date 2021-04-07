#include<iostream>
using namespace std;

//Dil tudko me todh liya hia, khudko aaise jodh liya hai

int stepCounter(int x[], int y[]);

int main(){

int x[10];

stepCounter(x,x);

}

int stepCounter(int x[], int y[]){
    int originX = x[0];
    int originY = y[0];

    for(int i = 0; i < sizeof(x) / sizeof(x[0]); i++)
        cout<<i;


}


// public int coverPoints(ArrayList<Integer> x, ArrayList<Integer> y) {
// 	// Get current x and y
// 	int curX = x.get(0);
// 	int curY = y.get(0);
// 	// Counter
// 	int count = 0;

// 	for (int i = 1; i < x.size(); i++) {
// 		// Get destination x and y
// 		int dstX = x.get(i);
// 		int dstY = y.get(i);

// 		// While we are not at the target position
// 		while (curX != dstX || curY != dstY) {
// 			// Check x
// 			if (curX < dstX) curX++;
// 			else if (curX > dstX) curX--;

// 			// Check y
// 			if (curY < dstY) curY++;
// 			else if (curY > dstY) curY--;

// 			count++;
// 		}
// 	}

// 	return count;
// }
