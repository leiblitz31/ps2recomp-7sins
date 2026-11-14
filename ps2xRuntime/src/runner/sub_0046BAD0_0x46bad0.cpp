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

// Function: sub_0046BAD0
// Address: 0x46bad0 - 0x46bb30
void sub_0046BAD0_0x46bad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046BAD0_0x46bad0");
#endif

    switch (ctx->pc) {
        case 0x46bafcu: goto label_46bafc;
        case 0x46bb0cu: goto label_46bb0c;
        case 0x46bb1cu: goto label_46bb1c;
        default: break;
    }

    ctx->pc = 0x46bad0u;

    // 0x46bad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46bad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x46bad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46bad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46bad8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46bad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46badc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x46badcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x46bae0: 0x24636cd8  addiu       $v1, $v1, 0x6CD8
    ctx->pc = 0x46bae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27864));
    // 0x46bae4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bae8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x46bae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x46baec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46baecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46baf0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46baf4: 0xc041b48  jal         func_106D20
    ctx->pc = 0x46BAF4u;
    SET_GPR_U32(ctx, 31, 0x46BAFCu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x46BAF4u, 0x46BAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BAFCu;
label_46bafc:
    // 0x46bafc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bb00: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x46bb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x46bb04: 0xc0495d4  jal         func_125750
    ctx->pc = 0x46BB04u;
    SET_GPR_U32(ctx, 31, 0x46BB0Cu);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x46BB04u, 0x46BB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BB0Cu;
label_46bb0c:
    // 0x46bb0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bb10: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x46bb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x46bb14: 0xc0495d4  jal         func_125750
    ctx->pc = 0x46BB14u;
    SET_GPR_U32(ctx, 31, 0x46BB1Cu);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x46BB14u, 0x46BB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BB1Cu;
label_46bb1c:
    // 0x46bb1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bb20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46bb20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46bb24: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x46bb24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x46bb28: 0x3e00008  jr          $ra
    ctx->pc = 0x46BB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46BB30u;
}
