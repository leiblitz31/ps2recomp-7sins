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

// Function: sub_003E2C08
// Address: 0x3e2c08 - 0x3e2c50
void sub_003E2C08_0x3e2c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2C08_0x3e2c08");
#endif

    switch (ctx->pc) {
        case 0x3e2c08u: goto label_3e2c08;
        case 0x3e2c0cu: goto label_3e2c0c;
        case 0x3e2c10u: goto label_3e2c10;
        case 0x3e2c14u: goto label_3e2c14;
        case 0x3e2c18u: goto label_3e2c18;
        case 0x3e2c1cu: goto label_3e2c1c;
        case 0x3e2c20u: goto label_3e2c20;
        case 0x3e2c24u: goto label_3e2c24;
        case 0x3e2c28u: goto label_3e2c28;
        case 0x3e2c2cu: goto label_3e2c2c;
        case 0x3e2c30u: goto label_3e2c30;
        case 0x3e2c34u: goto label_3e2c34;
        case 0x3e2c38u: goto label_3e2c38;
        case 0x3e2c3cu: goto label_3e2c3c;
        case 0x3e2c40u: goto label_3e2c40;
        case 0x3e2c44u: goto label_3e2c44;
        case 0x3e2c48u: goto label_3e2c48;
        case 0x3e2c4cu: goto label_3e2c4c;
        default: break;
    }

    ctx->pc = 0x3e2c08u;

label_3e2c08:
    // 0x3e2c08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e2c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3e2c0c:
    // 0x3e2c0c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_3e2c10:
    if (ctx->pc == 0x3E2C10u) {
        ctx->pc = 0x3E2C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2C0Cu;
        // 0x3e2c10: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2C14u;
        goto label_3e2c14;
    }
    ctx->pc = 0x3E2C0Cu;
    {
        const bool branch_taken_0x3e2c0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2C0Cu;
        // 0x3e2c10: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2c0c) {
            ctx->pc = 0x3E2C40u;
            goto label_3e2c40;
        }
    }
    ctx->pc = 0x3E2C14u;
label_3e2c14:
    // 0x3e2c14: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_3e2c18:
    if (ctx->pc == 0x3E2C18u) {
        ctx->pc = 0x3E2C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2C14u;
        // 0x3e2c18: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2C1Cu;
        goto label_3e2c1c;
    }
    ctx->pc = 0x3E2C14u;
    {
        const bool branch_taken_0x3e2c14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2C14u;
        // 0x3e2c18: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2c14) {
            ctx->pc = 0x3E2C44u;
            goto label_3e2c44;
        }
    }
    ctx->pc = 0x3E2C1Cu;
label_3e2c1c:
    // 0x3e2c1c: 0x8c8202f0  lw          $v0, 0x2F0($a0)
    ctx->pc = 0x3e2c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 752)));
label_3e2c20:
    // 0x3e2c20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3e2c24:
    if (ctx->pc == 0x3E2C24u) {
        ctx->pc = 0x3E2C28u;
        goto label_3e2c28;
    }
    ctx->pc = 0x3E2C20u;
    {
        const bool branch_taken_0x3e2c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2c20) {
            ctx->pc = 0x3E2C38u;
            goto label_3e2c38;
        }
    }
    ctx->pc = 0x3E2C28u;
label_3e2c28:
    // 0x3e2c28: 0x40f809  jalr        $v0
label_3e2c2c:
    if (ctx->pc == 0x3E2C2Cu) {
        ctx->pc = 0x3E2C30u;
        goto label_3e2c30;
    }
    ctx->pc = 0x3E2C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E2C30u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2C28u, 0x3E2C30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E2C30u;
label_3e2c30:
    // 0x3e2c30: 0x10000004  b           . + 4 + (0x4 << 2)
label_3e2c34:
    if (ctx->pc == 0x3E2C34u) {
        ctx->pc = 0x3E2C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2C30u;
        // 0x3e2c34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2C38u;
        goto label_3e2c38;
    }
    ctx->pc = 0x3E2C30u;
    {
        const bool branch_taken_0x3e2c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2C30u;
        // 0x3e2c34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2c30) {
            ctx->pc = 0x3E2C44u;
            goto label_3e2c44;
        }
    }
    ctx->pc = 0x3E2C38u;
label_3e2c38:
    // 0x3e2c38: 0xc0f8b2a  jal         func_3E2CA8
label_3e2c3c:
    if (ctx->pc == 0x3E2C3Cu) {
        ctx->pc = 0x3E2C40u;
        goto label_3e2c40;
    }
    ctx->pc = 0x3E2C38u;
    SET_GPR_U32(ctx, 31, 0x3E2C40u);
    ctx->pc = 0x3E2CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2CA8u, 0x3E2C38u, 0x3E2C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2C40u;
label_3e2c40:
    // 0x3e2c40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e2c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e2c44:
    // 0x3e2c44: 0x3e00008  jr          $ra
label_3e2c48:
    if (ctx->pc == 0x3E2C48u) {
        ctx->pc = 0x3E2C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2C44u;
        // 0x3e2c48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2C4Cu;
        goto label_3e2c4c;
    }
    ctx->pc = 0x3E2C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2C44u;
        // 0x3e2c48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2C4Cu;
label_3e2c4c:
    // 0x3e2c4c: 0x0  nop
    ctx->pc = 0x3e2c4cu;
    // NOP
    ctx->pc = 0x3e2c50u;
}
