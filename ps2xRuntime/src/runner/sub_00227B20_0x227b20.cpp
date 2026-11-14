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

// Function: sub_00227B20
// Address: 0x227b20 - 0x227b80
void sub_00227B20_0x227b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227B20_0x227b20");
#endif

    switch (ctx->pc) {
        case 0x227b44u: goto label_227b44;
        case 0x227b6cu: goto label_227b6c;
        default: break;
    }

    ctx->pc = 0x227b20u;

    // 0x227b20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x227b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x227b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227b28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x227b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x227b2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x227b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x227b30: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x227b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x227b34: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x227b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227b38: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x227b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x227b3c: 0xc089f08  jal         func_227C20
    ctx->pc = 0x227B3Cu;
    SET_GPR_U32(ctx, 31, 0x227B44u);
    ctx->pc = 0x227C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C20u, 0x227B3Cu, 0x227B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B44u;
label_227b44:
    // 0x227b44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x227b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227b48: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x227b48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x227b4c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x227b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227b50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x227b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227b54: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x227b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x227b58: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x227b58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227b5c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x227b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x227b60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x227b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227b64: 0xc089ee0  jal         func_227B80
    ctx->pc = 0x227B64u;
    SET_GPR_U32(ctx, 31, 0x227B6Cu);
    ctx->pc = 0x227B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B80u, 0x227B64u, 0x227B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B6Cu;
label_227b6c:
    // 0x227b6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x227b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227b74: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x227b74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x227b78: 0x3e00008  jr          $ra
    ctx->pc = 0x227B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227B80u;
}
