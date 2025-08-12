#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N; //큐의 크기
    int M; //뽑아내려는 수의 개수

    scanf("%d %d", &N, &M);

    int deque[50]; //덱(Deque)으로 사용할 배열 선언 (문제 조건에서 N은 50 이하)
    //1부터 N까지의 수로 덱 초기화
    for (int i = 0; i < N; i++) {
        deque[i] = i + 1;
    }
    int deque_size = N; //현재 덱의 크기
    int total_ops = 0;  //2, 3번 연산의 총 횟수

    //뽑아내려는 수의 개수(M)만큼 반복
    for (int i = 0; i < M; i++) {
        int target;
        scanf("%d", &target); //뽑아낼 숫자를 입력한다.

        //뽑아내려는 숫자의 현재 위치(인덱스)를 찾는다.
        int target_idx = -1;
        for (int j = 0; j < deque_size; j++) {
            if (deque[j] == target) {
                target_idx = j;
                break;
            }
        }

        if (target_idx == -1) continue; //숫자를 찾지 못한 경우 (일어나지 않는다)

        int left_ops = target_idx; //왼쪽으로 이동하는 비용 (2번 연산)
        int right_ops = deque_size - target_idx; //오른쪽으로 이동하는 비용 (3번 연산)

        //왼쪽 이동이 더 효율적이거나 같은 경우
        if (left_ops <= right_ops) {
            total_ops += left_ops; //이동 횟수 추가한다.
            //왼쪽으로 회전 (앞의 원소를 뒤로 보내기)
            for (int k = 0; k < left_ops; k++) {
                int temp = deque[0];
                for (int l = 0; l < deque_size - 1; l++) {
                    deque[l] = deque[l + 1];
                }
                deque[deque_size - 1] = temp;
            }
        } else { //오른쪽 이동이 더 효율적인 경우
            total_ops += right_ops; //이동 횟수 추가한다.
            //오른쪽으로 회전 (뒤의 원소를 앞으로 보내기)
            for (int k = 0; k < right_ops; k++) {
                int temp = deque[deque_size - 1];
                for (int l = deque_size - 1; l > 0; l--) {
                    deque[l] = deque[l - 1];
                }
                deque[0] = temp;
            }
        }
        //목표 원소가 맨 앞에 위치했으므로 첫 번째 원소 제거한다. (1번 연산)
        for (int j = 0; j < deque_size - 1; j++) {
            deque[j] = deque[j + 1];
        }
        deque_size--; //덱 크기 감소
    }
    
    printf("%d\n", total_ops); //총 이동 횟수 출력한다.
    return 0;
}