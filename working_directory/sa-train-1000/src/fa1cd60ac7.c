#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 11;                                       // Tag.BODY
    char entity_7[25];                                   // Tag.BODY
    if (entity_4 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 43;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_6 = 27; entity_6 < entity_4; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_2[43];                                   // Tag.BODY
    entity_7[entity_6] = 'd';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_8 = 96;                                       // Tag.BODY
    entity_2[entity_8] = 'l';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER