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

// Function: sub_004B4EE8
// Address: 0x4b4ee8 - 0x4b4fe0
void sub_004B4EE8_0x4b4ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4EE8_0x4b4ee8");
#endif

    switch (ctx->pc) {
        case 0x4b4f30u: goto label_4b4f30;
        case 0x4b4f80u: goto label_4b4f80;
        default: break;
    }

    ctx->pc = 0x4b4ee8u;

    // 0x4b4ee8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b4ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b4eec: 0x578c2  srl         $t7, $a1, 3
    ctx->pc = 0x4b4eecu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x4b4ef0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b4ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4b4ef4: 0x1e0482d  daddu       $t1, $t7, $zero
    ctx->pc = 0x4b4ef4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4ef8: 0x30b00007  andi        $s0, $a1, 0x7
    ctx->pc = 0x4b4ef8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x4b4efc: 0x7fb10000  sq          $s1, 0x0($sp)
    ctx->pc = 0x4b4efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 17));
    // 0x4b4f00: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4b4f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4b4f04: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x4b4f04u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4f08: 0x570c2  srl         $t6, $a1, 3
    ctx->pc = 0x4b4f08u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x4b4f0c: 0x30b90007  andi        $t9, $a1, 0x7
    ctx->pc = 0x4b4f0cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x4b4f10: 0x1c9102b  sltu        $v0, $t6, $t1
    ctx->pc = 0x4b4f10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4b4f14: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x4B4F14u;
    {
        const bool branch_taken_0x4b4f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4F14u;
        // 0x4b4f18: 0x7382b  sltu        $a3, $zero, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4f14) {
            ctx->pc = 0x4B4FD0u;
            goto label_4b4fd0;
        }
    }
    ctx->pc = 0x4B4F1Cu;
    // 0x4b4f1c: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x4b4f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4b4f20: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x4b4f20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4b4f24: 0x2c027  nor         $t8, $zero, $v0
    ctx->pc = 0x4b4f24u;
    SET_GPR_U64(ctx, 24, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x4b4f28: 0x12f1026  xor         $v0, $t1, $t7
    ctx->pc = 0x4b4f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 15));
    // 0x4b4f2c: 0x0  nop
    ctx->pc = 0x4b4f2cu;
    // NOP
label_4b4f30:
    // 0x4b4f30: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4b4f30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4f34: 0x202180a  movz        $v1, $s0, $v0
    ctx->pc = 0x4b4f34u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x4b4f38: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x4b4f38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4b4f3c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4b4f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4f40: 0x12e1826  xor         $v1, $t1, $t6
    ctx->pc = 0x4b4f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 14));
    // 0x4b4f44: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B4F44u;
    {
        const bool branch_taken_0x4b4f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4F44u;
        // 0x4b4f48: 0x323500a  movz        $t2, $t9, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4f44) {
            ctx->pc = 0x4B4F68u;
            goto label_4b4f68;
        }
    }
    ctx->pc = 0x4B4F4Cu;
    // 0x4b4f4c: 0x15510007  bne         $t2, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B4F4Cu;
    {
        const bool branch_taken_0x4b4f4c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 17));
        ctx->pc = 0x4B4F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4F4Cu;
        // 0x4b4f50: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4f4c) {
            ctx->pc = 0x4B4F6Cu;
            goto label_4b4f6c;
        }
    }
    ctx->pc = 0x4B4F54u;
    // 0x4b4f54: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4b4f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b4f58: 0x252c0001  addiu       $t4, $t1, 0x1
    ctx->pc = 0x4b4f58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4b4f5c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x4b4f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4b4f60: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x4B4F60u;
    {
        const bool branch_taken_0x4b4f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4F60u;
        // 0x4b4f64: 0xa0580000  sb          $t8, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4f60) {
            ctx->pc = 0x4B4FC0u;
            goto label_4b4fc0;
        }
    }
    ctx->pc = 0x4B4F68u;
label_4b4f68:
    // 0x4b4f68: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4b4f68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b4f6c:
    // 0x4b4f6c: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x4b4f6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x4b4f70: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4B4F70u;
    {
        const bool branch_taken_0x4b4f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4F70u;
        // 0x4b4f74: 0x252c0001  addiu       $t4, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4f70) {
            ctx->pc = 0x4B4FC0u;
            goto label_4b4fc0;
        }
    }
    ctx->pc = 0x4B4F78u;
    // 0x4b4f78: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x4b4f78u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b4f7c: 0x0  nop
    ctx->pc = 0x4b4f7cu;
    // NOP
label_4b4f80:
    // 0x4b4f80: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x4b4f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b4f84: 0x10d1804  sllv        $v1, $t5, $t0
    ctx->pc = 0x4b4f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 8) & 0x1F));
    // 0x4b4f88: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x4b4f88u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x4b4f8c: 0x1073004  sllv        $a2, $a3, $t0
    ctx->pc = 0x4b4f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 8) & 0x1F));
    // 0x4b4f90: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x4b4f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x4b4f94: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4b4f94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4b4f98: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x4b4f98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b4f9c: 0x10a282b  sltu        $a1, $t0, $t2
    ctx->pc = 0x4b4f9cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x4b4fa0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b4fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b4fa4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x4b4fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4b4fa8: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4b4fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b4fac: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x4b4facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x4b4fb0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4b4fb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b4fb4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4b4fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4b4fb8: 0x14a0fff1  bnez        $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x4B4FB8u;
    {
        const bool branch_taken_0x4b4fb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4FB8u;
        // 0x4b4fbc: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4fb8) {
            ctx->pc = 0x4B4F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4f80;
        }
    }
    ctx->pc = 0x4B4FC0u;
label_4b4fc0:
    // 0x4b4fc0: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x4b4fc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4fc4: 0x1c9102b  sltu        $v0, $t6, $t1
    ctx->pc = 0x4b4fc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4b4fc8: 0x1040ffd9  beqz        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x4B4FC8u;
    {
        const bool branch_taken_0x4b4fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4FC8u;
        // 0x4b4fcc: 0x12f1026  xor         $v0, $t1, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4fc8) {
            ctx->pc = 0x4B4F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4f30;
        }
    }
    ctx->pc = 0x4B4FD0u;
label_4b4fd0:
    // 0x4b4fd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b4fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b4fd4: 0x7bb10000  lq          $s1, 0x0($sp)
    ctx->pc = 0x4b4fd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b4fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4FD8u;
        // 0x4b4fdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4FE0u;
}
