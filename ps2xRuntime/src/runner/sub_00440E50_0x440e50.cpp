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

// Function: sub_00440E50
// Address: 0x440e50 - 0x440ea8
void sub_00440E50_0x440e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00440E50_0x440e50");
#endif

    switch (ctx->pc) {
        case 0x440e94u: goto label_440e94;
        default: break;
    }

    ctx->pc = 0x440e50u;

    // 0x440e50: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x440e50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x440e54: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x440e54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x440e58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x440e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x440e5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x440e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x440e60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x440E60u;
    {
        const bool branch_taken_0x440e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x440E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440E60u;
        // 0x440e64: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440e60) {
            ctx->pc = 0x440E74u;
            goto label_440e74;
        }
    }
    ctx->pc = 0x440E68u;
    // 0x440e68: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x440e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x440e6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x440E6Cu;
    {
        const bool branch_taken_0x440e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x440E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440E6Cu;
        // 0x440e70: 0x24441668  addiu       $a0, $v0, 0x1668 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440e6c) {
            ctx->pc = 0x440E7Cu;
            goto label_440e7c;
        }
    }
    ctx->pc = 0x440E74u;
label_440e74:
    // 0x440e74: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x440e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x440e78: 0x24441658  addiu       $a0, $v0, 0x1658
    ctx->pc = 0x440e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5720));
label_440e7c:
    // 0x440e7c: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x440e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x440e80: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x440e80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x440e84: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x440e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x440e88: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x440e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x440e8c: 0xc10fa54  jal         func_43E950
    ctx->pc = 0x440E8Cu;
    SET_GPR_U32(ctx, 31, 0x440E94u);
    ctx->pc = 0x440E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x440E8Cu;
    // 0x440e90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43E950u, 0x440E8Cu, 0x440E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x440E94u;
label_440e94:
    // 0x440e94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x440e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x440e98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x440e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x440e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x440E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x440EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440E9Cu;
        // 0x440ea0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x440E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x440EA4u;
    // 0x440ea4: 0x0  nop
    ctx->pc = 0x440ea4u;
    // NOP
    ctx->pc = 0x440ea8u;
}
