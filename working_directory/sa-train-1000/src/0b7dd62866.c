#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    char entity_9[48];                                   // Tag.BODY
    entity_1 = 8;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    if (entity_2 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 74;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 99; entity_8 < entity_2; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_8] = 'B';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER