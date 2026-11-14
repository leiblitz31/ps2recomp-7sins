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

// Function: sub_00137A20
// Address: 0x137a20 - 0x137a90
void sub_00137A20_0x137a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137A20_0x137a20");
#endif

    switch (ctx->pc) {
        case 0x137a54u: goto label_137a54;
        case 0x137a74u: goto label_137a74;
        default: break;
    }

    ctx->pc = 0x137a20u;

    // 0x137a20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x137a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x137a24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x137a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x137a28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x137a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x137a2c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x137a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x137a30: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x137a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x137a34: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x137a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x137a38: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x137a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x137a3c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x137a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137a40: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x137a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x137a44: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x137a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137a48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x137a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137a4c: 0xc04df10  jal         func_137C40
    ctx->pc = 0x137A4Cu;
    SET_GPR_U32(ctx, 31, 0x137A54u);
    ctx->pc = 0x137C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137C40u, 0x137A4Cu, 0x137A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137A54u;
label_137a54:
    // 0x137a54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x137a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137a58: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x137a58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x137a5c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x137a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137a60: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x137a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137a64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x137a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137a68: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x137a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x137a6c: 0xc04dea4  jal         func_137A90
    ctx->pc = 0x137A6Cu;
    SET_GPR_U32(ctx, 31, 0x137A74u);
    ctx->pc = 0x137A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137A90u, 0x137A6Cu, 0x137A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137A74u;
label_137a74:
    // 0x137a74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x137a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137a78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x137a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137a7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x137a7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137a80: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x137a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x137a84: 0x3e00008  jr          $ra
    ctx->pc = 0x137A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137A8Cu;
    // 0x137a8c: 0x0  nop
    ctx->pc = 0x137a8cu;
    // NOP
    ctx->pc = 0x137a90u;
}
