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

// Function: entry_302cb8
// Address: 0x302cb8 - 0x302df8
void entry_302cb8_0x302df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_302cb8_0x302df8");
#endif

    switch (ctx->pc) {
        case 0x302cdcu: goto label_302cdc;
        case 0x302cf4u: goto label_302cf4;
        case 0x302cfcu: goto label_302cfc;
        case 0x302d0cu: goto label_302d0c;
        case 0x302d20u: goto label_302d20;
        case 0x302d30u: goto label_302d30;
        case 0x302d70u: goto label_302d70;
        case 0x302db8u: goto label_302db8;
        case 0x302dc8u: goto label_302dc8;
        case 0x302ddcu: goto label_302ddc;
        default: break;
    }

    ctx->pc = 0x302cb8u;

    // 0x302cb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x302cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x302cbc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x302cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x302cc0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x302cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x302cc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x302cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302cc8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x302cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x302ccc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x302cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302cd0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x302cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x302cd4: 0xc0c0a30  jal         func_3028C0
    ctx->pc = 0x302CD4u;
    SET_GPR_U32(ctx, 31, 0x302CDCu);
    ctx->pc = 0x302CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302CD4u;
    // 0x302cd8: 0x240400fe  addiu       $a0, $zero, 0xFE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028C0u, 0x302CD4u, 0x302CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302CDCu;
label_302cdc:
    // 0x302cdc: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x302cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x302ce0: 0x8c620c1c  lw          $v0, 0xC1C($v1)
    ctx->pc = 0x302ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F0C1Cu));
    // 0x302ce4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x302CE4u;
    {
        const bool branch_taken_0x302ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302ce4) {
            ctx->pc = 0x302CF4u;
            goto label_302cf4;
        }
    }
    ctx->pc = 0x302CECu;
    // 0x302cec: 0xc0c0a7a  jal         func_3029E8
    ctx->pc = 0x302CECu;
    SET_GPR_U32(ctx, 31, 0x302CF4u);
    ctx->pc = 0x3029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3029E8u, 0x302CECu, 0x302CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302CF4u;
label_302cf4:
    // 0x302cf4: 0xc0c0afc  jal         func_302BF0
    ctx->pc = 0x302CF4u;
    SET_GPR_U32(ctx, 31, 0x302CFCu);
    ctx->pc = 0x302BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302BF0u, 0x302CF4u, 0x302CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302CFCu;
label_302cfc:
    // 0x302cfc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x302CFCu;
    {
        const bool branch_taken_0x302cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302cfc) {
            ctx->pc = 0x302D18u;
            goto label_302d18;
        }
    }
    ctx->pc = 0x302D04u;
    // 0x302d04: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x302D04u;
    SET_GPR_U32(ctx, 31, 0x302D0Cu);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x302D04u, 0x302D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302D0Cu;
label_302d0c:
    // 0x302d0c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x302d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x302d10: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x302D10u;
    {
        const bool branch_taken_0x302d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D10u;
        // 0x302d14: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x302d10) {
            ctx->pc = 0x302DE0u;
            goto label_302de0;
        }
    }
    ctx->pc = 0x302D18u;
label_302d18:
    // 0x302d18: 0xc0c0892  jal         func_302248
    ctx->pc = 0x302D18u;
    SET_GPR_U32(ctx, 31, 0x302D20u);
    ctx->pc = 0x302248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302248u, 0x302D18u, 0x302D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302D20u;
label_302d20:
    // 0x302d20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x302D20u;
    {
        const bool branch_taken_0x302d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D20u;
        // 0x302d24: 0x32023fff  andi        $v0, $s0, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x302d20) {
            ctx->pc = 0x302D38u;
            goto label_302d38;
        }
    }
    ctx->pc = 0x302D28u;
    // 0x302d28: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x302D28u;
    SET_GPR_U32(ctx, 31, 0x302D30u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x302D28u, 0x302D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302D30u;
label_302d30:
    // 0x302d30: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x302D30u;
    {
        const bool branch_taken_0x302d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D30u;
        // 0x302d34: 0x2402fff0  addiu       $v0, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302d30) {
            ctx->pc = 0x302DE0u;
            goto label_302de0;
        }
    }
    ctx->pc = 0x302D38u;
label_302d38:
    // 0x302d38: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x302D38u;
    {
        const bool branch_taken_0x302d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302d38) {
            ctx->pc = 0x302D68u;
            goto label_302d68;
        }
    }
    ctx->pc = 0x302D40u;
    // 0x302d40: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x302D40u;
    {
        const bool branch_taken_0x302d40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x302D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D40u;
        // 0x302d44: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302d40) {
            ctx->pc = 0x302D68u;
            goto label_302d68;
        }
    }
    ctx->pc = 0x302D48u;
    // 0x302d48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x302d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x302d4c: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x302d4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x302d50: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x302D50u;
    {
        const bool branch_taken_0x302d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302d50) {
            ctx->pc = 0x302D68u;
            goto label_302d68;
        }
    }
    ctx->pc = 0x302D58u;
    // 0x302d58: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x302D58u;
    {
        const bool branch_taken_0x302d58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x302D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D58u;
        // 0x302d5c: 0x2e220021  sltiu       $v0, $s1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x302d58) {
            ctx->pc = 0x302D68u;
            goto label_302d68;
        }
    }
    ctx->pc = 0x302D60u;
    // 0x302d60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x302D60u;
    {
        const bool branch_taken_0x302d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D60u;
        // 0x302d64: 0x3c030061  lui         $v1, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302d60) {
            ctx->pc = 0x302D78u;
            goto label_302d78;
        }
    }
    ctx->pc = 0x302D68u;
label_302d68:
    // 0x302d68: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x302D68u;
    SET_GPR_U32(ctx, 31, 0x302D70u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x302D68u, 0x302D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302D70u;
label_302d70:
    // 0x302d70: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x302D70u;
    {
        const bool branch_taken_0x302d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D70u;
        // 0x302d74: 0x2402ffea  addiu       $v0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302d70) {
            ctx->pc = 0x302DE0u;
            goto label_302de0;
        }
    }
    ctx->pc = 0x302D78u;
label_302d78:
    // 0x302d78: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x302d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x302d7c: 0x24671340  addiu       $a3, $v1, 0x1340
    ctx->pc = 0x302d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4928));
    // 0x302d80: 0xac701340  sw          $s0, 0x1340($v1)
    ctx->pc = 0x302d80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4928), GPR_U32(ctx, 16));
    // 0x302d84: 0xacf10004  sw          $s1, 0x4($a3)
    ctx->pc = 0x302d84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 17));
    // 0x302d88: 0x24521f80  addiu       $s2, $v0, 0x1F80
    ctx->pc = 0x302d88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 8064));
    // 0x302d8c: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x302d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x302d90: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x302d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x302d94: 0x24842a40  addiu       $a0, $a0, 0x2A40
    ctx->pc = 0x302d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
    // 0x302d98: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x302d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x302d9c: 0x240500fe  addiu       $a1, $zero, 0xFE
    ctx->pc = 0x302d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x302da0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x302da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302da4: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x302da4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x302da8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x302da8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302dac: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x302dacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x302db0: 0xc0c08d4  jal         func_302350
    ctx->pc = 0x302DB0u;
    SET_GPR_U32(ctx, 31, 0x302DB8u);
    ctx->pc = 0x302DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302DB0u;
    // 0x302db4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302350u, 0x302DB0u, 0x302DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302DB8u;
label_302db8:
    // 0x302db8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x302DB8u;
    {
        const bool branch_taken_0x302db8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x302DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302DB8u;
        // 0x302dbc: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302db8) {
            ctx->pc = 0x302DD0u;
            goto label_302dd0;
        }
    }
    ctx->pc = 0x302DC0u;
    // 0x302dc0: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x302DC0u;
    SET_GPR_U32(ctx, 31, 0x302DC8u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x302DC0u, 0x302DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302DC8u;
label_302dc8:
    // 0x302dc8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x302DC8u;
    {
        const bool branch_taken_0x302dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302DC8u;
        // 0x302dcc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302dc8) {
            ctx->pc = 0x302DE0u;
            goto label_302de0;
        }
    }
    ctx->pc = 0x302DD0u;
label_302dd0:
    // 0x302dd0: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x302dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x302dd4: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x302DD4u;
    SET_GPR_U32(ctx, 31, 0x302DDCu);
    ctx->pc = 0x302DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302DD4u;
    // 0x302dd8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x302DD4u, 0x302DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302DDCu;
label_302ddc:
    // 0x302ddc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x302ddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302de0:
    // 0x302de0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x302de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x302de4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x302de4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x302de8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x302de8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302dec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x302decu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302df0: 0x3e00008  jr          $ra
    ctx->pc = 0x302DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302DF0u;
        // 0x302df4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302DF8u;
}
