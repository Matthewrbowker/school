.data
String1:
.asciiz	"George\n"
String2:
.asciiz "Zachary\n"
String3:
.asciiz "Roberta\n"
String4:
.asciiz "Robert\n"
String5:
.asciiz "Amy\n"
nEntries:
.word 5
NameTable:
.space 20
cr:
.asciiz	"\n"
Note1:
.asciiz "Original List:\n"
Note2:
.asciiz "Sorted List:\n"

.text
jal	Initialize
addi	$v0, $0, 4	#print command
la	$a0, Note1
syscall

jal	PrintOut
addi	$v0, $0, 4	#print command
la	$a0, Note2
syscall
jal	Sort
jal	PrintOut
addi	$v0, $0, 10	#end the program
syscall

Initialize:
la	$t0, NameTable
la 	$t1, String1
sw	$t1, 0($t0)
la 	$t1, String2
sw	$t1, 4($t0)
la 	$t1, String3
sw	$t1, 8($t0)
la 	$t1, String4
sw	$t1, 12($t0)
la 	$t1, String5
sw	$t1, 16($t0)
jr 	$ra

PrintOut:
addi	$t0, $0, 0	#initialize counter
la	$t2, nEntries
lw	$t2, 0($t2)
la	$t1, NameTable
addi	$v0, $0, 4	#print command
Reprint:
lw	$a0, 0($t1)
syscall
addi	$t0, $t0, 1	#increment counter
addi	$t1, $t1, 4
bne	$t0, $t2, Reprint
addi	$v0, $0, 4	#print command
la	$a0, cr
syscall

jr	$ra

strcmp:
# your code here
#returns a negative number if string at $a1 is before string at $a0
#	$a0, $a1 location of strings to compare
#	$v0 compare result
addi $t0, $a0, 0 #Preserve registers
addi $t1, $a1, 0

Repeat:

lbu $t2, 0($t0)
lbu $t3, 0($t1)
sub $v0, $t3, $t2
bne $v0, $0 strcmpDone
beq $t2, $0 strcmpDone
beq $t3, $0 strcmpDone
addi $t0, $t0, 1
addi $t1, $t1, 1
j Repeat

strcmpDone:
jr $ra

Sort:
# your code here
addi $sp, $sp, -4 #save $ra because we'll call strcmp
sw $ra,0($sp)
# $s0 pass
# $s1 done
# $s2 Loop variable
# $s3 Loop Constant
# $s4 Address of currenty entry to compare with neighbor
# $s5 set if strcmp result < 0

addi $s0, $0, 1 # Set pass = 1
addi $s1, $0, 0 # Set done = false
bne $s1, $0, SortDone # While not done
L1:
addi $s1, $0, 1 # Set done = true
L2:
la $s4, NameTable
la $s2, nEntries
lw $s3, 0($s2) # Number of entries
sub $s3, $s3, $s0 # Set loop limit
beq $s3, $0, SortDone
addi $s2, $0, 0 #Set loop counter to 0
#L1: loop from 0 to number of entries - pass

LoopStart:
addi $a0, $s4, 0 #Check an entry against its neighbor
lw $a0, 0($a0)
addi $a1, $s4, 4
lw $a1, 0($a1)
jal strcmp
slt $s5, $v0, $0
beq $s5, $0, NoSwap
sw $a0, 4($s4) #Swap entries
sw $a1, 0($s4)
addi $s1, $0, 0 # done = false

NoSwap:
addi $s2, $s2, 1 # Intrement loop counter
addi $s4, $s4, 4 # Point to the next address to compare with neighbor
bne $s2, $s3, LoopStart
addi $s0, $s0, 1 # Increment pass
beq $s1, $0, L1 # if not done, continue with next loop

SortDone:
lw $ra, 0($sp)
addi $sp, $sp, 4
jr $ra
