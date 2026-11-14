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

// Function: sub_00126CF0
// Address: 0x126cf0 - 0x126db0
void sub_00126CF0_0x126cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126CF0_0x126cf0");
#endif

    ctx->pc = 0x126cf0u;

    // 0x126cf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x126cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x126cf4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x126cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x126cf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x126cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x126cfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x126cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x126d00: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x126d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x126d04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x126d04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d08: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x126d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126d0c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x126d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x126d10: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x126d10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x126d14: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x126D14u;
    {
        const bool branch_taken_0x126d14 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x126d14) {
            ctx->pc = 0x126D40u;
            goto label_126d40;
        }
    }
    ctx->pc = 0x126D1Cu;
    // 0x126d1c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x126d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126d20: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x126d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x126d24: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x126d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126d28: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x126d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x126d2c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x126d2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x126d30: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x126D30u;
    {
        const bool branch_taken_0x126d30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x126d30) {
            ctx->pc = 0x126D40u;
            goto label_126d40;
        }
    }
    ctx->pc = 0x126D38u;
    // 0x126d38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x126d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126d3c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x126d3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_126d40:
    // 0x126d40: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x126D40u;
    {
        const bool branch_taken_0x126d40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x126d40) {
            ctx->pc = 0x126D58u;
            goto label_126d58;
        }
    }
    ctx->pc = 0x126D48u;
    // 0x126d48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x126d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126d4c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x126d4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x126d50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x126D50u;
    {
        const bool branch_taken_0x126d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126d50) {
            ctx->pc = 0x126D5Cu;
            goto label_126d5c;
        }
    }
    ctx->pc = 0x126D58u;
label_126d58:
    // 0x126d58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x126d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126d5c:
    // 0x126d5c: 0x321200ff  andi        $s2, $s0, 0xFF
    ctx->pc = 0x126d5cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x126d60: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x126D60u;
    {
        const bool branch_taken_0x126d60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x126d60) {
            ctx->pc = 0x126D74u;
            goto label_126d74;
        }
    }
    ctx->pc = 0x126D68u;
    // 0x126d68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x126d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x126D6Cu;
    {
        const bool branch_taken_0x126d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126d6c) {
            ctx->pc = 0x126D90u;
            goto label_126d90;
        }
    }
    ctx->pc = 0x126D74u;
label_126d74:
    // 0x126d74: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x126d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126d78: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x126d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126d7c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x126d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x126d80: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x126d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x126d84: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x126d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x126d88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x126d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x126d8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x126d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_126d90:
    // 0x126d90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x126d90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126d94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x126d94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126d98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x126d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126d9c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x126d9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x126da0: 0x3e00008  jr          $ra
    ctx->pc = 0x126DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126DA8u;
    // 0x126da8: 0x0  nop
    ctx->pc = 0x126da8u;
    // NOP
    // 0x126dac: 0x0  nop
    ctx->pc = 0x126dacu;
    // NOP
    ctx->pc = 0x126db0u;
}
