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

// Function: sub_0023F910
// Address: 0x23f910 - 0x23f980
void sub_0023F910_0x23f910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F910_0x23f910");
#endif

    switch (ctx->pc) {
        case 0x23f948u: goto label_23f948;
        case 0x23f960u: goto label_23f960;
        default: break;
    }

    ctx->pc = 0x23f910u;

    // 0x23f910: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23f910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23f914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23f918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23f918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23f91c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x23f91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x23f920: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x23f920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x23f924: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x23f924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x23f928: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x23f928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f92c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x23f92cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f930: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x23f930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23f934: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x23f934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23f938: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x23f938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23f93c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x23f93cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x23f940: 0xc08fe60  jal         func_23F980
    ctx->pc = 0x23F940u;
    SET_GPR_U32(ctx, 31, 0x23F948u);
    ctx->pc = 0x23F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F980u, 0x23F940u, 0x23F948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F948u;
label_23f948:
    // 0x23f948: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23f948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f94c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x23f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f954: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x23f954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23f958: 0xc08fd40  jal         func_23F500
    ctx->pc = 0x23F958u;
    SET_GPR_U32(ctx, 31, 0x23F960u);
    ctx->pc = 0x23F500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F500u, 0x23F958u, 0x23F960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F960u;
label_23f960:
    // 0x23f960: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x23f960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f964: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x23f964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x23f968: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23f968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23f96c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f970: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23f970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f974: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x23f974u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23f978: 0x3e00008  jr          $ra
    ctx->pc = 0x23F978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F980u;
}
