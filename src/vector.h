#ifndef VECTOR_H
# define VECTOR_H

typedef struct	s_vec3
{
	double		x;
	double		y;
	double		z;
}				t_vec3;

t_vec3	vec_add(t_vec3 *v1, t_vec3 *v2);
t_vec3	vec_sub(t_vec3 *v1, t_vec3 *v2);
t_vec3	vec_mul(t_vec3 *v1, t_vec3 *v2);
t_vec3	vec_add_num(t_vec3 *v, double n);
t_vec3	vec_sub_num(t_vec3 *v, double n);
t_vec3	vec_mul_num(t_vec3 *v, double n);
t_vec3	vec_div_num(t_vec3 *v, double n);
t_vec3	vec_unit(t_vec3 *v);
double	vec_dotproduct(t_vec3 *v1, t_vec3 *v2);
double	vec_length(t_vec3 *v);

#endif
