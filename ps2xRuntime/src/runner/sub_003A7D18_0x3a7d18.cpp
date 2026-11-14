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

// Function: sub_003A7D18
// Address: 0x3a7d18 - 0x3a7d60
void sub_003A7D18_0x3a7d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7D18_0x3a7d18");
#endif

    switch (ctx->pc) {
        case 0x3a7d18u: goto label_3a7d18;
        case 0x3a7d1cu: goto label_3a7d1c;
        case 0x3a7d20u: goto label_3a7d20;
        case 0x3a7d24u: goto label_3a7d24;
        case 0x3a7d28u: goto label_3a7d28;
        case 0x3a7d2cu: goto label_3a7d2c;
        case 0x3a7d30u: goto label_3a7d30;
        case 0x3a7d34u: goto label_3a7d34;
        case 0x3a7d38u: goto label_3a7d38;
        case 0x3a7d3cu: goto label_3a7d3c;
        case 0x3a7d40u: goto label_3a7d40;
        case 0x3a7d44u: goto label_3a7d44;
        case 0x3a7d48u: goto label_3a7d48;
        case 0x3a7d4cu: goto label_3a7d4c;
        case 0x3a7d50u: goto label_3a7d50;
        case 0x3a7d54u: goto label_3a7d54;
        case 0x3a7d58u: goto label_3a7d58;
        case 0x3a7d5cu: goto label_3a7d5c;
        default: break;
    }

    ctx->pc = 0x3a7d18u;

label_3a7d18:
    // 0x3a7d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a7d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a7d1c:
    // 0x3a7d1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a7d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a7d20:
    // 0x3a7d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a7d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a7d24:
    // 0x3a7d24: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3a7d24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_3a7d28:
    // 0x3a7d28: 0x2610ce80  addiu       $s0, $s0, -0x3180
    ctx->pc = 0x3a7d28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954624));
label_3a7d2c:
    // 0x3a7d2c: 0xc104284  jal         func_410A10
label_3a7d30:
    if (ctx->pc == 0x3A7D30u) {
        ctx->pc = 0x3A7D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7D2Cu;
        // 0x3a7d30: 0x8e040500  lw          $a0, 0x500($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7D34u;
        goto label_3a7d34;
    }
    ctx->pc = 0x3A7D2Cu;
    SET_GPR_U32(ctx, 31, 0x3A7D34u);
    ctx->pc = 0x3A7D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7D2Cu;
    // 0x3a7d30: 0x8e040500  lw          $a0, 0x500($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x3A7D2Cu, 0x3A7D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7D34u;
label_3a7d34:
    // 0x3a7d34: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3a7d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3a7d38:
    // 0x3a7d38: 0x8e040504  lw          $a0, 0x504($s0)
    ctx->pc = 0x3a7d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1284)));
label_3a7d3c:
    // 0x3a7d3c: 0xae000500  sw          $zero, 0x500($s0)
    ctx->pc = 0x3a7d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1280), GPR_U32(ctx, 0));
label_3a7d40:
    // 0x3a7d40: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x3a7d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_3a7d44:
    // 0x3a7d44: 0x40f809  jalr        $v0
label_3a7d48:
    if (ctx->pc == 0x3A7D48u) {
        ctx->pc = 0x3A7D4Cu;
        goto label_3a7d4c;
    }
    ctx->pc = 0x3A7D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A7D4Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7D44u, 0x3A7D4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A7D4Cu;
label_3a7d4c:
    // 0x3a7d4c: 0xae000504  sw          $zero, 0x504($s0)
    ctx->pc = 0x3a7d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1284), GPR_U32(ctx, 0));
label_3a7d50:
    // 0x3a7d50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a7d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a7d54:
    // 0x3a7d54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a7d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a7d58:
    // 0x3a7d58: 0x3e00008  jr          $ra
label_3a7d5c:
    if (ctx->pc == 0x3A7D5Cu) {
        ctx->pc = 0x3A7D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7D58u;
        // 0x3a7d5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7D60u;
        goto label_fallthrough_0x3a7d58;
    }
    ctx->pc = 0x3A7D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7D58u;
        // 0x3a7d5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a7d58:
    ctx->pc = 0x3A7D60u;
}
