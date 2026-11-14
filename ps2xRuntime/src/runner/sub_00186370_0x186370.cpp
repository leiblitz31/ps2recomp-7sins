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

// Function: sub_00186370
// Address: 0x186370 - 0x1863b0
void sub_00186370_0x186370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186370_0x186370");
#endif

    switch (ctx->pc) {
        case 0x18638cu: goto label_18638c;
        default: break;
    }

    ctx->pc = 0x186370u;

    // 0x186370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x186370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x186374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186378: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x186378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18637c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18637cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x186380: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x186380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186384: 0xc061284  jal         func_184A10
    ctx->pc = 0x186384u;
    SET_GPR_U32(ctx, 31, 0x18638Cu);
    ctx->pc = 0x184A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184A10u, 0x186384u, 0x18638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18638Cu;
label_18638c:
    // 0x18638c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x18638cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186390: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x186390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x186394: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x186394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x186398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18639c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18639cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1863a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1863A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1863A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1863A8u;
    // 0x1863a8: 0x0  nop
    ctx->pc = 0x1863a8u;
    // NOP
    // 0x1863ac: 0x0  nop
    ctx->pc = 0x1863acu;
    // NOP
    ctx->pc = 0x1863b0u;
}
