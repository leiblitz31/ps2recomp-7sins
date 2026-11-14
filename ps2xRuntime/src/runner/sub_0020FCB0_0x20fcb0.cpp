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

// Function: sub_0020FCB0
// Address: 0x20fcb0 - 0x20fcf0
void sub_0020FCB0_0x20fcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FCB0_0x20fcb0");
#endif

    switch (ctx->pc) {
        case 0x20fcccu: goto label_20fccc;
        case 0x20fcdcu: goto label_20fcdc;
        default: break;
    }

    ctx->pc = 0x20fcb0u;

    // 0x20fcb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20fcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20fcb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20fcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20fcb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x20fcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x20fcbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x20fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20fcc0: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x20fcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x20fcc4: 0xc0452e0  jal         func_114B80
    ctx->pc = 0x20FCC4u;
    SET_GPR_U32(ctx, 31, 0x20FCCCu);
    ctx->pc = 0x114B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B80u, 0x20FCC4u, 0x20FCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FCCCu;
label_20fccc:
    // 0x20fccc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x20fcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20fcd0: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x20fcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x20fcd4: 0xc041b48  jal         func_106D20
    ctx->pc = 0x20FCD4u;
    SET_GPR_U32(ctx, 31, 0x20FCDCu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x20FCD4u, 0x20FCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FCDCu;
label_20fcdc:
    // 0x20fcdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x20fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20fce0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20fce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fce4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x20fce4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20fce8: 0x3e00008  jr          $ra
    ctx->pc = 0x20FCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FCE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FCF0u;
}
