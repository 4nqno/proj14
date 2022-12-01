#include <fcntl.h>
int main(){
	char buff[11];
	int fd;
	fd = open("test.txt",O_RDONLY);
	read(fd, buff, 11);
	write(1, buff, 11);
	close(fd);
}
