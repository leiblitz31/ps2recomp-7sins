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

// Function: sub_00218ED0
// Address: 0x218ed0 - 0x218f10
void sub_00218ED0_0x218ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218ED0_0x218ed0");
#endif

    switch (ctx->pc) {
        case 0x218ef8u: goto label_218ef8;
        default: break;
    }

    ctx->pc = 0x218ed0u;

    // 0x218ed0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x218ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x218ed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218ed8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x218ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x218edc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x218edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x218ee0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x218ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x218ee4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x218ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218ee8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x218ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218eec: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x218eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218ef0: 0xc0863c4  jal         func_218F10
    ctx->pc = 0x218EF0u;
    SET_GPR_U32(ctx, 31, 0x218EF8u);
    ctx->pc = 0x218F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218F10u, 0x218EF0u, 0x218EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218EF8u;
label_218ef8:
    // 0x218ef8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x218ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218efc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218f00: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x218f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x218f04: 0x3e00008  jr          $ra
    ctx->pc = 0x218F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218F0Cu;
    // 0x218f0c: 0x0  nop
    ctx->pc = 0x218f0cu;
    // NOP
    ctx->pc = 0x218f10u;
}
