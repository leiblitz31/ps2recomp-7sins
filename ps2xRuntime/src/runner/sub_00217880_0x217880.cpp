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

// Function: sub_00217880
// Address: 0x217880 - 0x2178c0
void sub_00217880_0x217880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217880_0x217880");
#endif

    switch (ctx->pc) {
        case 0x2178a4u: goto label_2178a4;
        default: break;
    }

    ctx->pc = 0x217880u;

    // 0x217880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x217880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x217884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217888: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x217888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21788c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x21788cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x217890: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x217890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217894: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x217894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217898: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x217898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21789c: 0xc085e30  jal         func_2178C0
    ctx->pc = 0x21789Cu;
    SET_GPR_U32(ctx, 31, 0x2178A4u);
    ctx->pc = 0x2178C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2178C0u, 0x21789Cu, 0x2178A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2178A4u;
label_2178a4:
    // 0x2178a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2178a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2178a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2178a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2178ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2178ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2178ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2178B4u;
    // 0x2178b4: 0x0  nop
    ctx->pc = 0x2178b4u;
    // NOP
    // 0x2178b8: 0x0  nop
    ctx->pc = 0x2178b8u;
    // NOP
    // 0x2178bc: 0x0  nop
    ctx->pc = 0x2178bcu;
    // NOP
    ctx->pc = 0x2178c0u;
}
