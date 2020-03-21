package edu.unl.cse.malyshev;

import org.assertj.core.api.Assertions;
import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;

import java.util.ArrayList;
import java.util.List;
import java.util.Optional;

import static org.junit.Assert.*;

public class Tests {

    private RecursionProblems rp;
    private List<String> list;
    private List<String> emptyList;

    @Before
    public void setup() {
        rp = new RecursionProblems();
        list = new ArrayList<>();
        emptyList = new ArrayList<>();
        list.add("1");
        list.add("2");
        list.add("lastElem");
    }

    @Test
    public void test_last() {
        assertEquals("lastElem", rp.last(list).get());
    }

    @Test
    public void givenEmptyList_getLast_returnNone() {
        assertEquals(Optional.empty(), rp.last(emptyList));
    }

    @Test
    public void test_lastTwo() {
        List<String> res = rp.lastTwo(list);
        assertEquals(2, res.size());
        assertEquals("2", res.get(0));
        assertEquals("lastElem", res.get(1));
    }

    @Test
    public void test_reverse() {
        List<String> res = rp.rev(list);
        assertEquals(3, res.size());
//        FIXME: use iterable assertion
        assertEquals("1", res.get(2));
    }

    @Test
    public void test_palindrome() {
        boolean res = rp.isPalindrome(list);
        assertFalse(res);
        list.add("2");
        list.add("1");
        assertTrue(rp.isPalindrome(list));
    }
}
