#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_5[74];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 57;                                       // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    if (entity_7 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 10;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 99; entity_9 < entity_7; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_9] = 'd';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER