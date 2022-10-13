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

//���� ����ġ �׷����� �������
int data[N + 1][N + 1] = {
    {0, 0, 0, 0, 0, 0, 0,},
    {0, 0, 2, INF, 3, INF, INF},
    {0, INF, 0, 4, 1, 7, INF},
    {0, INF, INF, 0, 4, 1, 3},
    {0, INF, 2, 2, 0, 1, INF},
    {0, INF, INF, 1, INF, 0, 6},
    {0, INF, 3, INF, 8, INF, 0}
};

int main() {
    dist[1] = 0;
    flag[1] = 1;

    for (i = 2; i <= N; i++) {
        flag[i] = 0;
        dist[i] = data[1][i];
    }

}