#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_2[40];                                   // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    entity_4 = 85;                                       // Tag.BODY
    if (entity_6 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 15;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 20; entity_9 < entity_6; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_2[entity_9] = 'D';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_0 = 83;                                       // Tag.BODY
    char entity_1[33];                                   // Tag.BODY
    entity_1[entity_0] = 'g';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER