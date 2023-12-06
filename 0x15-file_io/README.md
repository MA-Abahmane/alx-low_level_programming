# C File I/O Cheatsheet

## Include Header File
```c
#include <stdio.h>
```

## File Pointers
- `FILE` structure is used to represent a file stream.
```c
FILE *fp;
```

## Opening a File
- `fopen` is used to open a file with a specified mode.
```c
fp = fopen("filename.txt", "mode");
```

### File Modes
- `"r"`: Read
- `"w"`: Write (creates a new file or truncates an existing file)
- `"a"`: Append (opens for writing at the end of file or creates a new file)
- `"r+"`: Read and Write
- `"w+"`: Read and Write (creates a new file or truncates an existing file)
- `"a+"`: Read and Append

## Closing a File
- `fclose` is used to close an open file.
```c
fclose(fp);
```

## Reading from a File
- `fscanf` is used to read data from a file.
```c
fscanf(fp, "%s", buffer);
```

## Writing to a File
- `fprintf` is used to write data to a file.
```c
fprintf(fp, "Hello, World!");
```

## Reading a Line from a File
- `fgets` is used to read a line from a file.
```c
fgets(buffer, sizeof(buffer), fp);
```

## Writing a Line to a File
- `fputs` is used to write a line to a file.
```c
fputs("Hello, World!\n", fp);
```

## Binary File I/O
- For binary file I/O, use `"b"` along with other modes.
  - Example: `"rb"`, `"wb"`, `"ab"`, `"r+b"`, `"w+b"`, `"a+b"`.

## Checking for File Opening Errors
- Always check if the file is successfully opened before performing operations.
```c
if (fp == NULL) {
    perror("Error opening file");
    // Handle the error
}
```

## File Positioning
- `fseek` and `ftell` are used to set and get the file position.
```c
fseek(fp, offset, SEEK_SET); // Set file position
long position = ftell(fp);  // Get current file position
```

## Error Handling
- Use `perror` to print descriptive error messages.
```c
perror("Error message");
```

## Example: Reading and Writing a File
```c
#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    char buffer[100];

    // Open file for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input file");
        return 1;
    }

    // Open file for writing
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Error opening output file");
        fclose(inputFile); // Close the input file before exiting
        return 1;
    }

    // Read from input file and write to output file
    while (fscanf(inputFile, "%s", buffer) != EOF) {
        fprintf(outputFile, "%s\n", buffer);
    }

    // Close the files
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
```
