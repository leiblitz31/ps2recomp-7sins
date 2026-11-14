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

// Function: sub_00257810
// Address: 0x257810 - 0x257860
void sub_00257810_0x257810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257810_0x257810");
#endif

    switch (ctx->pc) {
        case 0x257834u: goto label_257834;
        default: break;
    }

    ctx->pc = 0x257810u;

    // 0x257810: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x257810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x257814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x257814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x257818: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x257818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25781c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25781cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x257820: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x257820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x257824: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x257824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257828: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x257828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25782c: 0xc095e18  jal         func_257860
    ctx->pc = 0x25782Cu;
    SET_GPR_U32(ctx, 31, 0x257834u);
    ctx->pc = 0x257860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257860u, 0x25782Cu, 0x257834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257834u;
label_257834:
    // 0x257834: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257838: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x257838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25783c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25783cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257840: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x257840u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x257844: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x257844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25784c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25784cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x257850: 0x3e00008  jr          $ra
    ctx->pc = 0x257850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257858u;
    // 0x257858: 0x0  nop
    ctx->pc = 0x257858u;
    // NOP
    // 0x25785c: 0x0  nop
    ctx->pc = 0x25785cu;
    // NOP
    ctx->pc = 0x257860u;
}
