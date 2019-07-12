#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_3[42];                                   // Tag.BODY
    char entity_6[67];                                   // Tag.BODY
    entity_9 = 24;                                       // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    entity_0 = 26;                                       // Tag.BODY
    int entity_8;                                        // Tag.BODY
    if (entity_4 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 83;                                       // Tag.BODY
    entity_6[entity_0] = '8';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    for(entity_8 = 34; entity_8 < entity_4; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_5[10];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 44;                                       // Tag.BODY
    entity_3[entity_8] = 'h';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_5[entity_2] = 'R';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER