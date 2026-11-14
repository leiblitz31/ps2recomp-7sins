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

// Function: sub_00435580
// Address: 0x435580 - 0x4355d8
void sub_00435580_0x435580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435580_0x435580");
#endif

    switch (ctx->pc) {
        case 0x4355b8u: goto label_4355b8;
        default: break;
    }

    ctx->pc = 0x435580u;

    // 0x435580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x435580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x435584: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x435584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x435588: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x435588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x43558c: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x43558Cu;
    {
        const bool branch_taken_0x43558c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x435590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43558Cu;
        // 0x435590: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43558c) {
            ctx->pc = 0x4355C4u;
            goto label_4355c4;
        }
    }
    ctx->pc = 0x435594u;
    // 0x435594: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x435594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x435598: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x435598u;
    {
        const bool branch_taken_0x435598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435598u;
        // 0x43559c: 0x8f83beb8  lw          $v1, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435598) {
            ctx->pc = 0x4355C4u;
            goto label_4355c4;
        }
    }
    ctx->pc = 0x4355A0u;
    // 0x4355a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4355a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4355a4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4355a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4355a8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x4355a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4355ac: 0x94620014  lhu         $v0, 0x14($v1)
    ctx->pc = 0x4355acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x4355b0: 0xc103440  jal         func_40D100
    ctx->pc = 0x4355B0u;
    SET_GPR_U32(ctx, 31, 0x4355B8u);
    ctx->pc = 0x4355B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4355B0u;
    // 0x4355b4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x4355B0u, 0x4355B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4355B8u;
label_4355b8:
    // 0x4355b8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x4355b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x4355bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4355BCu;
    {
        const bool branch_taken_0x4355bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4355C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4355BCu;
        // 0x4355c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4355bc) {
            ctx->pc = 0x4355C8u;
            goto label_4355c8;
        }
    }
    ctx->pc = 0x4355C4u;
label_4355c4:
    // 0x4355c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4355c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4355c8:
    // 0x4355c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4355c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4355cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4355ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4355d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4355D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4355D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4355D0u;
        // 0x4355d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4355D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4355D8u;
}
