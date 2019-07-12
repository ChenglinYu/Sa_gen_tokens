#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_7[61];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 17;                                       // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_3 = 35;                                       // Tag.BODY
    char entity_1[65];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    if (entity_6 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 50;                                       // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_3] = 'I';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_9 = 77; entity_9 < entity_6; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_9] = 'O';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER