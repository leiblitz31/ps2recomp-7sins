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

// Function: sub_00127A40
// Address: 0x127a40 - 0x127b00
void sub_00127A40_0x127a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127A40_0x127a40");
#endif

    switch (ctx->pc) {
        case 0x127a68u: goto label_127a68;
        default: break;
    }

    ctx->pc = 0x127a40u;

    // 0x127a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x127a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x127a44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x127a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x127a48: 0xaf80ba10  sw          $zero, -0x45F0($gp)
    ctx->pc = 0x127a48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949392), GPR_U32(ctx, 0));
    // 0x127a4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127a50: 0xaf828b28  sw          $v0, -0x74D8($gp)
    ctx->pc = 0x127a50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 2));
    // 0x127a54: 0xaf808b24  sw          $zero, -0x74DC($gp)
    ctx->pc = 0x127a54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937380), GPR_U32(ctx, 0));
    // 0x127a58: 0xaf80b9e8  sw          $zero, -0x4618($gp)
    ctx->pc = 0x127a58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949352), GPR_U32(ctx, 0));
    // 0x127a5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x127a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a60: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x127A60u;
    {
        const bool branch_taken_0x127a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127a60) {
            ctx->pc = 0x127ADCu;
            goto label_127adc;
        }
    }
    ctx->pc = 0x127A68u;
label_127a68:
    // 0x127a68: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x127a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127a6c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x127a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x127a70: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x127a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x127a74: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x127a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x127a78: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x127a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x127a7c: 0x2442b490  addiu       $v0, $v0, -0x4B70
    ctx->pc = 0x127a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947984));
    // 0x127a80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x127a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127a84: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x127a84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x127a88: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x127a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127a8c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x127a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x127a90: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x127a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x127a94: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x127a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x127a98: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x127a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x127a9c: 0x2442b490  addiu       $v0, $v0, -0x4B70
    ctx->pc = 0x127a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947984));
    // 0x127aa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x127aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127aa4: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x127aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x127aa8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x127aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127aac: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x127aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x127ab0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x127ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x127ab4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x127ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x127ab8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x127ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x127abc: 0x2442b490  addiu       $v0, $v0, -0x4B70
    ctx->pc = 0x127abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947984));
    // 0x127ac0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x127ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127ac4: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x127ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x127ac8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x127ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x127acc: 0x2782ba08  addiu       $v0, $gp, -0x45F8
    ctx->pc = 0x127accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949384));
    // 0x127ad0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x127ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127ad4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x127ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x127ad8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x127ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_127adc:
    // 0x127adc: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x127adcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x127ae0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x127AE0u;
    {
        const bool branch_taken_0x127ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127ae0) {
            ctx->pc = 0x127A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127a68;
        }
    }
    ctx->pc = 0x127AE8u;
    // 0x127ae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127aec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x127aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127af0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x127af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x127af4: 0x3e00008  jr          $ra
    ctx->pc = 0x127AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127AFCu;
    // 0x127afc: 0x0  nop
    ctx->pc = 0x127afcu;
    // NOP
    ctx->pc = 0x127b00u;
}
