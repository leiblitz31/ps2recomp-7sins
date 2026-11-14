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

// Function: sub_00349B40
// Address: 0x349b40 - 0x349ba0
void sub_00349B40_0x349b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349B40_0x349b40");
#endif

    switch (ctx->pc) {
        case 0x349b74u: goto label_349b74;
        default: break;
    }

    ctx->pc = 0x349b40u;

    // 0x349b40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x349b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x349b44: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x349b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x349b48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x349b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x349b4c: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x349b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x349b50: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x349b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x349b54: 0x2610c2c8  addiu       $s0, $s0, -0x3D38
    ctx->pc = 0x349b54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951624));
    // 0x349b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349b5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x349b5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349b60: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x349b60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349b64: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x349b64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C2CCu));
    // 0x349b68: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x349b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x349b6c: 0xc0d0ae8  jal         func_342BA0
    ctx->pc = 0x349B6Cu;
    SET_GPR_U32(ctx, 31, 0x349B74u);
    ctx->pc = 0x349B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349B6Cu;
    // 0x349b70: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x349B6Cu, 0x349B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349B74u;
label_349b74:
    // 0x349b74: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x349b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x349b78: 0xae510008  sw          $s1, 0x8($s2)
    ctx->pc = 0x349b78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
    // 0x349b7c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x349b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x349b80: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x349b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x349b84: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x349b84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x349b88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x349b88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349b8c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x349b8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349b90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x349b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349b94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349b98: 0x3e00008  jr          $ra
    ctx->pc = 0x349B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349B98u;
        // 0x349b9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349BA0u;
}
