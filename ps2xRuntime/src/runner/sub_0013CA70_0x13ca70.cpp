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

// Function: sub_0013CA70
// Address: 0x13ca70 - 0x13cae0
void sub_0013CA70_0x13ca70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CA70_0x13ca70");
#endif

    switch (ctx->pc) {
        case 0x13caa4u: goto label_13caa4;
        case 0x13cac4u: goto label_13cac4;
        default: break;
    }

    ctx->pc = 0x13ca70u;

    // 0x13ca70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13ca70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x13ca74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13ca74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13ca78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13ca78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13ca7c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x13ca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x13ca80: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x13ca80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x13ca84: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x13ca84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x13ca88: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x13ca88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x13ca8c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ca90: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x13ca90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x13ca94: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x13ca94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13ca98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13ca98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ca9c: 0xc04f43c  jal         func_13D0F0
    ctx->pc = 0x13CA9Cu;
    SET_GPR_U32(ctx, 31, 0x13CAA4u);
    ctx->pc = 0x13D0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D0F0u, 0x13CA9Cu, 0x13CAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CAA4u;
label_13caa4:
    // 0x13caa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13caa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13caa8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x13caa8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x13caac: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x13caacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13cab0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x13cab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13cab4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13cab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cab8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x13cab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x13cabc: 0xc04f208  jal         func_13C820
    ctx->pc = 0x13CABCu;
    SET_GPR_U32(ctx, 31, 0x13CAC4u);
    ctx->pc = 0x13C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C820u, 0x13CABCu, 0x13CAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CAC4u;
label_13cac4:
    // 0x13cac4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13cac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cac8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13cac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cacc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13caccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cad0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x13cad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13cad4: 0x3e00008  jr          $ra
    ctx->pc = 0x13CAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CADCu;
    // 0x13cadc: 0x0  nop
    ctx->pc = 0x13cadcu;
    // NOP
    ctx->pc = 0x13cae0u;
}
