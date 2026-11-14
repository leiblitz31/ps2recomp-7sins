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

// Function: sub_003C2E48
// Address: 0x3c2e48 - 0x3c2e90
void sub_003C2E48_0x3c2e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2E48_0x3c2e48");
#endif

    switch (ctx->pc) {
        case 0x3c2e48u: goto label_3c2e48;
        case 0x3c2e4cu: goto label_3c2e4c;
        case 0x3c2e50u: goto label_3c2e50;
        case 0x3c2e54u: goto label_3c2e54;
        case 0x3c2e58u: goto label_3c2e58;
        case 0x3c2e5cu: goto label_3c2e5c;
        case 0x3c2e60u: goto label_3c2e60;
        case 0x3c2e64u: goto label_3c2e64;
        case 0x3c2e68u: goto label_3c2e68;
        case 0x3c2e6cu: goto label_3c2e6c;
        case 0x3c2e70u: goto label_3c2e70;
        case 0x3c2e74u: goto label_3c2e74;
        case 0x3c2e78u: goto label_3c2e78;
        case 0x3c2e7cu: goto label_3c2e7c;
        case 0x3c2e80u: goto label_3c2e80;
        case 0x3c2e84u: goto label_3c2e84;
        case 0x3c2e88u: goto label_3c2e88;
        case 0x3c2e8cu: goto label_3c2e8c;
        default: break;
    }

    ctx->pc = 0x3c2e48u;

label_3c2e48:
    // 0x3c2e48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c2e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3c2e4c:
    // 0x3c2e4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c2e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3c2e50:
    // 0x3c2e50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c2e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c2e54:
    // 0x3c2e54: 0xc0f0a0a  jal         func_3C2828
label_3c2e58:
    if (ctx->pc == 0x3C2E58u) {
        ctx->pc = 0x3C2E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E54u;
        // 0x3c2e58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2E5Cu;
        goto label_3c2e5c;
    }
    ctx->pc = 0x3C2E54u;
    SET_GPR_U32(ctx, 31, 0x3C2E5Cu);
    ctx->pc = 0x3C2E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2E54u;
    // 0x3c2e58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2828u, 0x3C2E54u, 0x3C2E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2E5Cu;
label_3c2e5c:
    // 0x3c2e5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c2e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2e60:
    // 0x3c2e60: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3c2e64:
    if (ctx->pc == 0x3C2E64u) {
        ctx->pc = 0x3C2E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E60u;
        // 0x3c2e64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2E68u;
        goto label_3c2e68;
    }
    ctx->pc = 0x3C2E60u;
    {
        const bool branch_taken_0x3c2e60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E60u;
        // 0x3c2e64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2e60) {
            ctx->pc = 0x3C2E7Cu;
            goto label_3c2e7c;
        }
    }
    ctx->pc = 0x3C2E68u;
label_3c2e68:
    // 0x3c2e68: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x3c2e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_3c2e6c:
    // 0x3c2e6c: 0x40f809  jalr        $v0
label_3c2e70:
    if (ctx->pc == 0x3C2E70u) {
        ctx->pc = 0x3C2E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E6Cu;
        // 0x3c2e70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2E74u;
        goto label_3c2e74;
    }
    ctx->pc = 0x3C2E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2E74u);
        ctx->pc = 0x3C2E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E6Cu;
        // 0x3c2e70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2E6Cu, 0x3C2E74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2E74u;
label_3c2e74:
    // 0x3c2e74: 0x10000002  b           . + 4 + (0x2 << 2)
label_3c2e78:
    if (ctx->pc == 0x3C2E78u) {
        ctx->pc = 0x3C2E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E74u;
        // 0x3c2e78: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2E7Cu;
        goto label_3c2e7c;
    }
    ctx->pc = 0x3C2E74u;
    {
        const bool branch_taken_0x3c2e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E74u;
        // 0x3c2e78: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2e74) {
            ctx->pc = 0x3C2E80u;
            goto label_3c2e80;
        }
    }
    ctx->pc = 0x3C2E7Cu;
label_3c2e7c:
    // 0x3c2e7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c2e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c2e80:
    // 0x3c2e80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c2e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c2e84:
    // 0x3c2e84: 0x3e00008  jr          $ra
label_3c2e88:
    if (ctx->pc == 0x3C2E88u) {
        ctx->pc = 0x3C2E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E84u;
        // 0x3c2e88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2E8Cu;
        goto label_3c2e8c;
    }
    ctx->pc = 0x3C2E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E84u;
        // 0x3c2e88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2E8Cu;
label_3c2e8c:
    // 0x3c2e8c: 0x0  nop
    ctx->pc = 0x3c2e8cu;
    // NOP
    ctx->pc = 0x3c2e90u;
}
