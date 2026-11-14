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

// Function: sub_00118030
// Address: 0x118030 - 0x118080
void sub_00118030_0x118030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118030_0x118030");
#endif

    switch (ctx->pc) {
        case 0x118054u: goto label_118054;
        default: break;
    }

    ctx->pc = 0x118030u;

    // 0x118030: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x118030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x118034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x118034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x118038: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x118038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11803c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11803cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x118040: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x118040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x118044: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x118044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118048: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x118048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11804c: 0xc0450c0  jal         func_114300
    ctx->pc = 0x11804Cu;
    SET_GPR_U32(ctx, 31, 0x118054u);
    ctx->pc = 0x114300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114300u, 0x11804Cu, 0x118054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118054u;
label_118054:
    // 0x118054: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x118054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118058: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x118058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11805c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118060: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x118060u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x118064: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x118068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11806c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x11806cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x118070: 0x3e00008  jr          $ra
    ctx->pc = 0x118070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118078u;
    // 0x118078: 0x0  nop
    ctx->pc = 0x118078u;
    // NOP
    // 0x11807c: 0x0  nop
    ctx->pc = 0x11807cu;
    // NOP
    ctx->pc = 0x118080u;
}
