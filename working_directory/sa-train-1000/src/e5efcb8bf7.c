#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    int entity_0;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = 54;            // Tag.BODY
    char entity_3[42];        // Tag.BODY
    entity_0 = 2;             // Tag.BODY
    char entity_6[50];        // Tag.BODY
    if(entity_8 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 69;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_8] = 'u'; // Tag.BUFWRITE_COND_UNSAFE
    entity_6[entity_2] = '0'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER