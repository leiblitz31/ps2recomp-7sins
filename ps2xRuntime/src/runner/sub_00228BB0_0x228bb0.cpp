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

// Function: sub_00228BB0
// Address: 0x228bb0 - 0x228c10
void sub_00228BB0_0x228bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228BB0_0x228bb0");
#endif

    switch (ctx->pc) {
        case 0x228bccu: goto label_228bcc;
        case 0x228bdcu: goto label_228bdc;
        case 0x228bf0u: goto label_228bf0;
        default: break;
    }

    ctx->pc = 0x228bb0u;

    // 0x228bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x228bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x228bb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x228bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x228bb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x228bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x228bbc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x228bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x228bc0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228bc4: 0xc08a1a0  jal         func_228680
    ctx->pc = 0x228BC4u;
    SET_GPR_U32(ctx, 31, 0x228BCCu);
    ctx->pc = 0x228680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228680u, 0x228BC4u, 0x228BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228BCCu;
label_228bcc:
    // 0x228bcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x228bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228bd0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228bd4: 0xc08a118  jal         func_228460
    ctx->pc = 0x228BD4u;
    SET_GPR_U32(ctx, 31, 0x228BDCu);
    ctx->pc = 0x228460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228460u, 0x228BD4u, 0x228BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228BDCu;
label_228bdc:
    // 0x228bdc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x228bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228be0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x228be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228be4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x228be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228be8: 0xc08a304  jal         func_228C10
    ctx->pc = 0x228BE8u;
    SET_GPR_U32(ctx, 31, 0x228BF0u);
    ctx->pc = 0x228C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228C10u, 0x228BE8u, 0x228BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228BF0u;
label_228bf0:
    // 0x228bf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x228bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228bf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x228bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228bf8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x228bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x228bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x228BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228C04u;
    // 0x228c04: 0x0  nop
    ctx->pc = 0x228c04u;
    // NOP
    // 0x228c08: 0x0  nop
    ctx->pc = 0x228c08u;
    // NOP
    // 0x228c0c: 0x0  nop
    ctx->pc = 0x228c0cu;
    // NOP
    ctx->pc = 0x228c10u;
}
