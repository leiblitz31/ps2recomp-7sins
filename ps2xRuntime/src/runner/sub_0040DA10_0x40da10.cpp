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

// Function: sub_0040DA10
// Address: 0x40da10 - 0x40daa0
void sub_0040DA10_0x40da10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040DA10_0x40da10");
#endif

    switch (ctx->pc) {
        case 0x40da10u: goto label_40da10;
        case 0x40da14u: goto label_40da14;
        case 0x40da18u: goto label_40da18;
        case 0x40da1cu: goto label_40da1c;
        case 0x40da20u: goto label_40da20;
        case 0x40da24u: goto label_40da24;
        case 0x40da28u: goto label_40da28;
        case 0x40da2cu: goto label_40da2c;
        case 0x40da30u: goto label_40da30;
        case 0x40da34u: goto label_40da34;
        case 0x40da38u: goto label_40da38;
        case 0x40da3cu: goto label_40da3c;
        case 0x40da40u: goto label_40da40;
        case 0x40da44u: goto label_40da44;
        case 0x40da48u: goto label_40da48;
        case 0x40da4cu: goto label_40da4c;
        case 0x40da50u: goto label_40da50;
        case 0x40da54u: goto label_40da54;
        case 0x40da58u: goto label_40da58;
        case 0x40da5cu: goto label_40da5c;
        case 0x40da60u: goto label_40da60;
        case 0x40da64u: goto label_40da64;
        case 0x40da68u: goto label_40da68;
        case 0x40da6cu: goto label_40da6c;
        case 0x40da70u: goto label_40da70;
        case 0x40da74u: goto label_40da74;
        case 0x40da78u: goto label_40da78;
        case 0x40da7cu: goto label_40da7c;
        case 0x40da80u: goto label_40da80;
        case 0x40da84u: goto label_40da84;
        case 0x40da88u: goto label_40da88;
        case 0x40da8cu: goto label_40da8c;
        case 0x40da90u: goto label_40da90;
        case 0x40da94u: goto label_40da94;
        case 0x40da98u: goto label_40da98;
        case 0x40da9cu: goto label_40da9c;
        default: break;
    }

    ctx->pc = 0x40da10u;

label_40da10:
    // 0x40da10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40da10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_40da14:
    // 0x40da14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40da14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_40da18:
    // 0x40da18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40da18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40da1c:
    // 0x40da1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40da1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40da20:
    // 0x40da20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40da20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_40da24:
    // 0x40da24: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x40da24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_40da28:
    // 0x40da28: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_40da2c:
    if (ctx->pc == 0x40DA2Cu) {
        ctx->pc = 0x40DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DA28u;
        // 0x40da2c: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DA30u;
        goto label_40da30;
    }
    ctx->pc = 0x40DA28u;
    {
        const bool branch_taken_0x40da28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DA28u;
        // 0x40da2c: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40da28) {
            ctx->pc = 0x40DA50u;
            goto label_40da50;
        }
    }
    ctx->pc = 0x40DA30u;
label_40da30:
    // 0x40da30: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x40da30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_40da34:
    // 0x40da34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_40da38:
    if (ctx->pc == 0x40DA38u) {
        ctx->pc = 0x40DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DA34u;
        // 0x40da38: 0x2622e880  addiu       $v0, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DA3Cu;
        goto label_40da3c;
    }
    ctx->pc = 0x40DA34u;
    {
        const bool branch_taken_0x40da34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DA34u;
        // 0x40da38: 0x2622e880  addiu       $v0, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40da34) {
            ctx->pc = 0x40DA50u;
            goto label_40da50;
        }
    }
    ctx->pc = 0x40DA3Cu;
label_40da3c:
    // 0x40da3c: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x40da3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_40da40:
    // 0x40da40: 0x60f809  jalr        $v1
label_40da44:
    if (ctx->pc == 0x40DA44u) {
        ctx->pc = 0x40DA48u;
        goto label_40da48;
    }
    ctx->pc = 0x40DA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40DA48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DA40u, 0x40DA48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DA48u;
label_40da48:
    // 0x40da48: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x40da48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_40da4c:
    // 0x40da4c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x40da4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_40da50:
    // 0x40da50: 0x2623e880  addiu       $v1, $s1, -0x1780
    ctx->pc = 0x40da50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_40da54:
    // 0x40da54: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x40da54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_40da58:
    // 0x40da58: 0x40f809  jalr        $v0
label_40da5c:
    if (ctx->pc == 0x40DA5Cu) {
        ctx->pc = 0x40DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DA58u;
        // 0x40da5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DA60u;
        goto label_40da60;
    }
    ctx->pc = 0x40DA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40DA60u);
        ctx->pc = 0x40DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DA58u;
        // 0x40da5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DA58u, 0x40DA60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DA60u;
label_40da60:
    // 0x40da60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40da60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40da64:
    // 0x40da64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40da64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40da68:
    // 0x40da68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40da68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40da6c:
    // 0x40da6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40da6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_40da70:
    // 0x40da70: 0x3e00008  jr          $ra
label_40da74:
    if (ctx->pc == 0x40DA74u) {
        ctx->pc = 0x40DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DA70u;
        // 0x40da74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DA78u;
        goto label_40da78;
    }
    ctx->pc = 0x40DA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DA70u;
        // 0x40da74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40DA78u;
label_40da78:
    // 0x40da78: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x40da78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_40da7c:
    // 0x40da7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x40da7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_40da80:
    // 0x40da80: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x40da80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_40da84:
    // 0x40da84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40da84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_40da88:
    // 0x40da88: 0x40f809  jalr        $v0
label_40da8c:
    if (ctx->pc == 0x40DA8Cu) {
        ctx->pc = 0x40DA90u;
        goto label_40da90;
    }
    ctx->pc = 0x40DA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40DA90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DA88u, 0x40DA90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DA90u;
label_40da90:
    // 0x40da90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40da90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_40da94:
    // 0x40da94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40da94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40da98:
    // 0x40da98: 0x3e00008  jr          $ra
label_40da9c:
    if (ctx->pc == 0x40DA9Cu) {
        ctx->pc = 0x40DA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DA98u;
        // 0x40da9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DAA0u;
        goto label_fallthrough_0x40da98;
    }
    ctx->pc = 0x40DA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40DA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DA98u;
        // 0x40da9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x40da98:
    ctx->pc = 0x40DAA0u;
}
