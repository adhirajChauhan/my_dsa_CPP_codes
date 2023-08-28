/*
    - Each variable uses space on computer’s memory to store its value.
    - When we use the term allocate, we indicate that the variable has been given a space on computer’s memory.
    - Deallocations means the space has been reclaimed by computer and the variable cannot be accessed now.

    - Memory allocation in C++ is done by two methods.

        One of them is Static Memory Allocation which is also called as Compile Time Allocation.

        And the other one is called as Dynamic Memory Allocation which is also know as Run Time Allocation.

    * Static Memory allocation

        In static memory allocation, size and location where variable will be stored is fixed during compile time.

        #include <iostream>
        using namespace std;
        int main()
        {
            int x;
            char ch;
            int a[100];
            return 0;
        }

        - In the above code there are three variables, x is a integer variable, ch is a character variable and a is a integer array.

        - In static memory allocation, compiler calculates how much memory these variables will need and fix a location where these variables will be stored.

        - locations of where variables will be stored is saved. But, actual physical memory is not allocated to the variable at compile time.

        - Actual physical memory is allocated only at runtime.

        - Static memory allocation is slightly faster than dynamic memory allocation.
        - Allocation and deallocation of memory is done by compiler itself.

    * Dynamic Memory allocation

        - Dynamic memory allocation allows you to define memory requirement during execution of the program.

        - Dynamic memory allocation uses special type of memory called as heap memory. Do not confuse this with heap data structure.

        - In dynamic memory allocation, new keyword is used to allocate memory and delete keyword is used to deallocate memory.

        - Unlike static memory allocation, allocation and deallocation of memory should be done by the programmer. That means programmer need to write code for allocation and deallocation the memory.

        - The new keyword returns the address that has been allocated to the variable on the heap memory. This happens during execution of the program.

        #include <iostream>
        using namespace std;
        int main()
        {
            int n;
            cin >> n;
            allocate memory
            int *arr = new int[n];
            cout << sizeof(arr) << endl;
            for(int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            Free up space
            delete []arr;
            return 0;
        }

        - In the above code, there is a variables n which is a integer variable and arr which is a integer pointer. Both of these variables are stored in the static part of the memory.

        - But during execution of the program, depending on the value of n, new keyword returns the physical address of the memory where the array has been allocated memory on the heap.

        - arr points to the address where array is stored. The address in question here is the one returned by new keyword.

*/