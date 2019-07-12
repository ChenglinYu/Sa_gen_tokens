#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_3[24];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_7 = 50;                                       // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    if (entity_9 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 88;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 27; entity_5 < entity_9; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_3[entity_5] = 'c';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_6[56];                                   // Tag.BODY
    entity_0 = 48;                                       // Tag.BODY
    entity_6[entity_0] = 'k';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER