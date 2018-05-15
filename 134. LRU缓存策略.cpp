public class LRUCache {
    class CacheNode
    {
        int key;
        int value;
        CacheNode prev;
        CacheNode next;
    }
    private int curSize;
    private int size;
    Hashtable<Integer,CacheNode> nodes;
    CacheNode head;
    CacheNode tail;
    /*
    * @param capacity: An integer
    */public LRUCache(int capacity) {
        // do intialization if necessary
        curSize=0;
        size=capacity;
        head=tail=null;
        nodes=new Hashtable(size);
    }

    /*
     * @param key: An integer
     * @return: An integer
     */
    public int get(int key) {
        // write your code here
        CacheNode node=nodes.get(key);
        if(node==null) return -1;
        int value=node.value;
        moveToHead(node);
        return value;
    }

    private void moveToHead(CacheNode node)
    {
        if(head==node) return;
        if(node.prev!=null) 
        {
            node.prev.next=node.next;
        }
        if(node.next!=null)
        {
            node.next.prev=node.prev;
        }
        if(node==tail)
        {
            tail=node.prev;
        }
        node.next=head;
        node.prev=null;
        if(head!=null)
        {
            head.prev=node;
        }
        head=node;
        if(tail==null) tail=head;
    }
    /*
     * @param key: An integer
     * @param value: An integer
     * @return: nothing
     */
    public void set(int key, int value) {
        // write your code here
        CacheNode node=nodes.get(key);
        if(node==null)
        {
            if(curSize>=size)
            {
                if(tail!=null) nodes.remove(tail.key);
                moveTail();
            }
            else curSize++;
            node =new CacheNode();
        }
        node.key=key;
        node.value=value;
        nodes.put(key,node);
        moveToHead(node);
    }
    
    private void moveTail()
    {
        if(tail!=null)
        {
            if(tail.prev!=null)
            {
                tail.prev.next=tail.next;
            }
            else head=null;
            tail=tail.prev;
        }
    }
}