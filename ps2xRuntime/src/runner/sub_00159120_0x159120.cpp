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

// Function: sub_00159120
// Address: 0x159120 - 0x159160
void sub_00159120_0x159120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159120_0x159120");
#endif

    switch (ctx->pc) {
        case 0x159138u: goto label_159138;
        case 0x159148u: goto label_159148;
        default: break;
    }

    ctx->pc = 0x159120u;

    // 0x159120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x159120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x159124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x159124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x159128: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x159128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x15912c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15912cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159130: 0xc056458  jal         func_159160
    ctx->pc = 0x159130u;
    SET_GPR_U32(ctx, 31, 0x159138u);
    ctx->pc = 0x159160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159160u, 0x159130u, 0x159138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159138u;
label_159138:
    // 0x159138: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x159138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x15913c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15913cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159140: 0xc0564d8  jal         func_159360
    ctx->pc = 0x159140u;
    SET_GPR_U32(ctx, 31, 0x159148u);
    ctx->pc = 0x159360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159360u, 0x159140u, 0x159148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159148u;
label_159148:
    // 0x159148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15914c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15914cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x159150: 0x3e00008  jr          $ra
    ctx->pc = 0x159150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159158u;
    // 0x159158: 0x0  nop
    ctx->pc = 0x159158u;
    // NOP
    // 0x15915c: 0x0  nop
    ctx->pc = 0x15915cu;
    // NOP
    ctx->pc = 0x159160u;
}
