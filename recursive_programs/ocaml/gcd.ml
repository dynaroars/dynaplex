(* greatest common divisor of two positive integer numbers *)
(* https://stackoverflow.com/questions/3980416/time-complexity-of-euclids-algorithm *)

let counter = ref 0;;

let rec gcd a b file depth=
  Printf.fprintf file "%d;%d\n" depth b;
  if depth=0 then counter := !counter + 1 else counter := !counter;
  if b = 0 then a else gcd b (a mod b) file (depth+1);;

let main = begin
  for i = 0 to 50 do
    Random.self_init ();
    counter := 0;
    let directory_name = "gcd" in
    let is_dir_exist = Sys.file_exists directory_name in
    if not is_dir_exist
      then let _ = Sys.command (Printf.sprintf "mkdir %s" directory_name) in ();
      else ();
    let b = Random.int 1500 in
    let filename = Printf.sprintf "./gcd/output-%d" b in (*what if filename already exist since we using random number*)
    let file = open_out filename in
    let a = Random.int 1500 in
    gcd a b file 0;
    close_out file;
    let file = open_out_gen [Open_append; Open_creat] 0o666 "./gcd/traces" in
    Printf.fprintf file "%d;%d\n" b !counter;
    close_out file
  done
end;;

main;;
