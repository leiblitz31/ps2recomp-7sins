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

// Function: sub_001C97D0
// Address: 0x1c97d0 - 0x1c9840
void sub_001C97D0_0x1c97d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C97D0_0x1c97d0");
#endif

    switch (ctx->pc) {
        case 0x1c9804u: goto label_1c9804;
        case 0x1c9824u: goto label_1c9824;
        default: break;
    }

    ctx->pc = 0x1c97d0u;

    // 0x1c97d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c97d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c97d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c97d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c97d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c97d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c97dc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1c97dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1c97e0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1c97e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1c97e4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1c97e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1c97e8: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x1c97e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x1c97ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c97ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c97f0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1c97f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1c97f4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1c97f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c97f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c97f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c97fc: 0xc07257c  jal         func_1C95F0
    ctx->pc = 0x1C97FCu;
    SET_GPR_U32(ctx, 31, 0x1C9804u);
    ctx->pc = 0x1C95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C95F0u, 0x1C97FCu, 0x1C9804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9804u;
label_1c9804:
    // 0x1c9804: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c9804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9808: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x1c9808u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c980c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c980cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c9810: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1c9810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c9814: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c9814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9818: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1c9818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1c981c: 0xc071b38  jal         func_1C6CE0
    ctx->pc = 0x1C981Cu;
    SET_GPR_U32(ctx, 31, 0x1C9824u);
    ctx->pc = 0x1C6CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6CE0u, 0x1C981Cu, 0x1C9824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9824u;
label_1c9824:
    // 0x1c9824: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c9824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9828: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c9828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c982c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c982cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9830: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1c9830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c9834: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C983Cu;
    // 0x1c983c: 0x0  nop
    ctx->pc = 0x1c983cu;
    // NOP
    ctx->pc = 0x1c9840u;
}
