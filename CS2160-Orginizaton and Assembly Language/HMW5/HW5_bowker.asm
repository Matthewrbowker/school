.data
testnum:
.word	0x1234ABCD
outbuf:
.space	20
check:
.asciiz	"0x1234ABCD"
success:
.asciiz	"Success!"
nonsuccess:
.asciiz	"Non-success."

.text
la	$t0, testnum
lw	$a0, 0($t0)	#call by value integer
la 	$a1, outbuf	#call by reference output buffer
jal	inttohex
la 	$a0, outbuf
la	$a1, check
jal strcmp
bne	$v0, $0, notOK
la	$a0, success
j	done
notOK:
la	$a0, nonsuccess
done:
addi	$v0, $zero, 4	#print out success or not
syscall
addi	$v0, $zero, 10	#exit program gracefully
syscall

strcmp:
	move $t0, $a0
	move $t1, $a1
	addi $v0, $zero, 0
loop4:
	lbu $t2, ($t0)
	lbu $t3, ($t1)
	beq $t2, $t3, ok4
	sub $v0, $t0, $a0
	addi $v0, $v0, 1
	j done4
ok4:
	beq $t2, $zero, done4
	addi $t0, $t0, 1
	addi $t1, $t1, 1
	j loop4
done4:
	
	jr $ra

inttohex:
addi  $t1, $0, 8
addi $t0, $a0, 0
addi $t3, $0, '0'
sb $t3, 0($a1)
addi $t3, $0, 'x'
sb $t3, 1($a1)
addi $t3, $0, 0
sb $t3, 10($a1)
add $t4, $a1, 9

L1:
andi $t3, $t0, 15
addi $t3, $t3, 48
slti $t2, $t3, 58
bne $t2, $0,L2
addi $t3, $t3, 7

L2:
sb $t3, 0($t4)
addi $t4, $t4, -1
srl $t0, $t0, 4
addi $t1, $t1, -1
bne $t1, $0, L1
jr $ra