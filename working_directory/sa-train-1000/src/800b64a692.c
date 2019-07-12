#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    entity_3 = 62;                                       // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_6[64];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_1[52];                                   // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    entity_0 = 29;                                       // Tag.BODY
    if (entity_7 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1[entity_0] = 'G';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_7 = 74;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 87; entity_8 < entity_7; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_8] = 'W';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER