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

// Function: sub_00467C10
// Address: 0x467c10 - 0x467ce0
void sub_00467C10_0x467c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00467C10_0x467c10");
#endif

    switch (ctx->pc) {
        case 0x467c5cu: goto label_467c5c;
        default: break;
    }

    ctx->pc = 0x467c10u;

    // 0x467c10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x467c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x467c14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x467c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x467c18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x467c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x467c1c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x467c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x467c20: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x467c20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x467c24: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x467c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x467c28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x467c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x467c2c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x467C2Cu;
    {
        const bool branch_taken_0x467c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x467c2c) {
            ctx->pc = 0x467C40u;
            goto label_467c40;
        }
    }
    ctx->pc = 0x467C34u;
    // 0x467c34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x467c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x467c38: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x467C38u;
    {
        const bool branch_taken_0x467c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x467c38) {
            ctx->pc = 0x467C80u;
            goto label_467c80;
        }
    }
    ctx->pc = 0x467C40u;
label_467c40:
    // 0x467c40: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x467c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x467c44: 0x83a20030  lb          $v0, 0x30($sp)
    ctx->pc = 0x467c44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x467c48: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x467c48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x467c4c: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x467c4cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x467c50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x467c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x467c54: 0xc119260  jal         func_464980
    ctx->pc = 0x467C54u;
    SET_GPR_U32(ctx, 31, 0x467C5Cu);
    ctx->pc = 0x464980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464980u, 0x467C54u, 0x467C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467C5Cu;
label_467c5c:
    // 0x467c5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x467c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467c60: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x467C60u;
    {
        const bool branch_taken_0x467c60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x467c60) {
            ctx->pc = 0x467C74u;
            goto label_467c74;
        }
    }
    ctx->pc = 0x467C68u;
    // 0x467c68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x467c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x467c6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x467C6Cu;
    {
        const bool branch_taken_0x467c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x467c6c) {
            ctx->pc = 0x467C80u;
            goto label_467c80;
        }
    }
    ctx->pc = 0x467C74u;
label_467c74:
    // 0x467c74: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x467c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x467c78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x467c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x467c7c: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x467c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_467c80:
    // 0x467c80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x467c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467c84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x467c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x467c88: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x467c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x467c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x467C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x467C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x467C94u;
    // 0x467c94: 0x0  nop
    ctx->pc = 0x467c94u;
    // NOP
    // 0x467c98: 0x0  nop
    ctx->pc = 0x467c98u;
    // NOP
    // 0x467c9c: 0x0  nop
    ctx->pc = 0x467c9cu;
    // NOP
    // 0x467ca0: 0x8119eb8  j           func_467AE0
    ctx->pc = 0x467CA0u;
    ctx->pc = 0x467CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467CA0u;
    // 0x467ca4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x467AE0u;
    sub_00467AE0_0x467ae0(rdram, ctx, runtime); return;
    ctx->pc = 0x467CA8u;
    // 0x467ca8: 0x0  nop
    ctx->pc = 0x467ca8u;
    // NOP
    // 0x467cac: 0x0  nop
    ctx->pc = 0x467cacu;
    // NOP
    // 0x467cb0: 0x8119d90  j           func_467640
    ctx->pc = 0x467CB0u;
    ctx->pc = 0x467CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467CB0u;
    // 0x467cb4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x467640u;
    sub_00467640_0x467640(rdram, ctx, runtime); return;
    ctx->pc = 0x467CB8u;
    // 0x467cb8: 0x0  nop
    ctx->pc = 0x467cb8u;
    // NOP
    // 0x467cbc: 0x0  nop
    ctx->pc = 0x467cbcu;
    // NOP
    // 0x467cc0: 0x8119e90  j           func_467A40
    ctx->pc = 0x467CC0u;
    ctx->pc = 0x467CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467CC0u;
    // 0x467cc4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x467A40u;
    sub_00467A40_0x467a40(rdram, ctx, runtime); return;
    ctx->pc = 0x467CC8u;
    // 0x467cc8: 0x0  nop
    ctx->pc = 0x467cc8u;
    // NOP
    // 0x467ccc: 0x0  nop
    ctx->pc = 0x467cccu;
    // NOP
    // 0x467cd0: 0x811a31c  j           func_468C70
    ctx->pc = 0x467CD0u;
    ctx->pc = 0x467CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467CD0u;
    // 0x467cd4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x468C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x468C70u, 0x467CD0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x467CD8u;
    // 0x467cd8: 0x0  nop
    ctx->pc = 0x467cd8u;
    // NOP
    // 0x467cdc: 0x0  nop
    ctx->pc = 0x467cdcu;
    // NOP
    ctx->pc = 0x467ce0u;
}
