
#ifndef FRAME_H
# define FRAME_H

typedef enum e_type {
	NOTHING,
	SPARE,
	STRIKE
} type;

typedef struct s_frame {
	int	throw_1;
	int	throw_2;
	int	throw_3;
	type throw_type;
}	t_frame;
#endif