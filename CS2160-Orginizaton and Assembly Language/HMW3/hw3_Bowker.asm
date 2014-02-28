.data
str1:
.asciiz	"This is a short string."
cs1:
.word	0x84a
str2:
.asciiz	"This is a much longer string.  In fact, it has two sentences in it, and some funny characters (~`)Û."
cs2:
.word	0x230a
NonSuccessString:
	.asciiz "You have more work to do."
Test1Success:
	.asciiz "Test 1 was successful.  "
Test2Success:
	.asciiz "Test 2 was successful.  "
Test3Success:

.text
la	$a0, str1
jal	checksum
la	$s0, cs1
lw	$s1, 0($s0)
beq	$v0, $s1, Success1
j NonSuccess
Success1:
la	$a0, Test1Success
addi	$v0, $zero, 4
syscall
la	$a0, str2
jal	checksum
la	$s0, cs2
lw	$s1, 0($s0)
beq	$v0, $s1, Success2
j NonSuccess
Success2:
la	$a0, Test2Success
addi	$v0, $zero, 4
syscall
j Quit
NonSuccess:
la	$a0, NonSuccessString
addi	$v0, $zero, 4
syscall
Quit:
addi	$v0, $zero, 10
syscall

checksum:
# $t0 -- address of byte we're looking at
# $t1 -- accumulated sum of bytes
# $t2 -- current byte

addi $t0, $a0, 0
addi $t1, $zero, 0 # Zero out the current register we'll use
Loop:
lbu $t2, 0($t0)
beq $t2, $zero, DoneChecksum # Check if we're at the end of the string
addu $t1, $t1, $t2 # Accumulate the sum
addi $t0, $t0, 1 # Increment o the next byte
j Loop  # Let's do it again!
DoneChecksum:
addi $v0, $t1, 0  # Move the sum to $v0
jr $ra  # Go back to where we started
