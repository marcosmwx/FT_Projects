
#include "libft/libft.h"

void	handle_signal(int sig)
{
	static unsigned char c;
	static int			bit = 0;

	if (sig == SIGUSR2)
		c |= (1 << (7 - bit));
	bit++;
		if (bit == 8)
	{
		if (c == '\0')
			write(1, "\n", 1);
		else
			write(1, &c, 1);
		c = 0;
		bit = 0;
	}
}

int     main(void)
{
        ft_printf("Server PID: %d\n", getpid());
        signal(SIGUSR1, handle_signal);
        signal(SIGUSR2, handle_signal);

        while (1)
                ;
        return (0);
}
