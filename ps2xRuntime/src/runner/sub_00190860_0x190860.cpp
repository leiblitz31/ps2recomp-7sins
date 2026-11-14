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

// Function: sub_00190860
// Address: 0x190860 - 0x1908b0
void sub_00190860_0x190860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190860_0x190860");
#endif

    switch (ctx->pc) {
        case 0x190884u: goto label_190884;
        default: break;
    }

    ctx->pc = 0x190860u;

    // 0x190860: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x190860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x190864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190868: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x190868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19086c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19086cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x190870: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x190870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x190874: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x190874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190878: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x190878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19087c: 0xc06422c  jal         func_1908B0
    ctx->pc = 0x19087Cu;
    SET_GPR_U32(ctx, 31, 0x190884u);
    ctx->pc = 0x1908B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1908B0u, 0x19087Cu, 0x190884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190884u;
label_190884:
    // 0x190884: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x190884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190888: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x190888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19088c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19088cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190890: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x190890u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x190894: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x190894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19089c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19089cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1908a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1908A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1908A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1908A8u;
    // 0x1908a8: 0x0  nop
    ctx->pc = 0x1908a8u;
    // NOP
    // 0x1908ac: 0x0  nop
    ctx->pc = 0x1908acu;
    // NOP
    ctx->pc = 0x1908b0u;
}
