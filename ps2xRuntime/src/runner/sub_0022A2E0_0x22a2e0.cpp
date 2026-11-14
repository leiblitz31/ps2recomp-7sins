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

// Function: sub_0022A2E0
// Address: 0x22a2e0 - 0x22a330
void sub_0022A2E0_0x22a2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A2E0_0x22a2e0");
#endif

    switch (ctx->pc) {
        case 0x22a304u: goto label_22a304;
        case 0x22a314u: goto label_22a314;
        default: break;
    }

    ctx->pc = 0x22a2e0u;

    // 0x22a2e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22a2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22a2e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a2e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22a2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22a2ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22a2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x22a2f0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x22a2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x22a2f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22a2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a2f8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x22a2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a2fc: 0xc08a8cc  jal         func_22A330
    ctx->pc = 0x22A2FCu;
    SET_GPR_U32(ctx, 31, 0x22A304u);
    ctx->pc = 0x22A330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A330u, 0x22A2FCu, 0x22A304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A304u;
label_22a304:
    // 0x22a304: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22a304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a308: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22a308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a30c: 0xc08a1d4  jal         func_228750
    ctx->pc = 0x22A30Cu;
    SET_GPR_U32(ctx, 31, 0x22A314u);
    ctx->pc = 0x228750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228750u, 0x22A30Cu, 0x22A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A314u;
label_22a314:
    // 0x22a314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a318: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22a318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22a31c: 0x3e00008  jr          $ra
    ctx->pc = 0x22A31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A324u;
    // 0x22a324: 0x0  nop
    ctx->pc = 0x22a324u;
    // NOP
    // 0x22a328: 0x0  nop
    ctx->pc = 0x22a328u;
    // NOP
    // 0x22a32c: 0x0  nop
    ctx->pc = 0x22a32cu;
    // NOP
    ctx->pc = 0x22a330u;
}
