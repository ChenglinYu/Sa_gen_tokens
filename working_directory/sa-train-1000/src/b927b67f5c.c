#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_3;                                       // Tag.BODY
    int entity_5;                                       // Tag.BODY
    int entity_7;                                       // Tag.BODY
    char entity_1[30];                                  // Tag.BODY
    entity_3 = rand();                                  // Tag.BODY
    entity_7 = 71;                                      // Tag.BODY
    if (entity_3 < entity_7){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_3 = 39;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_5 = 2; entity_5 < entity_3; entity_5++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_1[entity_5] = 'c';                           // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER