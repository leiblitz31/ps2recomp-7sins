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

// Function: sub_00269BE0
// Address: 0x269be0 - 0x269c50
void sub_00269BE0_0x269be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269BE0_0x269be0");
#endif

    switch (ctx->pc) {
        case 0x269c18u: goto label_269c18;
        case 0x269c30u: goto label_269c30;
        default: break;
    }

    ctx->pc = 0x269be0u;

    // 0x269be0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x269be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x269be4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x269be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x269be8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x269be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x269bec: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x269becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x269bf0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x269bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x269bf4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x269bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x269bf8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x269bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269bfc: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x269bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x269c00: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x269c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x269c04: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x269c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x269c08: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x269c08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x269c0c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x269c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x269c10: 0xc09a63c  jal         func_2698F0
    ctx->pc = 0x269C10u;
    SET_GPR_U32(ctx, 31, 0x269C18u);
    ctx->pc = 0x2698F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2698F0u, 0x269C10u, 0x269C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269C18u;
label_269c18:
    // 0x269c18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x269c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269c1c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x269c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269c20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269c24: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x269c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x269c28: 0xc09a238  jal         func_2688E0
    ctx->pc = 0x269C28u;
    SET_GPR_U32(ctx, 31, 0x269C30u);
    ctx->pc = 0x2688E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2688E0u, 0x269C28u, 0x269C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269C30u;
label_269c30:
    // 0x269c30: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x269c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269c34: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x269c34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x269c38: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x269c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x269c3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x269c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269c40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x269c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269c44: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x269c44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x269c48: 0x3e00008  jr          $ra
    ctx->pc = 0x269C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269C50u;
}
