
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	fb_motor1.Tm = 0.1;
	fb_motor1.ke =  0.24;
	fb_motor1.u = 0.1;
	fb_motor1.integrator.prev_value =0;
	fb_motor1.integrator.out =0;
	
	fb_motor2.Tm =  0.1;
	fb_motor2.ke = 0.24;
	fb_motor2.u = 0.1;
	fb_motor2.integrator.prev_value =0;
	fb_motor2.integrator.out =0;
	
	regulator.k_i = 0.86;
	regulator.k_p = 0.26;
	regulator.max_abs_value = 24.0;
	regulator.integrator.prev_value =0;
	regulator.integrator.out =0;
	regulator.last_sum =0;
	
	sp = 0;
	counter = 0;
	enable =1;
}
