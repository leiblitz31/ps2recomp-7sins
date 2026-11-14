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

// Function: sub_004ACAD8
// Address: 0x4acad8 - 0x4acb28
void sub_004ACAD8_0x4acad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ACAD8_0x4acad8");
#endif

    switch (ctx->pc) {
        case 0x4acaf4u: goto label_4acaf4;
        default: break;
    }

    ctx->pc = 0x4acad8u;

    // 0x4acad8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4acad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4acadc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4acadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4acae0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4acae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4acae4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4acae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4acae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4acaec: 0xc12a7f0  jal         func_4A9FC0
    ctx->pc = 0x4ACAECu;
    SET_GPR_U32(ctx, 31, 0x4ACAF4u);
    ctx->pc = 0x4ACAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACAECu;
    // 0x4acaf0: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9FC0u, 0x4ACAECu, 0x4ACAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACAF4u;
label_4acaf4:
    // 0x4acaf4: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x4acaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x4acaf8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4ACAF8u;
    {
        const bool branch_taken_0x4acaf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4acaf8) {
            ctx->pc = 0x4ACAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ACAF8u;
            // 0x4acafc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ACB18u;
            goto label_4acb18;
        }
    }
    ctx->pc = 0x4ACB00u;
    // 0x4acb00: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x4acb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x4acb04: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4acb04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4acb08: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x4acb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x4acb0c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x4acb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x4acb10: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x4acb10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x4acb14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4acb14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4acb18:
    // 0x4acb18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4acb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4acb1c: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACB1Cu;
        // 0x4acb20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACB24u;
    // 0x4acb24: 0x0  nop
    ctx->pc = 0x4acb24u;
    // NOP
    ctx->pc = 0x4acb28u;
}
