// // 9. Program which encrypts a string by an integer key. The string and key are accepted as command line arguments. 
// //    The key will be sorted as a string. Hence we have to convert it to an integer.



// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// void encrypt(char *str, int key) {
//     for (int i = 0; i < strlen(str); i++) 
//     {
//         if (str[i] >= 'a' && str[i] <= 'z') 
//         {
//             str[i] = ((str[i] - 'a' + key) % 26) + 'a';
//         } 
//         else if (str[i] >= 'A' && str[i] <= 'Z') 
//         {
//             str[i] = ((str[i] - 'A' + key) % 26) + 'A';
//         }
//     }
// }
// int main(int argc, char *argv[]) 
// {
//     if (argc != 3) 
//     {
//         printf("Usage: %s <string> <key>\n", argv[0]);
//         return 1;
//     }
//     char *str = argv[1];
//     char *key_str = argv[2];
//     int key = atoi(key_str);
//     encrypt(str, key);
//     printf("Encrypted string: %s\n", str);
//     return 0;
// }