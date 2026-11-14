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

// Function: sub_004A8FB0
// Address: 0x4a8fb0 - 0x4a8fe0
void sub_004A8FB0_0x4a8fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8FB0_0x4a8fb0");
#endif

    switch (ctx->pc) {
        case 0x4a8fc4u: goto label_4a8fc4;
        default: break;
    }

    ctx->pc = 0x4a8fb0u;

    // 0x4a8fb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a8fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a8fb4: 0x10850005  beq         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A8FB4u;
    {
        const bool branch_taken_0x4a8fb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x4A8FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8FB4u;
        // 0x4a8fb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8fb4) {
            ctx->pc = 0x4A8FCCu;
            goto label_4a8fcc;
        }
    }
    ctx->pc = 0x4A8FBCu;
    // 0x4a8fbc: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x4A8FBCu;
    SET_GPR_U32(ctx, 31, 0x4A8FC4u);
    ctx->pc = 0x4A8FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8FBCu;
    // 0x4a8fc0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x4A8FBCu, 0x4A8FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8FC4u;
label_4a8fc4:
    // 0x4a8fc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4A8FC4u;
    {
        const bool branch_taken_0x4a8fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8FC4u;
        // 0x4a8fc8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8fc4) {
            ctx->pc = 0x4A8FD4u;
            goto label_4a8fd4;
        }
    }
    ctx->pc = 0x4A8FCCu;
label_4a8fcc:
    // 0x4a8fcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a8fccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a8fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a8fd4:
    // 0x4a8fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A8FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8FD4u;
        // 0x4a8fd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8FDCu;
    // 0x4a8fdc: 0x0  nop
    ctx->pc = 0x4a8fdcu;
    // NOP
    ctx->pc = 0x4a8fe0u;
}
