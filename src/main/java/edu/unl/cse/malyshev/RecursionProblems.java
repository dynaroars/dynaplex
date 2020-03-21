package edu.unl.cse.malyshev;

import java.util.*;

import static java.util.Collections.*;
import static java.util.Collections.emptyList;
import static java.util.Objects.isNull;

public class RecursionProblems {

    /**
     * return last elem of a list
     *
     */
    // runtime complexity is O(n). Every time when an element is removed the internal array is copied using system.copy
    public Optional<String> last(List<String> list) {
        if (list.isEmpty())
            return Optional.empty();
        if (list.size() == 1)
            return Optional.of(list.get(0));
        list.remove(0);
        return last(list);
    }

    /**
     * return last but one (last and penultimate) elements
     *
     */
    public List<String> lastTwo(List<String> list) {
        if (list.isEmpty() || list.size() == 1)
            return emptyList();
        if (list.size() == 2)
            return list;
        list.remove(0);
        return lastTwo(list);
    }

    /**
     * return reverse list
     */
    public List<String> rev(List<String> list) {
        List<String> acc = new ArrayList<>();
        LinkedList<String> input = new LinkedList<>(list);
        tot(acc, input);
        return acc;
    }

    private void tot(List<String> acc, LinkedList<String> list) {
        String elem = list.pollLast();
        if (isNull(elem))
            return;
        acc.add(elem);
        tot(acc, list);
    }


    public boolean isPalindrome(List<String> list) {
        if (list.isEmpty())
            return true;
        LinkedList<String> copyList = new LinkedList<>(list);
        return isPalindrome(copyList);
    }

    /**
     * returns true if the list is palindrome
     */
    private boolean isPalindrome(LinkedList<String> ls) {
        String first = ls.pollFirst();
        String last = ls.pollLast();
        if (isNull(first) || isNull(last)) {
            return true;
        }
        if (!last.equals(first))
            return false;
        isPalindrome(ls);
        return true;
    }
}
