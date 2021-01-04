#include <iostream>
#include <array>

template<typename I, typename OB>
void _copy(const I& input, OB output)
{
    std::copy(std::begin(input), std::end(input), output);
}

struct A
{
    const int oldArray[3] = {1,2,3};
};

struct B
{
    std::array<int, 3> newArray;
};

int main()
{
    A a;
    B b;

    _copy(a.oldArray,  b.newArray.begin());

    for (const auto& i : b.newArray)
    {
        std::cout << i << ", ";
    }
}
