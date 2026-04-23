class Solution {
    public static int distance(int n, int target){
        if(n == 0) n = 11;
        if(target == 0) target = 11;
        return (Math.abs(n - target) / 3) + (Math.abs(n - target) % 3);
    }
    public String solution(int[] numbers, String hand) {
        StringBuilder answer = new StringBuilder();
        int[] pos = {10, 12};
        for(int n : numbers){
            switch (n) {
                case 1, 4, 7 -> {
                    pos[0] = n;
                    answer.append("L");
                }
                case 3, 6, 9 -> {
                    pos[1] = n;
                    answer.append("R");
                }
                default -> {
                    int left = distance(pos[0], n);
                    int right = distance(pos[1], n);
                    if(left < right){
                        pos[0] = n;
                        answer.append("L");
                    } else if(left > right){
                        pos[1] = n;
                        answer.append("R");
                    } else{
                        if(hand.equals("left")){
                            pos[0] = n;
                            answer.append("L");
                        } else{
                            pos[1] = n;
                            answer.append("R");
                        }
                    }
                }
            }
        }
        return answer.toString();
    }
}