#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    char entity_7[40];        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = 74;            // Tag.BODY
    if(entity_8 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 26;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_8] = 'L'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER