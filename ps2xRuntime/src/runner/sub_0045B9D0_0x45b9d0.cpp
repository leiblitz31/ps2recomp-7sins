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

// Function: sub_0045B9D0
// Address: 0x45b9d0 - 0x45ba90
void sub_0045B9D0_0x45b9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045B9D0_0x45b9d0");
#endif

    switch (ctx->pc) {
        case 0x45ba2cu: goto label_45ba2c;
        default: break;
    }

    ctx->pc = 0x45b9d0u;

    // 0x45b9d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x45b9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x45b9d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x45b9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x45b9d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45b9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45b9dc: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x45b9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x45b9e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45b9e4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x45b9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x45b9e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45b9ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45B9ECu;
    {
        const bool branch_taken_0x45b9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45b9ec) {
            ctx->pc = 0x45BA00u;
            goto label_45ba00;
        }
    }
    ctx->pc = 0x45B9F4u;
    // 0x45b9f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x45b9f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45b9f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x45B9F8u;
    {
        const bool branch_taken_0x45b9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b9f8) {
            ctx->pc = 0x45BA04u;
            goto label_45ba04;
        }
    }
    ctx->pc = 0x45BA00u;
label_45ba00:
    // 0x45ba00: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x45ba00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45ba04:
    // 0x45ba04: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x45ba04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
    // 0x45ba08: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x45ba08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x45ba0c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45ba10: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x45ba10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x45ba14: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x45ba18: 0x24424a40  addiu       $v0, $v0, 0x4A40
    ctx->pc = 0x45ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19008));
    // 0x45ba1c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x45ba1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45ba20: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x45ba20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x45ba24: 0xc0c4034  jal         func_3100D0
    ctx->pc = 0x45BA24u;
    SET_GPR_U32(ctx, 31, 0x45BA2Cu);
    ctx->pc = 0x3100D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3100D0u, 0x45BA24u, 0x45BA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45BA2Cu;
label_45ba2c:
    // 0x45ba2c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x45ba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45ba30: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x45ba30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x45ba34: 0x2783bf60  addiu       $v1, $gp, -0x40A0
    ctx->pc = 0x45ba34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950752));
    // 0x45ba38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45ba38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45ba3c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x45ba3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x45ba40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x45ba40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45ba44: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45ba44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45ba48: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45ba48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x45ba4c: 0x2782bf48  addiu       $v0, $gp, -0x40B8
    ctx->pc = 0x45ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950728));
    // 0x45ba50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45ba54: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x45ba54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x45ba58: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45ba5c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45ba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x45ba60: 0x2782bf60  addiu       $v0, $gp, -0x40A0
    ctx->pc = 0x45ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950752));
    // 0x45ba64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45ba68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45ba6c: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x45ba6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x45ba70: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x45ba70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x45ba74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x45ba74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x45ba78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x45ba78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45ba7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45ba7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45ba80: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x45ba80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x45ba84: 0x3e00008  jr          $ra
    ctx->pc = 0x45BA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45BA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45BA8Cu;
    // 0x45ba8c: 0x0  nop
    ctx->pc = 0x45ba8cu;
    // NOP
    ctx->pc = 0x45ba90u;
}
