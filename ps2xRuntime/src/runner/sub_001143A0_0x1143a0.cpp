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

// Function: sub_001143A0
// Address: 0x1143a0 - 0x1143e0
void sub_001143A0_0x1143a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001143A0_0x1143a0");
#endif

    switch (ctx->pc) {
        case 0x1143c8u: goto label_1143c8;
        default: break;
    }

    ctx->pc = 0x1143a0u;

    // 0x1143a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1143a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1143a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1143a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1143a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1143a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1143ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1143acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1143b0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1143b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1143b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1143b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1143b8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1143b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1143bc: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1143bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1143c0: 0xc0450f8  jal         func_1143E0
    ctx->pc = 0x1143C0u;
    SET_GPR_U32(ctx, 31, 0x1143C8u);
    ctx->pc = 0x1143E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1143E0u, 0x1143C0u, 0x1143C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1143C8u;
label_1143c8:
    // 0x1143c8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1143c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1143cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1143ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1143d0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1143d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1143d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1143D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1143D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1143DCu;
    // 0x1143dc: 0x0  nop
    ctx->pc = 0x1143dcu;
    // NOP
    ctx->pc = 0x1143e0u;
}
