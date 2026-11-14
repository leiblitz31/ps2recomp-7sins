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

// Function: sub_00445B18
// Address: 0x445b18 - 0x445c58
void sub_00445B18_0x445b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00445B18_0x445b18");
#endif

    switch (ctx->pc) {
        case 0x445b18u: goto label_445b18;
        case 0x445b1cu: goto label_445b1c;
        case 0x445b20u: goto label_445b20;
        case 0x445b24u: goto label_445b24;
        case 0x445b28u: goto label_445b28;
        case 0x445b2cu: goto label_445b2c;
        case 0x445b30u: goto label_445b30;
        case 0x445b34u: goto label_445b34;
        case 0x445b38u: goto label_445b38;
        case 0x445b3cu: goto label_445b3c;
        case 0x445b40u: goto label_445b40;
        case 0x445b44u: goto label_445b44;
        case 0x445b48u: goto label_445b48;
        case 0x445b4cu: goto label_445b4c;
        case 0x445b50u: goto label_445b50;
        case 0x445b54u: goto label_445b54;
        case 0x445b58u: goto label_445b58;
        case 0x445b5cu: goto label_445b5c;
        case 0x445b60u: goto label_445b60;
        case 0x445b64u: goto label_445b64;
        case 0x445b68u: goto label_445b68;
        case 0x445b6cu: goto label_445b6c;
        case 0x445b70u: goto label_445b70;
        case 0x445b74u: goto label_445b74;
        case 0x445b78u: goto label_445b78;
        case 0x445b7cu: goto label_445b7c;
        case 0x445b80u: goto label_445b80;
        case 0x445b84u: goto label_445b84;
        case 0x445b88u: goto label_445b88;
        case 0x445b8cu: goto label_445b8c;
        case 0x445b90u: goto label_445b90;
        case 0x445b94u: goto label_445b94;
        case 0x445b98u: goto label_445b98;
        case 0x445b9cu: goto label_445b9c;
        case 0x445ba0u: goto label_445ba0;
        case 0x445ba4u: goto label_445ba4;
        case 0x445ba8u: goto label_445ba8;
        case 0x445bacu: goto label_445bac;
        case 0x445bb0u: goto label_445bb0;
        case 0x445bb4u: goto label_445bb4;
        case 0x445bb8u: goto label_445bb8;
        case 0x445bbcu: goto label_445bbc;
        case 0x445bc0u: goto label_445bc0;
        case 0x445bc4u: goto label_445bc4;
        case 0x445bc8u: goto label_445bc8;
        case 0x445bccu: goto label_445bcc;
        case 0x445bd0u: goto label_445bd0;
        case 0x445bd4u: goto label_445bd4;
        case 0x445bd8u: goto label_445bd8;
        case 0x445bdcu: goto label_445bdc;
        case 0x445be0u: goto label_445be0;
        case 0x445be4u: goto label_445be4;
        case 0x445be8u: goto label_445be8;
        case 0x445becu: goto label_445bec;
        case 0x445bf0u: goto label_445bf0;
        case 0x445bf4u: goto label_445bf4;
        case 0x445bf8u: goto label_445bf8;
        case 0x445bfcu: goto label_445bfc;
        case 0x445c00u: goto label_445c00;
        case 0x445c04u: goto label_445c04;
        case 0x445c08u: goto label_445c08;
        case 0x445c0cu: goto label_445c0c;
        case 0x445c10u: goto label_445c10;
        case 0x445c14u: goto label_445c14;
        case 0x445c18u: goto label_445c18;
        case 0x445c1cu: goto label_445c1c;
        case 0x445c20u: goto label_445c20;
        case 0x445c24u: goto label_445c24;
        case 0x445c28u: goto label_445c28;
        case 0x445c2cu: goto label_445c2c;
        case 0x445c30u: goto label_445c30;
        case 0x445c34u: goto label_445c34;
        case 0x445c38u: goto label_445c38;
        case 0x445c3cu: goto label_445c3c;
        case 0x445c40u: goto label_445c40;
        case 0x445c44u: goto label_445c44;
        case 0x445c48u: goto label_445c48;
        case 0x445c4cu: goto label_445c4c;
        case 0x445c50u: goto label_445c50;
        case 0x445c54u: goto label_445c54;
        default: break;
    }

    ctx->pc = 0x445b18u;

label_445b18:
    // 0x445b18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x445b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_445b1c:
    // 0x445b1c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x445b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_445b20:
    // 0x445b20: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x445b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_445b24:
    // 0x445b24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x445b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_445b28:
    // 0x445b28: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x445b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_445b2c:
    // 0x445b2c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x445b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_445b30:
    // 0x445b30: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x445b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_445b34:
    // 0x445b34: 0x12200040  beqz        $s1, . + 4 + (0x40 << 2)
label_445b38:
    if (ctx->pc == 0x445B38u) {
        ctx->pc = 0x445B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445B34u;
        // 0x445b38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445B3Cu;
        goto label_445b3c;
    }
    ctx->pc = 0x445B34u;
    {
        const bool branch_taken_0x445b34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x445B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445B34u;
        // 0x445b38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445b34) {
            ctx->pc = 0x445C38u;
            goto label_445c38;
        }
    }
    ctx->pc = 0x445B3Cu;
label_445b3c:
    // 0x445b3c: 0x8e330004  lw          $s3, 0x4($s1)
    ctx->pc = 0x445b3cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_445b40:
    // 0x445b40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x445b40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_445b44:
    // 0x445b44: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x445b44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_445b48:
    // 0x445b48: 0x1260002b  beqz        $s3, . + 4 + (0x2B << 2)
label_445b4c:
    if (ctx->pc == 0x445B4Cu) {
        ctx->pc = 0x445B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445B48u;
        // 0x445b4c: 0x3c140062  lui         $s4, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445B50u;
        goto label_445b50;
    }
    ctx->pc = 0x445B48u;
    {
        const bool branch_taken_0x445b48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x445B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445B48u;
        // 0x445b4c: 0x3c140062  lui         $s4, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445b48) {
            ctx->pc = 0x445BF8u;
            goto label_445bf8;
        }
    }
    ctx->pc = 0x445B50u;
label_445b50:
    // 0x445b50: 0x1a600011  blez        $s3, . + 4 + (0x11 << 2)
label_445b54:
    if (ctx->pc == 0x445B54u) {
        ctx->pc = 0x445B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445B50u;
        // 0x445b54: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x445B58u;
        goto label_445b58;
    }
    ctx->pc = 0x445B50u;
    {
        const bool branch_taken_0x445b50 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x445B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445B50u;
        // 0x445b54: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x445b50) {
            ctx->pc = 0x445B98u;
            goto label_445b98;
        }
    }
    ctx->pc = 0x445B58u;
label_445b58:
    // 0x445b58: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_445b5c:
    if (ctx->pc == 0x445B5Cu) {
        ctx->pc = 0x445B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445B58u;
        // 0x445b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445B60u;
        goto label_445b60;
    }
    ctx->pc = 0x445B58u;
    {
        const bool branch_taken_0x445b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x445B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445B58u;
        // 0x445b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445b58) {
            ctx->pc = 0x445BBCu;
            goto label_445bbc;
        }
    }
    ctx->pc = 0x445B60u;
label_445b60:
    // 0x445b60: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x445b60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_445b64:
    // 0x445b64: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_445b68:
    if (ctx->pc == 0x445B68u) {
        ctx->pc = 0x445B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445B64u;
        // 0x445b68: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x445B6Cu;
        goto label_445b6c;
    }
    ctx->pc = 0x445B64u;
    {
        const bool branch_taken_0x445b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x445B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445B64u;
        // 0x445b68: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x445b64) {
            ctx->pc = 0x445B9Cu;
            goto label_445b9c;
        }
    }
    ctx->pc = 0x445B6Cu;
label_445b6c:
    // 0x445b6c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_445b70:
    if (ctx->pc == 0x445B70u) {
        ctx->pc = 0x445B74u;
        goto label_445b74;
    }
    ctx->pc = 0x445B6Cu;
    {
        const bool branch_taken_0x445b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x445b6c) {
            ctx->pc = 0x445B88u;
            goto label_445b88;
        }
    }
    ctx->pc = 0x445B74u;
label_445b74:
    // 0x445b74: 0xc111532  jal         func_4454C8
label_445b78:
    if (ctx->pc == 0x445B78u) {
        ctx->pc = 0x445B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445B74u;
        // 0x445b78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445B7Cu;
        goto label_445b7c;
    }
    ctx->pc = 0x445B74u;
    SET_GPR_U32(ctx, 31, 0x445B7Cu);
    ctx->pc = 0x445B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445B74u;
    // 0x445b78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4454C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4454C8u, 0x445B74u, 0x445B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445B7Cu;
label_445b7c:
    // 0x445b7c: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x445b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_445b80:
    // 0x445b80: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x445b80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_445b84:
    // 0x445b84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x445b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_445b88:
    // 0x445b88: 0xc111532  jal         func_4454C8
label_445b8c:
    if (ctx->pc == 0x445B8Cu) {
        ctx->pc = 0x445B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445B88u;
        // 0x445b8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445B90u;
        goto label_445b90;
    }
    ctx->pc = 0x445B88u;
    SET_GPR_U32(ctx, 31, 0x445B90u);
    ctx->pc = 0x445B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445B88u;
    // 0x445b8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4454C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4454C8u, 0x445B88u, 0x445B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445B90u;
label_445b90:
    // 0x445b90: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x445b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_445b94:
    // 0x445b94: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x445b94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_445b98:
    // 0x445b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x445b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_445b9c:
    // 0x445b9c: 0xc111532  jal         func_4454C8
label_445ba0:
    if (ctx->pc == 0x445BA0u) {
        ctx->pc = 0x445BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445B9Cu;
        // 0x445ba0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445BA4u;
        goto label_445ba4;
    }
    ctx->pc = 0x445B9Cu;
    SET_GPR_U32(ctx, 31, 0x445BA4u);
    ctx->pc = 0x445BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445B9Cu;
    // 0x445ba0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4454C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4454C8u, 0x445B9Cu, 0x445BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445BA4u;
label_445ba4:
    // 0x445ba4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x445ba4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_445ba8:
    // 0x445ba8: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x445ba8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_445bac:
    // 0x445bac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_445bb0:
    if (ctx->pc == 0x445BB0u) {
        ctx->pc = 0x445BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445BACu;
        // 0x445bb0: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445BB4u;
        goto label_445bb4;
    }
    ctx->pc = 0x445BACu;
    {
        const bool branch_taken_0x445bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x445BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445BACu;
        // 0x445bb0: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445bac) {
            ctx->pc = 0x445BF8u;
            goto label_445bf8;
        }
    }
    ctx->pc = 0x445BB4u;
label_445bb4:
    // 0x445bb4: 0x0  nop
    ctx->pc = 0x445bb4u;
    // NOP
label_445bb8:
    // 0x445bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x445bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_445bbc:
    // 0x445bbc: 0xc111532  jal         func_4454C8
label_445bc0:
    if (ctx->pc == 0x445BC0u) {
        ctx->pc = 0x445BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445BBCu;
        // 0x445bc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445BC4u;
        goto label_445bc4;
    }
    ctx->pc = 0x445BBCu;
    SET_GPR_U32(ctx, 31, 0x445BC4u);
    ctx->pc = 0x445BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445BBCu;
    // 0x445bc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4454C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4454C8u, 0x445BBCu, 0x445BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445BC4u;
label_445bc4:
    // 0x445bc4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x445bc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_445bc8:
    // 0x445bc8: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x445bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_445bcc:
    // 0x445bcc: 0xc111532  jal         func_4454C8
label_445bd0:
    if (ctx->pc == 0x445BD0u) {
        ctx->pc = 0x445BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445BCCu;
        // 0x445bd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445BD4u;
        goto label_445bd4;
    }
    ctx->pc = 0x445BCCu;
    SET_GPR_U32(ctx, 31, 0x445BD4u);
    ctx->pc = 0x445BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445BCCu;
    // 0x445bd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4454C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4454C8u, 0x445BCCu, 0x445BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445BD4u;
label_445bd4:
    // 0x445bd4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x445bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_445bd8:
    // 0x445bd8: 0xc111532  jal         func_4454C8
label_445bdc:
    if (ctx->pc == 0x445BDCu) {
        ctx->pc = 0x445BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445BD8u;
        // 0x445bdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445BE0u;
        goto label_445be0;
    }
    ctx->pc = 0x445BD8u;
    SET_GPR_U32(ctx, 31, 0x445BE0u);
    ctx->pc = 0x445BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445BD8u;
    // 0x445bdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4454C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4454C8u, 0x445BD8u, 0x445BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445BE0u;
label_445be0:
    // 0x445be0: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x445be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_445be4:
    // 0x445be4: 0xc111532  jal         func_4454C8
label_445be8:
    if (ctx->pc == 0x445BE8u) {
        ctx->pc = 0x445BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445BE4u;
        // 0x445be8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445BECu;
        goto label_445bec;
    }
    ctx->pc = 0x445BE4u;
    SET_GPR_U32(ctx, 31, 0x445BECu);
    ctx->pc = 0x445BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445BE4u;
    // 0x445be8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4454C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4454C8u, 0x445BE4u, 0x445BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445BECu;
label_445bec:
    // 0x445bec: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x445becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_445bf0:
    // 0x445bf0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_445bf4:
    if (ctx->pc == 0x445BF4u) {
        ctx->pc = 0x445BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445BF0u;
        // 0x445bf4: 0x261000a0  addiu       $s0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445BF8u;
        goto label_445bf8;
    }
    ctx->pc = 0x445BF0u;
    {
        const bool branch_taken_0x445bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x445BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445BF0u;
        // 0x445bf4: 0x261000a0  addiu       $s0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445bf0) {
            ctx->pc = 0x445BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_445bb8;
        }
    }
    ctx->pc = 0x445BF8u;
label_445bf8:
    // 0x445bf8: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x445bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_445bfc:
    // 0x445bfc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_445c00:
    if (ctx->pc == 0x445C00u) {
        ctx->pc = 0x445C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445BFCu;
        // 0x445c00: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445C04u;
        goto label_445c04;
    }
    ctx->pc = 0x445BFCu;
    {
        const bool branch_taken_0x445bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x445C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445BFCu;
        // 0x445c00: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445bfc) {
            ctx->pc = 0x445C1Cu;
            goto label_445c1c;
        }
    }
    ctx->pc = 0x445C04u;
label_445c04:
    // 0x445c04: 0x2683e880  addiu       $v1, $s4, -0x1780
    ctx->pc = 0x445c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
label_445c08:
    // 0x445c08: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x445c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_445c0c:
    // 0x445c0c: 0x40f809  jalr        $v0
label_445c10:
    if (ctx->pc == 0x445C10u) {
        ctx->pc = 0x445C14u;
        goto label_445c14;
    }
    ctx->pc = 0x445C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x445C14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x445C0Cu, 0x445C14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x445C14u;
label_445c14:
    // 0x445c14: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x445c14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_445c18:
    // 0x445c18: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x445c18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_445c1c:
    // 0x445c1c: 0x8f83bf20  lw          $v1, -0x40E0($gp)
    ctx->pc = 0x445c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
label_445c20:
    // 0x445c20: 0x2684e880  addiu       $a0, $s4, -0x1780
    ctx->pc = 0x445c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
label_445c24:
    // 0x445c24: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x445c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_445c28:
    // 0x445c28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x445c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_445c2c:
    // 0x445c2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x445c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_445c30:
    // 0x445c30: 0x40f809  jalr        $v0
label_445c34:
    if (ctx->pc == 0x445C34u) {
        ctx->pc = 0x445C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445C30u;
        // 0x445c34: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445C38u;
        goto label_445c38;
    }
    ctx->pc = 0x445C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x445C38u);
        ctx->pc = 0x445C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445C30u;
        // 0x445c34: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x445C30u, 0x445C38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x445C38u;
label_445c38:
    // 0x445c38: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x445c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_445c3c:
    // 0x445c3c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x445c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_445c40:
    // 0x445c40: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x445c40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_445c44:
    // 0x445c44: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x445c44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_445c48:
    // 0x445c48: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x445c48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_445c4c:
    // 0x445c4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x445c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_445c50:
    // 0x445c50: 0x3e00008  jr          $ra
label_445c54:
    if (ctx->pc == 0x445C54u) {
        ctx->pc = 0x445C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445C50u;
        // 0x445c54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445C58u;
        goto label_fallthrough_0x445c50;
    }
    ctx->pc = 0x445C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x445C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445C50u;
        // 0x445c54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x445C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x445c50:
    ctx->pc = 0x445C58u;
}
