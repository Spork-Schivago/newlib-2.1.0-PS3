#include <dirent.h>

int scandir (const char *directory_name,
             struct dirent ***array_pointer,
             int (*select_function) (const struct dirent *),
#ifdef USE_SCANDIR_COMPARE_STRUCT_DIRENT
             /* This is what the linux man page says */
             int (*compare_function) (const struct dirent**, const struct dirent**)
#else
             /* This is what the Linux header file says ... */
             int (*compare_function) (const void *, const void *)
#endif
            );

int alphasort(const void *dirent1, const void *dirent2);
