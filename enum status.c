#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status result;

    result = SUCCESS;

    switch (result) {
        case SUCCESS:
            printf("Operation Successful\n");
            break;

        case FAILURE:
            printf("Operation Failed\n");
            break;

        case TIMEOUT:
            printf("Operation Timed Out\n");
            break;

        default:
            printf("Invalid Status\n");
    }

    return 0;
}
