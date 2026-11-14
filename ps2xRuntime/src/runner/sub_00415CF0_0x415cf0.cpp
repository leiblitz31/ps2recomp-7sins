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

// Function: sub_00415CF0
// Address: 0x415cf0 - 0x415d88
void sub_00415CF0_0x415cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415CF0_0x415cf0");
#endif

    switch (ctx->pc) {
        case 0x415d30u: goto label_415d30;
        case 0x415d4cu: goto label_415d4c;
        default: break;
    }

    ctx->pc = 0x415cf0u;

    // 0x415cf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x415cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x415cf4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x415cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x415cf8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x415cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x415cfc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x415cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x415d00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x415d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415d04: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x415d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x415d08: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x415d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x415d0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x415d0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415d10: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x415d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x415d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x415d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x415d18: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x415d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x415d1c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x415d1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x415d20: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x415D20u;
    {
        const bool branch_taken_0x415d20 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x415D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415D20u;
        // 0x415d24: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415d20) {
            ctx->pc = 0x415D60u;
            goto label_415d60;
        }
    }
    ctx->pc = 0x415D28u;
    // 0x415d28: 0x3c14005e  lui         $s4, 0x5E
    ctx->pc = 0x415d28u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)94 << 16));
    // 0x415d2c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x415d2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_415d30:
    // 0x415d30: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x415d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x415d34: 0x2684c9c8  addiu       $a0, $s4, -0x3638
    ctx->pc = 0x415d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294953416));
    // 0x415d38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x415d38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x415d3c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x415d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x415d40: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x415d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x415d44: 0xc104aec  jal         func_412BB0
    ctx->pc = 0x415D44u;
    SET_GPR_U32(ctx, 31, 0x415D4Cu);
    ctx->pc = 0x415D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415D44u;
    // 0x415d48: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412BB0u, 0x415D44u, 0x415D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415D4Cu;
label_415d4c:
    // 0x415d4c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x415d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x415d50: 0x2623000c  addiu       $v1, $s1, 0xC
    ctx->pc = 0x415d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x415d54: 0x204202a  slt         $a0, $s0, $a0
    ctx->pc = 0x415d54u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x415d58: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x415D58u;
    {
        const bool branch_taken_0x415d58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x415D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415D58u;
        // 0x415d5c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415d58) {
            ctx->pc = 0x415D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_415d30;
        }
    }
    ctx->pc = 0x415D60u;
label_415d60:
    // 0x415d60: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x415d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415d64: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x415d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x415d68: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x415d68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x415d6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x415d6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x415d70: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x415d70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x415d74: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x415d74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x415d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x415d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x415d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x415D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415D7Cu;
        // 0x415d80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415D84u;
    // 0x415d84: 0x0  nop
    ctx->pc = 0x415d84u;
    // NOP
    ctx->pc = 0x415d88u;
}
