#include <stdio.h>
#include <stdlib.h>

#define MAX 1001
#define N 6      //������ ����
#define INF 9999 //���Ѵ� ǥ��

int visited[MAX];//DFS �˰��򿡰� ��ι湮 üũ��
int nodes[MAX];  //��� �湮 ����
int shortest_nodes[MAX]; //��� ����� �ִ� ��� �����
int idx = 1;
int min_path; //�ִ� ��� ã���(�Ÿ��� ���ٸ�, ���� ª�� ���)
int min_dist; //�ִ� ��� ã���(�Ÿ��� ���ٸ�, ���� ª�� ���)

int flag[N + 1]; //�ִܰŸ��� Ȯ���� ����(���)
int dist[N + 1]; //�ִܰŸ����� ������ �迭

int i, j, k, min, position;