import java.util.HashMap;

class Solution {
   HashMap<String, Integer> map = new HashMap<String, Integer>();
    public String solution(String[] participant, String[] completion){
        String answer = "";
        for(String p : participant){
            map.put(p, (map.get(p)==null)? 1:map.get(p)+1 );
        }
        for(String p : completion){
            map.put(p, (map.get(p)==null)? 1:map.get(p)-1 );
        }
        return getKey(map).toString();
    }
    public static Object getKey(HashMap<String, Integer> m){
        for(Object o : m.keySet()){
            if(m.get(o)>0){
                return o;
            }
        }
        return 0;
    }
}