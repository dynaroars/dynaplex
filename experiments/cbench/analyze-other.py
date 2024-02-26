from tracing import rand_input, trace_dc
import random

def analyse_other(atoms_nres, atoms_nr, bASK):
    restp = 0

    # O(n)
    i, nrestp, l = 0, 0, 0
    depth_8 = 0
    ### 8_O_None
    for i in range(atoms_nres):
        depth_8 += 1
        trace_dc("8_O_None", depth_8, i)
        if random.randint(0, 1):
            break

    if i < atoms_nres:
        # O(n^2)
        depth_16 = 0
        ### 17_S_8
        for k in range(atoms_nr):
            depth_16 += 1
            trace_dc("17_S_8", depth_16, k)
            if random.randint(0, 1):
                depth_20 = 0
                ### 20_N_17
                for l in range(nrestp):
                    depth_20 += 1
                    trace_dc("20_N_17", depth_20, l)
                    if random.randint(0, 1):
                        break
                if l == nrestp:
                    nrestp += 1

        # O(n^3)
        depth_29 = 0
        ### 29_S_17
        for i in range(nrestp):
            depth_29 += 1
            trace_dc("29_S_17", depth_29, i)
            naid = 0
            depth_33 = 0
            ### 33_N_29
            for j in range(atoms_nr):
                depth_33 += 1
                trace_dc("33_N_29", depth_33, j)
                if random.randint(0, 1):
                    naid += 1
            if bASK:
                if random.randint(0, 1):
                    natp = 0
                    depth_41 = 0
                    ### 41_S_33
                    for k in range(naid):
                        depth_41 += 1
                        trace_dc("41_S_33", depth_41, k)
                        depth_44 = 0
                        ### 44_N_41
                        for l in range(natp):
                            depth_44 += 1
                            trace_dc("44_N_41", depth_41, l)
                            if random.randint(0, 1):
                                break
                        if l == natp:
                            natp += 1
                    if natp > 1:
                        depth_52 = 0
                        ### 52_S_33
                        for l in range(natp):
                            depth_52 += 1
                            trace_dc("52_S_33", depth_52, l)
                            naaid = 0
                            depth_56 = 0
                            ### 56_N_52
                            for k in range(naid):
                                depth_56 += 1
                                trace_dc("56_N_52", depth_56, k)
                                if random.randint(0, 1):
                                    naaid += 1


if __name__ == "__main__":
    for i in range(20):
        input = rand_input(3)
        analyse_other(input[0], input[1], input[2])

