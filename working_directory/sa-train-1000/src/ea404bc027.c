#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    char entity_1[67];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    char entity_2[68];                                   // Tag.BODY
    entity_5 = 62;                                       // Tag.BODY
    entity_7 = 88;                                       // Tag.BODY
    char entity_9[97];                                   // Tag.BODY
    entity_6 = 22;                                       // Tag.BODY
    if (entity_3 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 50;                                       // Tag.BODY
    entity_1[entity_6] = 'D';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    for(entity_8 = 88; entity_8 < entity_3; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_8] = 'H';                            // Tag.BUFWRITE_COND_SAFE
    entity_2[entity_7] = '2';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER