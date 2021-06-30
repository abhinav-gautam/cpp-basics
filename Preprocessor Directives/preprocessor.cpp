#include <iostream>
using namespace std;

// Preprocessor Directives
#define PI 3.145
#define SQR(x) (x * x)
#define MSG(x) #x

#ifndef PI
#define PI 3.415
#endif

int main()
{
    cout << PI << endl;
    cout << SQR(8) << endl;
    cout << MSG(Hello) << endl;
}