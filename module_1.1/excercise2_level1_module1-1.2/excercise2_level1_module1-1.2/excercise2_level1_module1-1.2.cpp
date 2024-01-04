#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <chrono>
#include <utility>
using namespace std;
using namespace std::chrono;
int main()
{
    cout << "hi";
    //// Subquestion (a)
    //string str1 = "HelloWorld"; // source string
    //string str2; // target string

    //cout << "str1 before move: " << str1 << endl;
    //cout << "str2 before move: " << str2 << endl;

    //str2 = move(str1);
    //cout << "\nstd::move performed on string!\n\n";

    //cout << "str1 after move: " << str1 << endl;
    //cout << "str2 after move: " << str2 << endl;

    //// we can see that the str1 string is still valid, but in an unspecified state
    //// and the str2 string contains the "HelloWorld" data which str1 held previously

    //// Subquestion (b)
    //// let us create a vector with 50 random values and let us see the time taken to copy the data using 
    //// (1) std::move (2) copy constructor (3) copy assignement operator

    //srand(time(NULL));

    //vector<int> vec1; // source vector
    //vector<int> vec2; // target vector

    //for (int i = 0;i < 50;i++)
    //    vec1.push_back(rand());

    //auto printIntEle = [](int i) { cout << i << " "; };

    //cout << "\nvec1 before move:" << endl;
    //for_each(vec1.begin(), vec1.end(),printIntEle);
    //cout << "\nvec2 before move:" << endl;
    //for_each(vec2.begin(), vec2.end(), printIntEle);


    //auto start_vec_move = high_resolution_clock::now();
    //vec2 = move(vec1);
    //auto end_vec_move = high_resolution_clock::now();

    //cout << "\nstd::move perfromed on vector!\n\n";


    //cout << "\nvec1 after move:" << endl;
    //for_each(vec1.begin(), vec1.end(), printIntEle);
    //cout << "\nvec2 after  move:" << endl;
    //for_each(vec2.begin(), vec2.end(), printIntEle);

    //auto duration = duration_cast<nanoseconds>(end_vec_move - start_vec_move);

    //cout << "Time taken to perform std::move on vector: " << duration.count() << " nanoseconds" << endl;

    return 0;
}
