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

// Function: sub_002595F0
// Address: 0x2595f0 - 0x259640
void sub_002595F0_0x2595f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002595F0_0x2595f0");
#endif

    switch (ctx->pc) {
        case 0x259614u: goto label_259614;
        default: break;
    }

    ctx->pc = 0x2595f0u;

    // 0x2595f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2595f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2595f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2595f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2595f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2595f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2595fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2595fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x259600: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x259600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x259604: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x259604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259608: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x259608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25960c: 0xc096590  jal         func_259640
    ctx->pc = 0x25960Cu;
    SET_GPR_U32(ctx, 31, 0x259614u);
    ctx->pc = 0x259640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259640u, 0x25960Cu, 0x259614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259614u;
label_259614:
    // 0x259614: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x259614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259618: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x259618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25961c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25961cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x259620: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x259620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259628: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x259628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25962c: 0x3e00008  jr          $ra
    ctx->pc = 0x25962Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25962Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259634u;
    // 0x259634: 0x0  nop
    ctx->pc = 0x259634u;
    // NOP
    // 0x259638: 0x0  nop
    ctx->pc = 0x259638u;
    // NOP
    // 0x25963c: 0x0  nop
    ctx->pc = 0x25963cu;
    // NOP
    ctx->pc = 0x259640u;
}
