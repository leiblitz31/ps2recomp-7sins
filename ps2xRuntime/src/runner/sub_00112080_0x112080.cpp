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

// Function: sub_00112080
// Address: 0x112080 - 0x1120d0
void sub_00112080_0x112080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112080_0x112080");
#endif

    switch (ctx->pc) {
        case 0x1120a4u: goto label_1120a4;
        default: break;
    }

    ctx->pc = 0x112080u;

    // 0x112080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x112080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x112084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x112088: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x112088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11208c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11208cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x112090: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x112090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x112094: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x112094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112098: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x112098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11209c: 0xc044834  jal         func_1120D0
    ctx->pc = 0x11209Cu;
    SET_GPR_U32(ctx, 31, 0x1120A4u);
    ctx->pc = 0x1120D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1120D0u, 0x11209Cu, 0x1120A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1120A4u;
label_1120a4:
    // 0x1120a4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1120a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1120a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1120a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1120ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1120acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1120b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1120b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1120b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1120b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1120b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1120b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1120bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1120BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1120BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1120C4u;
    // 0x1120c4: 0x0  nop
    ctx->pc = 0x1120c4u;
    // NOP
    // 0x1120c8: 0x0  nop
    ctx->pc = 0x1120c8u;
    // NOP
    // 0x1120cc: 0x0  nop
    ctx->pc = 0x1120ccu;
    // NOP
    ctx->pc = 0x1120d0u;
}
