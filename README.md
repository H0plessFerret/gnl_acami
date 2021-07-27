Old school 42 project.
Basic line-reading function with a following signature:

int	get_next_line(int fd, char **line);
It saves the next line (without \n) into the *line. *line is allocated by the function, so it needs to be freed later.


Return values:

1 if line was read successfully, EOF has not been reached

0 if line was read successfully, but EOF has been reached

-1 in case of bad file descriptor or other reading error
