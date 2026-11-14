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

// Function: sub_001463E0
// Address: 0x1463e0 - 0x146450
void sub_001463E0_0x1463e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001463E0_0x1463e0");
#endif

    switch (ctx->pc) {
        case 0x146414u: goto label_146414;
        case 0x146434u: goto label_146434;
        default: break;
    }

    ctx->pc = 0x1463e0u;

    // 0x1463e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1463e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1463e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1463e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1463e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1463e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1463ec: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1463ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1463f0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1463f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1463f4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1463f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1463f8: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x1463f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x1463fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1463fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146400: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x146400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x146404: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x146404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x146408: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x146408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14640c: 0xc051980  jal         func_146600
    ctx->pc = 0x14640Cu;
    SET_GPR_U32(ctx, 31, 0x146414u);
    ctx->pc = 0x146600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146600u, 0x14640Cu, 0x146414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146414u;
label_146414:
    // 0x146414: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x146414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146418: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x146418u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x14641c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x14641cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x146420: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x146420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x146424: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x146424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146428: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x146428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x14642c: 0xc051914  jal         func_146450
    ctx->pc = 0x14642Cu;
    SET_GPR_U32(ctx, 31, 0x146434u);
    ctx->pc = 0x146450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146450u, 0x14642Cu, 0x146434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146434u;
label_146434:
    // 0x146434: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x146434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x146438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14643c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14643cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146440: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x146440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x146444: 0x3e00008  jr          $ra
    ctx->pc = 0x146444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14644Cu;
    // 0x14644c: 0x0  nop
    ctx->pc = 0x14644cu;
    // NOP
    ctx->pc = 0x146450u;
}
