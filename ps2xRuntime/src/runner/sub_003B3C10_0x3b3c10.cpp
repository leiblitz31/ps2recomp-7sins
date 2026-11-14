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

// Function: sub_003B3C10
// Address: 0x3b3c10 - 0x3b3d70
void sub_003B3C10_0x3b3c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3C10_0x3b3c10");
#endif

    switch (ctx->pc) {
        case 0x3b3c10u: goto label_3b3c10;
        case 0x3b3c14u: goto label_3b3c14;
        case 0x3b3c18u: goto label_3b3c18;
        case 0x3b3c1cu: goto label_3b3c1c;
        case 0x3b3c20u: goto label_3b3c20;
        case 0x3b3c24u: goto label_3b3c24;
        case 0x3b3c28u: goto label_3b3c28;
        case 0x3b3c2cu: goto label_3b3c2c;
        case 0x3b3c30u: goto label_3b3c30;
        case 0x3b3c34u: goto label_3b3c34;
        case 0x3b3c38u: goto label_3b3c38;
        case 0x3b3c3cu: goto label_3b3c3c;
        case 0x3b3c40u: goto label_3b3c40;
        case 0x3b3c44u: goto label_3b3c44;
        case 0x3b3c48u: goto label_3b3c48;
        case 0x3b3c4cu: goto label_3b3c4c;
        case 0x3b3c50u: goto label_3b3c50;
        case 0x3b3c54u: goto label_3b3c54;
        case 0x3b3c58u: goto label_3b3c58;
        case 0x3b3c5cu: goto label_3b3c5c;
        case 0x3b3c60u: goto label_3b3c60;
        case 0x3b3c64u: goto label_3b3c64;
        case 0x3b3c68u: goto label_3b3c68;
        case 0x3b3c6cu: goto label_3b3c6c;
        case 0x3b3c70u: goto label_3b3c70;
        case 0x3b3c74u: goto label_3b3c74;
        case 0x3b3c78u: goto label_3b3c78;
        case 0x3b3c7cu: goto label_3b3c7c;
        case 0x3b3c80u: goto label_3b3c80;
        case 0x3b3c84u: goto label_3b3c84;
        case 0x3b3c88u: goto label_3b3c88;
        case 0x3b3c8cu: goto label_3b3c8c;
        case 0x3b3c90u: goto label_3b3c90;
        case 0x3b3c94u: goto label_3b3c94;
        case 0x3b3c98u: goto label_3b3c98;
        case 0x3b3c9cu: goto label_3b3c9c;
        case 0x3b3ca0u: goto label_3b3ca0;
        case 0x3b3ca4u: goto label_3b3ca4;
        case 0x3b3ca8u: goto label_3b3ca8;
        case 0x3b3cacu: goto label_3b3cac;
        case 0x3b3cb0u: goto label_3b3cb0;
        case 0x3b3cb4u: goto label_3b3cb4;
        case 0x3b3cb8u: goto label_3b3cb8;
        case 0x3b3cbcu: goto label_3b3cbc;
        case 0x3b3cc0u: goto label_3b3cc0;
        case 0x3b3cc4u: goto label_3b3cc4;
        case 0x3b3cc8u: goto label_3b3cc8;
        case 0x3b3cccu: goto label_3b3ccc;
        case 0x3b3cd0u: goto label_3b3cd0;
        case 0x3b3cd4u: goto label_3b3cd4;
        case 0x3b3cd8u: goto label_3b3cd8;
        case 0x3b3cdcu: goto label_3b3cdc;
        case 0x3b3ce0u: goto label_3b3ce0;
        case 0x3b3ce4u: goto label_3b3ce4;
        case 0x3b3ce8u: goto label_3b3ce8;
        case 0x3b3cecu: goto label_3b3cec;
        case 0x3b3cf0u: goto label_3b3cf0;
        case 0x3b3cf4u: goto label_3b3cf4;
        case 0x3b3cf8u: goto label_3b3cf8;
        case 0x3b3cfcu: goto label_3b3cfc;
        case 0x3b3d00u: goto label_3b3d00;
        case 0x3b3d04u: goto label_3b3d04;
        case 0x3b3d08u: goto label_3b3d08;
        case 0x3b3d0cu: goto label_3b3d0c;
        case 0x3b3d10u: goto label_3b3d10;
        case 0x3b3d14u: goto label_3b3d14;
        case 0x3b3d18u: goto label_3b3d18;
        case 0x3b3d1cu: goto label_3b3d1c;
        case 0x3b3d20u: goto label_3b3d20;
        case 0x3b3d24u: goto label_3b3d24;
        case 0x3b3d28u: goto label_3b3d28;
        case 0x3b3d2cu: goto label_3b3d2c;
        case 0x3b3d30u: goto label_3b3d30;
        case 0x3b3d34u: goto label_3b3d34;
        case 0x3b3d38u: goto label_3b3d38;
        case 0x3b3d3cu: goto label_3b3d3c;
        case 0x3b3d40u: goto label_3b3d40;
        case 0x3b3d44u: goto label_3b3d44;
        case 0x3b3d48u: goto label_3b3d48;
        case 0x3b3d4cu: goto label_3b3d4c;
        case 0x3b3d50u: goto label_3b3d50;
        case 0x3b3d54u: goto label_3b3d54;
        case 0x3b3d58u: goto label_3b3d58;
        case 0x3b3d5cu: goto label_3b3d5c;
        case 0x3b3d60u: goto label_3b3d60;
        case 0x3b3d64u: goto label_3b3d64;
        case 0x3b3d68u: goto label_3b3d68;
        case 0x3b3d6cu: goto label_3b3d6c;
        default: break;
    }

    ctx->pc = 0x3b3c10u;

label_3b3c10:
    // 0x3b3c10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b3c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3b3c14:
    // 0x3b3c14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3b3c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3b3c18:
    // 0x3b3c18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b3c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3b3c1c:
    // 0x3b3c1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b3c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b3c20:
    // 0x3b3c20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b3c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3b3c24:
    // 0x3b3c24: 0xc0ed312  jal         func_3B4C48
label_3b3c28:
    if (ctx->pc == 0x3B3C28u) {
        ctx->pc = 0x3B3C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C24u;
        // 0x3b3c28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3C2Cu;
        goto label_3b3c2c;
    }
    ctx->pc = 0x3B3C24u;
    SET_GPR_U32(ctx, 31, 0x3B3C2Cu);
    ctx->pc = 0x3B3C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3C24u;
    // 0x3b3c28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4C48u, 0x3B3C24u, 0x3B3C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3C2Cu;
label_3b3c2c:
    // 0x3b3c2c: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_3b3c30:
    if (ctx->pc == 0x3B3C30u) {
        ctx->pc = 0x3B3C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C2Cu;
        // 0x3b3c30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3C34u;
        goto label_3b3c34;
    }
    ctx->pc = 0x3B3C2Cu;
    {
        const bool branch_taken_0x3b3c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C2Cu;
        // 0x3b3c30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3c2c) {
            ctx->pc = 0x3B3D5Cu;
            goto label_3b3d5c;
        }
    }
    ctx->pc = 0x3B3C34u;
label_3b3c34:
    // 0x3b3c34: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x3b3c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_3b3c38:
    // 0x3b3c38: 0xc0eb422  jal         func_3AD088
label_3b3c3c:
    if (ctx->pc == 0x3B3C3Cu) {
        ctx->pc = 0x3B3C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C38u;
        // 0x3b3c3c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3C40u;
        goto label_3b3c40;
    }
    ctx->pc = 0x3B3C38u;
    SET_GPR_U32(ctx, 31, 0x3B3C40u);
    ctx->pc = 0x3B3C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3C38u;
    // 0x3b3c3c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD088u, 0x3B3C38u, 0x3B3C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3C40u;
label_3b3c40:
    // 0x3b3c40: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3b3c44:
    if (ctx->pc == 0x3B3C44u) {
        ctx->pc = 0x3B3C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C40u;
        // 0x3b3c44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3C48u;
        goto label_3b3c48;
    }
    ctx->pc = 0x3B3C40u;
    {
        const bool branch_taken_0x3b3c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C40u;
        // 0x3b3c44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3c40) {
            ctx->pc = 0x3B3C80u;
            goto label_3b3c80;
        }
    }
    ctx->pc = 0x3B3C48u;
label_3b3c48:
    // 0x3b3c48: 0x10000002  b           . + 4 + (0x2 << 2)
label_3b3c4c:
    if (ctx->pc == 0x3B3C4Cu) {
        ctx->pc = 0x3B3C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C48u;
        // 0x3b3c4c: 0x8e0300b0  lw          $v1, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3C50u;
        goto label_3b3c50;
    }
    ctx->pc = 0x3B3C48u;
    {
        const bool branch_taken_0x3b3c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C48u;
        // 0x3b3c4c: 0x8e0300b0  lw          $v1, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3c48) {
            ctx->pc = 0x3B3C54u;
            goto label_3b3c54;
        }
    }
    ctx->pc = 0x3B3C50u;
label_3b3c50:
    // 0x3b3c50: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3b3c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_3b3c54:
    // 0x3b3c54: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3b3c54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3b3c58:
    // 0x3b3c58: 0x0  nop
    ctx->pc = 0x3b3c58u;
    // NOP
label_3b3c5c:
    // 0x3b3c5c: 0x0  nop
    ctx->pc = 0x3b3c5cu;
    // NOP
label_3b3c60:
    // 0x3b3c60: 0x0  nop
    ctx->pc = 0x3b3c60u;
    // NOP
label_3b3c64:
    // 0x3b3c64: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_3b3c68:
    if (ctx->pc == 0x3B3C68u) {
        ctx->pc = 0x3B3C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C64u;
        // 0x3b3c68: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3C6Cu;
        goto label_3b3c6c;
    }
    ctx->pc = 0x3B3C64u;
    {
        const bool branch_taken_0x3b3c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b3c64) {
            ctx->pc = 0x3B3C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B3C64u;
            // 0x3b3c68: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B3C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3c50;
        }
    }
    ctx->pc = 0x3B3C6Cu;
label_3b3c6c:
    // 0x3b3c6c: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x3b3c6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_3b3c70:
    // 0x3b3c70: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_3b3c74:
    if (ctx->pc == 0x3B3C74u) {
        ctx->pc = 0x3B3C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C70u;
        // 0x3b3c74: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3C78u;
        goto label_3b3c78;
    }
    ctx->pc = 0x3B3C70u;
    {
        const bool branch_taken_0x3b3c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C70u;
        // 0x3b3c74: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3c70) {
            ctx->pc = 0x3B3C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3c50;
        }
    }
    ctx->pc = 0x3B3C78u;
label_3b3c78:
    // 0x3b3c78: 0x10000006  b           . + 4 + (0x6 << 2)
label_3b3c7c:
    if (ctx->pc == 0x3B3C7Cu) {
        ctx->pc = 0x3B3C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C78u;
        // 0x3b3c7c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3C80u;
        goto label_3b3c80;
    }
    ctx->pc = 0x3B3C78u;
    {
        const bool branch_taken_0x3b3c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C78u;
        // 0x3b3c7c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3c78) {
            ctx->pc = 0x3B3C94u;
            goto label_3b3c94;
        }
    }
    ctx->pc = 0x3B3C80u;
label_3b3c80:
    // 0x3b3c80: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b3c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3b3c84:
    // 0x3b3c84: 0x8c62e974  lw          $v0, -0x168C($v1)
    ctx->pc = 0x3b3c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961524)));
label_3b3c88:
    // 0x3b3c88: 0x40f809  jalr        $v0
label_3b3c8c:
    if (ctx->pc == 0x3B3C8Cu) {
        ctx->pc = 0x3B3C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C88u;
        // 0x3b3c8c: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3C90u;
        goto label_3b3c90;
    }
    ctx->pc = 0x3B3C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B3C90u);
        ctx->pc = 0x3B3C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C88u;
        // 0x3b3c8c: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3C88u, 0x3B3C90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B3C90u;
label_3b3c90:
    // 0x3b3c90: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3b3c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3b3c94:
    // 0x3b3c94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b3c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b3c98:
    // 0x3b3c98: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b3c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b3c9c:
    // 0x3b3c9c: 0xc103440  jal         func_40D100
label_3b3ca0:
    if (ctx->pc == 0x3B3CA0u) {
        ctx->pc = 0x3B3CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C9Cu;
        // 0x3b3ca0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3CA4u;
        goto label_3b3ca4;
    }
    ctx->pc = 0x3B3C9Cu;
    SET_GPR_U32(ctx, 31, 0x3B3CA4u);
    ctx->pc = 0x3B3CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3C9Cu;
    // 0x3b3ca0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3B3C9Cu, 0x3B3CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3CA4u;
label_3b3ca4:
    // 0x3b3ca4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_3b3ca8:
    if (ctx->pc == 0x3B3CA8u) {
        ctx->pc = 0x3B3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3CA4u;
        // 0x3b3ca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3CACu;
        goto label_3b3cac;
    }
    ctx->pc = 0x3B3CA4u;
    {
        const bool branch_taken_0x3b3ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3CA4u;
        // 0x3b3ca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3ca4) {
            ctx->pc = 0x3B3D40u;
            goto label_3b3d40;
        }
    }
    ctx->pc = 0x3B3CACu;
label_3b3cac:
    // 0x3b3cac: 0xc60000bc  lwc1        $f0, 0xBC($s0)
    ctx->pc = 0x3b3cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b3cb0:
    // 0x3b3cb0: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x3b3cb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_3b3cb4:
    // 0x3b3cb4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3b3cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b3cb8:
    // 0x3b3cb8: 0xc10486e  jal         func_4121B8
label_3b3cbc:
    if (ctx->pc == 0x3B3CBCu) {
        ctx->pc = 0x3B3CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3CB8u;
        // 0x3b3cbc: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3CC0u;
        goto label_3b3cc0;
    }
    ctx->pc = 0x3B3CB8u;
    SET_GPR_U32(ctx, 31, 0x3B3CC0u);
    ctx->pc = 0x3B3CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3CB8u;
    // 0x3b3cbc: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3B3CB8u, 0x3B3CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3CC0u;
label_3b3cc0:
    // 0x3b3cc0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3b3cc4:
    if (ctx->pc == 0x3B3CC4u) {
        ctx->pc = 0x3B3CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3CC0u;
        // 0x3b3cc4: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3CC8u;
        goto label_3b3cc8;
    }
    ctx->pc = 0x3B3CC0u;
    {
        const bool branch_taken_0x3b3cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3CC0u;
        // 0x3b3cc4: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3cc0) {
            ctx->pc = 0x3B3D40u;
            goto label_3b3d40;
        }
    }
    ctx->pc = 0x3B3CC8u;
label_3b3cc8:
    // 0x3b3cc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b3cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b3ccc:
    // 0x3b3ccc: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x3b3cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_3b3cd0:
    // 0x3b3cd0: 0xc10486e  jal         func_4121B8
label_3b3cd4:
    if (ctx->pc == 0x3B3CD4u) {
        ctx->pc = 0x3B3CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3CD0u;
        // 0x3b3cd4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3CD8u;
        goto label_3b3cd8;
    }
    ctx->pc = 0x3B3CD0u;
    SET_GPR_U32(ctx, 31, 0x3B3CD8u);
    ctx->pc = 0x3B3CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3CD0u;
    // 0x3b3cd4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3B3CD0u, 0x3B3CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3CD8u;
label_3b3cd8:
    // 0x3b3cd8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_3b3cdc:
    if (ctx->pc == 0x3B3CDCu) {
        ctx->pc = 0x3B3CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3CD8u;
        // 0x3b3cdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3CE0u;
        goto label_3b3ce0;
    }
    ctx->pc = 0x3B3CD8u;
    {
        const bool branch_taken_0x3b3cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3CD8u;
        // 0x3b3cdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3cd8) {
            ctx->pc = 0x3B3D5Cu;
            goto label_3b3d5c;
        }
    }
    ctx->pc = 0x3B3CE0u;
label_3b3ce0:
    // 0x3b3ce0: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x3b3ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_3b3ce4:
    // 0x3b3ce4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3b3ce8:
    if (ctx->pc == 0x3B3CE8u) {
        ctx->pc = 0x3B3CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3CE4u;
        // 0x3b3ce8: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3CECu;
        goto label_3b3cec;
    }
    ctx->pc = 0x3B3CE4u;
    {
        const bool branch_taken_0x3b3ce4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3CE4u;
        // 0x3b3ce8: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3ce4) {
            ctx->pc = 0x3B3D00u;
            goto label_3b3d00;
        }
    }
    ctx->pc = 0x3B3CECu;
label_3b3cec:
    // 0x3b3cec: 0x8c62e974  lw          $v0, -0x168C($v1)
    ctx->pc = 0x3b3cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961524)));
label_3b3cf0:
    // 0x3b3cf0: 0x40f809  jalr        $v0
label_3b3cf4:
    if (ctx->pc == 0x3B3CF4u) {
        ctx->pc = 0x3B3CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3CF0u;
        // 0x3b3cf4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3CF8u;
        goto label_3b3cf8;
    }
    ctx->pc = 0x3B3CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B3CF8u);
        ctx->pc = 0x3B3CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3CF0u;
        // 0x3b3cf4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3CF0u, 0x3B3CF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B3CF8u;
label_3b3cf8:
    // 0x3b3cf8: 0x10000002  b           . + 4 + (0x2 << 2)
label_3b3cfc:
    if (ctx->pc == 0x3B3CFCu) {
        ctx->pc = 0x3B3CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3CF8u;
        // 0x3b3cfc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3D00u;
        goto label_3b3d00;
    }
    ctx->pc = 0x3B3CF8u;
    {
        const bool branch_taken_0x3b3cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3CF8u;
        // 0x3b3cfc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3cf8) {
            ctx->pc = 0x3B3D04u;
            goto label_3b3d04;
        }
    }
    ctx->pc = 0x3B3D00u;
label_3b3d00:
    // 0x3b3d00: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3b3d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3b3d04:
    // 0x3b3d04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b3d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b3d08:
    // 0x3b3d08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b3d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b3d0c:
    // 0x3b3d0c: 0xc10486e  jal         func_4121B8
label_3b3d10:
    if (ctx->pc == 0x3B3D10u) {
        ctx->pc = 0x3B3D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3D0Cu;
        // 0x3b3d10: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3D14u;
        goto label_3b3d14;
    }
    ctx->pc = 0x3B3D0Cu;
    SET_GPR_U32(ctx, 31, 0x3B3D14u);
    ctx->pc = 0x3B3D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3D0Cu;
    // 0x3b3d10: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3B3D0Cu, 0x3B3D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3D14u;
label_3b3d14:
    // 0x3b3d14: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3b3d18:
    if (ctx->pc == 0x3B3D18u) {
        ctx->pc = 0x3B3D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3D14u;
        // 0x3b3d18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3D1Cu;
        goto label_3b3d1c;
    }
    ctx->pc = 0x3B3D14u;
    {
        const bool branch_taken_0x3b3d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3D14u;
        // 0x3b3d18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3d14) {
            ctx->pc = 0x3B3D5Cu;
            goto label_3b3d5c;
        }
    }
    ctx->pc = 0x3B3D1Cu;
label_3b3d1c:
    // 0x3b3d1c: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x3b3d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_3b3d20:
    // 0x3b3d20: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_3b3d24:
    if (ctx->pc == 0x3B3D24u) {
        ctx->pc = 0x3B3D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3D20u;
        // 0x3b3d24: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3D28u;
        goto label_3b3d28;
    }
    ctx->pc = 0x3B3D20u;
    {
        const bool branch_taken_0x3b3d20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3D20u;
        // 0x3b3d24: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3d20) {
            ctx->pc = 0x3B3D48u;
            goto label_3b3d48;
        }
    }
    ctx->pc = 0x3B3D28u;
label_3b3d28:
    // 0x3b3d28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b3d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b3d2c:
    // 0x3b3d2c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3b3d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3b3d30:
    // 0x3b3d30: 0xc10486e  jal         func_4121B8
label_3b3d34:
    if (ctx->pc == 0x3B3D34u) {
        ctx->pc = 0x3B3D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3D30u;
        // 0x3b3d34: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3D38u;
        goto label_3b3d38;
    }
    ctx->pc = 0x3B3D30u;
    SET_GPR_U32(ctx, 31, 0x3B3D38u);
    ctx->pc = 0x3B3D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3D30u;
    // 0x3b3d34: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3B3D30u, 0x3B3D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3D38u;
label_3b3d38:
    // 0x3b3d38: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3b3d3c:
    if (ctx->pc == 0x3B3D3Cu) {
        ctx->pc = 0x3B3D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3D38u;
        // 0x3b3d3c: 0x8e0400b4  lw          $a0, 0xB4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3D40u;
        goto label_3b3d40;
    }
    ctx->pc = 0x3B3D38u;
    {
        const bool branch_taken_0x3b3d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b3d38) {
            ctx->pc = 0x3B3D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B3D38u;
            // 0x3b3d3c: 0x8e0400b4  lw          $a0, 0xB4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B3D4Cu;
            goto label_3b3d4c;
        }
    }
    ctx->pc = 0x3B3D40u;
label_3b3d40:
    // 0x3b3d40: 0x10000006  b           . + 4 + (0x6 << 2)
label_3b3d44:
    if (ctx->pc == 0x3B3D44u) {
        ctx->pc = 0x3B3D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3D40u;
        // 0x3b3d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3D48u;
        goto label_3b3d48;
    }
    ctx->pc = 0x3B3D40u;
    {
        const bool branch_taken_0x3b3d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3D40u;
        // 0x3b3d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3d40) {
            ctx->pc = 0x3B3D5Cu;
            goto label_3b3d5c;
        }
    }
    ctx->pc = 0x3B3D48u;
label_3b3d48:
    // 0x3b3d48: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x3b3d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_3b3d4c:
    // 0x3b3d4c: 0xc0e9cd8  jal         func_3A7360
label_3b3d50:
    if (ctx->pc == 0x3B3D50u) {
        ctx->pc = 0x3B3D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3D4Cu;
        // 0x3b3d50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3D54u;
        goto label_3b3d54;
    }
    ctx->pc = 0x3B3D4Cu;
    SET_GPR_U32(ctx, 31, 0x3B3D54u);
    ctx->pc = 0x3B3D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3D4Cu;
    // 0x3b3d50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7360u, 0x3B3D4Cu, 0x3B3D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3D54u;
label_3b3d54:
    // 0x3b3d54: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x3b3d54u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_3b3d58:
    // 0x3b3d58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b3d58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3d5c:
    // 0x3b3d5c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3b3d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b3d60:
    // 0x3b3d60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b3d60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b3d64:
    // 0x3b3d64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b3d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b3d68:
    // 0x3b3d68: 0x3e00008  jr          $ra
label_3b3d6c:
    if (ctx->pc == 0x3B3D6Cu) {
        ctx->pc = 0x3B3D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3D68u;
        // 0x3b3d6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3D70u;
        goto label_fallthrough_0x3b3d68;
    }
    ctx->pc = 0x3B3D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3D68u;
        // 0x3b3d6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b3d68:
    ctx->pc = 0x3B3D70u;
}
