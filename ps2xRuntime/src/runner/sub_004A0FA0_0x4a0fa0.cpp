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

// Function: sub_004A0FA0
// Address: 0x4a0fa0 - 0x4a0ff8
void sub_004A0FA0_0x4a0fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0FA0_0x4a0fa0");
#endif

    switch (ctx->pc) {
        case 0x4a0fc8u: goto label_4a0fc8;
        case 0x4a0fd0u: goto label_4a0fd0;
        default: break;
    }

    ctx->pc = 0x4a0fa0u;

    // 0x4a0fa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a0fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4a0fa4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4a0fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4a0fa8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a0fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4a0fac: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4a0facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4a0fb0: 0x2791c1f0  addiu       $s1, $gp, -0x3E10
    ctx->pc = 0x4a0fb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951408));
    // 0x4a0fb4: 0x8f90c1f0  lw          $s0, -0x3E10($gp)
    ctx->pc = 0x4a0fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
    // 0x4a0fb8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a0fb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0fbc: 0x12110007  beq         $s0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A0FBCu;
    {
        const bool branch_taken_0x4a0fbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x4A0FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0FBCu;
        // 0x4a0fc0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0fbc) {
            ctx->pc = 0x4A0FDCu;
            goto label_4a0fdc;
        }
    }
    ctx->pc = 0x4A0FC4u;
    // 0x4a0fc4: 0x2604fff0  addiu       $a0, $s0, -0x10
    ctx->pc = 0x4a0fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
label_4a0fc8:
    // 0x4a0fc8: 0xc12ab46  jal         func_4AAD18
    ctx->pc = 0x4A0FC8u;
    SET_GPR_U32(ctx, 31, 0x4A0FD0u);
    ctx->pc = 0x4A0FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0FC8u;
    // 0x4a0fcc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAD18u, 0x4A0FC8u, 0x4A0FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0FD0u;
label_4a0fd0:
    // 0x4a0fd0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x4a0fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a0fd4: 0x1611fffc  bne         $s0, $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x4A0FD4u;
    {
        const bool branch_taken_0x4a0fd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x4A0FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0FD4u;
        // 0x4a0fd8: 0x2604fff0  addiu       $a0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0fd4) {
            ctx->pc = 0x4A0FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0fc8;
        }
    }
    ctx->pc = 0x4A0FDCu;
label_4a0fdc:
    // 0x4a0fdc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4a0fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a0fe0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a0fe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a0fe4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4a0fe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a0fe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a0fec: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0FECu;
        // 0x4a0ff0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0FF4u;
    // 0x4a0ff4: 0x0  nop
    ctx->pc = 0x4a0ff4u;
    // NOP
    ctx->pc = 0x4a0ff8u;
}
