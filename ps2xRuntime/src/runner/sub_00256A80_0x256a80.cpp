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

// Function: sub_00256A80
// Address: 0x256a80 - 0x256ad0
void sub_00256A80_0x256a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256A80_0x256a80");
#endif

    switch (ctx->pc) {
        case 0x256aa4u: goto label_256aa4;
        default: break;
    }

    ctx->pc = 0x256a80u;

    // 0x256a80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x256a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x256a84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x256a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x256a88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x256a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x256a8c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x256a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x256a90: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x256a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x256a94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x256a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256a98: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x256a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256a9c: 0xc095ab4  jal         func_256AD0
    ctx->pc = 0x256A9Cu;
    SET_GPR_U32(ctx, 31, 0x256AA4u);
    ctx->pc = 0x256AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256AD0u, 0x256A9Cu, 0x256AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256AA4u;
label_256aa4:
    // 0x256aa4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x256aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x256aa8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x256aa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256aac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x256aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256ab0: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x256ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x256ab4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x256ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256ab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x256ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256abc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x256abcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x256ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x256AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256AC8u;
    // 0x256ac8: 0x0  nop
    ctx->pc = 0x256ac8u;
    // NOP
    // 0x256acc: 0x0  nop
    ctx->pc = 0x256accu;
    // NOP
    ctx->pc = 0x256ad0u;
}
