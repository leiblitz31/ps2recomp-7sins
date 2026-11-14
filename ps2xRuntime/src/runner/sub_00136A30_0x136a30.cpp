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

// Function: sub_00136A30
// Address: 0x136a30 - 0x136a60
void sub_00136A30_0x136a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136A30_0x136a30");
#endif

    switch (ctx->pc) {
        case 0x136a50u: goto label_136a50;
        default: break;
    }

    ctx->pc = 0x136a30u;

    // 0x136a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x136a34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x136a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x136a38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x136a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x136a3c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x136a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136a40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x136a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136a44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x136a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136a48: 0xc04da98  jal         func_136A60
    ctx->pc = 0x136A48u;
    SET_GPR_U32(ctx, 31, 0x136A50u);
    ctx->pc = 0x136A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A60u, 0x136A48u, 0x136A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A50u;
label_136a50:
    // 0x136a50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x136a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136a54: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x136a54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x136a58: 0x3e00008  jr          $ra
    ctx->pc = 0x136A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136A60u;
}
