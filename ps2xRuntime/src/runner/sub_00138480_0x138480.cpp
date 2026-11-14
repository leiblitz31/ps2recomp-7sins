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

// Function: sub_00138480
// Address: 0x138480 - 0x1384d0
void sub_00138480_0x138480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138480_0x138480");
#endif

    switch (ctx->pc) {
        case 0x1384a4u: goto label_1384a4;
        default: break;
    }

    ctx->pc = 0x138480u;

    // 0x138480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x138480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x138484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138488: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x138488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13848c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13848cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x138490: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x138490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x138494: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x138494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138498: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x138498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13849c: 0xc04e134  jal         func_1384D0
    ctx->pc = 0x13849Cu;
    SET_GPR_U32(ctx, 31, 0x1384A4u);
    ctx->pc = 0x1384D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1384D0u, 0x13849Cu, 0x1384A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1384A4u;
label_1384a4:
    // 0x1384a4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1384a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1384a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1384a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1384ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1384acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1384b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1384b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1384b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1384b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1384b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1384b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1384bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1384BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1384BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1384C4u;
    // 0x1384c4: 0x0  nop
    ctx->pc = 0x1384c4u;
    // NOP
    // 0x1384c8: 0x0  nop
    ctx->pc = 0x1384c8u;
    // NOP
    // 0x1384cc: 0x0  nop
    ctx->pc = 0x1384ccu;
    // NOP
    ctx->pc = 0x1384d0u;
}
