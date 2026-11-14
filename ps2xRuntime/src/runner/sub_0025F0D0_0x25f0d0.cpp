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

// Function: sub_0025F0D0
// Address: 0x25f0d0 - 0x25f140
void sub_0025F0D0_0x25f0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F0D0_0x25f0d0");
#endif

    switch (ctx->pc) {
        case 0x25f104u: goto label_25f104;
        case 0x25f124u: goto label_25f124;
        default: break;
    }

    ctx->pc = 0x25f0d0u;

    // 0x25f0d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25f0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25f0d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25f0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25f0d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25f0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25f0dc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x25f0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x25f0e0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x25f0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x25f0e4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x25f0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x25f0e8: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x25f0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x25f0ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25f0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f0f0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x25f0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x25f0f4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x25f0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25f0f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25f0f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f0fc: 0xc04246c  jal         func_1091B0
    ctx->pc = 0x25F0FCu;
    SET_GPR_U32(ctx, 31, 0x25F104u);
    ctx->pc = 0x1091B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1091B0u, 0x25F0FCu, 0x25F104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F104u;
label_25f104:
    // 0x25f104: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25f104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f108: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x25f108u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x25f10c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25f10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25f110: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x25f110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25f114: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25f114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f118: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x25f118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x25f11c: 0xc097c50  jal         func_25F140
    ctx->pc = 0x25F11Cu;
    SET_GPR_U32(ctx, 31, 0x25F124u);
    ctx->pc = 0x25F140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F140u, 0x25F11Cu, 0x25F124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F124u;
label_25f124:
    // 0x25f124: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25f124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f128: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25f128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f12c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25f12cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f130: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x25f130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25f134: 0x3e00008  jr          $ra
    ctx->pc = 0x25F134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F13Cu;
    // 0x25f13c: 0x0  nop
    ctx->pc = 0x25f13cu;
    // NOP
    ctx->pc = 0x25f140u;
}
