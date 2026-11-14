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

// Function: sub_00327A08
// Address: 0x327a08 - 0x327a60
void sub_00327A08_0x327a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327A08_0x327a08");
#endif

    switch (ctx->pc) {
        case 0x327a08u: goto label_327a08;
        case 0x327a0cu: goto label_327a0c;
        case 0x327a10u: goto label_327a10;
        case 0x327a14u: goto label_327a14;
        case 0x327a18u: goto label_327a18;
        case 0x327a1cu: goto label_327a1c;
        case 0x327a20u: goto label_327a20;
        case 0x327a24u: goto label_327a24;
        case 0x327a28u: goto label_327a28;
        case 0x327a2cu: goto label_327a2c;
        case 0x327a30u: goto label_327a30;
        case 0x327a34u: goto label_327a34;
        case 0x327a38u: goto label_327a38;
        case 0x327a3cu: goto label_327a3c;
        case 0x327a40u: goto label_327a40;
        case 0x327a44u: goto label_327a44;
        case 0x327a48u: goto label_327a48;
        case 0x327a4cu: goto label_327a4c;
        case 0x327a50u: goto label_327a50;
        case 0x327a54u: goto label_327a54;
        case 0x327a58u: goto label_327a58;
        case 0x327a5cu: goto label_327a5c;
        default: break;
    }

    ctx->pc = 0x327a08u;

label_327a08:
    // 0x327a08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x327a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_327a0c:
    // 0x327a0c: 0x8f82a654  lw          $v0, -0x59AC($gp)
    ctx->pc = 0x327a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944340)));
label_327a10:
    // 0x327a10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x327a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_327a14:
    // 0x327a14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x327a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_327a18:
    // 0x327a18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x327a18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_327a1c:
    // 0x327a1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x327a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_327a20:
    // 0x327a20: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x327a20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_327a24:
    // 0x327a24: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x327a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_327a28:
    // 0x327a28: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_327a2c:
    if (ctx->pc == 0x327A2Cu) {
        ctx->pc = 0x327A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A28u;
        // 0x327a2c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327A30u;
        goto label_327a30;
    }
    ctx->pc = 0x327A28u;
    {
        const bool branch_taken_0x327a28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x327A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A28u;
        // 0x327a2c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327a28) {
            ctx->pc = 0x327A3Cu;
            goto label_327a3c;
        }
    }
    ctx->pc = 0x327A30u;
label_327a30:
    // 0x327a30: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x327a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_327a34:
    // 0x327a34: 0x40f809  jalr        $v0
label_327a38:
    if (ctx->pc == 0x327A38u) {
        ctx->pc = 0x327A3Cu;
        goto label_327a3c;
    }
    ctx->pc = 0x327A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x327A3Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327A34u, 0x327A3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x327A3Cu;
label_327a3c:
    // 0x327a3c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x327a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_327a40:
    // 0x327a40: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x327a40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_327a44:
    // 0x327a44: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x327a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_327a48:
    // 0x327a48: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x327a48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_327a4c:
    // 0x327a4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x327a4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_327a50:
    // 0x327a50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x327a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_327a54:
    // 0x327a54: 0x3e00008  jr          $ra
label_327a58:
    if (ctx->pc == 0x327A58u) {
        ctx->pc = 0x327A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A54u;
        // 0x327a58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327A5Cu;
        goto label_327a5c;
    }
    ctx->pc = 0x327A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A54u;
        // 0x327a58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327A5Cu;
label_327a5c:
    // 0x327a5c: 0x0  nop
    ctx->pc = 0x327a5cu;
    // NOP
    ctx->pc = 0x327a60u;
}
