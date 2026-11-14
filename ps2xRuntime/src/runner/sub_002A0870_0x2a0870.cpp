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

// Function: sub_002A0870
// Address: 0x2a0870 - 0x2a08c0
void sub_002A0870_0x2a0870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0870_0x2a0870");
#endif

    switch (ctx->pc) {
        case 0x2a0898u: goto label_2a0898;
        case 0x2a08a4u: goto label_2a08a4;
        default: break;
    }

    ctx->pc = 0x2a0870u;

    // 0x2a0870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a0870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a0874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a0874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a0878: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a0878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a087c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2a087cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2a0880: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a0880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0884: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a0884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0888: 0x8c45004c  lw          $a1, 0x4C($v0)
    ctx->pc = 0x2a0888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2a088c: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x2a088cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0890: 0xc0a85e8  jal         func_2A17A0
    ctx->pc = 0x2A0890u;
    SET_GPR_U32(ctx, 31, 0x2A0898u);
    ctx->pc = 0x2A17A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A17A0u, 0x2A0890u, 0x2A0898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0898u;
label_2a0898:
    // 0x2a0898: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a0898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a089c: 0xc0a86bc  jal         func_2A1AF0
    ctx->pc = 0x2A089Cu;
    SET_GPR_U32(ctx, 31, 0x2A08A4u);
    ctx->pc = 0x2A1AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1AF0u, 0x2A089Cu, 0x2A08A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A08A4u;
label_2a08a4:
    // 0x2a08a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a08a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a08a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a08a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a08ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2A08ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A08ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A08B4u;
    // 0x2a08b4: 0x0  nop
    ctx->pc = 0x2a08b4u;
    // NOP
    // 0x2a08b8: 0x0  nop
    ctx->pc = 0x2a08b8u;
    // NOP
    // 0x2a08bc: 0x0  nop
    ctx->pc = 0x2a08bcu;
    // NOP
    ctx->pc = 0x2a08c0u;
}
