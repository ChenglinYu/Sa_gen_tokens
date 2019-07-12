#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    char entity_3[40];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_9[40];                                   // Tag.BODY
    char entity_6[46];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    entity_5 = 31;                                       // Tag.BODY
    entity_9[entity_5] = '1';                            // Tag.BUFWRITE_TAUT_SAFE
    int entity_7;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_7 = 99;                                       // Tag.BODY
    entity_8 = 75;                                       // Tag.BODY
    if (entity_2 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 44;                                       // Tag.BODY
    entity_3[entity_7] = 'I';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    for(entity_4 = 13; entity_4 < entity_2; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_4] = 'u';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER