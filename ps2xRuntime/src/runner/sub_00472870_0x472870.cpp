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

// Function: sub_00472870
// Address: 0x472870 - 0x4728b0
void sub_00472870_0x472870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00472870_0x472870");
#endif

    switch (ctx->pc) {
        case 0x47288cu: goto label_47288c;
        case 0x472898u: goto label_472898;
        default: break;
    }

    ctx->pc = 0x472870u;

    // 0x472870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x472870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x472874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x472874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x472878: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x472878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x47287c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x47287cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x472880: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x472880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472884: 0xc110d02  jal         func_443408
    ctx->pc = 0x472884u;
    SET_GPR_U32(ctx, 31, 0x47288Cu);
    ctx->pc = 0x443408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443408u, 0x472884u, 0x47288Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47288Cu;
label_47288c:
    // 0x47288c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x47288cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x472890: 0xc1074ac  jal         func_41D2B0
    ctx->pc = 0x472890u;
    SET_GPR_U32(ctx, 31, 0x472898u);
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x472890u, 0x472898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472898u;
label_472898:
    // 0x472898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x472898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47289c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x47289cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4728a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4728A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4728A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4728A8u;
    // 0x4728a8: 0x0  nop
    ctx->pc = 0x4728a8u;
    // NOP
    // 0x4728ac: 0x0  nop
    ctx->pc = 0x4728acu;
    // NOP
    ctx->pc = 0x4728b0u;
}
