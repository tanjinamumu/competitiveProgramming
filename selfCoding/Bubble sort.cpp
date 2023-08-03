#include<iostream>
#include<vector>

class BubbleSort
{
private:
    std::vector<int> arr;

public:
    BubbleSort(std::vector<int> arr)
    {
        this->arr = arr;
    }

    void sort()
    {
        int n = arr.size();
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j+1])
                {
                    std::swap(arr[j], arr[j+1]);
                }
            }
        }
    }

    void output()
    {
        for (int i = 0; i < arr.size(); i++)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main()
{
    std::vector<int> arr = {55, 14, 95, 8, 66, 32, 10};
    BubbleSort bs(arr);
    std::cout << "Original array: ";
    bs.output();
    bs.sort();
    std::cout << "Sorted array: ";
    bs.output();
    return 0;
}

