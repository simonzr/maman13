typedef struct complex complex;

struct complex
{
	char name;
	float realPart;
	float imgPart;
};


void print_comp (complex *num);
void read_comp (complex *num, char name, float real, float img);
void add_comp (complex *num1, complex *num2);
void sub_comp (complex *num1, complex *num2);
void mult_comp_real (complex *num, float realMultiplier);
void mult_comp_img (complex *num, float imgMultiplier);
void mult_comp_comp ();
void abs_comp ();
void stop ();
