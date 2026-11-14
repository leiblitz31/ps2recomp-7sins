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

// Function: sub_0026FA40
// Address: 0x26fa40 - 0x26fab0
void sub_0026FA40_0x26fa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FA40_0x26fa40");
#endif

    switch (ctx->pc) {
        case 0x26fa74u: goto label_26fa74;
        case 0x26fa94u: goto label_26fa94;
        default: break;
    }

    ctx->pc = 0x26fa40u;

    // 0x26fa40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26fa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x26fa44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26fa44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26fa48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26fa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26fa4c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x26fa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x26fa50: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x26fa50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x26fa54: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x26fa54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x26fa58: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x26fa58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x26fa5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26fa60: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x26fa60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x26fa64: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x26fa64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26fa68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26fa68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fa6c: 0xc068690  jal         func_1A1A40
    ctx->pc = 0x26FA6Cu;
    SET_GPR_U32(ctx, 31, 0x26FA74u);
    ctx->pc = 0x1A1A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1A40u, 0x26FA6Cu, 0x26FA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA74u;
label_26fa74:
    // 0x26fa74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26fa74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fa78: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x26fa78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x26fa7c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x26fa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26fa80: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x26fa80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26fa84: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26fa84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fa88: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x26fa88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x26fa8c: 0xc09be44  jal         func_26F910
    ctx->pc = 0x26FA8Cu;
    SET_GPR_U32(ctx, 31, 0x26FA94u);
    ctx->pc = 0x26F910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F910u, 0x26FA8Cu, 0x26FA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA94u;
label_26fa94:
    // 0x26fa94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26fa94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fa98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26fa98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fa9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26fa9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26faa0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x26faa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26faa4: 0x3e00008  jr          $ra
    ctx->pc = 0x26FAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FAACu;
    // 0x26faac: 0x0  nop
    ctx->pc = 0x26faacu;
    // NOP
    ctx->pc = 0x26fab0u;
}
