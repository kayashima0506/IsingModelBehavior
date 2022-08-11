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

	// ランダムにスピンの向きを決める
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

	// 温度を変えながらエネルギーを計算する
	double temp = 0;
	for (int tempIndex = 0; tempIndex < 30; tempIndex++) {
		double sa2 = 0;
		temp += 0.1;

		for (int step = 1; step < M_MAX; step++) {

			// エネルギーの計算
			// 隣のスピンが存在しない場合(端のスピン)は、0番目のスピンを参照する
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

			// ランダムにスピンを選び、反転させる(判定前の状態は保持しておく)
			int x = rand() % N;
			int y = rand() % N;
			int saveState = spin[x][y];
			spin[x][y] *= -1;

			// 反転後のエネルギーを計算
			// 隣のスピンが存在しない場合(端のスピン)は、0番目のスピンを参照する
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

			// エネルギーの差を計算し、反転後の新しい状態を採択するかどうかを判定する
			double energyDif = flippedEnergy - energy;
			// δE(energyDif) >= 0のとき、確率P...で採択する
			if (energyDif >= 0) {
				double prob = exp(-1.0 * energyDif / temp);
				double randomNum2 = ((double)rand()) / ((double)RAND_MAX + 0) * 1;
				if (randomNum2 > prob) {
					spin[x][y] = saveState;
				}
			}

			// 全体のエネルギー(向き)を算出する
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