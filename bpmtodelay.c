#include <stdio.h>
#include <stdlib.h>

void print_delay_conversions(int bpm);
double get_delay_ms(int bpm, int denominator, char flag);

int main(int argc, char** argv) {
  if (argc != 2) {
    printf("Usage: bpmtodelay <bpm>\n");
    exit(EXIT_FAILURE);
  }

  int bpm = atoi(argv[1]);

  if (!(bpm >= 10 && bpm <= 300)) {
    printf("bpm is not in allowed range of 10 - 300.\n Exiting...\n");
    exit(EXIT_FAILURE);
  }

  print_delay_conversions(bpm);
    
  return 0;
}

void print_delay_conversions(int bpm) {
  for (int powerOf2 = 2; powerOf2 <= 64; powerOf2 *= 2) {
    printf("1/%dD: \t%.3f ms\n", powerOf2, get_delay_ms(bpm, powerOf2, 'd'));
    printf("1/%d: \t%.3f ms\n", powerOf2, get_delay_ms(bpm, powerOf2, 'n'));
    printf("1/%dT: \t%.3f ms\n", powerOf2, get_delay_ms(bpm, powerOf2, 't'));
  }
}

double get_delay_ms(int bpm, int denominator, char flag) {
  double quarterNoteLength = 60000 / bpm;
  double normalDelayLength = quarterNoteLength * (4.0 / denominator);

  if (flag == 'n') { //just normal delay length
    return normalDelayLength;
  } else if (flag == 'd') { //delay for dotted length
    return normalDelayLength * 1.5;
  } else if (flag == 't') { //delay for triplet length
    return normalDelayLength * (2.0 / 3.0);
  } else {
    printf("Error: Unknown flag called in get_delay_ms. \n Exiting...\n");
    exit(EXIT_FAILURE);
  }
}
