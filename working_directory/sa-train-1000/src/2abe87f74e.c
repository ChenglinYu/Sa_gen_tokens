#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_3[6];         // Tag.BODY
    int entity_7;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    char entity_2[72];        // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_9 = 74;            // Tag.BODY
    entity_7 = 50;            // Tag.BODY
    if(entity_1 < entity_9){  // Tag.BODY
    entity_2[entity_7] = 'c'; // Tag.BUFWRITE_TAUT_SAFE
    } else {                  // Tag.BODY
    entity_1 = 70;            // Tag.BODY
    }                         // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_3[entity_1] = 'D'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_6[80];        // Tag.BODY
    entity_0 = 71;            // Tag.BODY
    entity_6[entity_0] = 'C'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER