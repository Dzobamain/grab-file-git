# Grab file git

## Setting Up a Global Command

To make your `clonef` program executable as a global command without using `./`, follow these steps:

---

### **Linux/macOS**
1. Compile your program:
   ```bash
   gcc -o clonef clonef.c
   ```
2. Move the executable to `/usr/local/bin`:
   ```bash
   sudo mv clonef /usr/local/bin/
   ```
3. Grant execute permissions:
   ```bash
   chmod +x /usr/local/bin/clonef
   ```

### **Windows**
1. Compile your program:
   ```bash
   gcc -o clonef.exe clonef.c
   ```
2. Create a directory for executables, e.g.:
   ```
   C:\grab-file-git
   ```
3. Move `clonef.exe` to this directory.
4. Add the directory to the `PATH` environment variable:
   - Open *Control Panel* → *System* → *Advanced System Settings* → *Environment Variables*.
   - Locate the `PATH` variable and add your directory, e.g.:
     ```
     C:\grab-file-git
     ```