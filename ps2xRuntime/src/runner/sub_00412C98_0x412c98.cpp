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

// Function: sub_00412C98
// Address: 0x412c98 - 0x412dc8
void sub_00412C98_0x412c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412C98_0x412c98");
#endif

    switch (ctx->pc) {
        case 0x412c98u: goto label_412c98;
        case 0x412c9cu: goto label_412c9c;
        case 0x412ca0u: goto label_412ca0;
        case 0x412ca4u: goto label_412ca4;
        case 0x412ca8u: goto label_412ca8;
        case 0x412cacu: goto label_412cac;
        case 0x412cb0u: goto label_412cb0;
        case 0x412cb4u: goto label_412cb4;
        case 0x412cb8u: goto label_412cb8;
        case 0x412cbcu: goto label_412cbc;
        case 0x412cc0u: goto label_412cc0;
        case 0x412cc4u: goto label_412cc4;
        case 0x412cc8u: goto label_412cc8;
        case 0x412cccu: goto label_412ccc;
        case 0x412cd0u: goto label_412cd0;
        case 0x412cd4u: goto label_412cd4;
        case 0x412cd8u: goto label_412cd8;
        case 0x412cdcu: goto label_412cdc;
        case 0x412ce0u: goto label_412ce0;
        case 0x412ce4u: goto label_412ce4;
        case 0x412ce8u: goto label_412ce8;
        case 0x412cecu: goto label_412cec;
        case 0x412cf0u: goto label_412cf0;
        case 0x412cf4u: goto label_412cf4;
        case 0x412cf8u: goto label_412cf8;
        case 0x412cfcu: goto label_412cfc;
        case 0x412d00u: goto label_412d00;
        case 0x412d04u: goto label_412d04;
        case 0x412d08u: goto label_412d08;
        case 0x412d0cu: goto label_412d0c;
        case 0x412d10u: goto label_412d10;
        case 0x412d14u: goto label_412d14;
        case 0x412d18u: goto label_412d18;
        case 0x412d1cu: goto label_412d1c;
        case 0x412d20u: goto label_412d20;
        case 0x412d24u: goto label_412d24;
        case 0x412d28u: goto label_412d28;
        case 0x412d2cu: goto label_412d2c;
        case 0x412d30u: goto label_412d30;
        case 0x412d34u: goto label_412d34;
        case 0x412d38u: goto label_412d38;
        case 0x412d3cu: goto label_412d3c;
        case 0x412d40u: goto label_412d40;
        case 0x412d44u: goto label_412d44;
        case 0x412d48u: goto label_412d48;
        case 0x412d4cu: goto label_412d4c;
        case 0x412d50u: goto label_412d50;
        case 0x412d54u: goto label_412d54;
        case 0x412d58u: goto label_412d58;
        case 0x412d5cu: goto label_412d5c;
        case 0x412d60u: goto label_412d60;
        case 0x412d64u: goto label_412d64;
        case 0x412d68u: goto label_412d68;
        case 0x412d6cu: goto label_412d6c;
        case 0x412d70u: goto label_412d70;
        case 0x412d74u: goto label_412d74;
        case 0x412d78u: goto label_412d78;
        case 0x412d7cu: goto label_412d7c;
        case 0x412d80u: goto label_412d80;
        case 0x412d84u: goto label_412d84;
        case 0x412d88u: goto label_412d88;
        case 0x412d8cu: goto label_412d8c;
        case 0x412d90u: goto label_412d90;
        case 0x412d94u: goto label_412d94;
        case 0x412d98u: goto label_412d98;
        case 0x412d9cu: goto label_412d9c;
        case 0x412da0u: goto label_412da0;
        case 0x412da4u: goto label_412da4;
        case 0x412da8u: goto label_412da8;
        case 0x412dacu: goto label_412dac;
        case 0x412db0u: goto label_412db0;
        case 0x412db4u: goto label_412db4;
        case 0x412db8u: goto label_412db8;
        case 0x412dbcu: goto label_412dbc;
        case 0x412dc0u: goto label_412dc0;
        case 0x412dc4u: goto label_412dc4;
        default: break;
    }

    ctx->pc = 0x412c98u;

label_412c98:
    // 0x412c98: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x412c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_412c9c:
    // 0x412c9c: 0x8f84bde0  lw          $a0, -0x4220($gp)
    ctx->pc = 0x412c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950368)));
label_412ca0:
    // 0x412ca0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x412ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_412ca4:
    // 0x412ca4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x412ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_412ca8:
    // 0x412ca8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x412ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_412cac:
    // 0x412cac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x412cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_412cb0:
    // 0x412cb0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x412cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_412cb4:
    // 0x412cb4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x412cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_412cb8:
    // 0x412cb8: 0x10800039  beqz        $a0, . + 4 + (0x39 << 2)
label_412cbc:
    if (ctx->pc == 0x412CBCu) {
        ctx->pc = 0x412CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412CB8u;
        // 0x412cbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412CC0u;
        goto label_412cc0;
    }
    ctx->pc = 0x412CB8u;
    {
        const bool branch_taken_0x412cb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x412CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412CB8u;
        // 0x412cbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412cb8) {
            ctx->pc = 0x412DA0u;
            goto label_412da0;
        }
    }
    ctx->pc = 0x412CC0u;
label_412cc0:
    // 0x412cc0: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x412cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_412cc4:
    // 0x412cc4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x412cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_412cc8:
    // 0x412cc8: 0xc104388  jal         func_410E20
label_412ccc:
    if (ctx->pc == 0x412CCCu) {
        ctx->pc = 0x412CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412CC8u;
        // 0x412ccc: 0x24a53368  addiu       $a1, $a1, 0x3368 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412CD0u;
        goto label_412cd0;
    }
    ctx->pc = 0x412CC8u;
    SET_GPR_U32(ctx, 31, 0x412CD0u);
    ctx->pc = 0x412CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412CC8u;
    // 0x412ccc: 0x24a53368  addiu       $a1, $a1, 0x3368 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410E20u, 0x412CC8u, 0x412CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412CD0u;
label_412cd0:
    // 0x412cd0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x412cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_412cd4:
    // 0x412cd4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x412cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_412cd8:
    // 0x412cd8: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x412cd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_412cdc:
    // 0x412cdc: 0x244205a0  addiu       $v0, $v0, 0x5A0
    ctx->pc = 0x412cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
label_412ce0:
    // 0x412ce0: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x412ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_412ce4:
    // 0x412ce4: 0x8c640118  lw          $a0, 0x118($v1)
    ctx->pc = 0x412ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_412ce8:
    // 0x412ce8: 0x1082002a  beq         $a0, $v0, . + 4 + (0x2A << 2)
label_412cec:
    if (ctx->pc == 0x412CECu) {
        ctx->pc = 0x412CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412CE8u;
        // 0x412cec: 0x8f82ad58  lw          $v0, -0x52A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412CF0u;
        goto label_412cf0;
    }
    ctx->pc = 0x412CE8u;
    {
        const bool branch_taken_0x412ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x412CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412CE8u;
        // 0x412cec: 0x8f82ad58  lw          $v0, -0x52A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412ce8) {
            ctx->pc = 0x412D94u;
            goto label_412d94;
        }
    }
    ctx->pc = 0x412CF0u;
label_412cf0:
    // 0x412cf0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_412cf4:
    if (ctx->pc == 0x412CF4u) {
        ctx->pc = 0x412CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412CF0u;
        // 0x412cf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412CF8u;
        goto label_412cf8;
    }
    ctx->pc = 0x412CF0u;
    {
        const bool branch_taken_0x412cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x412CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412CF0u;
        // 0x412cf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412cf0) {
            ctx->pc = 0x412D78u;
            goto label_412d78;
        }
    }
    ctx->pc = 0x412CF8u;
label_412cf8:
    // 0x412cf8: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x412cf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_412cfc:
    // 0x412cfc: 0x8f84ad54  lw          $a0, -0x52AC($gp)
    ctx->pc = 0x412cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946132)));
label_412d00:
    // 0x412d00: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x412d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_412d04:
    // 0x412d04: 0x24b30001  addiu       $s3, $a1, 0x1
    ctx->pc = 0x412d04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_412d08:
    // 0x412d08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x412d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_412d0c:
    // 0x412d0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x412d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_412d10:
    // 0x412d10: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x412d10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_412d14:
    // 0x412d14: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_412d18:
    if (ctx->pc == 0x412D18u) {
        ctx->pc = 0x412D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D14u;
        // 0x412d18: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412D1Cu;
        goto label_412d1c;
    }
    ctx->pc = 0x412D14u;
    {
        const bool branch_taken_0x412d14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x412D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D14u;
        // 0x412d18: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412d14) {
            ctx->pc = 0x412D40u;
            goto label_412d40;
        }
    }
    ctx->pc = 0x412D1Cu;
label_412d1c:
    // 0x412d1c: 0x8e110038  lw          $s1, 0x38($s0)
    ctx->pc = 0x412d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_412d20:
    // 0x412d20: 0x2692e880  addiu       $s2, $s4, -0x1780
    ctx->pc = 0x412d20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
label_412d24:
    // 0x412d24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x412d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_412d28:
    // 0x412d28: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x412d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_412d2c:
    // 0x412d2c: 0x8e100030  lw          $s0, 0x30($s0)
    ctx->pc = 0x412d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_412d30:
    // 0x412d30: 0x40f809  jalr        $v0
label_412d34:
    if (ctx->pc == 0x412D34u) {
        ctx->pc = 0x412D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D30u;
        // 0x412d34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412D38u;
        goto label_412d38;
    }
    ctx->pc = 0x412D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x412D38u);
        ctx->pc = 0x412D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D30u;
        // 0x412d34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412D30u, 0x412D38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412D38u;
label_412d38:
    // 0x412d38: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
label_412d3c:
    if (ctx->pc == 0x412D3Cu) {
        ctx->pc = 0x412D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D38u;
        // 0x412d3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412D40u;
        goto label_412d40;
    }
    ctx->pc = 0x412D38u;
    {
        const bool branch_taken_0x412d38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x412D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D38u;
        // 0x412d3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412d38) {
            ctx->pc = 0x412D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412d28;
        }
    }
    ctx->pc = 0x412D40u;
label_412d40:
    // 0x412d40: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_412d44:
    if (ctx->pc == 0x412D44u) {
        ctx->pc = 0x412D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D40u;
        // 0x412d44: 0x8f82ad58  lw          $v0, -0x52A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412D48u;
        goto label_412d48;
    }
    ctx->pc = 0x412D40u;
    {
        const bool branch_taken_0x412d40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x412D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D40u;
        // 0x412d44: 0x8f82ad58  lw          $v0, -0x52A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412d40) {
            ctx->pc = 0x412D68u;
            goto label_412d68;
        }
    }
    ctx->pc = 0x412D48u;
label_412d48:
    // 0x412d48: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x412d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_412d4c:
    // 0x412d4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_412d50:
    if (ctx->pc == 0x412D50u) {
        ctx->pc = 0x412D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D4Cu;
        // 0x412d50: 0x8f82ad58  lw          $v0, -0x52A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412D54u;
        goto label_412d54;
    }
    ctx->pc = 0x412D4Cu;
    {
        const bool branch_taken_0x412d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x412D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D4Cu;
        // 0x412d50: 0x8f82ad58  lw          $v0, -0x52A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412d4c) {
            ctx->pc = 0x412D68u;
            goto label_412d68;
        }
    }
    ctx->pc = 0x412D54u;
label_412d54:
    // 0x412d54: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x412d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_412d58:
    // 0x412d58: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x412d58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_412d5c:
    // 0x412d5c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x412d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_412d60:
    // 0x412d60: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x412d60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_412d64:
    // 0x412d64: 0x8f82ad58  lw          $v0, -0x52A8($gp)
    ctx->pc = 0x412d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946136)));
label_412d68:
    // 0x412d68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x412d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_412d6c:
    // 0x412d6c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x412d6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_412d70:
    // 0x412d70: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_412d74:
    if (ctx->pc == 0x412D74u) {
        ctx->pc = 0x412D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D70u;
        // 0x412d74: 0x8f84ad54  lw          $a0, -0x52AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412D78u;
        goto label_412d78;
    }
    ctx->pc = 0x412D70u;
    {
        const bool branch_taken_0x412d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x412D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D70u;
        // 0x412d74: 0x8f84ad54  lw          $a0, -0x52AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412d70) {
            ctx->pc = 0x412D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412d00;
        }
    }
    ctx->pc = 0x412D78u;
label_412d78:
    // 0x412d78: 0x8f84ad54  lw          $a0, -0x52AC($gp)
    ctx->pc = 0x412d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946132)));
label_412d7c:
    // 0x412d7c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_412d80:
    if (ctx->pc == 0x412D80u) {
        ctx->pc = 0x412D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D7Cu;
        // 0x412d80: 0x26a3e880  addiu       $v1, $s5, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412D84u;
        goto label_412d84;
    }
    ctx->pc = 0x412D7Cu;
    {
        const bool branch_taken_0x412d7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x412D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D7Cu;
        // 0x412d80: 0x26a3e880  addiu       $v1, $s5, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412d7c) {
            ctx->pc = 0x412D94u;
            goto label_412d94;
        }
    }
    ctx->pc = 0x412D84u;
label_412d84:
    // 0x412d84: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x412d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_412d88:
    // 0x412d88: 0x40f809  jalr        $v0
label_412d8c:
    if (ctx->pc == 0x412D8Cu) {
        ctx->pc = 0x412D90u;
        goto label_412d90;
    }
    ctx->pc = 0x412D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x412D90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412D88u, 0x412D90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412D90u;
label_412d90:
    // 0x412d90: 0xaf80ad54  sw          $zero, -0x52AC($gp)
    ctx->pc = 0x412d90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946132), GPR_U32(ctx, 0));
label_412d94:
    // 0x412d94: 0xc104284  jal         func_410A10
label_412d98:
    if (ctx->pc == 0x412D98u) {
        ctx->pc = 0x412D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412D94u;
        // 0x412d98: 0x8f84bde0  lw          $a0, -0x4220($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412D9Cu;
        goto label_412d9c;
    }
    ctx->pc = 0x412D94u;
    SET_GPR_U32(ctx, 31, 0x412D9Cu);
    ctx->pc = 0x412D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412D94u;
    // 0x412d98: 0x8f84bde0  lw          $a0, -0x4220($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x412D94u, 0x412D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412D9Cu;
label_412d9c:
    // 0x412d9c: 0xaf80bde0  sw          $zero, -0x4220($gp)
    ctx->pc = 0x412d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950368), GPR_U32(ctx, 0));
label_412da0:
    // 0x412da0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x412da0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_412da4:
    // 0x412da4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x412da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_412da8:
    // 0x412da8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x412da8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_412dac:
    // 0x412dac: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x412dacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_412db0:
    // 0x412db0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x412db0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_412db4:
    // 0x412db4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x412db4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_412db8:
    // 0x412db8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x412db8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_412dbc:
    // 0x412dbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x412dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_412dc0:
    // 0x412dc0: 0x3e00008  jr          $ra
label_412dc4:
    if (ctx->pc == 0x412DC4u) {
        ctx->pc = 0x412DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412DC0u;
        // 0x412dc4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412DC8u;
        goto label_fallthrough_0x412dc0;
    }
    ctx->pc = 0x412DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412DC0u;
        // 0x412dc4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x412dc0:
    ctx->pc = 0x412DC8u;
}
