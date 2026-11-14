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

// Function: sub_002B10A0
// Address: 0x2b10a0 - 0x2b1110
void sub_002B10A0_0x2b10a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B10A0_0x2b10a0");
#endif

    switch (ctx->pc) {
        case 0x2b10d4u: goto label_2b10d4;
        case 0x2b10f4u: goto label_2b10f4;
        default: break;
    }

    ctx->pc = 0x2b10a0u;

    // 0x2b10a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b10a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b10a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b10a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b10a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b10a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b10ac: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2b10acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2b10b0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2b10b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2b10b4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2b10b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2b10b8: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x2b10b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x2b10bc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b10bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b10c0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2b10c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2b10c4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2b10c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b10c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b10c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b10cc: 0xc0ac218  jal         func_2B0860
    ctx->pc = 0x2B10CCu;
    SET_GPR_U32(ctx, 31, 0x2B10D4u);
    ctx->pc = 0x2B0860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0860u, 0x2B10CCu, 0x2B10D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B10D4u;
label_2b10d4:
    // 0x2b10d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b10d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b10d8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2b10d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b10dc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2b10dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b10e0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2b10e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b10e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b10e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b10e8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2b10e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2b10ec: 0xc0ac444  jal         func_2B1110
    ctx->pc = 0x2B10ECu;
    SET_GPR_U32(ctx, 31, 0x2B10F4u);
    ctx->pc = 0x2B1110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1110u, 0x2B10ECu, 0x2B10F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B10F4u;
label_2b10f4:
    // 0x2b10f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b10f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b10f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b10f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b10fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b10fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1100: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2b1100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b1104: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B110Cu;
    // 0x2b110c: 0x0  nop
    ctx->pc = 0x2b110cu;
    // NOP
    ctx->pc = 0x2b1110u;
}
