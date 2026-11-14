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

// Function: sub_003FFBA8
// Address: 0x3ffba8 - 0x400004
void sub_003FFBA8_0x3ffba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FFBA8_0x3ffba8");
#endif

    switch (ctx->pc) {
        case 0x3ffcc8u: goto label_3ffcc8;
        case 0x3ffe08u: goto label_3ffe08;
        case 0x3fffb0u: goto label_3fffb0;
        default: break;
    }

    ctx->pc = 0x3ffba8u;

    // 0x3ffba8: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x3ffba8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3ffbac: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ffbacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ffbb0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3ffbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ffbb4: 0x146200cd  bne         $v1, $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x3FFBB4u;
    {
        const bool branch_taken_0x3ffbb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FFBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFBB4u;
        // 0x3ffbb8: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffbb4) {
            ctx->pc = 0x3FFEECu;
            goto label_3ffeec;
        }
    }
    ctx->pc = 0x3FFBBCu;
    // 0x3ffbbc: 0x90830011  lbu         $v1, 0x11($a0)
    ctx->pc = 0x3ffbbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x3ffbc0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3ffbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3ffbc4: 0x5462006d  bnel        $v1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x3FFBC4u;
    {
        const bool branch_taken_0x3ffbc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ffbc4) {
            ctx->pc = 0x3FFBC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FFBC4u;
            // 0x3ffbc8: 0xdc8e0000  ld          $t6, 0x0($a0) (Delay Slot)
            SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FFD7Cu;
            goto label_3ffd7c;
        }
    }
    ctx->pc = 0x3FFBCCu;
    // 0x3ffbcc: 0xdc8b0000  ld          $t3, 0x0($a0)
    ctx->pc = 0x3ffbccu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ffbd0: 0x1160014a  beqz        $t3, . + 4 + (0x14A << 2)
    ctx->pc = 0x3FFBD0u;
    {
        const bool branch_taken_0x3ffbd0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FFBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFBD0u;
        // 0x3ffbd4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffbd0) {
            ctx->pc = 0x4000FCu;
            return;
        }
    }
    ctx->pc = 0x3FFBD8u;
    // 0x3ffbd8: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x3ffbd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ffbdc: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x3ffbdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ffbe0: 0x19600025  blez        $t3, . + 4 + (0x25 << 2)
    ctx->pc = 0x3FFBE0u;
    {
        const bool branch_taken_0x3ffbe0 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3FFBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFBE0u;
        // 0x3ffbe4: 0x31630003  andi        $v1, $t3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffbe0) {
            ctx->pc = 0x3FFC78u;
            goto label_3ffc78;
        }
    }
    ctx->pc = 0x3FFBE8u;
    // 0x3ffbe8: 0x50600038  beql        $v1, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x3FFBE8u;
    {
        const bool branch_taken_0x3ffbe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ffbe8) {
            ctx->pc = 0x3FFBECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FFBE8u;
            // 0x3ffbec: 0x90c30001  lbu         $v1, 0x1($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FFCCCu;
            goto label_3ffccc;
        }
    }
    ctx->pc = 0x3FFBF0u;
    // 0x3ffbf0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3ffbf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3ffbf4: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x3FFBF4u;
    {
        const bool branch_taken_0x3ffbf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ffbf4) {
            ctx->pc = 0x3FFBF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FFBF4u;
            // 0x3ffbf8: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FFC7Cu;
            goto label_3ffc7c;
        }
    }
    ctx->pc = 0x3FFBFCu;
    // 0x3ffbfc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3ffbfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3ffc00: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3FFC00u;
    {
        const bool branch_taken_0x3ffc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ffc00) {
            ctx->pc = 0x3FFC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FFC00u;
            // 0x3ffc04: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FFC38u;
            goto label_3ffc38;
        }
    }
    ctx->pc = 0x3FFC08u;
    // 0x3ffc08: 0x91450000  lbu         $a1, 0x0($t2)
    ctx->pc = 0x3ffc08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3ffc0c: 0x25470004  addiu       $a3, $t2, 0x4
    ctx->pc = 0x3ffc0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x3ffc10: 0x91440001  lbu         $a0, 0x1($t2)
    ctx->pc = 0x3ffc10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x3ffc14: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3ffc14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ffc18: 0x91430002  lbu         $v1, 0x2($t2)
    ctx->pc = 0x3ffc18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x3ffc1c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3ffc1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ffc20: 0x91420003  lbu         $v0, 0x3($t2)
    ctx->pc = 0x3ffc20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 3)));
    // 0x3ffc24: 0xa1440000  sb          $a0, 0x0($t2)
    ctx->pc = 0x3ffc24u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ffc28: 0xa1430001  sb          $v1, 0x1($t2)
    ctx->pc = 0x3ffc28u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ffc2c: 0xa1420002  sb          $v0, 0x2($t2)
    ctx->pc = 0x3ffc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ffc30: 0xa1450003  sb          $a1, 0x3($t2)
    ctx->pc = 0x3ffc30u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ffc34: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3ffc34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3ffc38:
    // 0x3ffc38: 0x65080001  daddiu      $t0, $t0, 0x1
    ctx->pc = 0x3ffc38u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
    // 0x3ffc3c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3ffc3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3ffc40: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3ffc40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ffc44: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3ffc44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3ffc48: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3ffc48u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ffc4c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ffc4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3ffc50: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3ffc50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ffc54: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3ffc54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3ffc58: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3ffc58u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ffc5c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ffc5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3ffc60: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3ffc60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ffc64: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3ffc64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3ffc68: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3ffc68u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ffc6c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ffc6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3ffc70: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x3ffc70u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ffc74: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ffc74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3ffc78:
    // 0x3ffc78: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3ffc78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3ffc7c:
    // 0x3ffc7c: 0x65080001  daddiu      $t0, $t0, 0x1
    ctx->pc = 0x3ffc7cu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
    // 0x3ffc80: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3ffc80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3ffc84: 0x10b482b  sltu        $t1, $t0, $t3
    ctx->pc = 0x3ffc84u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3ffc88: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3ffc88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ffc8c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3ffc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3ffc90: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3ffc90u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ffc94: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ffc94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3ffc98: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3ffc98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ffc9c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3ffc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3ffca0: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3ffca0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ffca4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ffca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3ffca8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3ffca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ffcac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3ffcacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3ffcb0: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3ffcb0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ffcb4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ffcb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3ffcb8: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x3ffcb8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ffcbc: 0x1120010f  beqz        $t1, . + 4 + (0x10F << 2)
    ctx->pc = 0x3FFCBCu;
    {
        const bool branch_taken_0x3ffcbc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FFCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFCBCu;
        // 0x3ffcc0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffcbc) {
            ctx->pc = 0x4000FCu;
            return;
        }
    }
    ctx->pc = 0x3FFCC4u;
    // 0x3ffcc4: 0x0  nop
    ctx->pc = 0x3ffcc4u;
    // NOP
label_3ffcc8:
    // 0x3ffcc8: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x3ffcc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_3ffccc:
    // 0x3ffccc: 0x65080004  daddiu      $t0, $t0, 0x4
    ctx->pc = 0x3ffcccu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)4);
    // 0x3ffcd0: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x3ffcd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ffcd4: 0x10b482b  sltu        $t1, $t0, $t3
    ctx->pc = 0x3ffcd4u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3ffcd8: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x3ffcd8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ffcdc: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x3ffcdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3ffce0: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x3ffce0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ffce4: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x3ffce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x3ffce8: 0xa0e40003  sb          $a0, 0x3($a3)
    ctx->pc = 0x3ffce8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ffcec: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x3ffcecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ffcf0: 0x90c40005  lbu         $a0, 0x5($a2)
    ctx->pc = 0x3ffcf0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x3ffcf4: 0x90c50004  lbu         $a1, 0x4($a2)
    ctx->pc = 0x3ffcf4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3ffcf8: 0xa0e40004  sb          $a0, 0x4($a3)
    ctx->pc = 0x3ffcf8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ffcfc: 0x90c20006  lbu         $v0, 0x6($a2)
    ctx->pc = 0x3ffcfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3ffd00: 0xa0e20005  sb          $v0, 0x5($a3)
    ctx->pc = 0x3ffd00u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ffd04: 0x90c30007  lbu         $v1, 0x7($a2)
    ctx->pc = 0x3ffd04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x3ffd08: 0xa0e50007  sb          $a1, 0x7($a3)
    ctx->pc = 0x3ffd08u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 7), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ffd0c: 0xa0e30006  sb          $v1, 0x6($a3)
    ctx->pc = 0x3ffd0cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ffd10: 0x90c40009  lbu         $a0, 0x9($a2)
    ctx->pc = 0x3ffd10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
    // 0x3ffd14: 0x90c50008  lbu         $a1, 0x8($a2)
    ctx->pc = 0x3ffd14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3ffd18: 0xa0e40008  sb          $a0, 0x8($a3)
    ctx->pc = 0x3ffd18u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ffd1c: 0x90c2000a  lbu         $v0, 0xA($a2)
    ctx->pc = 0x3ffd1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x3ffd20: 0xa0e20009  sb          $v0, 0x9($a3)
    ctx->pc = 0x3ffd20u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ffd24: 0x90c3000b  lbu         $v1, 0xB($a2)
    ctx->pc = 0x3ffd24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11)));
    // 0x3ffd28: 0xa0e5000b  sb          $a1, 0xB($a3)
    ctx->pc = 0x3ffd28u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 11), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ffd2c: 0xa0e3000a  sb          $v1, 0xA($a3)
    ctx->pc = 0x3ffd2cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ffd30: 0x90c4000c  lbu         $a0, 0xC($a2)
    ctx->pc = 0x3ffd30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3ffd34: 0x24c6000d  addiu       $a2, $a2, 0xD
    ctx->pc = 0x3ffd34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13));
    // 0x3ffd38: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3ffd38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ffd3c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3ffd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3ffd40: 0xa0e2000c  sb          $v0, 0xC($a3)
    ctx->pc = 0x3ffd40u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ffd44: 0x24e7000d  addiu       $a3, $a3, 0xD
    ctx->pc = 0x3ffd44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13));
    // 0x3ffd48: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3ffd48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ffd4c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3ffd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3ffd50: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3ffd50u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ffd54: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ffd54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3ffd58: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3ffd58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ffd5c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3ffd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3ffd60: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3ffd60u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ffd64: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ffd64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3ffd68: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x3ffd68u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ffd6c: 0x1520ffd6  bnez        $t1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x3FFD6Cu;
    {
        const bool branch_taken_0x3ffd6c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FFD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFD6Cu;
        // 0x3ffd70: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffd6c) {
            ctx->pc = 0x3FFCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ffcc8;
        }
    }
    ctx->pc = 0x3FFD74u;
    // 0x3ffd74: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x3FFD74u;
    {
        const bool branch_taken_0x3ffd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ffd74) {
            ctx->pc = 0x4000FCu;
            return;
        }
    }
    ctx->pc = 0x3FFD7Cu;
label_3ffd7c:
    // 0x3ffd7c: 0x11c000df  beqz        $t6, . + 4 + (0xDF << 2)
    ctx->pc = 0x3FFD7Cu;
    {
        const bool branch_taken_0x3ffd7c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FFD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFD7Cu;
        // 0x3ffd80: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffd7c) {
            ctx->pc = 0x4000FCu;
            return;
        }
    }
    ctx->pc = 0x3FFD84u;
    // 0x3ffd84: 0x140782d  daddu       $t7, $t2, $zero
    ctx->pc = 0x3ffd84u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ffd88: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x3ffd88u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ffd8c: 0x19c00003  blez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x3FFD8Cu;
    {
        const bool branch_taken_0x3ffd8c = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x3FFD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFD8Cu;
        // 0x3ffd90: 0x31c20001  andi        $v0, $t6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffd8c) {
            ctx->pc = 0x3FFD9Cu;
            goto label_3ffd9c;
        }
    }
    ctx->pc = 0x3FFD94u;
    // 0x3ffd94: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3FFD94u;
    {
        const bool branch_taken_0x3ffd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FFD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFD94u;
        // 0x3ffd98: 0x1e0382d  daddu       $a3, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffd94) {
            ctx->pc = 0x3FFE00u;
            goto label_3ffe00;
        }
    }
    ctx->pc = 0x3FFD9Cu;
label_3ffd9c:
    // 0x3ffd9c: 0x25420008  addiu       $v0, $t2, 0x8
    ctx->pc = 0x3ffd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x3ffda0: 0x91490000  lbu         $t1, 0x0($t2)
    ctx->pc = 0x3ffda0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3ffda4: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x3ffda4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ffda8: 0x91480001  lbu         $t0, 0x1($t2)
    ctx->pc = 0x3ffda8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x3ffdac: 0x91470002  lbu         $a3, 0x2($t2)
    ctx->pc = 0x3ffdacu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x3ffdb0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x3ffdb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ffdb4: 0x91460003  lbu         $a2, 0x3($t2)
    ctx->pc = 0x3ffdb4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 3)));
    // 0x3ffdb8: 0x180782d  daddu       $t7, $t4, $zero
    ctx->pc = 0x3ffdb8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ffdbc: 0x91450004  lbu         $a1, 0x4($t2)
    ctx->pc = 0x3ffdbcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x3ffdc0: 0x16e682b  sltu        $t5, $t3, $t6
    ctx->pc = 0x3ffdc0u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x3ffdc4: 0x91420005  lbu         $v0, 0x5($t2)
    ctx->pc = 0x3ffdc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 5)));
    // 0x3ffdc8: 0x91430006  lbu         $v1, 0x6($t2)
    ctx->pc = 0x3ffdc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 6)));
    // 0x3ffdcc: 0x91440007  lbu         $a0, 0x7($t2)
    ctx->pc = 0x3ffdccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 7)));
    // 0x3ffdd0: 0xa1480007  sb          $t0, 0x7($t2)
    ctx->pc = 0x3ffdd0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 7), (uint8_t)GPR_U32(ctx, 8));
    // 0x3ffdd4: 0xa1470000  sb          $a3, 0x0($t2)
    ctx->pc = 0x3ffdd4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x3ffdd8: 0xa1460001  sb          $a2, 0x1($t2)
    ctx->pc = 0x3ffdd8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x3ffddc: 0xa1450002  sb          $a1, 0x2($t2)
    ctx->pc = 0x3ffddcu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ffde0: 0xa1420003  sb          $v0, 0x3($t2)
    ctx->pc = 0x3ffde0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ffde4: 0xa1430004  sb          $v1, 0x4($t2)
    ctx->pc = 0x3ffde4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ffde8: 0xa1440005  sb          $a0, 0x5($t2)
    ctx->pc = 0x3ffde8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ffdec: 0xa1490006  sb          $t1, 0x6($t2)
    ctx->pc = 0x3ffdecu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 6), (uint8_t)GPR_U32(ctx, 9));
    // 0x3ffdf0: 0xa3a90000  sb          $t1, 0x0($sp)
    ctx->pc = 0x3ffdf0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x3ffdf4: 0x11a000c1  beqz        $t5, . + 4 + (0xC1 << 2)
    ctx->pc = 0x3FFDF4u;
    {
        const bool branch_taken_0x3ffdf4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FFDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFDF4u;
        // 0x3ffdf8: 0xa3a80001  sb          $t0, 0x1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffdf4) {
            ctx->pc = 0x4000FCu;
            return;
        }
    }
    ctx->pc = 0x3FFDFCu;
    // 0x3ffdfc: 0x1e0382d  daddu       $a3, $t7, $zero
    ctx->pc = 0x3ffdfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_3ffe00:
    // 0x3ffe00: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x3ffe00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ffe04: 0x0  nop
    ctx->pc = 0x3ffe04u;
    // NOP
label_3ffe08:
    // 0x3ffe08: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x3ffe08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ffe0c: 0x656b0002  daddiu      $t3, $t3, 0x2
    ctx->pc = 0x3ffe0cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)2);
    // 0x3ffe10: 0x16e682b  sltu        $t5, $t3, $t6
    ctx->pc = 0x3ffe10u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x3ffe14: 0xa3a50000  sb          $a1, 0x0($sp)
    ctx->pc = 0x3ffe14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ffe18: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x3ffe18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3ffe1c: 0xa3a40001  sb          $a0, 0x1($sp)
    ctx->pc = 0x3ffe1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ffe20: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x3ffe20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3ffe24: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3ffe24u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ffe28: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x3ffe28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x3ffe2c: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x3ffe2cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ffe30: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x3ffe30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3ffe34: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x3ffe34u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ffe38: 0x90c30005  lbu         $v1, 0x5($a2)
    ctx->pc = 0x3ffe38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x3ffe3c: 0xa0e30003  sb          $v1, 0x3($a3)
    ctx->pc = 0x3ffe3cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ffe40: 0x90c20006  lbu         $v0, 0x6($a2)
    ctx->pc = 0x3ffe40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3ffe44: 0xa0e20004  sb          $v0, 0x4($a3)
    ctx->pc = 0x3ffe44u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ffe48: 0x90c30007  lbu         $v1, 0x7($a2)
    ctx->pc = 0x3ffe48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x3ffe4c: 0xa0e50006  sb          $a1, 0x6($a3)
    ctx->pc = 0x3ffe4cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ffe50: 0xa0e30005  sb          $v1, 0x5($a3)
    ctx->pc = 0x3ffe50u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ffe54: 0xa0e40007  sb          $a0, 0x7($a3)
    ctx->pc = 0x3ffe54u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 7), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ffe58: 0x90c50008  lbu         $a1, 0x8($a2)
    ctx->pc = 0x3ffe58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3ffe5c: 0x24c60009  addiu       $a2, $a2, 0x9
    ctx->pc = 0x3ffe5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x3ffe60: 0xa3a50000  sb          $a1, 0x0($sp)
    ctx->pc = 0x3ffe60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ffe64: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3ffe64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ffe68: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3ffe68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3ffe6c: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x3ffe6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ffe70: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3ffe70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ffe74: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3ffe74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3ffe78: 0xa0e20008  sb          $v0, 0x8($a3)
    ctx->pc = 0x3ffe78u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ffe7c: 0x24e70009  addiu       $a3, $a3, 0x9
    ctx->pc = 0x3ffe7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9));
    // 0x3ffe80: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3ffe80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ffe84: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3ffe84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3ffe88: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3ffe88u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ffe8c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ffe8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3ffe90: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3ffe90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ffe94: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3ffe94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3ffe98: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3ffe98u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ffe9c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ffe9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3ffea0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3ffea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ffea4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3ffea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3ffea8: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3ffea8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ffeac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ffeacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3ffeb0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3ffeb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ffeb4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3ffeb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3ffeb8: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3ffeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ffebc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ffebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3ffec0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3ffec0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ffec4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3ffec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3ffec8: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3ffec8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ffecc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ffeccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3ffed0: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x3ffed0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ffed4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ffed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3ffed8: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x3ffed8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ffedc: 0x15a0ffca  bnez        $t5, . + 4 + (-0x36 << 2)
    ctx->pc = 0x3FFEDCu;
    {
        const bool branch_taken_0x3ffedc = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FFEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFEDCu;
        // 0x3ffee0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffedc) {
            ctx->pc = 0x3FFE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ffe08;
        }
    }
    ctx->pc = 0x3FFEE4u;
    // 0x3ffee4: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x3FFEE4u;
    {
        const bool branch_taken_0x3ffee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ffee4) {
            ctx->pc = 0x4000FCu;
            return;
        }
    }
    ctx->pc = 0x3FFEECu;
label_3ffeec:
    // 0x3ffeec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ffeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ffef0: 0x14620082  bne         $v1, $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x3FFEF0u;
    {
        const bool branch_taken_0x3ffef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FFEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFEF0u;
        // 0x3ffef4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffef0) {
            ctx->pc = 0x4000FCu;
            return;
        }
    }
    ctx->pc = 0x3FFEF8u;
    // 0x3ffef8: 0x90830011  lbu         $v1, 0x11($a0)
    ctx->pc = 0x3ffef8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x3ffefc: 0x54620045  bnel        $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x3FFEFCu;
    {
        const bool branch_taken_0x3ffefc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ffefc) {
            ctx->pc = 0x3FFF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FFEFCu;
            // 0x3fff00: 0xdc840000  ld          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x400014u;
            return;
        }
    }
    ctx->pc = 0x3FFF04u;
    // 0x3fff04: 0xdc890000  ld          $t1, 0x0($a0)
    ctx->pc = 0x3fff04u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3fff08: 0x1120007c  beqz        $t1, . + 4 + (0x7C << 2)
    ctx->pc = 0x3FFF08u;
    {
        const bool branch_taken_0x3fff08 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FFF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFF08u;
        // 0x3fff0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fff08) {
            ctx->pc = 0x4000FCu;
            return;
        }
    }
    ctx->pc = 0x3FFF10u;
    // 0x3fff10: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x3fff10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fff14: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3fff14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fff18: 0x1920001a  blez        $t1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3FFF18u;
    {
        const bool branch_taken_0x3fff18 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3FFF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFF18u;
        // 0x3fff1c: 0x31230003  andi        $v1, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fff18) {
            ctx->pc = 0x3FFF84u;
            goto label_3fff84;
        }
    }
    ctx->pc = 0x3FFF20u;
    // 0x3fff20: 0x50600024  beql        $v1, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x3FFF20u;
    {
        const bool branch_taken_0x3fff20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fff20) {
            ctx->pc = 0x3FFF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FFF20u;
            // 0x3fff24: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FFFB4u;
            goto label_3fffb4;
        }
    }
    ctx->pc = 0x3FFF28u;
    // 0x3fff28: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3fff28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3fff2c: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3FFF2Cu;
    {
        const bool branch_taken_0x3fff2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fff2c) {
            ctx->pc = 0x3FFF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FFF2Cu;
            // 0x3fff30: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FFF88u;
            goto label_3fff88;
        }
    }
    ctx->pc = 0x3FFF34u;
    // 0x3fff34: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3fff34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3fff38: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3FFF38u;
    {
        const bool branch_taken_0x3fff38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fff38) {
            ctx->pc = 0x3FFF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FFF38u;
            // 0x3fff3c: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FFF64u;
            goto label_3fff64;
        }
    }
    ctx->pc = 0x3FFF40u;
    // 0x3fff40: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x3fff40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3fff44: 0x25430002  addiu       $v1, $t2, 0x2
    ctx->pc = 0x3fff44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x3fff48: 0x91440001  lbu         $a0, 0x1($t2)
    ctx->pc = 0x3fff48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x3fff4c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3fff4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fff50: 0xa1420001  sb          $v0, 0x1($t2)
    ctx->pc = 0x3fff50u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fff54: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3fff54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fff58: 0xa1440000  sb          $a0, 0x0($t2)
    ctx->pc = 0x3fff58u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3fff5c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3fff5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fff60: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3fff60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3fff64:
    // 0x3fff64: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x3fff64u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x3fff68: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fff68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fff6c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3fff6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fff70: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fff70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fff74: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fff74u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fff78: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3fff78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3fff7c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3fff7cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fff80: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3fff80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3fff84:
    // 0x3fff84: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3fff84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3fff88:
    // 0x3fff88: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x3fff88u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x3fff8c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fff8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fff90: 0xe9402b  sltu        $t0, $a3, $t1
    ctx->pc = 0x3fff90u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3fff94: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3fff94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fff98: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fff98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fff9c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fff9cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fffa0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3fffa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3fffa4: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3fffa4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fffa8: 0x11000054  beqz        $t0, . + 4 + (0x54 << 2)
    ctx->pc = 0x3FFFA8u;
    {
        const bool branch_taken_0x3fffa8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FFFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFFA8u;
        // 0x3fffac: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fffa8) {
            ctx->pc = 0x4000FCu;
            return;
        }
    }
    ctx->pc = 0x3FFFB0u;
label_3fffb0:
    // 0x3fffb0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3fffb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3fffb4:
    // 0x3fffb4: 0x64e70004  daddiu      $a3, $a3, 0x4
    ctx->pc = 0x3fffb4u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)4);
    // 0x3fffb8: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x3fffb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3fffbc: 0xe9402b  sltu        $t0, $a3, $t1
    ctx->pc = 0x3fffbcu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3fffc0: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x3fffc0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fffc4: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3fffc4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fffc8: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x3fffc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3fffcc: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x3fffccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x3fffd0: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x3fffd0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fffd4: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x3fffd4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fffd8: 0x90a20004  lbu         $v0, 0x4($a1)
    ctx->pc = 0x3fffd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3fffdc: 0x90a30005  lbu         $v1, 0x5($a1)
    ctx->pc = 0x3fffdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x3fffe0: 0xa0c20005  sb          $v0, 0x5($a2)
    ctx->pc = 0x3fffe0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fffe4: 0xa0c30004  sb          $v1, 0x4($a2)
    ctx->pc = 0x3fffe4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fffe8: 0x90a40006  lbu         $a0, 0x6($a1)
    ctx->pc = 0x3fffe8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x3fffec: 0x24a50007  addiu       $a1, $a1, 0x7
    ctx->pc = 0x3fffecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x3ffff0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ffff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ffff4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3ffff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3ffff8: 0xa0c20006  sb          $v0, 0x6($a2)
    ctx->pc = 0x3ffff8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ffffc: 0x24c60007  addiu       $a2, $a2, 0x7
    ctx->pc = 0x3ffffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x400000: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x400000u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x400004u;
}
