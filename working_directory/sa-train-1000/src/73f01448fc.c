#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_1;                                       // Tag.BODY
    int entity_5;                                       // Tag.BODY
    char entity_3[45];                                  // Tag.BODY
    int entity_2;                                       // Tag.BODY
    entity_2 = 16;                                      // Tag.BODY
    int entity_6;                                       // Tag.BODY
    entity_5 = 53;                                      // Tag.BODY
    entity_6 = rand();                                  // Tag.BODY
    char entity_8[17];                                  // Tag.BODY
    if (entity_6 < entity_5){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_6 = 9;                                       // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_1 = 5; entity_1 < entity_6; entity_1++){ // Tag.BODY
    entity_8[entity_2] = 'Z';                           // Tag.BUFWRITE_TAUT_SAFE
    }                                                   // Tag.BODY
    entity_3[entity_1] = '3';                           // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER