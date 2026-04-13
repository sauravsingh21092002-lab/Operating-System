# include < stdio .h >
# include < stdlib .h >
# include < unistd .h >
# include < sys / types .h >
# include < sys / wait .h >
# include < fcntl .h >
# include < string .h >
int main () {
int fd = open (" output .txt ", O_CREAT | O_WRONLY | O_APPEND , 0644) ;
if ( fd < 0) {
perror (" File open failed ") ;
exit (1) ;
}
pid_t pid = fork () ;
---------------
Write Child logic
if (pid == 0) {
    char *message = "This message is written by Child process \n";
    write(fd, message, strlean(message));
    close(fd);
    exit(0);
}
---------------
---------------
Write parent logic
else { wait(NULL);
    char *message = "This message is written by Parent Process \n";
    write(fd, message, strlen(message));
    close(fd);
}
---------------
return 0;
}
