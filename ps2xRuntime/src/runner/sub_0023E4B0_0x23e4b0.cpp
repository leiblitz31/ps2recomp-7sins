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

// Function: sub_0023E4B0
// Address: 0x23e4b0 - 0x23e520
void sub_0023E4B0_0x23e4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E4B0_0x23e4b0");
#endif

    switch (ctx->pc) {
        case 0x23e4e4u: goto label_23e4e4;
        case 0x23e504u: goto label_23e504;
        default: break;
    }

    ctx->pc = 0x23e4b0u;

    // 0x23e4b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23e4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23e4b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23e4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23e4b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23e4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23e4bc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x23e4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x23e4c0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x23e4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x23e4c4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x23e4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x23e4c8: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x23e4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x23e4cc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x23e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e4d0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x23e4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x23e4d4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x23e4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23e4d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23e4d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e4dc: 0xc08f8ac  jal         func_23E2B0
    ctx->pc = 0x23E4DCu;
    SET_GPR_U32(ctx, 31, 0x23E4E4u);
    ctx->pc = 0x23E2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E2B0u, 0x23E4DCu, 0x23E4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E4E4u;
label_23e4e4:
    // 0x23e4e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23e4e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e4e8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x23e4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e4ec: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x23e4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23e4f0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x23e4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23e4f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23e4f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e4f8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x23e4f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x23e4fc: 0xc08f650  jal         func_23D940
    ctx->pc = 0x23E4FCu;
    SET_GPR_U32(ctx, 31, 0x23E504u);
    ctx->pc = 0x23D940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D940u, 0x23E4FCu, 0x23E504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E504u;
label_23e504:
    // 0x23e504: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23e504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e508: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23e508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e50c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23e50cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e510: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x23e510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x23e514: 0x3e00008  jr          $ra
    ctx->pc = 0x23E514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E51Cu;
    // 0x23e51c: 0x0  nop
    ctx->pc = 0x23e51cu;
    // NOP
    ctx->pc = 0x23e520u;
}
