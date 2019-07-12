#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    char entity_5[51];        // Tag.BODY
    entity_0 = 84;            // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    if(entity_4 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 10;            // Tag.BODY
    }                         // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_6 = 64;            // Tag.BODY
    entity_5[entity_4] = '9'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_3[95];        // Tag.BODY
    char entity_8[41];        // Tag.BODY
    entity_8[entity_6] = 'G'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1 = 3;             // Tag.BODY
    entity_3[entity_1] = 'a'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER