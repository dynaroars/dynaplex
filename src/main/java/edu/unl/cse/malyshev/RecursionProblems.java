package edu.unl.cse.malyshev;

import java.util.*;

import static java.util.Collections.*;
import static java.util.Collections.emptyList;
import static java.util.Objects.isNull;
import static java.util.Objects.nonNull;

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

    /**
     * flatten a list of lists
     */
    public List<String> flatten(LinkedList<TreeNode<String>> emdList) {
        List<String> res = new LinkedList<>();
        aux_flatten(res, emdList);
        return res;
    }
    private void aux_flatten(List<String> acc, List<TreeNode<String>> node) {
        TreeNode<String> elem = ((LinkedList<TreeNode<String>>) node).pollFirst();
        if (isNull(elem))
            return;
        if (elem.children.size() == 0) {
            acc.add(elem.data);
            aux_flatten(acc, node);
        }
        aux_flatten(acc, elem.children);
    }

    /**
     * Pack consecutive duplicates of list elements into sublists
     */
    public List<LinkedList<String>> pack(List<String> ls) {
        LinkedList<String> input = new LinkedList<>(ls);
        LinkedList<LinkedList<String>> acc = new LinkedList<>();
        aux_pack(new LinkedList<>(), acc, input);
        return acc;
    }

    private void aux_pack(LinkedList<String> sub, LinkedList<LinkedList<String>> acc, LinkedList<String> input) {
        String elem = input.pollFirst();
        if (isNull(elem)) {
            acc.add(sub);
            return;
        }
        if (!sub.isEmpty() && !sub.contains(elem)) {
            acc.add(sub);
            sub = new LinkedList<>();
        }
        sub.add(elem);
        aux_pack(sub, acc, input);
    }
}
