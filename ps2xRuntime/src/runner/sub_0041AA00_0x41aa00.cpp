#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0041AA00
// Address: 0x41aa00 - 0x41ac28
void sub_0041AA00_0x41aa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041AA00_0x41aa00");
#endif

    switch (ctx->pc) {
        case 0x41ab08u: goto label_41ab08;
        case 0x41abb8u: goto label_41abb8;
        case 0x41abd0u: goto label_41abd0;
        default: break;
    }

    ctx->pc = 0x41aa00u;

    // 0x41aa00: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x41aa00u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41aa04: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x41aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x41aa08: 0x8d63000c  lw          $v1, 0xC($t3)
    ctx->pc = 0x41aa08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x41aa0c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x41AA0Cu;
    {
        const bool branch_taken_0x41aa0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x41AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AA0Cu;
        // 0x41aa10: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41aa0c) {
            ctx->pc = 0x41AA40u;
            goto label_41aa40;
        }
    }
    ctx->pc = 0x41AA14u;
    // 0x41aa14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x41AA14u;
    {
        const bool branch_taken_0x41aa14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AA14u;
        // 0x41aa18: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41aa14) {
            ctx->pc = 0x41AA2Cu;
            goto label_41aa2c;
        }
    }
    ctx->pc = 0x41AA1Cu;
    // 0x41aa1c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x41AA1Cu;
    {
        const bool branch_taken_0x41aa1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x41AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AA1Cu;
        // 0x41aa20: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41aa1c) {
            ctx->pc = 0x41AA40u;
            goto label_41aa40;
        }
    }
    ctx->pc = 0x41AA24u;
    // 0x41aa24: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x41AA24u;
    {
        const bool branch_taken_0x41aa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41aa24) {
            ctx->pc = 0x41AC1Cu;
            goto label_41ac1c;
        }
    }
    ctx->pc = 0x41AA2Cu;
label_41aa2c:
    // 0x41aa2c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x41aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x41aa30: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x41AA30u;
    {
        const bool branch_taken_0x41aa30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x41AA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AA30u;
        // 0x41aa34: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41aa30) {
            ctx->pc = 0x41ABA8u;
            goto label_41aba8;
        }
    }
    ctx->pc = 0x41AA38u;
    // 0x41aa38: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x41AA38u;
    {
        const bool branch_taken_0x41aa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41aa38) {
            ctx->pc = 0x41AC1Cu;
            goto label_41ac1c;
        }
    }
    ctx->pc = 0x41AA40u;
label_41aa40:
    // 0x41aa40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41aa44: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x41aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x41aa48: 0x18400073  blez        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x41AA48u;
    {
        const bool branch_taken_0x41aa48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x41AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AA48u;
        // 0x41aa4c: 0x8d640018  lw          $a0, 0x18($t3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41aa48) {
            ctx->pc = 0x41AC18u;
            goto label_41ac18;
        }
    }
    ctx->pc = 0x41AA50u;
    // 0x41aa50: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x41aa50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41aa54: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x41aa54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41aa58: 0xa1023  negu        $v0, $t2
    ctx->pc = 0x41aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x41aa5c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x41aa5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x41aa60: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x41AA60u;
    {
        const bool branch_taken_0x41aa60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AA60u;
        // 0x41aa64: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41aa60) {
            ctx->pc = 0x41AAF8u;
            goto label_41aaf8;
        }
    }
    ctx->pc = 0x41AA68u;
    // 0x41aa68: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x41aa68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x41aa6c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x41AA6Cu;
    {
        const bool branch_taken_0x41aa6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AA6Cu;
        // 0x41aa70: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41aa6c) {
            ctx->pc = 0x41AACCu;
            goto label_41aacc;
        }
    }
    ctx->pc = 0x41AA74u;
    // 0x41aa74: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x41AA74u;
    {
        const bool branch_taken_0x41aa74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41aa74) {
            ctx->pc = 0x41AA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41AA74u;
            // 0x41aa78: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41AAA8u;
            goto label_41aaa8;
        }
    }
    ctx->pc = 0x41AA7Cu;
    // 0x41aa7c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x41aa7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x41aa80: 0x24e60004  addiu       $a2, $a3, 0x4
    ctx->pc = 0x41aa80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x41aa84: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x41aa84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x41aa88: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x41aa88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x41aa8c: 0x90e50002  lbu         $a1, 0x2($a3)
    ctx->pc = 0x41aa8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x41aa90: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x41aa90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x41aa94: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x41aa94u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x41aa98: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x41aa98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x41aa9c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x41aa9cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x41aaa0: 0xa0e20003  sb          $v0, 0x3($a3)
    ctx->pc = 0x41aaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x41aaa4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x41aaa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_41aaa8:
    // 0x41aaa8: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x41aaa8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x41aaac: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x41aaacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x41aab0: 0x90c50002  lbu         $a1, 0x2($a2)
    ctx->pc = 0x41aab0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x41aab4: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x41aab4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x41aab8: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x41aab8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x41aabc: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x41aabcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x41aac0: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x41aac0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x41aac4: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x41aac4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x41aac8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x41aac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_41aacc:
    // 0x41aacc: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x41aaccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x41aad0: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x41aad0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x41aad4: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x41aad4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x41aad8: 0x90c50002  lbu         $a1, 0x2($a2)
    ctx->pc = 0x41aad8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x41aadc: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x41aadcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x41aae0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x41aae0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x41aae4: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x41aae4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x41aae8: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x41aae8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x41aaec: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x41aaecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x41aaf0: 0x11400049  beqz        $t2, . + 4 + (0x49 << 2)
    ctx->pc = 0x41AAF0u;
    {
        const bool branch_taken_0x41aaf0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AAF0u;
        // 0x41aaf4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41aaf0) {
            ctx->pc = 0x41AC18u;
            goto label_41ac18;
        }
    }
    ctx->pc = 0x41AAF8u;
label_41aaf8:
    // 0x41aaf8: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x41aaf8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41aafc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x41aafcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ab00: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x41ab00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ab04: 0x0  nop
    ctx->pc = 0x41ab04u;
    // NOP
label_41ab08:
    // 0x41ab08: 0x91040001  lbu         $a0, 0x1($t0)
    ctx->pc = 0x41ab08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x41ab0c: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x41ab0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x41ab10: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x41ab10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x41ab14: 0x91250002  lbu         $a1, 0x2($t1)
    ctx->pc = 0x41ab14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x41ab18: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x41ab18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x41ab1c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x41ab1cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x41ab20: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x41ab20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x41ab24: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x41ab24u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x41ab28: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x41ab28u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x41ab2c: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x41ab2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x41ab30: 0x91040005  lbu         $a0, 0x5($t0)
    ctx->pc = 0x41ab30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
    // 0x41ab34: 0x91250006  lbu         $a1, 0x6($t1)
    ctx->pc = 0x41ab34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x41ab38: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x41ab38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x41ab3c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x41ab3cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x41ab40: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x41ab40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x41ab44: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x41ab44u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x41ab48: 0xa0c20007  sb          $v0, 0x7($a2)
    ctx->pc = 0x41ab48u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x41ab4c: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x41ab4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x41ab50: 0x91040009  lbu         $a0, 0x9($t0)
    ctx->pc = 0x41ab50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 9)));
    // 0x41ab54: 0x9125000a  lbu         $a1, 0xA($t1)
    ctx->pc = 0x41ab54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x41ab58: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x41ab58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x41ab5c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x41ab5cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x41ab60: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x41ab60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x41ab64: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x41ab64u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x41ab68: 0xa0c2000b  sb          $v0, 0xB($a2)
    ctx->pc = 0x41ab68u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x41ab6c: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x41ab6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x41ab70: 0x9104000d  lbu         $a0, 0xD($t0)
    ctx->pc = 0x41ab70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 13)));
    // 0x41ab74: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x41ab74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x41ab78: 0x9125000e  lbu         $a1, 0xE($t1)
    ctx->pc = 0x41ab78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 14)));
    // 0x41ab7c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x41ab7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x41ab80: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x41ab80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x41ab84: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x41ab84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x41ab88: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x41ab88u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x41ab8c: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x41ab8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x41ab90: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x41ab90u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x41ab94: 0xa0c2000f  sb          $v0, 0xF($a2)
    ctx->pc = 0x41ab94u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x41ab98: 0x1540ffdb  bnez        $t2, . + 4 + (-0x25 << 2)
    ctx->pc = 0x41AB98u;
    {
        const bool branch_taken_0x41ab98 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x41AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AB98u;
        // 0x41ab9c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ab98) {
            ctx->pc = 0x41AB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41ab08;
        }
    }
    ctx->pc = 0x41ABA0u;
    // 0x41aba0: 0x3e00008  jr          $ra
    ctx->pc = 0x41ABA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ABA0u;
        // 0x41aba4: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41ABA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41ABA8u;
label_41aba8:
    // 0x41aba8: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x41aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x41abac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x41abacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41abb0: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x41ABB0u;
    {
        const bool branch_taken_0x41abb0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x41ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ABB0u;
        // 0x41abb4: 0x8d690014  lw          $t1, 0x14($t3) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41abb0) {
            ctx->pc = 0x41AC18u;
            goto label_41ac18;
        }
    }
    ctx->pc = 0x41ABB8u;
label_41abb8:
    // 0x41abb8: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x41abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x41abbc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x41abbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x41abc0: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x41ABC0u;
    {
        const bool branch_taken_0x41abc0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x41ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ABC0u;
        // 0x41abc4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41abc0) {
            ctx->pc = 0x41AC04u;
            goto label_41ac04;
        }
    }
    ctx->pc = 0x41ABC8u;
    // 0x41abc8: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x41abc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41abcc: 0x0  nop
    ctx->pc = 0x41abccu;
    // NOP
label_41abd0:
    // 0x41abd0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x41abd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x41abd4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x41abd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x41abd8: 0x90e50001  lbu         $a1, 0x1($a3)
    ctx->pc = 0x41abd8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x41abdc: 0x90e60002  lbu         $a2, 0x2($a3)
    ctx->pc = 0x41abdcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x41abe0: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x41abe0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x41abe4: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x41abe4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x41abe8: 0x46202a  slt         $a0, $v0, $a2
    ctx->pc = 0x41abe8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x41abec: 0xc4100b  movn        $v0, $a2, $a0
    ctx->pc = 0x41abecu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x41abf0: 0xa0e20003  sb          $v0, 0x3($a3)
    ctx->pc = 0x41abf0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x41abf4: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x41abf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x41abf8: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x41abf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x41abfc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x41ABFCu;
    {
        const bool branch_taken_0x41abfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ABFCu;
        // 0x41ac00: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41abfc) {
            ctx->pc = 0x41ABD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41abd0;
        }
    }
    ctx->pc = 0x41AC04u;
label_41ac04:
    // 0x41ac04: 0x8d630010  lw          $v1, 0x10($t3)
    ctx->pc = 0x41ac04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x41ac08: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x41ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x41ac0c: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x41ac0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x41ac10: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x41AC10u;
    {
        const bool branch_taken_0x41ac10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AC10u;
        // 0x41ac14: 0x1234821  addu        $t1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ac10) {
            ctx->pc = 0x41ABB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41abb8;
        }
    }
    ctx->pc = 0x41AC18u;
label_41ac18:
    // 0x41ac18: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x41ac18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_41ac1c:
    // 0x41ac1c: 0x3e00008  jr          $ra
    ctx->pc = 0x41AC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41AC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41AC24u;
    // 0x41ac24: 0x0  nop
    ctx->pc = 0x41ac24u;
    // NOP
    ctx->pc = 0x41ac28u;
}
