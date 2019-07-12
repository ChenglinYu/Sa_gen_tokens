#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_7 = 85;                                       // Tag.BODY
    entity_8 = 57;                                       // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    char entity_1[34];                                   // Tag.BODY
    char entity_6[88];                                   // Tag.BODY
    if (entity_3 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 43;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 37; entity_4 < entity_3; entity_4++){ // Tag.BODY
    entity_1[entity_8] = 'C';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_9[20];                                   // Tag.BODY
    entity_6[entity_4] = 'L';                            // Tag.BUFWRITE_COND_SAFE
    entity_2 = 2;                                        // Tag.BODY
    entity_9[entity_2] = 'd';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER