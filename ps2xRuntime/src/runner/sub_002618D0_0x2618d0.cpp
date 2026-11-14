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

// Function: sub_002618D0
// Address: 0x2618d0 - 0x261940
void sub_002618D0_0x2618d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002618D0_0x2618d0");
#endif

    switch (ctx->pc) {
        case 0x261904u: goto label_261904;
        case 0x261924u: goto label_261924;
        default: break;
    }

    ctx->pc = 0x2618d0u;

    // 0x2618d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2618d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2618d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2618d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2618d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2618d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2618dc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2618dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2618e0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2618e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2618e4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2618e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2618e8: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x2618e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x2618ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2618ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2618f0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2618f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2618f4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2618f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2618f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2618f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2618fc: 0xc0985b0  jal         func_2616C0
    ctx->pc = 0x2618FCu;
    SET_GPR_U32(ctx, 31, 0x261904u);
    ctx->pc = 0x2616C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2616C0u, 0x2618FCu, 0x261904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261904u;
label_261904:
    // 0x261904: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x261904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261908: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x261908u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x26190c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x26190cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x261910: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x261910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x261914: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x261914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261918: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x261918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x26191c: 0xc098650  jal         func_261940
    ctx->pc = 0x26191Cu;
    SET_GPR_U32(ctx, 31, 0x261924u);
    ctx->pc = 0x261940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261940u, 0x26191Cu, 0x261924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261924u;
label_261924:
    // 0x261924: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x261924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261928: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x261928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26192c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26192cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261930: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x261930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x261934: 0x3e00008  jr          $ra
    ctx->pc = 0x261934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26193Cu;
    // 0x26193c: 0x0  nop
    ctx->pc = 0x26193cu;
    // NOP
    ctx->pc = 0x261940u;
}
