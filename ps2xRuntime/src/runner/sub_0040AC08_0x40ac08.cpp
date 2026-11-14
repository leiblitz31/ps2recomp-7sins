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

// Function: sub_0040AC08
// Address: 0x40ac08 - 0x40ac50
void sub_0040AC08_0x40ac08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040AC08_0x40ac08");
#endif

    switch (ctx->pc) {
        case 0x40ac08u: goto label_40ac08;
        case 0x40ac0cu: goto label_40ac0c;
        case 0x40ac10u: goto label_40ac10;
        case 0x40ac14u: goto label_40ac14;
        case 0x40ac18u: goto label_40ac18;
        case 0x40ac1cu: goto label_40ac1c;
        case 0x40ac20u: goto label_40ac20;
        case 0x40ac24u: goto label_40ac24;
        case 0x40ac28u: goto label_40ac28;
        case 0x40ac2cu: goto label_40ac2c;
        case 0x40ac30u: goto label_40ac30;
        case 0x40ac34u: goto label_40ac34;
        case 0x40ac38u: goto label_40ac38;
        case 0x40ac3cu: goto label_40ac3c;
        case 0x40ac40u: goto label_40ac40;
        case 0x40ac44u: goto label_40ac44;
        case 0x40ac48u: goto label_40ac48;
        case 0x40ac4cu: goto label_40ac4c;
        default: break;
    }

    ctx->pc = 0x40ac08u;

label_40ac08:
    // 0x40ac08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40ac08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_40ac0c:
    // 0x40ac0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40ac0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_40ac10:
    // 0x40ac10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40ac10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_40ac14:
    // 0x40ac14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40ac14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40ac18:
    // 0x40ac18: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x40ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_40ac1c:
    // 0x40ac1c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_40ac20:
    if (ctx->pc == 0x40AC20u) {
        ctx->pc = 0x40AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AC1Cu;
        // 0x40ac20: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40AC24u;
        goto label_40ac24;
    }
    ctx->pc = 0x40AC1Cu;
    {
        const bool branch_taken_0x40ac1c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x40AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AC1Cu;
        // 0x40ac20: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ac1c) {
            ctx->pc = 0x40AC30u;
            goto label_40ac30;
        }
    }
    ctx->pc = 0x40AC24u;
label_40ac24:
    // 0x40ac24: 0xc0e39c0  jal         func_38E700
label_40ac28:
    if (ctx->pc == 0x40AC28u) {
        ctx->pc = 0x40AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AC24u;
        // 0x40ac28: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40AC2Cu;
        goto label_40ac2c;
    }
    ctx->pc = 0x40AC24u;
    SET_GPR_U32(ctx, 31, 0x40AC2Cu);
    ctx->pc = 0x40AC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40AC24u;
    // 0x40ac28: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x40AC24u, 0x40AC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40AC2Cu;
label_40ac2c:
    // 0x40ac2c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x40ac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_40ac30:
    // 0x40ac30: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x40ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_40ac34:
    // 0x40ac34: 0x40f809  jalr        $v0
label_40ac38:
    if (ctx->pc == 0x40AC38u) {
        ctx->pc = 0x40AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AC34u;
        // 0x40ac38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40AC3Cu;
        goto label_40ac3c;
    }
    ctx->pc = 0x40AC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40AC3Cu);
        ctx->pc = 0x40AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AC34u;
        // 0x40ac38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40AC34u, 0x40AC3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40AC3Cu;
label_40ac3c:
    // 0x40ac3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40ac3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40ac40:
    // 0x40ac40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40ac40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40ac44:
    // 0x40ac44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40ac44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_40ac48:
    // 0x40ac48: 0x3e00008  jr          $ra
label_40ac4c:
    if (ctx->pc == 0x40AC4Cu) {
        ctx->pc = 0x40AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AC48u;
        // 0x40ac4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40AC50u;
        goto label_fallthrough_0x40ac48;
    }
    ctx->pc = 0x40AC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AC48u;
        // 0x40ac4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40AC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x40ac48:
    ctx->pc = 0x40AC50u;
}
