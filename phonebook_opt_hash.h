#ifndef _PHONEBOOK_HASH_H
#define _PHONEBOOK_HASH_H

#define MAX_LAST_NAME_SIZE 16

#define HASH 1
typedef struct __DETAILS {
    char firstName[16];
    char email[16];
    char phone[10];
    char cell[10];
    char addr1[16];
    char addr2[16];
    char city[16];
    char state[2];
    char zip[5];
} details;
typedef struct __PHONE_BOOK_ENTRY {
    char lastName[MAX_LAST_NAME_SIZE];
    details *data;
    struct __PHONE_BOOK_ENTRY *pNext;
} entry;
entry *findName(char lastName[], entry *pHead);
entry *append(char lastName[], entry *e);
unsigned int BKDRHash(char *str);
void hash_free();
#endif
