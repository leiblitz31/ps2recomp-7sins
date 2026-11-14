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

// Function: sub_0025E910
// Address: 0x25e910 - 0x25e980
void sub_0025E910_0x25e910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E910_0x25e910");
#endif

    switch (ctx->pc) {
        case 0x25e948u: goto label_25e948;
        case 0x25e960u: goto label_25e960;
        default: break;
    }

    ctx->pc = 0x25e910u;

    // 0x25e910: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25e910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25e914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25e914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25e918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25e918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25e91c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x25e91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x25e920: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x25e920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x25e924: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x25e924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x25e928: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25e928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e92c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x25e92cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x25e930: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25e930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e934: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x25e934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25e938: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x25e938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25e93c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x25e93cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x25e940: 0xc097a60  jal         func_25E980
    ctx->pc = 0x25E940u;
    SET_GPR_U32(ctx, 31, 0x25E948u);
    ctx->pc = 0x25E980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E980u, 0x25E940u, 0x25E948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E948u;
label_25e948:
    // 0x25e948: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25e948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e94c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e954: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x25e954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25e958: 0xc0975e4  jal         func_25D790
    ctx->pc = 0x25E958u;
    SET_GPR_U32(ctx, 31, 0x25E960u);
    ctx->pc = 0x25D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D790u, 0x25E958u, 0x25E960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E960u;
label_25e960:
    // 0x25e960: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25e960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e964: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x25e964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x25e968: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25e968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25e96c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25e96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e970: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25e970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e974: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x25e974u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25e978: 0x3e00008  jr          $ra
    ctx->pc = 0x25E978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E980u;
}
