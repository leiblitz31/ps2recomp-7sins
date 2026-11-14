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

// Function: sub_0012A740
// Address: 0x12a740 - 0x12a7a0
void sub_0012A740_0x12a740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A740_0x12a740");
#endif

    switch (ctx->pc) {
        case 0x12a75cu: goto label_12a75c;
        case 0x12a76cu: goto label_12a76c;
        case 0x12a780u: goto label_12a780;
        default: break;
    }

    ctx->pc = 0x12a740u;

    // 0x12a740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12a740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12a744: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12a744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12a748: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12a748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12a74c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x12a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x12a750: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12a750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a754: 0xc04a9b8  jal         func_12A6E0
    ctx->pc = 0x12A754u;
    SET_GPR_U32(ctx, 31, 0x12A75Cu);
    ctx->pc = 0x12A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A6E0u, 0x12A754u, 0x12A75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A75Cu;
label_12a75c:
    // 0x12a75c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12a75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a760: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12a760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a764: 0xc04aa50  jal         func_12A940
    ctx->pc = 0x12A764u;
    SET_GPR_U32(ctx, 31, 0x12A76Cu);
    ctx->pc = 0x12A940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A940u, 0x12A764u, 0x12A76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A76Cu;
label_12a76c:
    // 0x12a76c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12a76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a770: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12a770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a774: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x12a774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a778: 0xc04a9e8  jal         func_12A7A0
    ctx->pc = 0x12A778u;
    SET_GPR_U32(ctx, 31, 0x12A780u);
    ctx->pc = 0x12A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A7A0u, 0x12A778u, 0x12A780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A780u;
label_12a780:
    // 0x12a780: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12a780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12a784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a788: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12a788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12a78c: 0x3e00008  jr          $ra
    ctx->pc = 0x12A78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A794u;
    // 0x12a794: 0x0  nop
    ctx->pc = 0x12a794u;
    // NOP
    // 0x12a798: 0x0  nop
    ctx->pc = 0x12a798u;
    // NOP
    // 0x12a79c: 0x0  nop
    ctx->pc = 0x12a79cu;
    // NOP
    ctx->pc = 0x12a7a0u;
}
