#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    char entity_9[94];                                   // Tag.BODY
    char entity_6[90];                                   // Tag.BODY
    entity_1 = 53;                                       // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    entity_3 = 61;                                       // Tag.BODY
    if (entity_0 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 32;                                       // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_3] = 'F';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_4 = 94; entity_4 < entity_0; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_5[61];                                   // Tag.BODY
    entity_8 = 99;                                       // Tag.BODY
    entity_9[entity_4] = '8';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_5[entity_8] = 'A';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER