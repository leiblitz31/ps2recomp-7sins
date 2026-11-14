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

// Function: sub_0040D240
// Address: 0x40d240 - 0x40d368
void sub_0040D240_0x40d240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040D240_0x40d240");
#endif

    switch (ctx->pc) {
        case 0x40d274u: goto label_40d274;
        case 0x40d290u: goto label_40d290;
        case 0x40d29cu: goto label_40d29c;
        case 0x40d310u: goto label_40d310;
        default: break;
    }

    ctx->pc = 0x40d240u;

    // 0x40d240: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x40d240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x40d244: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x40d244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x40d248: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x40d248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x40d24c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x40d24cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d250: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x40d250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x40d254: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x40d254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d258: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x40d258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x40d25c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x40d25cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d260: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x40d260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x40d264: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x40d264u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d268: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x40d268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d26c: 0xc10480a  jal         func_412028
    ctx->pc = 0x40D26Cu;
    SET_GPR_U32(ctx, 31, 0x40D274u);
    ctx->pc = 0x40D270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D26Cu;
    // 0x40d270: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x40D26Cu, 0x40D274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D274u;
label_40d274:
    // 0x40d274: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x40d274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
    // 0x40d278: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x40D278u;
    {
        const bool branch_taken_0x40d278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D278u;
        // 0x40d27c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d278) {
            ctx->pc = 0x40D2A8u;
            goto label_40d2a8;
        }
    }
    ctx->pc = 0x40D280u;
    // 0x40d280: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40d280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x40d284: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x40d284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x40d288: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x40D288u;
    SET_GPR_U32(ctx, 31, 0x40D290u);
    ctx->pc = 0x40D28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D288u;
    // 0x40d28c: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40D288u, 0x40D290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D290u;
label_40d290:
    // 0x40d290: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x40d290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x40d294: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x40D294u;
    SET_GPR_U32(ctx, 31, 0x40D29Cu);
    ctx->pc = 0x40D298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D294u;
    // 0x40d298: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40D294u, 0x40D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D29Cu;
label_40d29c:
    // 0x40d29c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x40D29Cu;
    {
        const bool branch_taken_0x40d29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D29Cu;
        // 0x40d2a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d29c) {
            ctx->pc = 0x40D348u;
            goto label_40d348;
        }
    }
    ctx->pc = 0x40D2A4u;
    // 0x40d2a4: 0x0  nop
    ctx->pc = 0x40d2a4u;
    // NOP
label_40d2a8:
    // 0x40d2a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x40d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40d2ac: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x40d2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x40d2b0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x40d2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x40d2b4: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x40d2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x40d2b8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x40d2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x40d2bc: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x40d2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x40d2c0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x40D2C0u;
    {
        const bool branch_taken_0x40d2c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x40D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D2C0u;
        // 0x40d2c4: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d2c0) {
            ctx->pc = 0x40D2D8u;
            goto label_40d2d8;
        }
    }
    ctx->pc = 0x40D2C8u;
    // 0x40d2c8: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x40d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x40d2cc: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x40d2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x40d2d0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x40D2D0u;
    {
        const bool branch_taken_0x40d2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D2D0u;
        // 0x40d2d4: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d2d0) {
            ctx->pc = 0x40D308u;
            goto label_40d308;
        }
    }
    ctx->pc = 0x40D2D8u;
label_40d2d8:
    // 0x40d2d8: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x40d2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x40d2dc: 0x61382  srl         $v0, $a2, 14
    ctx->pc = 0x40d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 14));
    // 0x40d2e0: 0x3484ff00  ori         $a0, $a0, 0xFF00
    ctx->pc = 0x40d2e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
    // 0x40d2e4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x40d2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x40d2e8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x40d2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x40d2ec: 0x61c02  srl         $v1, $a2, 16
    ctx->pc = 0x40d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x40d2f0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x40d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x40d2f4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x40d2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x40d2f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x40d2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x40d2fc: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x40d2fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x40d300: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x40d300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x40d304: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x40d304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
label_40d308:
    // 0x40d308: 0xc103310  jal         func_40CC40
    ctx->pc = 0x40D308u;
    SET_GPR_U32(ctx, 31, 0x40D310u);
    ctx->pc = 0x40D30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D308u;
    // 0x40d30c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC40u, 0x40D308u, 0x40D310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D310u;
label_40d310:
    // 0x40d310: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x40D310u;
    {
        const bool branch_taken_0x40d310 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D310u;
        // 0x40d314: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d310) {
            ctx->pc = 0x40D320u;
            goto label_40d320;
        }
    }
    ctx->pc = 0x40D318u;
    // 0x40d318: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x40d318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40d31c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x40d31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_40d320:
    // 0x40d320: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x40D320u;
    {
        const bool branch_taken_0x40d320 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D320u;
        // 0x40d324: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d320) {
            ctx->pc = 0x40D32Cu;
            goto label_40d32c;
        }
    }
    ctx->pc = 0x40D328u;
    // 0x40d328: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x40d328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_40d32c:
    // 0x40d32c: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x40D32Cu;
    {
        const bool branch_taken_0x40d32c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D32Cu;
        // 0x40d330: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d32c) {
            ctx->pc = 0x40D338u;
            goto label_40d338;
        }
    }
    ctx->pc = 0x40D334u;
    // 0x40d334: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x40d334u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_40d338:
    // 0x40d338: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x40D338u;
    {
        const bool branch_taken_0x40d338 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D338u;
        // 0x40d33c: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d338) {
            ctx->pc = 0x40D344u;
            goto label_40d344;
        }
    }
    ctx->pc = 0x40D340u;
    // 0x40d340: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x40d340u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_40d344:
    // 0x40d344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40d344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40d348:
    // 0x40d348: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x40d348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x40d34c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x40d34cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x40d350: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x40d350u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x40d354: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x40d354u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x40d358: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x40d358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40d35c: 0x3e00008  jr          $ra
    ctx->pc = 0x40D35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D35Cu;
        // 0x40d360: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40D364u;
    // 0x40d364: 0x0  nop
    ctx->pc = 0x40d364u;
    // NOP
    ctx->pc = 0x40d368u;
}
