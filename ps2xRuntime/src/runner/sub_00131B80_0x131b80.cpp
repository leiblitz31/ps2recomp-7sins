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

// Function: sub_00131B80
// Address: 0x131b80 - 0x131bf0
void sub_00131B80_0x131b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131B80_0x131b80");
#endif

    switch (ctx->pc) {
        case 0x131bb4u: goto label_131bb4;
        case 0x131bd4u: goto label_131bd4;
        default: break;
    }

    ctx->pc = 0x131b80u;

    // 0x131b80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x131b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x131b84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x131b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x131b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131b8c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x131b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x131b90: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x131b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x131b94: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x131b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x131b98: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x131b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x131b9c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x131b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131ba0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x131ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x131ba4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x131ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131ba8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x131ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131bac: 0xc04c8a0  jal         func_132280
    ctx->pc = 0x131BACu;
    SET_GPR_U32(ctx, 31, 0x131BB4u);
    ctx->pc = 0x132280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132280u, 0x131BACu, 0x131BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131BB4u;
label_131bb4:
    // 0x131bb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x131bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131bb8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x131bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x131bbc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x131bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x131bc0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x131bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x131bc4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x131bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131bc8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x131bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x131bcc: 0xc04c6fc  jal         func_131BF0
    ctx->pc = 0x131BCCu;
    SET_GPR_U32(ctx, 31, 0x131BD4u);
    ctx->pc = 0x131BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BF0u, 0x131BCCu, 0x131BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131BD4u;
label_131bd4:
    // 0x131bd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x131bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131bd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x131bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131bdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131be0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x131be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x131be4: 0x3e00008  jr          $ra
    ctx->pc = 0x131BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131BECu;
    // 0x131bec: 0x0  nop
    ctx->pc = 0x131becu;
    // NOP
    ctx->pc = 0x131bf0u;
}
