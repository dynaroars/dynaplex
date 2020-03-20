package edu.unl.cse.malyshev;

import java.util.Collections;
import java.util.List;
import java.util.Optional;

import static java.util.Collections.emptyList;

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
    


}
