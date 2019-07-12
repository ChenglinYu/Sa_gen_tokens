#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_1[7];                                    // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_7[32];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    entity_8 = 36;                                       // Tag.BODY
    entity_4 = 97;                                       // Tag.BODY
    if (entity_3 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 16;                                       // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_4] = 'h';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_5 = 71; entity_5 < entity_3; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_5] = 'n';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER