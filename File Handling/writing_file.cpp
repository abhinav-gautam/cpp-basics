#include <fstream>
using namespace std;

int main()
{
    ofstream outfile("Sample.txt");
    outfile << "Introduction to file handling";
    outfile.close();

    ofstream outfile2("Sample.txt", ios::app); // ios::app to append to the file. Default is ios::trunc which truncates the file
    outfile2 << "26";
    outfile2.close();
}