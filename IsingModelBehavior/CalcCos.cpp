#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _USE_MATH_DEFINES
#include <math.h>


void calcCos(int n, int J, int M_MIN, int M_MAX) {
	/*
	int spin[n][n];
	double radian = 0 * M_PI / 180.0;

	// �����_���ɃX�s���̌��������߂�
	srand((unsigned)time(NULL));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			double randomNum = ((double)rand()) / ((double)RAND_MAX + 0) * 1;
			if (randomNum > 0.5) {
				spin[i][j] = -1;
			}
			else {
				spin[i][j] = 1;
			}
		}
	}

	// ���x��ς��Ȃ���G�l���M�[���v�Z����
	double temp = 0;
	for (int tempIndex = 0; tempIndex < 30; tempIndex++) {
		double sa2 = 0;
		temp += 0.1;

		for (int step = 1; step < M_MAX; step++) {

			// �G�l���M�[�̌v�Z
			// �ׂ̃X�s�������݂��Ȃ��ꍇ(�[�̃X�s��)�́A0�Ԗڂ̃X�s�����Q�Ƃ���
			double energy = 0;
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					if (i == N - 1 && j == N - 1) {
						energy = energy - J * (spin[i][j] * spin[0][j] + spin[i][j] * spin[i][0]) + cos(radian) * spin[i][j];
					}
					else if (i == N - 1) {
						energy = energy - J * (spin[i][j] * spin[0][j] + spin[i][j] * spin[i][j + 1]) + cos(radian) * spin[i][j];
					}
					else if (j == N - 1) {
						energy = energy - J * (spin[i][j] * spin[i + 1][j] + spin[i][j] * spin[i][0]) + cos(radian) * spin[i][j];
					}
					else {
						energy = energy - J * (spin[i][j] * spin[i + 1][j] + spin[i][j] * spin[i][j + 1]) + cos(radian) * spin[i][j];
					}
				}
			}

			// �����_���ɃX�s����I�сA���]������(����O�̏�Ԃ͕ێ����Ă���)
			int x = rand() % N;
			int y = rand() % N;
			int saveState = spin[x][y];
			spin[x][y] *= -1;

			// ���]��̃G�l���M�[���v�Z
			// �ׂ̃X�s�������݂��Ȃ��ꍇ(�[�̃X�s��)�́A0�Ԗڂ̃X�s�����Q�Ƃ���
			double flippedEnergy = 0;
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					if (i == N - 1 && j == N - 1) {
						flippedEnergy = flippedEnergy - J * (spin[i][j] * spin[0][j] + spin[i][j] * spin[i][0]) + cos(radian) * spin[i][j];
					}
					else if (i == N - 1) {
						flippedEnergy = flippedEnergy - J * (spin[i][j] * spin[0][j] + spin[i][j] * spin[i][j + 1]) + cos(radian) * spin[i][j];
					}
					else if (j == N - 1) {
						flippedEnergy = flippedEnergy - J * (spin[i][j] * spin[i + 1][j] + spin[i][j] * spin[i][0]) + cos(radian) * spin[i][j];
					}
					else {
						flippedEnergy = flippedEnergy - J * (spin[i][j] * spin[i + 1][j] + spin[i][j] * spin[i][j + 1]) + cos(radian) * spin[i][j];
					}
				}
			}

			// �G�l���M�[�̍����v�Z���A���]��̐V������Ԃ��̑����邩�ǂ����𔻒肷��
			double energyDif = flippedEnergy - energy;
			// ��E(energyDif) >= 0�̂Ƃ��A�m��P...�ō̑�����
			if (energyDif >= 0) {
				double prob = exp(-1.0 * energyDif / temp);
				double randomNum2 = ((double)rand()) / ((double)RAND_MAX + 0) * 1;
				if (randomNum2 > prob) {
					spin[x][y] = saveState;
				}
			}

			// �S�̂̃G�l���M�[(����)���Z�o����
			if (step > M_MIN) {
				double sa = 0;
				for (int i = 0; i < N; i++) {
					for (int j = 0; j < N; j++) {
						sa += spin[i][j];
					}
				}
				sa = sa / (N * N);
				sa2 = fabs(sa) / (M_MAX - M_MIN) + sa2;
			}

		}
		printf("T=%.1f : %f\n", temp, sa2);

	}
	system("pouse");

	return 0;
	*/
}