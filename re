  public static LN removeFirst(LN l, int value)
  {
    if (l != null)
      if (l.value == value)
        l = l.next;
      else
        l.next = removeFirst(l.next, value);

    return l;
  }
  
   public static LN removeAll(LN l, int value)
  {
    if (l == null)
      return null;
    else
      if (l.value == value)
        return removeAll(l.next,value);
      else {
        l.next = removeAll(l.next, value);
        return l;
      }
  }
