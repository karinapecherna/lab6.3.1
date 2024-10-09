#include <iostream>
#include <iomanip>
#include <cassert>
#include "../lab6.3.1/FileName.cpp"
#include "pch.h"  /
#include "CppUnitTest.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SortTests
{
    TEST_CLASS(SortTests)
    {
    public:

        // Declare your sort function here (you may include a header file instead)
        void Min(int* a, const int size, int& min, int& imin, int j);
        void Sort(int* a, const int size, int i);
       

        TEST_METHOD(TestSortSingleElement)
        {
            int arr[] = { 5 };
            Sort(arr, 1, 0);
            Assert::AreEqual(arr[0], 5);  
        }

       
    };
    void SortTests::Min(int* a, const int size, int& min, int& imin, int j)
    {
    }
    void SortTests::Sort(int* a, const int size, int i)
    {
    }
}
