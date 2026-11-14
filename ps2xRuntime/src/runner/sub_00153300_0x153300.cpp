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

// Function: sub_00153300
// Address: 0x153300 - 0x153350
void sub_00153300_0x153300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153300_0x153300");
#endif

    switch (ctx->pc) {
        case 0x153324u: goto label_153324;
        default: break;
    }

    ctx->pc = 0x153300u;

    // 0x153300: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x153300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x153304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x153308: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x153308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15330c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x15330cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x153310: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x153310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x153314: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x153314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153318: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x153318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15331c: 0xc052d28  jal         func_14B4A0
    ctx->pc = 0x15331Cu;
    SET_GPR_U32(ctx, 31, 0x153324u);
    ctx->pc = 0x14B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B4A0u, 0x15331Cu, 0x153324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153324u;
label_153324:
    // 0x153324: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x153324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153328: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x153328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15332c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15332cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153330: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x153330u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x153334: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x153334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x153338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15333c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x15333cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x153340: 0x3e00008  jr          $ra
    ctx->pc = 0x153340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153348u;
    // 0x153348: 0x0  nop
    ctx->pc = 0x153348u;
    // NOP
    // 0x15334c: 0x0  nop
    ctx->pc = 0x15334cu;
    // NOP
    ctx->pc = 0x153350u;
}
