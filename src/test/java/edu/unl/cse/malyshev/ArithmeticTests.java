package edu.unl.cse.malyshev;

import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;

import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;

public class ArithmeticTests {

    private ArithmeticRecursionProblems arp;

    @Before
    public void setup() {
        arp = new ArithmeticRecursionProblems();
    }

    @Test
    public void test_isPrime() {
        assertTrue(arp.isPrime(7));
        assertFalse(arp.isPrime(4));
    }
}
