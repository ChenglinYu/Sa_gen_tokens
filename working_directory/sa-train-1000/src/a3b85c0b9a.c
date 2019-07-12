#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_4[14];                                   // Tag.BODY
    entity_1 = 44;                                       // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_3[8];                                    // Tag.BODY
    entity_5 = 10;                                       // Tag.BODY
    entity_8 = rand();                                   // Tag.BODY
    if (entity_8 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8 = 85;                                       // Tag.BODY
    entity_3[entity_5] = 'g';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    for(entity_0 = 80; entity_0 < entity_8; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_2[54];                                   // Tag.BODY
    entity_4[entity_0] = 'x';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_7 = 20;                                       // Tag.BODY
    entity_2[entity_7] = 'V';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER