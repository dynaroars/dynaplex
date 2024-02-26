type bool_expr =
    | Var of string
    | Not of bool_expr
    | And of bool_expr * bool_expr
    | Or of bool_expr * bool_expr;;

let counter = ref 0;;

let rec len = function
  |[] -> 0
  |h :: tl -> 1 + len tl
  ;;
(* [val_vars] is an associative list containing the truth value of
     each variable.  For efficiency, a Map or a Hashtlb should be
     preferred. *)

let rec eval val_vars expr depth =
  if depth=0 then counter := !counter + 1 else counter := !counter;

  match expr with
  | Var x -> List.assoc x val_vars
  | Not e -> not(eval val_vars e depth)
  | And(e1, e2) -> eval val_vars e1 depth && eval val_vars e2 depth
  | Or(e1, e2) -> eval val_vars e1 depth || eval val_vars e2 depth

(* Again, this is an easy and short implementation rather than an
   efficient one. *)
let rec table_make val_vars vars expr file depth =
  Printf.fprintf file "%d;%d\n" depth (len vars);
  if depth=0 then counter := !counter + 1 else counter := !counter;

  match vars with
  | [] -> [(List.rev val_vars, eval val_vars expr depth)]
  | v :: tl ->
     table_make ((v, true) :: val_vars) tl expr file (depth+1)
     @ table_make ((v, false) :: val_vars) tl expr file (depth+1)

let table vars expr file depth = table_make [] vars expr file depth;;

let main = begin
  (* for i = 0 to 10 do *) (*get all inputs from a file*)
    (* Random.self_init (); *)
    counter := 0;
    let directory_name = "truth_table" in
    let is_dir_exist = Sys.file_exists directory_name in
    if not is_dir_exist
      then let _ = Sys.command (Printf.sprintf "mkdir %s" directory_name) in ();
      else ();
    (* let n = Random.int 500 in *)
    let filename = "./truth_table/output-3" in
    let file = open_out filename in
    let a = Var "a" and b = Var "b" and c = Var "c" in
    table ["a"; "b"; "c"] (Or (And (a, Or (b,c)), Or (And (a,b), And (a,c)))) file 0;
    close_out file;
    let file = open_out_gen [Open_append; Open_creat] 0o666 "./truth_table/traces" in
    Printf.fprintf file "%d;%d\n" 3 !counter;
    close_out file;
    counter := 0;

    let filename = "./truth_table/output-4" in
    let file = open_out filename in
    let a = Var "a" and b = Var "b" and c = Var "c" and d = Var "d" in
    table ["a"; "b"; "c"; "d"] (Or (And (d, Or (b,c)), Or (Or (a,b), And (a,c)))) file 0;
    close_out file;
    let file = open_out_gen [Open_append; Open_creat] 0o666 "./truth_table/traces" in
    Printf.fprintf file "%d;%d\n" 4 !counter;
    close_out file;
    counter := 0;

    let filename = "./truth_table/output-5" in
    let file = open_out filename in
    let a = Var "a" and b = Var "b" and c = Var "c" and d = Var "d" and e = Var "e" in
    table ["a"; "b"; "c"; "d"; "e"] (And (Or(e,d), And (Or (b,d), Or (And (e,b), And (a,c))))) file 0;
    close_out file;
    let file = open_out_gen [Open_append; Open_creat] 0o666 "./truth_table/traces" in
    Printf.fprintf file "%d;%d\n" 5 !counter;
    close_out file;
    counter := 0;

    let filename = "./truth_table/output-6" in
    let file = open_out filename in
    let a = Var "a" and b = Var "b" and c = Var "c"
    and d = Var "d" and e = Var "e" and f = Var "f" in
    table ["a"; "b"; "c"; "d"; "e"; "f"] (And (Or(e,d), Or (And (f,b), And (a,c)))) file 0;
    close_out file;
    let file = open_out_gen [Open_append; Open_creat] 0o666 "./truth_table/traces" in
    Printf.fprintf file "%d;%d\n" 5 !counter;
    close_out file;
    counter := 0;

    let filename = "./truth_table/output-7" in
    let file = open_out filename in
    let a = Var "a" and b = Var "b" and c = Var "c"
    and d = Var "d" and e = Var "e" and f = Var "f" and g = Var "g"in
    table ["a"; "b"; "c"; "d"; "e"; "f"; "g"] (And (Or(e,d), Or (And (f,b), And (a,Not (Or(g,c)))))) file 0;
    close_out file;
    let file = open_out_gen [Open_append; Open_creat] 0o666 "./truth_table/traces" in
    Printf.fprintf file "%d;%d\n" 7 !counter;
    close_out file;
    counter := 0;

    let filename = "./truth_table/output-8" in
    let file = open_out filename in
    let a = Var "a" and b = Var "b" and c = Var "c"
    and d = Var "d" and e = Var "e" and f = Var "f" and g = Var "g" and h = Var "h" in
    table ["a"; "b"; "c"; "d"; "e"; "f"; "g"; "h"] (And (Or(e,And(d,h)), Or (And (Or(f,b),Not g), And (a,c)))) file 0;
    close_out file;
    let file = open_out_gen [Open_append; Open_creat] 0o666 "./truth_table/traces" in
    Printf.fprintf file "%d;%d\n" 8 !counter;
    close_out file;
    counter := 0;
  (* done *)
end;;

main;;
