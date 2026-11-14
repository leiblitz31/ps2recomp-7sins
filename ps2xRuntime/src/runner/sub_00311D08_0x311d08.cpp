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

// Function: sub_00311D08
// Address: 0x311d08 - 0x311d60
void sub_00311D08_0x311d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311D08_0x311d08");
#endif

    switch (ctx->pc) {
        case 0x311d08u: goto label_311d08;
        case 0x311d0cu: goto label_311d0c;
        case 0x311d10u: goto label_311d10;
        case 0x311d14u: goto label_311d14;
        case 0x311d18u: goto label_311d18;
        case 0x311d1cu: goto label_311d1c;
        case 0x311d20u: goto label_311d20;
        case 0x311d24u: goto label_311d24;
        case 0x311d28u: goto label_311d28;
        case 0x311d2cu: goto label_311d2c;
        case 0x311d30u: goto label_311d30;
        case 0x311d34u: goto label_311d34;
        case 0x311d38u: goto label_311d38;
        case 0x311d3cu: goto label_311d3c;
        case 0x311d40u: goto label_311d40;
        case 0x311d44u: goto label_311d44;
        case 0x311d48u: goto label_311d48;
        case 0x311d4cu: goto label_311d4c;
        case 0x311d50u: goto label_311d50;
        case 0x311d54u: goto label_311d54;
        case 0x311d58u: goto label_311d58;
        case 0x311d5cu: goto label_311d5c;
        default: break;
    }

    ctx->pc = 0x311d08u;

label_311d08:
    // 0x311d08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x311d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_311d0c:
    // 0x311d0c: 0x8f82a574  lw          $v0, -0x5A8C($gp)
    ctx->pc = 0x311d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944116)));
label_311d10:
    // 0x311d10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x311d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_311d14:
    // 0x311d14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x311d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_311d18:
    // 0x311d18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x311d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_311d1c:
    // 0x311d1c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x311d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_311d20:
    // 0x311d20: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x311d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_311d24:
    // 0x311d24: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_311d28:
    if (ctx->pc == 0x311D28u) {
        ctx->pc = 0x311D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311D24u;
        // 0x311d28: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311D2Cu;
        goto label_311d2c;
    }
    ctx->pc = 0x311D24u;
    {
        const bool branch_taken_0x311d24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x311D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311D24u;
        // 0x311d28: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311d24) {
            ctx->pc = 0x311D4Cu;
            goto label_311d4c;
        }
    }
    ctx->pc = 0x311D2Cu;
label_311d2c:
    // 0x311d2c: 0x8c43e98c  lw          $v1, -0x1674($v0)
    ctx->pc = 0x311d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961548)));
label_311d30:
    // 0x311d30: 0x60f809  jalr        $v1
label_311d34:
    if (ctx->pc == 0x311D34u) {
        ctx->pc = 0x311D38u;
        goto label_311d38;
    }
    ctx->pc = 0x311D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x311D38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311D30u, 0x311D38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x311D38u;
label_311d38:
    // 0x311d38: 0x8f82a574  lw          $v0, -0x5A8C($gp)
    ctx->pc = 0x311d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944116)));
label_311d3c:
    // 0x311d3c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x311d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_311d40:
    // 0x311d40: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x311d40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_311d44:
    // 0x311d44: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x311d44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_311d48:
    // 0x311d48: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x311d48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_311d4c:
    // 0x311d4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x311d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_311d50:
    // 0x311d50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x311d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_311d54:
    // 0x311d54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x311d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_311d58:
    // 0x311d58: 0x3e00008  jr          $ra
label_311d5c:
    if (ctx->pc == 0x311D5Cu) {
        ctx->pc = 0x311D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311D58u;
        // 0x311d5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311D60u;
        goto label_fallthrough_0x311d58;
    }
    ctx->pc = 0x311D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311D58u;
        // 0x311d5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x311d58:
    ctx->pc = 0x311D60u;
}
