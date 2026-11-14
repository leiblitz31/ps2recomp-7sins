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

// Function: sub_002523D0
// Address: 0x2523d0 - 0x252410
void sub_002523D0_0x2523d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002523D0_0x2523d0");
#endif

    switch (ctx->pc) {
        case 0x2523ecu: goto label_2523ec;
        default: break;
    }

    ctx->pc = 0x2523d0u;

    // 0x2523d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2523d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2523d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2523d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2523d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2523d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2523dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2523dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2523e0: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x2523e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2523e4: 0xc0948dc  jal         func_252370
    ctx->pc = 0x2523E4u;
    SET_GPR_U32(ctx, 31, 0x2523ECu);
    ctx->pc = 0x252370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252370u, 0x2523E4u, 0x2523ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2523ECu;
label_2523ec:
    // 0x2523ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2523ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2523f0: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x2523f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x2523f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2523f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2523f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2523f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2523fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2523fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x252400: 0x3e00008  jr          $ra
    ctx->pc = 0x252400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252408u;
    // 0x252408: 0x0  nop
    ctx->pc = 0x252408u;
    // NOP
    // 0x25240c: 0x0  nop
    ctx->pc = 0x25240cu;
    // NOP
    ctx->pc = 0x252410u;
}
