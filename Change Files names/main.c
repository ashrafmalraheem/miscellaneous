#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

#define MAX_PATH_SIZE       200
#define PREFIX_NAME_SIZE    32
int main()
{
    DIR *d;
    int ret;
    struct dirent *dir;
    char prefix [PREFIX_NAME_SIZE] = "dsPIC_"; // The prefix name you like to add
    char new_name [PREFIX_NAME_SIZE];    // The new name
    char new_name_path [MAX_PATH_SIZE];  // new name include the path
    char old_name_path [MAX_PATH_SIZE];  // old name include the path
    char path [MAX_PATH_SIZE] = "C:\\Users\\Ashraf Abubaker\\Git Repo\\src\\dsPIC\\";
    d =  opendir (path);
    //d =  opendir (".");  // open the current directory
    if (d)

    {
        while ((dir = readdir(d)) != NULL)

        {

            sprintf(new_name, "%s%s", prefix,dir->d_name); // Add the prefix to the file name
            sprintf(new_name_path, "%s%s", path,new_name); // Add the directory path to the new file name
            sprintf(old_name_path, "%s%s", path,dir->d_name); // Add the directory path to the old file name
            printf("Old name: %s ||  New name: %s\n", dir->d_name,new_name);
            #if 1
            ret = rename(old_name_path, new_name_path); // Rename the files

            if(ret == 0) {
                printf("File renamed successfully\n");
            } else {
                printf("Error: unable to rename the file\n");
            }
            #endif
        }

        closedir(d);

    }

    return(0);
}
