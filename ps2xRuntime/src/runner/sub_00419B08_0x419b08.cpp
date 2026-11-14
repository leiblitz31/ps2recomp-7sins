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

// Function: sub_00419B08
// Address: 0x419b08 - 0x419b78
void sub_00419B08_0x419b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419B08_0x419b08");
#endif

    switch (ctx->pc) {
        case 0x419b08u: goto label_419b08;
        case 0x419b0cu: goto label_419b0c;
        case 0x419b10u: goto label_419b10;
        case 0x419b14u: goto label_419b14;
        case 0x419b18u: goto label_419b18;
        case 0x419b1cu: goto label_419b1c;
        case 0x419b20u: goto label_419b20;
        case 0x419b24u: goto label_419b24;
        case 0x419b28u: goto label_419b28;
        case 0x419b2cu: goto label_419b2c;
        case 0x419b30u: goto label_419b30;
        case 0x419b34u: goto label_419b34;
        case 0x419b38u: goto label_419b38;
        case 0x419b3cu: goto label_419b3c;
        case 0x419b40u: goto label_419b40;
        case 0x419b44u: goto label_419b44;
        case 0x419b48u: goto label_419b48;
        case 0x419b4cu: goto label_419b4c;
        case 0x419b50u: goto label_419b50;
        case 0x419b54u: goto label_419b54;
        case 0x419b58u: goto label_419b58;
        case 0x419b5cu: goto label_419b5c;
        case 0x419b60u: goto label_419b60;
        case 0x419b64u: goto label_419b64;
        case 0x419b68u: goto label_419b68;
        case 0x419b6cu: goto label_419b6c;
        case 0x419b70u: goto label_419b70;
        case 0x419b74u: goto label_419b74;
        default: break;
    }

    ctx->pc = 0x419b08u;

label_419b08:
    // 0x419b08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x419b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_419b0c:
    // 0x419b0c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x419b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_419b10:
    // 0x419b10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x419b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_419b14:
    // 0x419b14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x419b14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_419b18:
    // 0x419b18: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x419b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_419b1c:
    // 0x419b1c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x419b1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_419b20:
    // 0x419b20: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x419b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_419b24:
    // 0x419b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x419b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_419b28:
    // 0x419b28: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x419b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_419b2c:
    // 0x419b2c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_419b30:
    if (ctx->pc == 0x419B30u) {
        ctx->pc = 0x419B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419B2Cu;
        // 0x419b30: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419B34u;
        goto label_419b34;
    }
    ctx->pc = 0x419B2Cu;
    {
        const bool branch_taken_0x419b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x419B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419B2Cu;
        // 0x419b30: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419b2c) {
            ctx->pc = 0x419B54u;
            goto label_419b54;
        }
    }
    ctx->pc = 0x419B34u;
label_419b34:
    // 0x419b34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x419b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_419b38:
    // 0x419b38: 0x8c50009c  lw          $s0, 0x9C($v0)
    ctx->pc = 0x419b38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_419b3c:
    // 0x419b3c: 0x260f809  jalr        $s3
label_419b40:
    if (ctx->pc == 0x419B40u) {
        ctx->pc = 0x419B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419B3Cu;
        // 0x419b40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419B44u;
        goto label_419b44;
    }
    ctx->pc = 0x419B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x419B44u);
        ctx->pc = 0x419B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419B3Cu;
        // 0x419b40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419B3Cu, 0x419B44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x419B44u;
label_419b44:
    // 0x419b44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_419b48:
    if (ctx->pc == 0x419B48u) {
        ctx->pc = 0x419B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419B44u;
        // 0x419b48: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419B4Cu;
        goto label_419b4c;
    }
    ctx->pc = 0x419B44u;
    {
        const bool branch_taken_0x419b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x419B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419B44u;
        // 0x419b48: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419b44) {
            ctx->pc = 0x419B54u;
            goto label_419b54;
        }
    }
    ctx->pc = 0x419B4Cu;
label_419b4c:
    // 0x419b4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_419b50:
    if (ctx->pc == 0x419B50u) {
        ctx->pc = 0x419B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419B4Cu;
        // 0x419b50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419B54u;
        goto label_419b54;
    }
    ctx->pc = 0x419B4Cu;
    {
        const bool branch_taken_0x419b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x419B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419B4Cu;
        // 0x419b50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419b4c) {
            ctx->pc = 0x419B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_419b38;
        }
    }
    ctx->pc = 0x419B54u;
label_419b54:
    // 0x419b54: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x419b54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_419b58:
    // 0x419b58: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x419b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_419b5c:
    // 0x419b5c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x419b5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_419b60:
    // 0x419b60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x419b60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_419b64:
    // 0x419b64: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x419b64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_419b68:
    // 0x419b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x419b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_419b6c:
    // 0x419b6c: 0x3e00008  jr          $ra
label_419b70:
    if (ctx->pc == 0x419B70u) {
        ctx->pc = 0x419B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419B6Cu;
        // 0x419b70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419B74u;
        goto label_419b74;
    }
    ctx->pc = 0x419B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419B6Cu;
        // 0x419b70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419B74u;
label_419b74:
    // 0x419b74: 0x0  nop
    ctx->pc = 0x419b74u;
    // NOP
    ctx->pc = 0x419b78u;
}
