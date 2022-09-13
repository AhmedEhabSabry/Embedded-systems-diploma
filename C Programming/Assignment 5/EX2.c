

#include <stdio.h>
struct sdistant {
	int feet;
	int inches;
};
struct sdistant read_dist() {
	struct sdistant s1;
	printf("Enter information for 1st distance\r\n");
	printf("Enter feet ");
	scanf("%d", &s1.feet);

	printf("Enter inch ");
	scanf("%d", &s1.inches);
	return s1;
}
struct sdistant add_dist(struct sdistant s1, struct sdistant s2) {
	struct sdistant s3;
	if ((s1.inches + s2.inches) >= 12) {
		s3.inches = (s1.inches + s2.inches) - 12;
		s3.feet = s1.feet + s2.feet + 1;
	} else {
		s3.inches = (s1.inches + s2.inches);
		s3.feet = s2.feet + s1.feet;
	}
	return s3;
}
int main() {
	struct sdistant s1, s2, s3;
	printf("Enter information for lst distance ");
	s1 = read_dist();
	printf("Enter information for 2nd distance ");
	s2 = read_dist();
	s3 = add_dist(s1, s2);
	printf("sum of distances = %d feet %d inches ", s3.feet, s3.inches);
}
