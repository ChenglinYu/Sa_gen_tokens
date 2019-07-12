#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_8 = 52;                                       // Tag.BODY
    char entity_1[91];                                   // Tag.BODY
    entity_5 = 7;                                        // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    char entity_6[40];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    if (entity_7 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 66;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 11; entity_3 < entity_7; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_1[entity_3] = 'D';                            // Tag.BUFWRITE_COND_SAFE
    entity_6[entity_8] = 'L';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2 = 10;                                       // Tag.BODY
    char entity_0[62];                                   // Tag.BODY
    entity_0[entity_2] = '0';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER