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

// Function: sub_002D8B60
// Address: 0x2d8b60 - 0x2d8bb0
void sub_002D8B60_0x2d8b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8B60_0x2d8b60");
#endif

    switch (ctx->pc) {
        case 0x2d8b78u: goto label_2d8b78;
        default: break;
    }

    ctx->pc = 0x2d8b60u;

    // 0x2d8b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d8b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d8b64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d8b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d8b68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d8b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d8b6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d8b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8b70: 0xc0b6224  jal         func_2D8890
    ctx->pc = 0x2D8B70u;
    SET_GPR_U32(ctx, 31, 0x2D8B78u);
    ctx->pc = 0x2D8890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8890u, 0x2D8B70u, 0x2D8B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8B78u;
label_2d8b78:
    // 0x2d8b78: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2d8b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2d8b7c: 0x24636808  addiu       $v1, $v1, 0x6808
    ctx->pc = 0x2d8b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26632));
    // 0x2d8b80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d8b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8b84: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d8b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d8b88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d8b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8b8c: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x2d8b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x2d8b90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d8b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8b94: 0xa0400038  sb          $zero, 0x38($v0)
    ctx->pc = 0x2d8b94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8b98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d8b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8b9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8ba0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d8ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d8ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8BACu;
    // 0x2d8bac: 0x0  nop
    ctx->pc = 0x2d8bacu;
    // NOP
    ctx->pc = 0x2d8bb0u;
}
