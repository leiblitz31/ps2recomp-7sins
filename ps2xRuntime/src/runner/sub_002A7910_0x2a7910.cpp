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

// Function: sub_002A7910
// Address: 0x2a7910 - 0x2a7980
void sub_002A7910_0x2a7910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7910_0x2a7910");
#endif

    switch (ctx->pc) {
        case 0x2a7944u: goto label_2a7944;
        case 0x2a7964u: goto label_2a7964;
        default: break;
    }

    ctx->pc = 0x2a7910u;

    // 0x2a7910: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a7910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a7914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a7914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a7918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a7918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a791c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2a791cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2a7920: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2a7920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2a7924: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2a7924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2a7928: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x2a7928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x2a792c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a792cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a7930: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2a7930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2a7934: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2a7934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a7938: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a7938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a793c: 0xc058b50  jal         func_162D40
    ctx->pc = 0x2A793Cu;
    SET_GPR_U32(ctx, 31, 0x2A7944u);
    ctx->pc = 0x162D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162D40u, 0x2A793Cu, 0x2A7944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7944u;
label_2a7944:
    // 0x2a7944: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a7944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7948: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2a7948u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a794c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2a794cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a7950: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2a7950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a7954: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a7954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7958: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2a7958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2a795c: 0xc058934  jal         func_1624D0
    ctx->pc = 0x2A795Cu;
    SET_GPR_U32(ctx, 31, 0x2A7964u);
    ctx->pc = 0x1624D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1624D0u, 0x2A795Cu, 0x2A7964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7964u;
label_2a7964:
    // 0x2a7964: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a7964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7968: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a7968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a796c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a796cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7970: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2a7970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a7974: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A797Cu;
    // 0x2a797c: 0x0  nop
    ctx->pc = 0x2a797cu;
    // NOP
    ctx->pc = 0x2a7980u;
}
