#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    entity_1 = 66;                                       // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_0[16];                                   // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    if (entity_9 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 89;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 81; entity_8 < entity_9; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_3[73];                                   // Tag.BODY
    entity_0[entity_8] = 'd';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_7 = 87;                                       // Tag.BODY
    char entity_4[55];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_5 = 81;                                       // Tag.BODY
    entity_4[entity_7] = 'l';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3[entity_5] = '7';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER