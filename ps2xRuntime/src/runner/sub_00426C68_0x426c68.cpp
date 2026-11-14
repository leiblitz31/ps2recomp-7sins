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

// Function: sub_00426C68
// Address: 0x426c68 - 0x426d90
void sub_00426C68_0x426c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00426C68_0x426c68");
#endif

    switch (ctx->pc) {
        case 0x426c68u: goto label_426c68;
        case 0x426c6cu: goto label_426c6c;
        case 0x426c70u: goto label_426c70;
        case 0x426c74u: goto label_426c74;
        case 0x426c78u: goto label_426c78;
        case 0x426c7cu: goto label_426c7c;
        case 0x426c80u: goto label_426c80;
        case 0x426c84u: goto label_426c84;
        case 0x426c88u: goto label_426c88;
        case 0x426c8cu: goto label_426c8c;
        case 0x426c90u: goto label_426c90;
        case 0x426c94u: goto label_426c94;
        case 0x426c98u: goto label_426c98;
        case 0x426c9cu: goto label_426c9c;
        case 0x426ca0u: goto label_426ca0;
        case 0x426ca4u: goto label_426ca4;
        case 0x426ca8u: goto label_426ca8;
        case 0x426cacu: goto label_426cac;
        case 0x426cb0u: goto label_426cb0;
        case 0x426cb4u: goto label_426cb4;
        case 0x426cb8u: goto label_426cb8;
        case 0x426cbcu: goto label_426cbc;
        case 0x426cc0u: goto label_426cc0;
        case 0x426cc4u: goto label_426cc4;
        case 0x426cc8u: goto label_426cc8;
        case 0x426cccu: goto label_426ccc;
        case 0x426cd0u: goto label_426cd0;
        case 0x426cd4u: goto label_426cd4;
        case 0x426cd8u: goto label_426cd8;
        case 0x426cdcu: goto label_426cdc;
        case 0x426ce0u: goto label_426ce0;
        case 0x426ce4u: goto label_426ce4;
        case 0x426ce8u: goto label_426ce8;
        case 0x426cecu: goto label_426cec;
        case 0x426cf0u: goto label_426cf0;
        case 0x426cf4u: goto label_426cf4;
        case 0x426cf8u: goto label_426cf8;
        case 0x426cfcu: goto label_426cfc;
        case 0x426d00u: goto label_426d00;
        case 0x426d04u: goto label_426d04;
        case 0x426d08u: goto label_426d08;
        case 0x426d0cu: goto label_426d0c;
        case 0x426d10u: goto label_426d10;
        case 0x426d14u: goto label_426d14;
        case 0x426d18u: goto label_426d18;
        case 0x426d1cu: goto label_426d1c;
        case 0x426d20u: goto label_426d20;
        case 0x426d24u: goto label_426d24;
        case 0x426d28u: goto label_426d28;
        case 0x426d2cu: goto label_426d2c;
        case 0x426d30u: goto label_426d30;
        case 0x426d34u: goto label_426d34;
        case 0x426d38u: goto label_426d38;
        case 0x426d3cu: goto label_426d3c;
        case 0x426d40u: goto label_426d40;
        case 0x426d44u: goto label_426d44;
        case 0x426d48u: goto label_426d48;
        case 0x426d4cu: goto label_426d4c;
        case 0x426d50u: goto label_426d50;
        case 0x426d54u: goto label_426d54;
        case 0x426d58u: goto label_426d58;
        case 0x426d5cu: goto label_426d5c;
        case 0x426d60u: goto label_426d60;
        case 0x426d64u: goto label_426d64;
        case 0x426d68u: goto label_426d68;
        case 0x426d6cu: goto label_426d6c;
        case 0x426d70u: goto label_426d70;
        case 0x426d74u: goto label_426d74;
        case 0x426d78u: goto label_426d78;
        case 0x426d7cu: goto label_426d7c;
        case 0x426d80u: goto label_426d80;
        case 0x426d84u: goto label_426d84;
        case 0x426d88u: goto label_426d88;
        case 0x426d8cu: goto label_426d8c;
        default: break;
    }

    ctx->pc = 0x426c68u;

label_426c68:
    // 0x426c68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x426c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_426c6c:
    // 0x426c6c: 0x8f83add0  lw          $v1, -0x5230($gp)
    ctx->pc = 0x426c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
label_426c70:
    // 0x426c70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x426c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_426c74:
    // 0x426c74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x426c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_426c78:
    // 0x426c78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x426c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_426c7c:
    // 0x426c7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x426c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_426c80:
    // 0x426c80: 0x625804  sllv        $t3, $v0, $v1
    ctx->pc = 0x426c80u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_426c84:
    // 0x426c84: 0x1160001c  beqz        $t3, . + 4 + (0x1C << 2)
label_426c88:
    if (ctx->pc == 0x426C88u) {
        ctx->pc = 0x426C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426C84u;
        // 0x426c88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x426C8Cu;
        goto label_426c8c;
    }
    ctx->pc = 0x426C84u;
    {
        const bool branch_taken_0x426c84 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x426C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426C84u;
        // 0x426c88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426c84) {
            ctx->pc = 0x426CF8u;
            goto label_426cf8;
        }
    }
    ctx->pc = 0x426C8Cu;
label_426c8c:
    // 0x426c8c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x426c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_426c90:
    // 0x426c90: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x426c90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_426c94:
    // 0x426c94: 0x244c2970  addiu       $t4, $v0, 0x2970
    ctx->pc = 0x426c94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 10608));
label_426c98:
    // 0x426c98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x426c98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_426c9c:
    // 0x426c9c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x426c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_426ca0:
    // 0x426ca0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x426ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_426ca4:
    // 0x426ca4: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x426ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_426ca8:
    // 0x426ca8: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_426cac:
    if (ctx->pc == 0x426CACu) {
        ctx->pc = 0x426CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426CA8u;
        // 0x426cac: 0x24c90001  addiu       $t1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x426CB0u;
        goto label_426cb0;
    }
    ctx->pc = 0x426CA8u;
    {
        const bool branch_taken_0x426ca8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x426CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426CA8u;
        // 0x426cac: 0x24c90001  addiu       $t1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426ca8) {
            ctx->pc = 0x426CE4u;
            goto label_426ce4;
        }
    }
    ctx->pc = 0x426CB0u;
label_426cb0:
    // 0x426cb0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x426cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_426cb4:
    // 0x426cb4: 0x871004  sllv        $v0, $a3, $a0
    ctx->pc = 0x426cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
label_426cb8:
    // 0x426cb8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x426cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_426cbc:
    // 0x426cbc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_426cc0:
    if (ctx->pc == 0x426CC0u) {
        ctx->pc = 0x426CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426CBCu;
        // 0x426cc0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x426CC4u;
        goto label_426cc4;
    }
    ctx->pc = 0x426CBCu;
    {
        const bool branch_taken_0x426cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x426CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426CBCu;
        // 0x426cc0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426cbc) {
            ctx->pc = 0x426CD4u;
            goto label_426cd4;
        }
    }
    ctx->pc = 0x426CC4u;
label_426cc4:
    // 0x426cc4: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x426cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_426cc8:
    // 0x426cc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x426cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_426ccc:
    // 0x426ccc: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x426cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_426cd0:
    // 0x426cd0: 0x484025  or          $t0, $v0, $t0
    ctx->pc = 0x426cd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_426cd4:
    // 0x426cd4: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x426cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_426cd8:
    // 0x426cd8: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x426cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_426cdc:
    // 0x426cdc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_426ce0:
    if (ctx->pc == 0x426CE0u) {
        ctx->pc = 0x426CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426CDCu;
        // 0x426ce0: 0x871004  sllv        $v0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x426CE4u;
        goto label_426ce4;
    }
    ctx->pc = 0x426CDCu;
    {
        const bool branch_taken_0x426cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x426CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426CDCu;
        // 0x426ce0: 0x871004  sllv        $v0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426cdc) {
            ctx->pc = 0x426CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_426cb8;
        }
    }
    ctx->pc = 0x426CE4u;
label_426ce4:
    // 0x426ce4: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x426ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_426ce8:
    // 0x426ce8: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x426ce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_426cec:
    // 0x426cec: 0xcb102b  sltu        $v0, $a2, $t3
    ctx->pc = 0x426cecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_426cf0:
    // 0x426cf0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_426cf4:
    if (ctx->pc == 0x426CF4u) {
        ctx->pc = 0x426CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426CF0u;
        // 0x426cf4: 0xfc680000  sd          $t0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x426CF8u;
        goto label_426cf8;
    }
    ctx->pc = 0x426CF0u;
    {
        const bool branch_taken_0x426cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x426CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426CF0u;
        // 0x426cf4: 0xfc680000  sd          $t0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426cf0) {
            ctx->pc = 0x426C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_426c98;
        }
    }
    ctx->pc = 0x426CF8u;
label_426cf8:
    // 0x426cf8: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x426cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_426cfc:
    // 0x426cfc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x426cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_426d00:
    // 0x426d00: 0x34e70411  ori         $a3, $a3, 0x411
    ctx->pc = 0x426d00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1041);
label_426d04:
    // 0x426d04: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x426d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_426d08:
    // 0x426d08: 0xc103fb2  jal         func_40FEC8
label_426d0c:
    if (ctx->pc == 0x426D0Cu) {
        ctx->pc = 0x426D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426D08u;
        // 0x426d0c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x426D10u;
        goto label_426d10;
    }
    ctx->pc = 0x426D08u;
    SET_GPR_U32(ctx, 31, 0x426D10u);
    ctx->pc = 0x426D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426D08u;
    // 0x426d0c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40FEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FEC8u, 0x426D08u, 0x426D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426D10u;
label_426d10:
    // 0x426d10: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x426d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_426d14:
    // 0x426d14: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x426d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_426d18:
    // 0x426d18: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x426d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_426d1c:
    // 0x426d1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x426d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_426d20:
    // 0x426d20: 0x8c660118  lw          $a2, 0x118($v1)
    ctx->pc = 0x426d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_426d24:
    // 0x426d24: 0x34a50411  ori         $a1, $a1, 0x411
    ctx->pc = 0x426d24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
label_426d28:
    // 0x426d28: 0xc0f809  jalr        $a2
label_426d2c:
    if (ctx->pc == 0x426D2Cu) {
        ctx->pc = 0x426D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426D28u;
        // 0x426d2c: 0xae024004  sw          $v0, 0x4004($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x426D30u;
        goto label_426d30;
    }
    ctx->pc = 0x426D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x426D30u);
        ctx->pc = 0x426D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426D28u;
        // 0x426d2c: 0xae024004  sw          $v0, 0x4004($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x426D28u, 0x426D30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x426D30u;
label_426d30:
    // 0x426d30: 0x24430058  addiu       $v1, $v0, 0x58
    ctx->pc = 0x426d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_426d34:
    // 0x426d34: 0xae024000  sw          $v0, 0x4000($s0)
    ctx->pc = 0x426d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16384), GPR_U32(ctx, 2));
label_426d38:
    // 0x426d38: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x426d38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_426d3c:
    // 0x426d3c: 0xac60ffc4  sw          $zero, -0x3C($v1)
    ctx->pc = 0x426d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967236), GPR_U32(ctx, 0));
label_426d40:
    // 0x426d40: 0xac60fffc  sw          $zero, -0x4($v1)
    ctx->pc = 0x426d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 0));
label_426d44:
    // 0x426d44: 0xac60fff8  sw          $zero, -0x8($v1)
    ctx->pc = 0x426d44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), GPR_U32(ctx, 0));
label_426d48:
    // 0x426d48: 0xac60fff4  sw          $zero, -0xC($v1)
    ctx->pc = 0x426d48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 0));
label_426d4c:
    // 0x426d4c: 0xac60fff0  sw          $zero, -0x10($v1)
    ctx->pc = 0x426d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967280), GPR_U32(ctx, 0));
label_426d50:
    // 0x426d50: 0xac60ffec  sw          $zero, -0x14($v1)
    ctx->pc = 0x426d50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967276), GPR_U32(ctx, 0));
label_426d54:
    // 0x426d54: 0xac60ffe8  sw          $zero, -0x18($v1)
    ctx->pc = 0x426d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967272), GPR_U32(ctx, 0));
label_426d58:
    // 0x426d58: 0xac60ffe4  sw          $zero, -0x1C($v1)
    ctx->pc = 0x426d58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967268), GPR_U32(ctx, 0));
label_426d5c:
    // 0x426d5c: 0xac60ffe0  sw          $zero, -0x20($v1)
    ctx->pc = 0x426d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967264), GPR_U32(ctx, 0));
label_426d60:
    // 0x426d60: 0xac60ffdc  sw          $zero, -0x24($v1)
    ctx->pc = 0x426d60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967260), GPR_U32(ctx, 0));
label_426d64:
    // 0x426d64: 0xac60ffd8  sw          $zero, -0x28($v1)
    ctx->pc = 0x426d64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967256), GPR_U32(ctx, 0));
label_426d68:
    // 0x426d68: 0xac60ffd4  sw          $zero, -0x2C($v1)
    ctx->pc = 0x426d68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967252), GPR_U32(ctx, 0));
label_426d6c:
    // 0x426d6c: 0xac60ffd0  sw          $zero, -0x30($v1)
    ctx->pc = 0x426d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967248), GPR_U32(ctx, 0));
label_426d70:
    // 0x426d70: 0xac60ffcc  sw          $zero, -0x34($v1)
    ctx->pc = 0x426d70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967244), GPR_U32(ctx, 0));
label_426d74:
    // 0x426d74: 0xac60ffc8  sw          $zero, -0x38($v1)
    ctx->pc = 0x426d74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967240), GPR_U32(ctx, 0));
label_426d78:
    // 0x426d78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x426d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_426d7c:
    // 0x426d7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x426d7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_426d80:
    // 0x426d80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x426d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_426d84:
    // 0x426d84: 0x3e00008  jr          $ra
label_426d88:
    if (ctx->pc == 0x426D88u) {
        ctx->pc = 0x426D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426D84u;
        // 0x426d88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x426D8Cu;
        goto label_426d8c;
    }
    ctx->pc = 0x426D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x426D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426D84u;
        // 0x426d88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x426D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x426D8Cu;
label_426d8c:
    // 0x426d8c: 0x0  nop
    ctx->pc = 0x426d8cu;
    // NOP
    ctx->pc = 0x426d90u;
}
