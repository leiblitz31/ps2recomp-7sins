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

// Function: sub_002401F0
// Address: 0x2401f0 - 0x240220
void sub_002401F0_0x2401f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002401F0_0x2401f0");
#endif

    switch (ctx->pc) {
        case 0x240200u: goto label_240200;
        default: break;
    }

    ctx->pc = 0x2401f0u;

    // 0x2401f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2401f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2401f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2401f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2401f8: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2401F8u;
    SET_GPR_U32(ctx, 31, 0x240200u);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2401F8u, 0x240200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240200u;
label_240200:
    // 0x240200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240204: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x240204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x240208: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x240208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x24020c: 0x3e00008  jr          $ra
    ctx->pc = 0x24020Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24020Cu;
        // 0x240210: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24020Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240214u;
    // 0x240214: 0x0  nop
    ctx->pc = 0x240214u;
    // NOP
    // 0x240218: 0x0  nop
    ctx->pc = 0x240218u;
    // NOP
    // 0x24021c: 0x0  nop
    ctx->pc = 0x24021cu;
    // NOP
    ctx->pc = 0x240220u;
}
