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

// Function: sub_00411C08
// Address: 0x411c08 - 0x411ca8
void sub_00411C08_0x411c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00411C08_0x411c08");
#endif

    switch (ctx->pc) {
        case 0x411c08u: goto label_411c08;
        case 0x411c0cu: goto label_411c0c;
        case 0x411c10u: goto label_411c10;
        case 0x411c14u: goto label_411c14;
        case 0x411c18u: goto label_411c18;
        case 0x411c1cu: goto label_411c1c;
        case 0x411c20u: goto label_411c20;
        case 0x411c24u: goto label_411c24;
        case 0x411c28u: goto label_411c28;
        case 0x411c2cu: goto label_411c2c;
        case 0x411c30u: goto label_411c30;
        case 0x411c34u: goto label_411c34;
        case 0x411c38u: goto label_411c38;
        case 0x411c3cu: goto label_411c3c;
        case 0x411c40u: goto label_411c40;
        case 0x411c44u: goto label_411c44;
        case 0x411c48u: goto label_411c48;
        case 0x411c4cu: goto label_411c4c;
        case 0x411c50u: goto label_411c50;
        case 0x411c54u: goto label_411c54;
        case 0x411c58u: goto label_411c58;
        case 0x411c5cu: goto label_411c5c;
        case 0x411c60u: goto label_411c60;
        case 0x411c64u: goto label_411c64;
        case 0x411c68u: goto label_411c68;
        case 0x411c6cu: goto label_411c6c;
        case 0x411c70u: goto label_411c70;
        case 0x411c74u: goto label_411c74;
        case 0x411c78u: goto label_411c78;
        case 0x411c7cu: goto label_411c7c;
        case 0x411c80u: goto label_411c80;
        case 0x411c84u: goto label_411c84;
        case 0x411c88u: goto label_411c88;
        case 0x411c8cu: goto label_411c8c;
        case 0x411c90u: goto label_411c90;
        case 0x411c94u: goto label_411c94;
        case 0x411c98u: goto label_411c98;
        case 0x411c9cu: goto label_411c9c;
        case 0x411ca0u: goto label_411ca0;
        case 0x411ca4u: goto label_411ca4;
        default: break;
    }

    ctx->pc = 0x411c08u;

label_411c08:
    // 0x411c08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x411c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_411c0c:
    // 0x411c0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x411c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_411c10:
    // 0x411c10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x411c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_411c14:
    // 0x411c14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x411c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_411c18:
    // 0x411c18: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x411c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_411c1c:
    // 0x411c1c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_411c20:
    if (ctx->pc == 0x411C20u) {
        ctx->pc = 0x411C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411C1Cu;
        // 0x411c20: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411C24u;
        goto label_411c24;
    }
    ctx->pc = 0x411C1Cu;
    {
        const bool branch_taken_0x411c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x411c1c) {
            ctx->pc = 0x411C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x411C1Cu;
            // 0x411c20: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x411C30u;
            goto label_411c30;
        }
    }
    ctx->pc = 0x411C24u;
label_411c24:
    // 0x411c24: 0x40f809  jalr        $v0
label_411c28:
    if (ctx->pc == 0x411C28u) {
        ctx->pc = 0x411C2Cu;
        goto label_411c2c;
    }
    ctx->pc = 0x411C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x411C2Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411C24u, 0x411C2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411C2Cu;
label_411c2c:
    // 0x411c2c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x411c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_411c30:
    // 0x411c30: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_411c34:
    if (ctx->pc == 0x411C34u) {
        ctx->pc = 0x411C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411C30u;
        // 0x411c34: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411C38u;
        goto label_411c38;
    }
    ctx->pc = 0x411C30u;
    {
        const bool branch_taken_0x411c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x411c30) {
            ctx->pc = 0x411C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x411C30u;
            // 0x411c34: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x411C38u;
            goto label_411c38;
        }
    }
    ctx->pc = 0x411C38u;
label_411c38:
    // 0x411c38: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x411c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_411c3c:
    // 0x411c3c: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_411c40:
    if (ctx->pc == 0x411C40u) {
        ctx->pc = 0x411C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411C3Cu;
        // 0x411c40: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411C44u;
        goto label_411c44;
    }
    ctx->pc = 0x411C3Cu;
    {
        const bool branch_taken_0x411c3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x411C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411C3Cu;
        // 0x411c40: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411c3c) {
            ctx->pc = 0x411C84u;
            goto label_411c84;
        }
    }
    ctx->pc = 0x411C44u;
label_411c44:
    // 0x411c44: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x411c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_411c48:
    // 0x411c48: 0x8f83bdd0  lw          $v1, -0x4230($gp)
    ctx->pc = 0x411c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950352)));
label_411c4c:
    // 0x411c4c: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x411c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_411c50:
    // 0x411c50: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x411c50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_411c54:
    // 0x411c54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x411c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_411c58:
    // 0x411c58: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x411c58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_411c5c:
    // 0x411c5c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x411c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_411c60:
    // 0x411c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x411c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_411c64:
    // 0x411c64: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x411c64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_411c68:
    // 0x411c68: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x411c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_411c6c:
    // 0x411c6c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x411c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_411c70:
    // 0x411c70: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x411c70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_411c74:
    // 0x411c74: 0xc105088  jal         func_414220
label_411c78:
    if (ctx->pc == 0x411C78u) {
        ctx->pc = 0x411C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411C74u;
        // 0x411c78: 0xace50004  sw          $a1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411C7Cu;
        goto label_411c7c;
    }
    ctx->pc = 0x411C74u;
    SET_GPR_U32(ctx, 31, 0x411C7Cu);
    ctx->pc = 0x411C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411C74u;
    // 0x411c78: 0xace50004  sw          $a1, 0x4($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414220u, 0x411C74u, 0x411C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411C7Cu;
label_411c7c:
    // 0x411c7c: 0x10000006  b           . + 4 + (0x6 << 2)
label_411c80:
    if (ctx->pc == 0x411C80u) {
        ctx->pc = 0x411C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411C7Cu;
        // 0x411c80: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411C84u;
        goto label_411c84;
    }
    ctx->pc = 0x411C7Cu;
    {
        const bool branch_taken_0x411c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411C7Cu;
        // 0x411c80: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411c7c) {
            ctx->pc = 0x411C98u;
            goto label_411c98;
        }
    }
    ctx->pc = 0x411C84u;
label_411c84:
    // 0x411c84: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x411c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_411c88:
    // 0x411c88: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x411c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_411c8c:
    // 0x411c8c: 0x40f809  jalr        $v0
label_411c90:
    if (ctx->pc == 0x411C90u) {
        ctx->pc = 0x411C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411C8Cu;
        // 0x411c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411C94u;
        goto label_411c94;
    }
    ctx->pc = 0x411C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x411C94u);
        ctx->pc = 0x411C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411C8Cu;
        // 0x411c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411C8Cu, 0x411C94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411C94u;
label_411c94:
    // 0x411c94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x411c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_411c98:
    // 0x411c98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x411c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_411c9c:
    // 0x411c9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x411c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_411ca0:
    // 0x411ca0: 0x3e00008  jr          $ra
label_411ca4:
    if (ctx->pc == 0x411CA4u) {
        ctx->pc = 0x411CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411CA0u;
        // 0x411ca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411CA8u;
        goto label_fallthrough_0x411ca0;
    }
    ctx->pc = 0x411CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411CA0u;
        // 0x411ca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x411ca0:
    ctx->pc = 0x411CA8u;
}
