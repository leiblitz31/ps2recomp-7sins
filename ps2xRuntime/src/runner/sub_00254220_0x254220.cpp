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

// Function: sub_00254220
// Address: 0x254220 - 0x254280
void sub_00254220_0x254220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254220_0x254220");
#endif

    switch (ctx->pc) {
        case 0x254238u: goto label_254238;
        case 0x254258u: goto label_254258;
        case 0x254268u: goto label_254268;
        default: break;
    }

    ctx->pc = 0x254220u;

    // 0x254220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x254224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254228: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x254228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25422c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25422cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254230: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x254230u;
    SET_GPR_U32(ctx, 31, 0x254238u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x254230u, 0x254238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254238u;
label_254238:
    // 0x254238: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x254238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x25423c: 0x24635890  addiu       $v1, $v1, 0x5890
    ctx->pc = 0x25423cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22672));
    // 0x254240: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254244: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x254244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x254248: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25424c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x25424cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x254250: 0xc095274  jal         func_2549D0
    ctx->pc = 0x254250u;
    SET_GPR_U32(ctx, 31, 0x254258u);
    ctx->pc = 0x2549D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2549D0u, 0x254250u, 0x254258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254258u;
label_254258:
    // 0x254258: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25425c: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x25425cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x254260: 0xc0951d0  jal         func_254740
    ctx->pc = 0x254260u;
    SET_GPR_U32(ctx, 31, 0x254268u);
    ctx->pc = 0x254740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254740u, 0x254260u, 0x254268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254268u;
label_254268:
    // 0x254268: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25426c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25426cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254270: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x254270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x254274: 0x3e00008  jr          $ra
    ctx->pc = 0x254274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25427Cu;
    // 0x25427c: 0x0  nop
    ctx->pc = 0x25427cu;
    // NOP
    ctx->pc = 0x254280u;
}
