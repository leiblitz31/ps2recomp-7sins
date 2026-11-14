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

// Function: sub_0045B800
// Address: 0x45b800 - 0x45b8a0
void sub_0045B800_0x45b800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045B800_0x45b800");
#endif

    ctx->pc = 0x45b800u;

    // 0x45b800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x45b800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x45b804: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x45b804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x45b808: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x45b808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x45b80c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x45b80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45b810: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x45b810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x45b814: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45b814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45b818: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45b818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x45b81c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45b81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x45b820: 0x24424920  addiu       $v0, $v0, 0x4920
    ctx->pc = 0x45b820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18720));
    // 0x45b824: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x45b824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45b828: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45b828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45b82c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x45b830: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45b830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45b834: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45b834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45b838: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x45B838u;
    {
        const bool branch_taken_0x45b838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b838) {
            ctx->pc = 0x45B884u;
            goto label_45b884;
        }
    }
    ctx->pc = 0x45B840u;
    // 0x45b840: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x45b840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45b844: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x45b844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x45b848: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45b848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45b84c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x45b850: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45b850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x45b854: 0x24424700  addiu       $v0, $v0, 0x4700
    ctx->pc = 0x45b854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18176));
    // 0x45b858: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x45b858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45b85c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45b860: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45b860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x45b864: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45b864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45b868: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45b868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45b86c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45b870: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45B870u;
    {
        const bool branch_taken_0x45b870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45b870) {
            ctx->pc = 0x45B884u;
            goto label_45b884;
        }
    }
    ctx->pc = 0x45B878u;
    // 0x45b878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45b878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45b87c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x45B87Cu;
    {
        const bool branch_taken_0x45b87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b87c) {
            ctx->pc = 0x45B888u;
            goto label_45b888;
        }
    }
    ctx->pc = 0x45B884u;
label_45b884:
    // 0x45b884: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45b884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45b888:
    // 0x45b888: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x45b888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x45b88c: 0x3e00008  jr          $ra
    ctx->pc = 0x45B88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45B88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45B894u;
    // 0x45b894: 0x0  nop
    ctx->pc = 0x45b894u;
    // NOP
    // 0x45b898: 0x0  nop
    ctx->pc = 0x45b898u;
    // NOP
    // 0x45b89c: 0x0  nop
    ctx->pc = 0x45b89cu;
    // NOP
    ctx->pc = 0x45b8a0u;
}
