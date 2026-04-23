import java.util.HashMap;

class Solution {
    public boolean solution(String[] phone_book) {
        HashMap<String, Integer> phone = new HashMap<>();
        for(String number : phone_book) phone.put(number, 0);
        for(String number : phone.keySet()){
            for(int i = 1; i <= number.length(); i++){
                if(phone.containsKey(number.substring(0, i))){
                    if(number.equals(number.substring(0, i))) continue;
                    return false;
                }
            }
        }
        return true;
    }
}