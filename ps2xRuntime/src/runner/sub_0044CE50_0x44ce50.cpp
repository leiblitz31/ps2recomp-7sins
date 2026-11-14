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

// Function: sub_0044CE50
// Address: 0x44ce50 - 0x44cea0
void sub_0044CE50_0x44ce50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044CE50_0x44ce50");
#endif

    switch (ctx->pc) {
        case 0x44ce50u: goto label_44ce50;
        case 0x44ce54u: goto label_44ce54;
        case 0x44ce58u: goto label_44ce58;
        case 0x44ce5cu: goto label_44ce5c;
        case 0x44ce60u: goto label_44ce60;
        case 0x44ce64u: goto label_44ce64;
        case 0x44ce68u: goto label_44ce68;
        case 0x44ce6cu: goto label_44ce6c;
        case 0x44ce70u: goto label_44ce70;
        case 0x44ce74u: goto label_44ce74;
        case 0x44ce78u: goto label_44ce78;
        case 0x44ce7cu: goto label_44ce7c;
        case 0x44ce80u: goto label_44ce80;
        case 0x44ce84u: goto label_44ce84;
        case 0x44ce88u: goto label_44ce88;
        case 0x44ce8cu: goto label_44ce8c;
        case 0x44ce90u: goto label_44ce90;
        case 0x44ce94u: goto label_44ce94;
        case 0x44ce98u: goto label_44ce98;
        case 0x44ce9cu: goto label_44ce9c;
        default: break;
    }

    ctx->pc = 0x44ce50u;

label_44ce50:
    // 0x44ce50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44ce50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44ce54:
    // 0x44ce54: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_44ce58:
    if (ctx->pc == 0x44CE58u) {
        ctx->pc = 0x44CE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CE54u;
        // 0x44ce58: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CE5Cu;
        goto label_44ce5c;
    }
    ctx->pc = 0x44CE54u;
    {
        const bool branch_taken_0x44ce54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CE54u;
        // 0x44ce58: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ce54) {
            ctx->pc = 0x44CE74u;
            goto label_44ce74;
        }
    }
    ctx->pc = 0x44CE5Cu;
label_44ce5c:
    // 0x44ce5c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x44ce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_44ce60:
    // 0x44ce60: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x44ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_44ce64:
    // 0x44ce64: 0x40f809  jalr        $v0
label_44ce68:
    if (ctx->pc == 0x44CE68u) {
        ctx->pc = 0x44CE6Cu;
        goto label_44ce6c;
    }
    ctx->pc = 0x44CE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44CE6Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CE64u, 0x44CE6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44CE6Cu;
label_44ce6c:
    // 0x44ce6c: 0x1000000a  b           . + 4 + (0xA << 2)
label_44ce70:
    if (ctx->pc == 0x44CE70u) {
        ctx->pc = 0x44CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CE6Cu;
        // 0x44ce70: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CE74u;
        goto label_44ce74;
    }
    ctx->pc = 0x44CE6Cu;
    {
        const bool branch_taken_0x44ce6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CE6Cu;
        // 0x44ce70: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ce6c) {
            ctx->pc = 0x44CE98u;
            goto label_44ce98;
        }
    }
    ctx->pc = 0x44CE74u;
label_44ce74:
    // 0x44ce74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44ce78:
    // 0x44ce78: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x44ce78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_44ce7c:
    // 0x44ce7c: 0x34840016  ori         $a0, $a0, 0x16
    ctx->pc = 0x44ce7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
label_44ce80:
    // 0x44ce80: 0xc1035f6  jal         func_40D7D8
label_44ce84:
    if (ctx->pc == 0x44CE84u) {
        ctx->pc = 0x44CE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CE80u;
        // 0x44ce84: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CE88u;
        goto label_44ce88;
    }
    ctx->pc = 0x44CE80u;
    SET_GPR_U32(ctx, 31, 0x44CE88u);
    ctx->pc = 0x44CE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CE80u;
    // 0x44ce84: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x44CE80u, 0x44CE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CE88u;
label_44ce88:
    // 0x44ce88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x44ce88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_44ce8c:
    // 0x44ce8c: 0xc103628  jal         func_40D8A0
label_44ce90:
    if (ctx->pc == 0x44CE90u) {
        ctx->pc = 0x44CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CE8Cu;
        // 0x44ce90: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CE94u;
        goto label_44ce94;
    }
    ctx->pc = 0x44CE8Cu;
    SET_GPR_U32(ctx, 31, 0x44CE94u);
    ctx->pc = 0x44CE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CE8Cu;
    // 0x44ce90: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x44CE8Cu, 0x44CE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CE94u;
label_44ce94:
    // 0x44ce94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44ce94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44ce98:
    // 0x44ce98: 0x3e00008  jr          $ra
label_44ce9c:
    if (ctx->pc == 0x44CE9Cu) {
        ctx->pc = 0x44CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CE98u;
        // 0x44ce9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CEA0u;
        goto label_fallthrough_0x44ce98;
    }
    ctx->pc = 0x44CE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CE98u;
        // 0x44ce9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x44ce98:
    ctx->pc = 0x44CEA0u;
}
