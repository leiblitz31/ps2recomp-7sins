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

// Function: sub_00234F80
// Address: 0x234f80 - 0x234fc0
void sub_00234F80_0x234f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234F80_0x234f80");
#endif

    switch (ctx->pc) {
        case 0x234f98u: goto label_234f98;
        case 0x234fa8u: goto label_234fa8;
        default: break;
    }

    ctx->pc = 0x234f80u;

    // 0x234f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x234f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x234f88: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x234f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x234f8c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x234f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x234f90: 0xc08d430  jal         func_2350C0
    ctx->pc = 0x234F90u;
    SET_GPR_U32(ctx, 31, 0x234F98u);
    ctx->pc = 0x2350C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2350C0u, 0x234F90u, 0x234F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234F98u;
label_234f98:
    // 0x234f98: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x234f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234f9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x234f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234fa0: 0xc08d3f0  jal         func_234FC0
    ctx->pc = 0x234FA0u;
    SET_GPR_U32(ctx, 31, 0x234FA8u);
    ctx->pc = 0x234FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234FC0u, 0x234FA0u, 0x234FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234FA8u;
label_234fa8:
    // 0x234fa8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x234fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234fac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234fb0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x234fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x234fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x234FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234FBCu;
    // 0x234fbc: 0x0  nop
    ctx->pc = 0x234fbcu;
    // NOP
    ctx->pc = 0x234fc0u;
}
