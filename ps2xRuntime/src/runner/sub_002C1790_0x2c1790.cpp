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

// Function: sub_002C1790
// Address: 0x2c1790 - 0x2c17e0
void sub_002C1790_0x2c1790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1790_0x2c1790");
#endif

    switch (ctx->pc) {
        case 0x2c17b4u: goto label_2c17b4;
        default: break;
    }

    ctx->pc = 0x2c1790u;

    // 0x2c1790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c1790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c1794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c1794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c1798: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2c1798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2c179c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2c179cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2c17a0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2c17a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2c17a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2c17a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c17a8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2c17a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c17ac: 0xc0b05f8  jal         func_2C17E0
    ctx->pc = 0x2C17ACu;
    SET_GPR_U32(ctx, 31, 0x2C17B4u);
    ctx->pc = 0x2C17E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C17E0u, 0x2C17ACu, 0x2C17B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C17B4u;
label_2c17b4:
    // 0x2c17b4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2c17b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c17b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c17b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c17bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2c17bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2c17c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c17c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c17c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c17c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c17c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2c17c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c17cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C17CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C17CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C17D4u;
    // 0x2c17d4: 0x0  nop
    ctx->pc = 0x2c17d4u;
    // NOP
    // 0x2c17d8: 0x0  nop
    ctx->pc = 0x2c17d8u;
    // NOP
    // 0x2c17dc: 0x0  nop
    ctx->pc = 0x2c17dcu;
    // NOP
    ctx->pc = 0x2c17e0u;
}
