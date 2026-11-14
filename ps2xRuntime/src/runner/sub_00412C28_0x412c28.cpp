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

// Function: sub_00412C28
// Address: 0x412c28 - 0x412c98
void sub_00412C28_0x412c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412C28_0x412c28");
#endif

    switch (ctx->pc) {
        case 0x412c28u: goto label_412c28;
        case 0x412c2cu: goto label_412c2c;
        case 0x412c30u: goto label_412c30;
        case 0x412c34u: goto label_412c34;
        case 0x412c38u: goto label_412c38;
        case 0x412c3cu: goto label_412c3c;
        case 0x412c40u: goto label_412c40;
        case 0x412c44u: goto label_412c44;
        case 0x412c48u: goto label_412c48;
        case 0x412c4cu: goto label_412c4c;
        case 0x412c50u: goto label_412c50;
        case 0x412c54u: goto label_412c54;
        case 0x412c58u: goto label_412c58;
        case 0x412c5cu: goto label_412c5c;
        case 0x412c60u: goto label_412c60;
        case 0x412c64u: goto label_412c64;
        case 0x412c68u: goto label_412c68;
        case 0x412c6cu: goto label_412c6c;
        case 0x412c70u: goto label_412c70;
        case 0x412c74u: goto label_412c74;
        case 0x412c78u: goto label_412c78;
        case 0x412c7cu: goto label_412c7c;
        case 0x412c80u: goto label_412c80;
        case 0x412c84u: goto label_412c84;
        case 0x412c88u: goto label_412c88;
        case 0x412c8cu: goto label_412c8c;
        case 0x412c90u: goto label_412c90;
        case 0x412c94u: goto label_412c94;
        default: break;
    }

    ctx->pc = 0x412c28u;

label_412c28:
    // 0x412c28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x412c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_412c2c:
    // 0x412c2c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x412c2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_412c30:
    // 0x412c30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x412c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_412c34:
    // 0x412c34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x412c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_412c38:
    // 0x412c38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x412c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_412c3c:
    // 0x412c3c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x412c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_412c40:
    // 0x412c40: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x412c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_412c44:
    // 0x412c44: 0x0  nop
    ctx->pc = 0x412c44u;
    // NOP
label_412c48:
    // 0x412c48: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_412c4c:
    if (ctx->pc == 0x412C4Cu) {
        ctx->pc = 0x412C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412C48u;
        // 0x412c4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412C50u;
        goto label_412c50;
    }
    ctx->pc = 0x412C48u;
    {
        const bool branch_taken_0x412c48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x412C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412C48u;
        // 0x412c4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412c48) {
            ctx->pc = 0x412C84u;
            goto label_412c84;
        }
    }
    ctx->pc = 0x412C50u;
label_412c50:
    // 0x412c50: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x412c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_412c54:
    // 0x412c54: 0x5443fffc  bnel        $v0, $v1, . + 4 + (-0x4 << 2)
label_412c58:
    if (ctx->pc == 0x412C58u) {
        ctx->pc = 0x412C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412C54u;
        // 0x412c58: 0x8ca50030  lw          $a1, 0x30($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412C5Cu;
        goto label_412c5c;
    }
    ctx->pc = 0x412C54u;
    {
        const bool branch_taken_0x412c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x412c54) {
            ctx->pc = 0x412C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412C54u;
            // 0x412c58: 0x8ca50030  lw          $a1, 0x30($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412c48;
        }
    }
    ctx->pc = 0x412C5Cu;
label_412c5c:
    // 0x412c5c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_412c60:
    if (ctx->pc == 0x412C60u) {
        ctx->pc = 0x412C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412C5Cu;
        // 0x412c60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412C64u;
        goto label_412c64;
    }
    ctx->pc = 0x412C5Cu;
    {
        const bool branch_taken_0x412c5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x412C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412C5Cu;
        // 0x412c60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412c5c) {
            ctx->pc = 0x412C84u;
            goto label_412c84;
        }
    }
    ctx->pc = 0x412C64u;
label_412c64:
    // 0x412c64: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x412c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_412c68:
    // 0x412c68: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_412c6c:
    if (ctx->pc == 0x412C6Cu) {
        ctx->pc = 0x412C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412C68u;
        // 0x412c6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412C70u;
        goto label_412c70;
    }
    ctx->pc = 0x412C68u;
    {
        const bool branch_taken_0x412c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x412c68) {
            ctx->pc = 0x412C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412C68u;
            // 0x412c6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412C84u;
            goto label_412c84;
        }
    }
    ctx->pc = 0x412C70u;
label_412c70:
    // 0x412c70: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x412c70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_412c74:
    // 0x412c74: 0x40f809  jalr        $v0
label_412c78:
    if (ctx->pc == 0x412C78u) {
        ctx->pc = 0x412C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412C74u;
        // 0x412c78: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412C7Cu;
        goto label_412c7c;
    }
    ctx->pc = 0x412C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x412C7Cu);
        ctx->pc = 0x412C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412C74u;
        // 0x412c78: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412C74u, 0x412C7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412C7Cu;
label_412c7c:
    // 0x412c7c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x412c7cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_412c80:
    // 0x412c80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x412c80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_412c84:
    // 0x412c84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x412c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_412c88:
    // 0x412c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x412c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_412c8c:
    // 0x412c8c: 0x3e00008  jr          $ra
label_412c90:
    if (ctx->pc == 0x412C90u) {
        ctx->pc = 0x412C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412C8Cu;
        // 0x412c90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412C94u;
        goto label_412c94;
    }
    ctx->pc = 0x412C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412C8Cu;
        // 0x412c90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x412C94u;
label_412c94:
    // 0x412c94: 0x0  nop
    ctx->pc = 0x412c94u;
    // NOP
    ctx->pc = 0x412c98u;
}
