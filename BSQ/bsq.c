#include <unistd.h>
#include <stdio.h> //printf
#include <stdlib.h> //atoi
#include <string.h> //strcpy

int str_is_numeric(char str)
{    
    return '0' <= str && str <= '9';;
}

int check_map(int *row_start, int *column_start, int *row_end, int *column_end)
{
    *row_start = 0;
    *column_start = 0;
    *row_end = 3;
    *column_end = 3;

    return 1;
}

int map(char *map_data)
{
    return 1;
}

int map_info(char *map, int *len, char *empty, char *obstacle, char *full)
{
    char str_len[] = "\0\0\0\0\0\0\0";
    int str_len_count = 0;
    char *str_len_start = str_len;

    while (*map != '\n')
    {
        if (str_is_numeric(*map))
        {
            str_len[str_len_count] = *map;
            str_len_count++;
        }
        else if (!*empty)
            *empty = *map;
        else if (!*obstacle)
            *obstacle = *map;
        else if (!*full)
            *full = *map;
        
        map++;
    }

    *len = atoi(str_len_start);

    return (1);
}

int main(int argc, char* argv[])
{
    char map[] = "10.ox\n.o..o.o...\n...o...ooo\n.....o.o..\n.......o..\n..o.....o.\n...o..o...\n.......o..\n..o......o\no.....o...\n..........";
    int len = 0;
    char empty = 0;
    char obstacle = 0;
    char full = 0;

    map_info(map, &len, &empty, &obstacle, &full);
    printf("map:%s\nlen:%i\nempty:%c\nobstacle:%c,\nfull:%c", map, len, empty, obstacle, full);
    
    return 0;
}