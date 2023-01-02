; ----------------------------------------------------------------------------------------
   ;  filename: makeNBO.nasm
   ;     to assemble:         nasm -f macho64 makeNBO.nasm [can also say '-fmacho64']
   ;     to link using gcc:   gcc makeNBO.o -o makeNBO
   ;     to run on macOS:     ./makeNBO
   ; ----------------------------------------------------------------------------------------

         global   _main                ; this is the main entry point
         extern   _makeNBO             ; external code from makeNBO "C" function
         default  rel                  ; default to 'relative' addressing

         section  .text                ; text [code] segment

_main:
         push     rbx                  ; save this for return to O/S
         lea      rdi, [test1]         ; load effective address of test String 1
         call     _makeNBO             ; call "C" makeNBO function
         
         lea      rdi, [test2]         ; load effective address of test String 2
         call     _makeNBO             ; call "C" makeNBO function

         lea      rdi, [test3]         ; load effective address of test String 3
         call     _makeNBO             ; call "C" makeNBO function

         lea      rdi, [test4]         ; load effective address of test String 4
         call     _makeNBO             ; call "C" makeNBO function

         lea      rdi, [test5]         ; load effective address of test String 5
         call     _makeNBO             ; call "C" makeNBO function

exit:    pop      rbx                  ; restore base pointer
         ret                           ; return to O/S

         section  .data
test1: db       "0x12345678", 0x0A, 0x00
test2: db       "0x87654321", 0x0A, 0x00
test3: db       "0x01000000", 0x0A, 0x00
test4: db       "0x43124312", 0x0A, 0x00
test5: db       "0x01010101", 0x0A, 0x00