#include "binary_search.h"

const int *binary_search(int value, const int *arr, size_t length) {

    /*
    ! Binary search only works when a list has been sorted!
    1. Find the middle element of a sorted list
    2. Compare it with the item we're looking for
    3. if the middle element is:
        a. our item. we're done!
        b. greater than our item, we can eliminate that element and all the elements after it.
        c. less than our item, we can eliminate that element and all the elements before it.
        d. if every element of the list has been eliminated then the item not in the list
        e. otherwise, repat the process on the part of the list that has not been eliminated.
     */

    if (arr == NULL || arr[0] == '\0' || length == 0 || value > arr[length - 1] || value < arr[0]) {
        return NULL;
    }
    // aproach 1:
    // int low = 0;
    // int high = length - 1;
    // while (low <= high) {
    //     i = (low + high) / 2;
    //     int middle_item = arr[i];
    //     if (middle_item == value) {
    //         return &arr[i];
    //     } else if (middle_item < value) {
    //         low = i + 1;
    //     } else {
    //         high = i - 1;
    //     }
    // }
    // return NULL;

    // aproach 2:
    while (length > 0) {
        size_t mid = length / 2;
        int middle_item = arr[mid];

        if (middle_item == value) {
            return &arr[mid];
        } else if (middle_item < value) {
            arr += mid + 1;
            length -= mid + 1;
        } else {
            length = mid;
        }
    }

    return NULL;
}
