let counter = ref 0;;

let is_prime n file depth=
    let n = abs n in
    let rec is_not_divisor d file depth =
      Printf.fprintf file "%d;%d\n" depth d;
      if depth=0 then counter := !counter + 1 else counter := !counter;
      d * d > n || (n mod d <> 0 && is_not_divisor (d+1) file (depth+1)) in
    n <> 1 && is_not_divisor 2 file depth;;

let main = begin
  for i = 0 to 100 do
    Random.self_init ();
    counter := 0;
    let directory_name = "prime" in
    let is_dir_exist = Sys.file_exists directory_name in
    if not is_dir_exist
      then let _ = Sys.command (Printf.sprintf "mkdir %s" directory_name) in ();
      else ();
    let n = Random.int 500 in
    let filename = Printf.sprintf "./prime/output-%d" n in (*what if filename already exist since we using random number*)
    let file = open_out filename in
    let _ = is_prime n file 0 in
    close_out file;
    let file = open_out_gen [Open_append; Open_creat] 0o666 "./prime/traces" in
    Printf.fprintf file "%d;%d\n" n !counter;
    close_out file
  done
end;;

main;;
