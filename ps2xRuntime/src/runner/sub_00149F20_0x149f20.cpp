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

// Function: sub_00149F20
// Address: 0x149f20 - 0x149f80
void sub_00149F20_0x149f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149F20_0x149f20");
#endif

    switch (ctx->pc) {
        case 0x149f44u: goto label_149f44;
        case 0x149f6cu: goto label_149f6c;
        default: break;
    }

    ctx->pc = 0x149f20u;

    // 0x149f20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x149f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x149f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149f28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x149f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x149f2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x149f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x149f30: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x149f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x149f34: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x149f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149f38: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x149f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149f3c: 0xc052808  jal         func_14A020
    ctx->pc = 0x149F3Cu;
    SET_GPR_U32(ctx, 31, 0x149F44u);
    ctx->pc = 0x14A020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A020u, 0x149F3Cu, 0x149F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149F44u;
label_149f44:
    // 0x149f44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149f48: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x149f48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x149f4c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x149f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149f50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x149f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149f54: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x149f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x149f58: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x149f58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149f5c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x149f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x149f60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x149f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149f64: 0xc0527e0  jal         func_149F80
    ctx->pc = 0x149F64u;
    SET_GPR_U32(ctx, 31, 0x149F6Cu);
    ctx->pc = 0x149F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149F80u, 0x149F64u, 0x149F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149F6Cu;
label_149f6c:
    // 0x149f6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149f74: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x149f74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x149f78: 0x3e00008  jr          $ra
    ctx->pc = 0x149F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149F80u;
}
