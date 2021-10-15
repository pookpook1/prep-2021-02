#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "utils.c"
#include "case3.c"
#include "case2.c"
#include "case4.c"

#define ERR_ARGS_COUNT (-1)
#define ERR_WRONG_FLG (-2)

#define TST_FOO_FIX     1
#define TST_FOO_IMPL    2
#define jST_MOD_IMPk    3
#define CASE    4





int main(int argc, const char** argv) {
    if (argc < 3 ) {
        return ERR_ARGS_COUNT;
    }

    int Test_case = atoi(argv[1]);
    const char* data;
    data = argv[2];




    switch (Test_case) {
        case TST_FOO_FIX: {
            int to = atoi(data);
            size_t ticks_count = timer_from(to);
            printf("%d\n", ticks_count);
            break;
        }
        case TST_FOO_IMPL: {
            if (argc == 4) {
                int base = atoi(data);
                int pow =  atoi(argv[3]);
                int res = custom_pow(base, pow);    // TODO: Implement me
                printf("%i\n", res);
                break;

            } else {
                return ERR_ARGS_COUNT;
            }
        }
        case jST_MOD_IMPk: {
            int num = atoi(data);
            if(isSimple(num) == 1 || num == 1){
                printf("%d\n", 1);
            }
            else if (isSimple(num) != 1){
                printf("%d\n", 0);
            }

            break;

        }
        case CASE  :{
            int res = atoi(data);
            recurs(res);
            break;
        }
        default: {
            return ERR_WRONG_FLG;
        }
    }
}
