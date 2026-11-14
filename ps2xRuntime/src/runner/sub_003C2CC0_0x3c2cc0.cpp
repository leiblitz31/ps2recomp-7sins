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

// Function: sub_003C2CC0
// Address: 0x3c2cc0 - 0x3c2e20
void sub_003C2CC0_0x3c2cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2CC0_0x3c2cc0");
#endif

    switch (ctx->pc) {
        case 0x3c2cc0u: goto label_3c2cc0;
        case 0x3c2cc4u: goto label_3c2cc4;
        case 0x3c2cc8u: goto label_3c2cc8;
        case 0x3c2cccu: goto label_3c2ccc;
        case 0x3c2cd0u: goto label_3c2cd0;
        case 0x3c2cd4u: goto label_3c2cd4;
        case 0x3c2cd8u: goto label_3c2cd8;
        case 0x3c2cdcu: goto label_3c2cdc;
        case 0x3c2ce0u: goto label_3c2ce0;
        case 0x3c2ce4u: goto label_3c2ce4;
        case 0x3c2ce8u: goto label_3c2ce8;
        case 0x3c2cecu: goto label_3c2cec;
        case 0x3c2cf0u: goto label_3c2cf0;
        case 0x3c2cf4u: goto label_3c2cf4;
        case 0x3c2cf8u: goto label_3c2cf8;
        case 0x3c2cfcu: goto label_3c2cfc;
        case 0x3c2d00u: goto label_3c2d00;
        case 0x3c2d04u: goto label_3c2d04;
        case 0x3c2d08u: goto label_3c2d08;
        case 0x3c2d0cu: goto label_3c2d0c;
        case 0x3c2d10u: goto label_3c2d10;
        case 0x3c2d14u: goto label_3c2d14;
        case 0x3c2d18u: goto label_3c2d18;
        case 0x3c2d1cu: goto label_3c2d1c;
        case 0x3c2d20u: goto label_3c2d20;
        case 0x3c2d24u: goto label_3c2d24;
        case 0x3c2d28u: goto label_3c2d28;
        case 0x3c2d2cu: goto label_3c2d2c;
        case 0x3c2d30u: goto label_3c2d30;
        case 0x3c2d34u: goto label_3c2d34;
        case 0x3c2d38u: goto label_3c2d38;
        case 0x3c2d3cu: goto label_3c2d3c;
        case 0x3c2d40u: goto label_3c2d40;
        case 0x3c2d44u: goto label_3c2d44;
        case 0x3c2d48u: goto label_3c2d48;
        case 0x3c2d4cu: goto label_3c2d4c;
        case 0x3c2d50u: goto label_3c2d50;
        case 0x3c2d54u: goto label_3c2d54;
        case 0x3c2d58u: goto label_3c2d58;
        case 0x3c2d5cu: goto label_3c2d5c;
        case 0x3c2d60u: goto label_3c2d60;
        case 0x3c2d64u: goto label_3c2d64;
        case 0x3c2d68u: goto label_3c2d68;
        case 0x3c2d6cu: goto label_3c2d6c;
        case 0x3c2d70u: goto label_3c2d70;
        case 0x3c2d74u: goto label_3c2d74;
        case 0x3c2d78u: goto label_3c2d78;
        case 0x3c2d7cu: goto label_3c2d7c;
        case 0x3c2d80u: goto label_3c2d80;
        case 0x3c2d84u: goto label_3c2d84;
        case 0x3c2d88u: goto label_3c2d88;
        case 0x3c2d8cu: goto label_3c2d8c;
        case 0x3c2d90u: goto label_3c2d90;
        case 0x3c2d94u: goto label_3c2d94;
        case 0x3c2d98u: goto label_3c2d98;
        case 0x3c2d9cu: goto label_3c2d9c;
        case 0x3c2da0u: goto label_3c2da0;
        case 0x3c2da4u: goto label_3c2da4;
        case 0x3c2da8u: goto label_3c2da8;
        case 0x3c2dacu: goto label_3c2dac;
        case 0x3c2db0u: goto label_3c2db0;
        case 0x3c2db4u: goto label_3c2db4;
        case 0x3c2db8u: goto label_3c2db8;
        case 0x3c2dbcu: goto label_3c2dbc;
        case 0x3c2dc0u: goto label_3c2dc0;
        case 0x3c2dc4u: goto label_3c2dc4;
        case 0x3c2dc8u: goto label_3c2dc8;
        case 0x3c2dccu: goto label_3c2dcc;
        case 0x3c2dd0u: goto label_3c2dd0;
        case 0x3c2dd4u: goto label_3c2dd4;
        case 0x3c2dd8u: goto label_3c2dd8;
        case 0x3c2ddcu: goto label_3c2ddc;
        case 0x3c2de0u: goto label_3c2de0;
        case 0x3c2de4u: goto label_3c2de4;
        case 0x3c2de8u: goto label_3c2de8;
        case 0x3c2decu: goto label_3c2dec;
        case 0x3c2df0u: goto label_3c2df0;
        case 0x3c2df4u: goto label_3c2df4;
        case 0x3c2df8u: goto label_3c2df8;
        case 0x3c2dfcu: goto label_3c2dfc;
        case 0x3c2e00u: goto label_3c2e00;
        case 0x3c2e04u: goto label_3c2e04;
        case 0x3c2e08u: goto label_3c2e08;
        case 0x3c2e0cu: goto label_3c2e0c;
        case 0x3c2e10u: goto label_3c2e10;
        case 0x3c2e14u: goto label_3c2e14;
        case 0x3c2e18u: goto label_3c2e18;
        case 0x3c2e1cu: goto label_3c2e1c;
        default: break;
    }

    ctx->pc = 0x3c2cc0u;

label_3c2cc0:
    // 0x3c2cc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c2cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3c2cc4:
    // 0x3c2cc4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3c2cc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c2cc8:
    // 0x3c2cc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c2cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3c2ccc:
    // 0x3c2ccc: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x3c2cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3c2cd0:
    // 0x3c2cd0: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x3c2cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3c2cd4:
    // 0x3c2cd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3c2cd8:
    if (ctx->pc == 0x3C2CD8u) {
        ctx->pc = 0x3C2CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2CD4u;
        // 0x3c2cd8: 0x24650028  addiu       $a1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2CDCu;
        goto label_3c2cdc;
    }
    ctx->pc = 0x3C2CD4u;
    {
        const bool branch_taken_0x3c2cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2CD4u;
        // 0x3c2cd8: 0x24650028  addiu       $a1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2cd4) {
            ctx->pc = 0x3C2CECu;
            goto label_3c2cec;
        }
    }
    ctx->pc = 0x3C2CDCu;
label_3c2cdc:
    // 0x3c2cdc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3c2cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c2ce0:
    // 0x3c2ce0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c2ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c2ce4:
    // 0x3c2ce4: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x3c2ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_3c2ce8:
    // 0x3c2ce8: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x3c2ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
label_3c2cec:
    // 0x3c2cec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c2cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c2cf0:
    // 0x3c2cf0: 0x10c2000b  beq         $a2, $v0, . + 4 + (0xB << 2)
label_3c2cf4:
    if (ctx->pc == 0x3C2CF4u) {
        ctx->pc = 0x3C2CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2CF0u;
        // 0x3c2cf4: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2CF8u;
        goto label_3c2cf8;
    }
    ctx->pc = 0x3C2CF0u;
    {
        const bool branch_taken_0x3c2cf0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C2CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2CF0u;
        // 0x3c2cf4: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2cf0) {
            ctx->pc = 0x3C2D20u;
            goto label_3c2d20;
        }
    }
    ctx->pc = 0x3C2CF8u;
label_3c2cf8:
    // 0x3c2cf8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3c2cfc:
    if (ctx->pc == 0x3C2CFCu) {
        ctx->pc = 0x3C2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2CF8u;
        // 0x3c2cfc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2D00u;
        goto label_3c2d00;
    }
    ctx->pc = 0x3C2CF8u;
    {
        const bool branch_taken_0x3c2cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2cf8) {
            ctx->pc = 0x3C2CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2CF8u;
            // 0x3c2cfc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2D10u;
            goto label_3c2d10;
        }
    }
    ctx->pc = 0x3C2D00u;
label_3c2d00:
    // 0x3c2d00: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
label_3c2d04:
    if (ctx->pc == 0x3C2D04u) {
        ctx->pc = 0x3C2D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2D00u;
        // 0x3c2d04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2D08u;
        goto label_3c2d08;
    }
    ctx->pc = 0x3C2D00u;
    {
        const bool branch_taken_0x3c2d00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2D00u;
        // 0x3c2d04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2d00) {
            ctx->pc = 0x3C2D68u;
            goto label_3c2d68;
        }
    }
    ctx->pc = 0x3C2D08u;
label_3c2d08:
    // 0x3c2d08: 0x10000020  b           . + 4 + (0x20 << 2)
label_3c2d0c:
    if (ctx->pc == 0x3C2D0Cu) {
        ctx->pc = 0x3C2D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2D08u;
        // 0x3c2d0c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2D10u;
        goto label_3c2d10;
    }
    ctx->pc = 0x3C2D08u;
    {
        const bool branch_taken_0x3c2d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2D08u;
        // 0x3c2d0c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2d08) {
            ctx->pc = 0x3C2D8Cu;
            goto label_3c2d8c;
        }
    }
    ctx->pc = 0x3C2D10u;
label_3c2d10:
    // 0x3c2d10: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
label_3c2d14:
    if (ctx->pc == 0x3C2D14u) {
        ctx->pc = 0x3C2D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2D10u;
        // 0x3c2d14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2D18u;
        goto label_3c2d18;
    }
    ctx->pc = 0x3C2D10u;
    {
        const bool branch_taken_0x3c2d10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C2D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2D10u;
        // 0x3c2d14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2d10) {
            ctx->pc = 0x3C2D44u;
            goto label_3c2d44;
        }
    }
    ctx->pc = 0x3C2D18u;
label_3c2d18:
    // 0x3c2d18: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3c2d1c:
    if (ctx->pc == 0x3C2D1Cu) {
        ctx->pc = 0x3C2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2D18u;
        // 0x3c2d1c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2D20u;
        goto label_3c2d20;
    }
    ctx->pc = 0x3C2D18u;
    {
        const bool branch_taken_0x3c2d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2D18u;
        // 0x3c2d1c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2d18) {
            ctx->pc = 0x3C2D8Cu;
            goto label_3c2d8c;
        }
    }
    ctx->pc = 0x3C2D20u;
label_3c2d20:
    // 0x3c2d20: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x3c2d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_3c2d24:
    // 0x3c2d24: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x3c2d24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
label_3c2d28:
    // 0x3c2d28: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3c2d28u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_3c2d2c:
    // 0x3c2d2c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3c2d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c2d30:
    // 0x3c2d30: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3c2d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c2d34:
    // 0x3c2d34: 0x40f809  jalr        $v0
label_3c2d38:
    if (ctx->pc == 0x3C2D38u) {
        ctx->pc = 0x3C2D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2D34u;
        // 0x3c2d38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2D3Cu;
        goto label_3c2d3c;
    }
    ctx->pc = 0x3C2D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2D3Cu);
        ctx->pc = 0x3C2D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2D34u;
        // 0x3c2d38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2D34u, 0x3C2D3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2D3Cu;
label_3c2d3c:
    // 0x3c2d3c: 0x10000012  b           . + 4 + (0x12 << 2)
label_3c2d40:
    if (ctx->pc == 0x3C2D40u) {
        ctx->pc = 0x3C2D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2D3Cu;
        // 0x3c2d40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2D44u;
        goto label_3c2d44;
    }
    ctx->pc = 0x3C2D3Cu;
    {
        const bool branch_taken_0x3c2d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2D3Cu;
        // 0x3c2d40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2d3c) {
            ctx->pc = 0x3C2D88u;
            goto label_3c2d88;
        }
    }
    ctx->pc = 0x3C2D44u;
label_3c2d44:
    // 0x3c2d44: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x3c2d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_3c2d48:
    // 0x3c2d48: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x3c2d48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
label_3c2d4c:
    // 0x3c2d4c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3c2d4cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_3c2d50:
    // 0x3c2d50: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3c2d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c2d54:
    // 0x3c2d54: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3c2d54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c2d58:
    // 0x3c2d58: 0x40f809  jalr        $v0
label_3c2d5c:
    if (ctx->pc == 0x3C2D5Cu) {
        ctx->pc = 0x3C2D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2D58u;
        // 0x3c2d5c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2D60u;
        goto label_3c2d60;
    }
    ctx->pc = 0x3C2D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2D60u);
        ctx->pc = 0x3C2D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2D58u;
        // 0x3c2d5c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2D58u, 0x3C2D60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2D60u;
label_3c2d60:
    // 0x3c2d60: 0x10000009  b           . + 4 + (0x9 << 2)
label_3c2d64:
    if (ctx->pc == 0x3C2D64u) {
        ctx->pc = 0x3C2D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2D60u;
        // 0x3c2d64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2D68u;
        goto label_3c2d68;
    }
    ctx->pc = 0x3C2D60u;
    {
        const bool branch_taken_0x3c2d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2D60u;
        // 0x3c2d64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2d60) {
            ctx->pc = 0x3C2D88u;
            goto label_3c2d88;
        }
    }
    ctx->pc = 0x3C2D68u;
label_3c2d68:
    // 0x3c2d68: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x3c2d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_3c2d6c:
    // 0x3c2d6c: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x3c2d6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
label_3c2d70:
    // 0x3c2d70: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3c2d70u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_3c2d74:
    // 0x3c2d74: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3c2d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c2d78:
    // 0x3c2d78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3c2d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c2d7c:
    // 0x3c2d7c: 0x40f809  jalr        $v0
label_3c2d80:
    if (ctx->pc == 0x3C2D80u) {
        ctx->pc = 0x3C2D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2D7Cu;
        // 0x3c2d80: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2D84u;
        goto label_3c2d84;
    }
    ctx->pc = 0x3C2D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2D84u);
        ctx->pc = 0x3C2D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2D7Cu;
        // 0x3c2d80: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2D7Cu, 0x3C2D84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2D84u;
label_3c2d84:
    // 0x3c2d84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c2d84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c2d88:
    // 0x3c2d88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c2d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3c2d8c:
    // 0x3c2d8c: 0x3e00008  jr          $ra
label_3c2d90:
    if (ctx->pc == 0x3C2D90u) {
        ctx->pc = 0x3C2D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2D8Cu;
        // 0x3c2d90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2D94u;
        goto label_3c2d94;
    }
    ctx->pc = 0x3C2D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2D8Cu;
        // 0x3c2d90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2D94u;
label_3c2d94:
    // 0x3c2d94: 0x0  nop
    ctx->pc = 0x3c2d94u;
    // NOP
label_3c2d98:
    // 0x3c2d98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c2d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3c2d9c:
    // 0x3c2d9c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3c2d9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c2da0:
    // 0x3c2da0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c2da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3c2da4:
    // 0x3c2da4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3c2da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c2da8:
    // 0x3c2da8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c2da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c2dac:
    // 0x3c2dac: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x3c2dacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_3c2db0:
    // 0x3c2db0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3c2db4:
    if (ctx->pc == 0x3C2DB4u) {
        ctx->pc = 0x3C2DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2DB0u;
        // 0x3c2db4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2DB8u;
        goto label_3c2db8;
    }
    ctx->pc = 0x3C2DB0u;
    {
        const bool branch_taken_0x3c2db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2DB0u;
        // 0x3c2db4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2db0) {
            ctx->pc = 0x3C2DDCu;
            goto label_3c2ddc;
        }
    }
    ctx->pc = 0x3C2DB8u;
label_3c2db8:
    // 0x3c2db8: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3c2db8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3c2dbc:
    // 0x3c2dbc: 0x0  nop
    ctx->pc = 0x3c2dbcu;
    // NOP
label_3c2dc0:
    // 0x3c2dc0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c2dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3c2dc4:
    // 0x3c2dc4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3c2dc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3c2dc8:
    // 0x3c2dc8: 0x0  nop
    ctx->pc = 0x3c2dc8u;
    // NOP
label_3c2dcc:
    // 0x3c2dcc: 0x0  nop
    ctx->pc = 0x3c2dccu;
    // NOP
label_3c2dd0:
    // 0x3c2dd0: 0x0  nop
    ctx->pc = 0x3c2dd0u;
    // NOP
label_3c2dd4:
    // 0x3c2dd4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3c2dd8:
    if (ctx->pc == 0x3C2DD8u) {
        ctx->pc = 0x3C2DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2DD4u;
        // 0x3c2dd8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2DDCu;
        goto label_3c2ddc;
    }
    ctx->pc = 0x3C2DD4u;
    {
        const bool branch_taken_0x3c2dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2DD4u;
        // 0x3c2dd8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2dd4) {
            ctx->pc = 0x3C2DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2dc0;
        }
    }
    ctx->pc = 0x3C2DDCu;
label_3c2ddc:
    // 0x3c2ddc: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
label_3c2de0:
    if (ctx->pc == 0x3C2DE0u) {
        ctx->pc = 0x3C2DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2DDCu;
        // 0x3c2de0: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2DE4u;
        goto label_3c2de4;
    }
    ctx->pc = 0x3C2DDCu;
    {
        const bool branch_taken_0x3c2ddc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2DDCu;
        // 0x3c2de0: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2ddc) {
            ctx->pc = 0x3C2E0Cu;
            goto label_3c2e0c;
        }
    }
    ctx->pc = 0x3C2DE4u;
label_3c2de4:
    // 0x3c2de4: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x3c2de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3c2de8:
    // 0x3c2de8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x3c2de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3c2dec:
    // 0x3c2dec: 0x40f809  jalr        $v0
label_3c2df0:
    if (ctx->pc == 0x3C2DF0u) {
        ctx->pc = 0x3C2DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2DECu;
        // 0x3c2df0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2DF4u;
        goto label_3c2df4;
    }
    ctx->pc = 0x3C2DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2DF4u);
        ctx->pc = 0x3C2DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2DECu;
        // 0x3c2df0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2DECu, 0x3C2DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2DF4u;
label_3c2df4:
    // 0x3c2df4: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x3c2df4u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_3c2df8:
    // 0x3c2df8: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_3c2dfc:
    if (ctx->pc == 0x3C2DFCu) {
        ctx->pc = 0x3C2DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2DF8u;
        // 0x3c2dfc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2E00u;
        goto label_3c2e00;
    }
    ctx->pc = 0x3C2DF8u;
    {
        const bool branch_taken_0x3c2df8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2df8) {
            ctx->pc = 0x3C2DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2DF8u;
            // 0x3c2dfc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2E00u;
            goto label_3c2e00;
        }
    }
    ctx->pc = 0x3C2E00u;
label_3c2e00:
    // 0x3c2e00: 0x1012  mflo        $v0
    ctx->pc = 0x3c2e00u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_3c2e04:
    // 0x3c2e04: 0x10000003  b           . + 4 + (0x3 << 2)
label_3c2e08:
    if (ctx->pc == 0x3C2E08u) {
        ctx->pc = 0x3C2E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E04u;
        // 0x3c2e08: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2E0Cu;
        goto label_3c2e0c;
    }
    ctx->pc = 0x3C2E04u;
    {
        const bool branch_taken_0x3c2e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E04u;
        // 0x3c2e08: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2e04) {
            ctx->pc = 0x3C2E14u;
            goto label_3c2e14;
        }
    }
    ctx->pc = 0x3C2E0Cu;
label_3c2e0c:
    // 0x3c2e0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c2e0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c2e10:
    // 0x3c2e10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c2e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c2e14:
    // 0x3c2e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c2e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c2e18:
    // 0x3c2e18: 0x3e00008  jr          $ra
label_3c2e1c:
    if (ctx->pc == 0x3C2E1Cu) {
        ctx->pc = 0x3C2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E18u;
        // 0x3c2e1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2E20u;
        goto label_fallthrough_0x3c2e18;
    }
    ctx->pc = 0x3C2E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E18u;
        // 0x3c2e1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c2e18:
    ctx->pc = 0x3C2E20u;
}
