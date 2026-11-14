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

// Function: sub_00221E40
// Address: 0x221e40 - 0x221e90
void sub_00221E40_0x221e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221E40_0x221e40");
#endif

    switch (ctx->pc) {
        case 0x221e64u: goto label_221e64;
        default: break;
    }

    ctx->pc = 0x221e40u;

    // 0x221e40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x221e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x221e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221e48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x221e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x221e4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x221e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x221e50: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x221e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x221e54: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x221e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221e58: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x221e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221e5c: 0xc0887a4  jal         func_221E90
    ctx->pc = 0x221E5Cu;
    SET_GPR_U32(ctx, 31, 0x221E64u);
    ctx->pc = 0x221E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221E90u, 0x221E5Cu, 0x221E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221E64u;
label_221e64:
    // 0x221e64: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x221e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221e68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x221e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221e6c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x221e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x221e70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x221e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221e74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221e78: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x221e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x221e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x221E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221E84u;
    // 0x221e84: 0x0  nop
    ctx->pc = 0x221e84u;
    // NOP
    // 0x221e88: 0x0  nop
    ctx->pc = 0x221e88u;
    // NOP
    // 0x221e8c: 0x0  nop
    ctx->pc = 0x221e8cu;
    // NOP
    ctx->pc = 0x221e90u;
}
