(* insert in a binary search tree *)

type 'a binary_tree =
    | Empty
    | Node of 'a * 'a binary_tree * 'a binary_tree;;

let rec len tree = match tree with
  | Empty -> 0
  | Node(a, l, r) -> 1 + len l + len r

let counter = ref 0;;

let rec insert tree x file depth =
  if depth=0 then let _= counter := !counter + 1 in () else ();
  Printf.fprintf file "%d;%d\n" depth (len tree);
  match tree with
    | Empty -> Node(x, Empty, Empty)
    | Node(y, l, r) ->
       if x = y then tree
       else if x < y then Node(y, insert l x file (depth+1), r)
       else Node(y, l, insert r x file (depth+1))
;;

let construct l = List.fold_left insert Empty l;;

let main = begin
  for i = 0 to 50 do
    Random.self_init ();
    counter := 0;
    let directory_name = "compress" in
    let is_dir_exist = Sys.file_exists directory_name in
    if not is_dir_exist
      then let _ = Sys.command (Printf.sprintf "mkdir %s" directory_name) in ();
      else ();
    let size = Random.int 500 in
    let filename = Printf.sprintf "./compress/output-%d" size in (*what if filename already exist since we using random number*)
    let file = open_out filename in
    let l = random_list size in
    compress l file 0;
    close_out file;
    let file = open_out_gen [Open_append; Open_creat] 0o666 "./compress/traces" in
    Printf.fprintf file "%d;%d\n" size !counter;
    close_out file
  done
end;;

main;;
