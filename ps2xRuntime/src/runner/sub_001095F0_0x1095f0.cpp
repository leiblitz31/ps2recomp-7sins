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

// Function: sub_001095F0
// Address: 0x1095f0 - 0x109640
void sub_001095F0_0x1095f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001095F0_0x1095f0");
#endif

    switch (ctx->pc) {
        case 0x109610u: goto label_109610;
        case 0x109628u: goto label_109628;
        default: break;
    }

    ctx->pc = 0x1095f0u;

    // 0x1095f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1095f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1095f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1095f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1095f8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1095f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1095fc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1095fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x109600: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x109600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x109604: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x109604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x109608: 0xc0425b8  jal         func_1096E0
    ctx->pc = 0x109608u;
    SET_GPR_U32(ctx, 31, 0x109610u);
    ctx->pc = 0x1096E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1096E0u, 0x109608u, 0x109610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109610u;
label_109610:
    // 0x109610: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x109610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109614: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x109614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109618: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x109618u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10961c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x10961cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x109620: 0xc042590  jal         func_109640
    ctx->pc = 0x109620u;
    SET_GPR_U32(ctx, 31, 0x109628u);
    ctx->pc = 0x109640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109640u, 0x109620u, 0x109628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109628u;
label_109628:
    // 0x109628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x109628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10962c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x10962cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x109630: 0x3e00008  jr          $ra
    ctx->pc = 0x109630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109638u;
    // 0x109638: 0x0  nop
    ctx->pc = 0x109638u;
    // NOP
    // 0x10963c: 0x0  nop
    ctx->pc = 0x10963cu;
    // NOP
    ctx->pc = 0x109640u;
}
