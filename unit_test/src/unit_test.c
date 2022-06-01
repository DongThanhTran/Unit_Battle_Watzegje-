/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safoh <safoh@student.codam.nl>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:46:15 by safoh             #+#    #+#             */
/*   Updated: 2022/05/30 23:43:09 by safoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "frame.h"
#include "frame.h"

void	tester(double x, double y, double expected);
double ft_pow(double x, double y)
{
	return (x * y);
}

void	check_struct (){
	struct s_frame s;
	int a = s.throw_1;
	int b = s.throw_2;
	int c = s.points;
	(void)s;
	(void)a;
	(void)b;
	(void)c;
}

Test(typedef_check, should_pass_all_tests_provided)
{
	t_frame frame;
	(void)frame;
}

Test(Array_check, should_pass_all_tests_provided){
	t_game game;
	t_frame a = game.frames[9];
	(void)a;
}

Test(Example_Tests, should_pass_all_tests_provided)
{
	tester(1.0, 1.0, 1.0);
	check_struct();
}

void	tester(double x, double y, double expected)
{
	double submitted;
	submitted = ft_pow(x, y);
	cr_assert(ft_pow(x, y) == expected,
		"Submitted:\t%f for %f to the power of %f\nExpected:\t%f\n",
		submitted, x, y, expected
		);
}
