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

// Function: sub_002452F0
// Address: 0x2452f0 - 0x245330
void sub_002452F0_0x2452f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002452F0_0x2452f0");
#endif

    switch (ctx->pc) {
        case 0x245310u: goto label_245310;
        default: break;
    }

    ctx->pc = 0x2452f0u;

    // 0x2452f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2452f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2452f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2452f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2452f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2452f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2452fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2452fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x245300: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x245300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245304: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x245304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245308: 0xc0914cc  jal         func_245330
    ctx->pc = 0x245308u;
    SET_GPR_U32(ctx, 31, 0x245310u);
    ctx->pc = 0x245330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245330u, 0x245308u, 0x245310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245310u;
label_245310:
    // 0x245310: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x245310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x245314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245318: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x245318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24531c: 0x3e00008  jr          $ra
    ctx->pc = 0x24531Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24531Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245324u;
    // 0x245324: 0x0  nop
    ctx->pc = 0x245324u;
    // NOP
    // 0x245328: 0x0  nop
    ctx->pc = 0x245328u;
    // NOP
    // 0x24532c: 0x0  nop
    ctx->pc = 0x24532cu;
    // NOP
    ctx->pc = 0x245330u;
}
