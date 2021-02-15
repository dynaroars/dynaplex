(* function cbal_tree to construct completely balanced binary trees for a given number of nodes.
The function should generate all solutions via backtracking.
Put the letter 'x' as information into all nodes of the tree. *)

type 'a binary_tree =
    | Empty
    | Node of 'a * 'a binary_tree * 'a binary_tree;;

let counter = ref 0;;

let add_trees_with left right all depth=
    let add_right_tree all l =
      List.fold_left (fun a r ->
        (* counter := !counter + 1; *)
        if depth=0 then let _ = counter := !counter + 1 in () else ();
        Node('x', l, r) :: a) all right in
    List.fold_left add_right_tree all left

  let rec cbal_tree n file depth=
    Printf.fprintf file "%d;%d\n" depth n;
    if n = 0 then [Empty]
    else if n mod 2 = 1 then
      let t = cbal_tree (n / 2) file (depth+1) in
      add_trees_with t t [] (depth)
    else (* n even: n-1 nodes for the left & right subtrees altogether. *)
      let t1 = cbal_tree (n / 2 - 1) file (depth+1) in
      let t2 = cbal_tree (n / 2) file (depth+1) in
      add_trees_with t1 t2 (add_trees_with t2 t1 [] (depth)) (depth);;


let main = begin
  for i = 0 to 50 do
    Random.self_init ();
    counter := 0;
    let directory_name = "complete_btree" in
    let is_dir_exist = Sys.file_exists directory_name in
    if not is_dir_exist
      then let _ = Sys.command (Printf.sprintf "mkdir %s" directory_name) in ();
      else ();
    let size = (Random.int 50)+10 in
    (* let size = int_of_float (Float.pow 2. (float_of_int ((Random.int 6)+4))) in *)
    let filename = Printf.sprintf "./complete_btree/output-%d" size in (*what if filename already exist since we using random number*)
    let file = open_out filename in
    (cbal_tree size file 0);
    close_out file;
    let file = open_out_gen [Open_append; Open_creat] 0o666 "./complete_btree/traces" in
    Printf.fprintf file "%d;%d\n" size !counter;
    close_out file
  done
end;;

main;;
