#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_1[45];                                   // Tag.BODY
    char entity_6[40];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_8 = 9;                                        // Tag.BODY
    entity_4 = 7;                                        // Tag.BODY
    entity_0 = 98;                                       // Tag.BODY
    char entity_5[99];                                   // Tag.BODY
    entity_5[entity_4] = 'k';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_2 = rand();                                   // Tag.BODY
    entity_6[entity_8] = 'Q';                            // Tag.BUFWRITE_TAUT_SAFE
    if (entity_2 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 27;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 90; entity_9 < entity_2; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_9] = 'h';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER