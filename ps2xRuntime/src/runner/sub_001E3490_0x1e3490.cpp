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

// Function: sub_001E3490
// Address: 0x1e3490 - 0x1e3500
void sub_001E3490_0x1e3490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3490_0x1e3490");
#endif

    switch (ctx->pc) {
        case 0x1e34bcu: goto label_1e34bc;
        case 0x1e34ccu: goto label_1e34cc;
        case 0x1e34e8u: goto label_1e34e8;
        default: break;
    }

    ctx->pc = 0x1e3490u;

    // 0x1e3490: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e3490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e3494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e3498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e349c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e349cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e34a0: 0xffa50040  sd          $a1, 0x40($sp)
    ctx->pc = 0x1e34a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 5));
    // 0x1e34a4: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x1e34a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
    // 0x1e34a8: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x1e34a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x1e34ac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e34acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e34b0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1e34b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e34b4: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x1E34B4u;
    SET_GPR_U32(ctx, 31, 0x1E34BCu);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x1E34B4u, 0x1E34BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E34BCu;
label_1e34bc:
    // 0x1e34bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e34bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e34c0: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1e34c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1e34c4: 0xc078da8  jal         func_1E36A0
    ctx->pc = 0x1E34C4u;
    SET_GPR_U32(ctx, 31, 0x1E34CCu);
    ctx->pc = 0x1E36A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E36A0u, 0x1E34C4u, 0x1E34CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E34CCu;
label_1e34cc:
    // 0x1e34cc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1e34ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e34d0: 0xdfa50040  ld          $a1, 0x40($sp)
    ctx->pc = 0x1e34d0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e34d4: 0xdfa60050  ld          $a2, 0x50($sp)
    ctx->pc = 0x1e34d4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e34d8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e34d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e34dc: 0x27a8002c  addiu       $t0, $sp, 0x2C
    ctx->pc = 0x1e34dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1e34e0: 0xc078d40  jal         func_1E3500
    ctx->pc = 0x1E34E0u;
    SET_GPR_U32(ctx, 31, 0x1E34E8u);
    ctx->pc = 0x1E3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3500u, 0x1E34E0u, 0x1E34E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E34E8u;
label_1e34e8:
    // 0x1e34e8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e34e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e34ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e34ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e34f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e34f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e34f4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e34f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e34f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E34F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E34F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3500u;
}
