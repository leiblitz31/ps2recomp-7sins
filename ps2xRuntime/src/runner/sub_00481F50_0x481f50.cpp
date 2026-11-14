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

// Function: sub_00481F50
// Address: 0x481f50 - 0x481fa0
void sub_00481F50_0x481f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481F50_0x481f50");
#endif

    switch (ctx->pc) {
        case 0x481f74u: goto label_481f74;
        default: break;
    }

    ctx->pc = 0x481f50u;

    // 0x481f50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x481f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x481f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x481f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x481f58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x481f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x481f5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x481f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x481f60: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x481f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x481f64: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x481f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481f68: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x481f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481f6c: 0xc1207e8  jal         func_481FA0
    ctx->pc = 0x481F6Cu;
    SET_GPR_U32(ctx, 31, 0x481F74u);
    ctx->pc = 0x481FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481FA0u, 0x481F6Cu, 0x481F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481F74u;
label_481f74:
    // 0x481f74: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x481f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x481f78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x481f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481f7c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x481f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x481f80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x481f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481f84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x481f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481f88: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x481f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x481f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x481F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x481F94u;
    // 0x481f94: 0x0  nop
    ctx->pc = 0x481f94u;
    // NOP
    // 0x481f98: 0x0  nop
    ctx->pc = 0x481f98u;
    // NOP
    // 0x481f9c: 0x0  nop
    ctx->pc = 0x481f9cu;
    // NOP
    ctx->pc = 0x481fa0u;
}
