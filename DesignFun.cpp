/*
    DesignFun.cpp

    Provide a function declaration and function call for each
    block. Once you do, remove the @TODO for that block.

    Do not implement the function. Only provide the declaration and example call
    using the variables given.

    Make sure the program compiles, e.g., include the necessary include files.
    But, since you are not providing a function definition, the program will
    will not link or run successfully.

    To compile the program without linking:

        g++ --std=c++17 -c DesignFun.cpp

    For each function declaration, include a doxygen comment that describes
    the function and describes what data is IN, OUT, or IN/OUT.

    Finish the problem for each @TODO, and then commit. Each commit should be
    to solve one of the @TODOs. The first one is done as an example.

    If any of the following are not followed, the score is a 0:

    * No use of any other files
    * No use of C++ standard library functions
    * No use of templates
    * No function definitions
*/

#include <vector>
#include <cassert>

/*
    Average of two numbers
    @param[in] n1 First input value
    @param[in] n2 Second input value
    @return Average of n1 and n2
*/
double avg(int n1, int n2);

/*
    Minimum of two numbers
    @param[in] n1 First input value
    @param[in] n2 Second input value
    @return Minimum of n1 and n2
*/
int min(int n1, int n2);

/*
    Minimum of two vectors
    @param[in] v1 First input value
    @param[in] v2 Second input value
    @return Minimum of v1 and v2
*/
std::vector<int> min(const std::vector<int>& v1, const std::vector<int>& v2);

/*
    Limit the values in a vector from low to high
    @param[in/out] v1 First input value
    @param[in] low second input value
    @param[in] high third input value
*/
void limit(std::vector<int>& v1, int low, int high);

int main() {

    // Average of two numbers
    {
        int n1 = 4;
        int n2 = 5;

        double result = avg(n1, n2);

        assert(result == 4.5);
    }

    // Minimum of two numbers
    {
        int n1 = 4;
        int n2 = 5;

        int result = min(n1, n2);

        assert(result == n1);
    }

    // Minimum of std::vectors of numbers
    {
        std::vector<int> v1{ 1, 2, 3 };
        std::vector<int> v2{ 1, 3, 3 };

        std::vector<int> result = min(v1, v2);

        assert(result == v1);
    }

    // Limit the values in a std::vector into a range from low to high
    {
        std::vector<int> v1{ 1, -1, 6, 0, 4, 5 };
        int low = 1;
        int high = 5;

        limit(v1, low, high);
        std::vector<int> result = v1;

        assert(result == std::vector<int>( { 1, 1, 5, 1, 4, 5 }));
    }

    // See if a value exists
    {
        std::vector<int> v{ 1, 2, 3 };
        int value = 3;

        bool result;
        // @TODO function call

        assert(result);
    }

    // Remove a value
    {
        std::vector<int> v{ 1, 2, 3, 2 };
        int value = 2;

        std::vector<int> result;
        // @TODO function call

        assert(result == std::vector<int>( { 1, 3 } ));
    }

    // Split a container into two containers given the first occurrence of a value
    {
        std::vector<int> v{ 1, 2, 3, 4, 5 };
        int value = 4;

        std::vector<int> result1;
        std::vector<int> result2; 
        // @TODO function call

        assert(result1 == std::vector<int>( { 1, 2, 3 }));
        assert(result2 == std::vector<int>( { 5 }));
    }
    
    return 0;
}
