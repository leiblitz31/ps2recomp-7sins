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

// Function: sub_00190F00
// Address: 0x190f00 - 0x190f50
void sub_00190F00_0x190f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190F00_0x190f00");
#endif

    switch (ctx->pc) {
        case 0x190f24u: goto label_190f24;
        default: break;
    }

    ctx->pc = 0x190f00u;

    // 0x190f00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x190f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x190f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190f08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x190f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x190f0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x190f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x190f10: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x190f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x190f14: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x190f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190f18: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x190f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190f1c: 0xc0643d4  jal         func_190F50
    ctx->pc = 0x190F1Cu;
    SET_GPR_U32(ctx, 31, 0x190F24u);
    ctx->pc = 0x190F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190F50u, 0x190F1Cu, 0x190F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190F24u;
label_190f24:
    // 0x190f24: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x190f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190f28: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x190f28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190f2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x190f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190f30: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x190f30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x190f34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x190f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190f38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190f3c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x190f3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x190f40: 0x3e00008  jr          $ra
    ctx->pc = 0x190F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190F48u;
    // 0x190f48: 0x0  nop
    ctx->pc = 0x190f48u;
    // NOP
    // 0x190f4c: 0x0  nop
    ctx->pc = 0x190f4cu;
    // NOP
    ctx->pc = 0x190f50u;
}
