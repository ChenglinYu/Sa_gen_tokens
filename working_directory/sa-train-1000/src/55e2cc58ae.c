#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    char entity_5[42];        // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_6[17];        // Tag.BODY
    entity_9 = 29;            // Tag.BODY
    entity_5[entity_9] = 'L'; // Tag.BUFWRITE_TAUT_SAFE
    int entity_2;             // Tag.BODY
    entity_2 = 19;            // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    if(entity_4 < entity_2){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 60;            // Tag.BODY
    }                         // Tag.BODY
    char entity_0[91];        // Tag.BODY
    entity_6[entity_4] = 'A'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_1;             // Tag.BODY
    entity_1 = 10;            // Tag.BODY
    entity_0[entity_1] = 'J'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER