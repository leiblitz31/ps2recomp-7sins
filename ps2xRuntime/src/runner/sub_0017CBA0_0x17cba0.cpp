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

// Function: sub_0017CBA0
// Address: 0x17cba0 - 0x17cc10
void sub_0017CBA0_0x17cba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CBA0_0x17cba0");
#endif

    switch (ctx->pc) {
        case 0x17cbd8u: goto label_17cbd8;
        case 0x17cbf0u: goto label_17cbf0;
        default: break;
    }

    ctx->pc = 0x17cba0u;

    // 0x17cba0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17cba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17cba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17cba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17cba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17cba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17cbac: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x17cbacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x17cbb0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x17cbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x17cbb4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x17cbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x17cbb8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x17cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17cbbc: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x17cbbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x17cbc0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x17cbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17cbc4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x17cbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17cbc8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x17cbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17cbcc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x17cbccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x17cbd0: 0xc05f304  jal         func_17CC10
    ctx->pc = 0x17CBD0u;
    SET_GPR_U32(ctx, 31, 0x17CBD8u);
    ctx->pc = 0x17CC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CC10u, 0x17CBD0u, 0x17CBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CBD8u;
label_17cbd8:
    // 0x17cbd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17cbd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cbdc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x17cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17cbe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17cbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cbe4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x17cbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17cbe8: 0xc05ee94  jal         func_17BA50
    ctx->pc = 0x17CBE8u;
    SET_GPR_U32(ctx, 31, 0x17CBF0u);
    ctx->pc = 0x17BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BA50u, 0x17CBE8u, 0x17CBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CBF0u;
label_17cbf0:
    // 0x17cbf0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x17cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17cbf4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x17cbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x17cbf8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17cbfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17cbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17cc00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17cc00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cc04: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x17cc04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17cc08: 0x3e00008  jr          $ra
    ctx->pc = 0x17CC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CC10u;
}
