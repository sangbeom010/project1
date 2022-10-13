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

    printf("�ʱ������ D�迭 ���: \n");
    for (k = 1; k <= N; k++) {
        printf("Dist[%d]:%d, ", k, dist[k]);
    }
    printf("\n");
    for (i = 1; i < N; i++) { // N-1�� �ݺ�
        printf("\n");
        min = INF;
        //Vmin ã��
        for (j = 1; j <= N; j++) {
            if (min > dist[j] && flag[j] == 0) {
                min = dist[j];
                position = j;
            }
        }
        printf("selected Vmin is %d node  ", position);

        //���õ� Vmin�� Ȯ��
        flag[position] = 1;

        //D�迭 ����
        for (j = 1; j <= N; j++) {
            if (dist[j] > data[position][j] + dist[position] && data[position][j] != INF) {
                dist[j] = data[position][j] + dist[position];
            }
        }
        for (k = 1; k <= N; k++) {
            printf("Dist[%d]:%d, ", k, dist[k]);
        }
    }

    printf("\n\n");

    //1���� 1~6 �� ��庰 ��� ��ο� �Ÿ��� ����ϰ�, �ִ� �Ÿ� ���
    for (int i = 1; i <= N; i++) {
        //DFS�˰��򿡼� ����ϴ� ��� �湮�� �迭 �ʱ�ȭ, ��¿� �������� �迭 �ʱ�ȭ
        for (int j = 1; j <= N; j++) {
            nodes[j] = 0;
            visited[j] = 0;
        }
        min_path = INF; min_dist = INF;
        idx = 1;
        nodes[idx] = 1;
        idx++;
        //DFS �˰����� Ȱ���� ��� ��ο� �Ÿ� ���
        printf("> Node: %d, All paths\n", i);
        DFS(1, i);
        printf("## 1~%d: distance = %d, path: %d", i, dist[i], shortest_nodes[1]);
        for (int i = 2; i <= N; i++) {
            if (shortest_nodes[i] == INF || shortest_nodes[i] == 0) continue;
            printf(", %d", shortest_nodes[i]);
        }
        printf("\n\n");
    }
}


void DFS(int start_node, int dest_node) {
    int there, sum_dist, path_cnt;

    visited[start_node] = 1; //��� �湮 üũ��

}