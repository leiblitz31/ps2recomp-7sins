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

// Function: sub_00291E70
// Address: 0x291e70 - 0x291ec0
void sub_00291E70_0x291e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291E70_0x291e70");
#endif

    switch (ctx->pc) {
        case 0x291e94u: goto label_291e94;
        default: break;
    }

    ctx->pc = 0x291e70u;

    // 0x291e70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x291e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x291e74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291e78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x291e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x291e7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x291e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x291e80: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x291e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x291e84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x291e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291e88: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x291e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291e8c: 0xc0a47b0  jal         func_291EC0
    ctx->pc = 0x291E8Cu;
    SET_GPR_U32(ctx, 31, 0x291E94u);
    ctx->pc = 0x291EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291EC0u, 0x291E8Cu, 0x291E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291E94u;
label_291e94:
    // 0x291e94: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x291e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291e98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291e9c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x291e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x291ea0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291ea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291ea8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x291ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x291eac: 0x3e00008  jr          $ra
    ctx->pc = 0x291EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291EB4u;
    // 0x291eb4: 0x0  nop
    ctx->pc = 0x291eb4u;
    // NOP
    // 0x291eb8: 0x0  nop
    ctx->pc = 0x291eb8u;
    // NOP
    // 0x291ebc: 0x0  nop
    ctx->pc = 0x291ebcu;
    // NOP
    ctx->pc = 0x291ec0u;
}
