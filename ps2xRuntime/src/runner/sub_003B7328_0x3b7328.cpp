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

// Function: sub_003B7328
// Address: 0x3b7328 - 0x3b7590
void sub_003B7328_0x3b7328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B7328_0x3b7328");
#endif

    switch (ctx->pc) {
        case 0x3b7328u: goto label_3b7328;
        case 0x3b732cu: goto label_3b732c;
        case 0x3b7330u: goto label_3b7330;
        case 0x3b7334u: goto label_3b7334;
        case 0x3b7338u: goto label_3b7338;
        case 0x3b733cu: goto label_3b733c;
        case 0x3b7340u: goto label_3b7340;
        case 0x3b7344u: goto label_3b7344;
        case 0x3b7348u: goto label_3b7348;
        case 0x3b734cu: goto label_3b734c;
        case 0x3b7350u: goto label_3b7350;
        case 0x3b7354u: goto label_3b7354;
        case 0x3b7358u: goto label_3b7358;
        case 0x3b735cu: goto label_3b735c;
        case 0x3b7360u: goto label_3b7360;
        case 0x3b7364u: goto label_3b7364;
        case 0x3b7368u: goto label_3b7368;
        case 0x3b736cu: goto label_3b736c;
        case 0x3b7370u: goto label_3b7370;
        case 0x3b7374u: goto label_3b7374;
        case 0x3b7378u: goto label_3b7378;
        case 0x3b737cu: goto label_3b737c;
        case 0x3b7380u: goto label_3b7380;
        case 0x3b7384u: goto label_3b7384;
        case 0x3b7388u: goto label_3b7388;
        case 0x3b738cu: goto label_3b738c;
        case 0x3b7390u: goto label_3b7390;
        case 0x3b7394u: goto label_3b7394;
        case 0x3b7398u: goto label_3b7398;
        case 0x3b739cu: goto label_3b739c;
        case 0x3b73a0u: goto label_3b73a0;
        case 0x3b73a4u: goto label_3b73a4;
        case 0x3b73a8u: goto label_3b73a8;
        case 0x3b73acu: goto label_3b73ac;
        case 0x3b73b0u: goto label_3b73b0;
        case 0x3b73b4u: goto label_3b73b4;
        case 0x3b73b8u: goto label_3b73b8;
        case 0x3b73bcu: goto label_3b73bc;
        case 0x3b73c0u: goto label_3b73c0;
        case 0x3b73c4u: goto label_3b73c4;
        case 0x3b73c8u: goto label_3b73c8;
        case 0x3b73ccu: goto label_3b73cc;
        case 0x3b73d0u: goto label_3b73d0;
        case 0x3b73d4u: goto label_3b73d4;
        case 0x3b73d8u: goto label_3b73d8;
        case 0x3b73dcu: goto label_3b73dc;
        case 0x3b73e0u: goto label_3b73e0;
        case 0x3b73e4u: goto label_3b73e4;
        case 0x3b73e8u: goto label_3b73e8;
        case 0x3b73ecu: goto label_3b73ec;
        case 0x3b73f0u: goto label_3b73f0;
        case 0x3b73f4u: goto label_3b73f4;
        case 0x3b73f8u: goto label_3b73f8;
        case 0x3b73fcu: goto label_3b73fc;
        case 0x3b7400u: goto label_3b7400;
        case 0x3b7404u: goto label_3b7404;
        case 0x3b7408u: goto label_3b7408;
        case 0x3b740cu: goto label_3b740c;
        case 0x3b7410u: goto label_3b7410;
        case 0x3b7414u: goto label_3b7414;
        case 0x3b7418u: goto label_3b7418;
        case 0x3b741cu: goto label_3b741c;
        case 0x3b7420u: goto label_3b7420;
        case 0x3b7424u: goto label_3b7424;
        case 0x3b7428u: goto label_3b7428;
        case 0x3b742cu: goto label_3b742c;
        case 0x3b7430u: goto label_3b7430;
        case 0x3b7434u: goto label_3b7434;
        case 0x3b7438u: goto label_3b7438;
        case 0x3b743cu: goto label_3b743c;
        case 0x3b7440u: goto label_3b7440;
        case 0x3b7444u: goto label_3b7444;
        case 0x3b7448u: goto label_3b7448;
        case 0x3b744cu: goto label_3b744c;
        case 0x3b7450u: goto label_3b7450;
        case 0x3b7454u: goto label_3b7454;
        case 0x3b7458u: goto label_3b7458;
        case 0x3b745cu: goto label_3b745c;
        case 0x3b7460u: goto label_3b7460;
        case 0x3b7464u: goto label_3b7464;
        case 0x3b7468u: goto label_3b7468;
        case 0x3b746cu: goto label_3b746c;
        case 0x3b7470u: goto label_3b7470;
        case 0x3b7474u: goto label_3b7474;
        case 0x3b7478u: goto label_3b7478;
        case 0x3b747cu: goto label_3b747c;
        case 0x3b7480u: goto label_3b7480;
        case 0x3b7484u: goto label_3b7484;
        case 0x3b7488u: goto label_3b7488;
        case 0x3b748cu: goto label_3b748c;
        case 0x3b7490u: goto label_3b7490;
        case 0x3b7494u: goto label_3b7494;
        case 0x3b7498u: goto label_3b7498;
        case 0x3b749cu: goto label_3b749c;
        case 0x3b74a0u: goto label_3b74a0;
        case 0x3b74a4u: goto label_3b74a4;
        case 0x3b74a8u: goto label_3b74a8;
        case 0x3b74acu: goto label_3b74ac;
        case 0x3b74b0u: goto label_3b74b0;
        case 0x3b74b4u: goto label_3b74b4;
        case 0x3b74b8u: goto label_3b74b8;
        case 0x3b74bcu: goto label_3b74bc;
        case 0x3b74c0u: goto label_3b74c0;
        case 0x3b74c4u: goto label_3b74c4;
        case 0x3b74c8u: goto label_3b74c8;
        case 0x3b74ccu: goto label_3b74cc;
        case 0x3b74d0u: goto label_3b74d0;
        case 0x3b74d4u: goto label_3b74d4;
        case 0x3b74d8u: goto label_3b74d8;
        case 0x3b74dcu: goto label_3b74dc;
        case 0x3b74e0u: goto label_3b74e0;
        case 0x3b74e4u: goto label_3b74e4;
        case 0x3b74e8u: goto label_3b74e8;
        case 0x3b74ecu: goto label_3b74ec;
        case 0x3b74f0u: goto label_3b74f0;
        case 0x3b74f4u: goto label_3b74f4;
        case 0x3b74f8u: goto label_3b74f8;
        case 0x3b74fcu: goto label_3b74fc;
        case 0x3b7500u: goto label_3b7500;
        case 0x3b7504u: goto label_3b7504;
        case 0x3b7508u: goto label_3b7508;
        case 0x3b750cu: goto label_3b750c;
        case 0x3b7510u: goto label_3b7510;
        case 0x3b7514u: goto label_3b7514;
        case 0x3b7518u: goto label_3b7518;
        case 0x3b751cu: goto label_3b751c;
        case 0x3b7520u: goto label_3b7520;
        case 0x3b7524u: goto label_3b7524;
        case 0x3b7528u: goto label_3b7528;
        case 0x3b752cu: goto label_3b752c;
        case 0x3b7530u: goto label_3b7530;
        case 0x3b7534u: goto label_3b7534;
        case 0x3b7538u: goto label_3b7538;
        case 0x3b753cu: goto label_3b753c;
        case 0x3b7540u: goto label_3b7540;
        case 0x3b7544u: goto label_3b7544;
        case 0x3b7548u: goto label_3b7548;
        case 0x3b754cu: goto label_3b754c;
        case 0x3b7550u: goto label_3b7550;
        case 0x3b7554u: goto label_3b7554;
        case 0x3b7558u: goto label_3b7558;
        case 0x3b755cu: goto label_3b755c;
        case 0x3b7560u: goto label_3b7560;
        case 0x3b7564u: goto label_3b7564;
        case 0x3b7568u: goto label_3b7568;
        case 0x3b756cu: goto label_3b756c;
        case 0x3b7570u: goto label_3b7570;
        case 0x3b7574u: goto label_3b7574;
        case 0x3b7578u: goto label_3b7578;
        case 0x3b757cu: goto label_3b757c;
        case 0x3b7580u: goto label_3b7580;
        case 0x3b7584u: goto label_3b7584;
        case 0x3b7588u: goto label_3b7588;
        case 0x3b758cu: goto label_3b758c;
        default: break;
    }

    ctx->pc = 0x3b7328u;

label_3b7328:
    // 0x3b7328: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3b7328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3b732c:
    // 0x3b732c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3b7330:
    if (ctx->pc == 0x3B7330u) {
        ctx->pc = 0x3B7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B732Cu;
        // 0x3b7330: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7334u;
        goto label_3b7334;
    }
    ctx->pc = 0x3B732Cu;
    {
        const bool branch_taken_0x3b732c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B732Cu;
        // 0x3b7330: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b732c) {
            ctx->pc = 0x3B7364u;
            goto label_3b7364;
        }
    }
    ctx->pc = 0x3B7334u;
label_3b7334:
    // 0x3b7334: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x3b7334u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b7338:
    // 0x3b7338: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3b7338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3b733c:
    // 0x3b733c: 0x54450005  bnel        $v0, $a1, . + 4 + (0x5 << 2)
label_3b7340:
    if (ctx->pc == 0x3B7340u) {
        ctx->pc = 0x3B7340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B733Cu;
        // 0x3b7340: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7344u;
        goto label_3b7344;
    }
    ctx->pc = 0x3B733Cu;
    {
        const bool branch_taken_0x3b733c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x3b733c) {
            ctx->pc = 0x3B7340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B733Cu;
            // 0x3b7340: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B7354u;
            goto label_3b7354;
        }
    }
    ctx->pc = 0x3B7344u;
label_3b7344:
    // 0x3b7344: 0x54c00001  bnel        $a2, $zero, . + 4 + (0x1 << 2)
label_3b7348:
    if (ctx->pc == 0x3B7348u) {
        ctx->pc = 0x3B7348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7344u;
        // 0x3b7348: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B734Cu;
        goto label_3b734c;
    }
    ctx->pc = 0x3B7344u;
    {
        const bool branch_taken_0x3b7344 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b7344) {
            ctx->pc = 0x3B7348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B7344u;
            // 0x3b7348: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B734Cu;
            goto label_3b734c;
        }
    }
    ctx->pc = 0x3B734Cu;
label_3b734c:
    // 0x3b734c: 0x3e00008  jr          $ra
label_3b7350:
    if (ctx->pc == 0x3B7350u) {
        ctx->pc = 0x3B7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B734Cu;
        // 0x3b7350: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7354u;
        goto label_3b7354;
    }
    ctx->pc = 0x3B734Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B734Cu;
        // 0x3b7350: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B734Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7354u;
label_3b7354:
    // 0x3b7354: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b7354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3b7358:
    // 0x3b7358: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3b7358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3b735c:
    // 0x3b735c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3b7360:
    if (ctx->pc == 0x3B7360u) {
        ctx->pc = 0x3B7360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B735Cu;
        // 0x3b7360: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7364u;
        goto label_3b7364;
    }
    ctx->pc = 0x3B735Cu;
    {
        const bool branch_taken_0x3b735c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B7360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B735Cu;
        // 0x3b7360: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b735c) {
            ctx->pc = 0x3B7338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b7338;
        }
    }
    ctx->pc = 0x3B7364u;
label_3b7364:
    // 0x3b7364: 0x3e00008  jr          $ra
label_3b7368:
    if (ctx->pc == 0x3B7368u) {
        ctx->pc = 0x3B7368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7364u;
        // 0x3b7368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B736Cu;
        goto label_3b736c;
    }
    ctx->pc = 0x3B7364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7364u;
        // 0x3b7368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B736Cu;
label_3b736c:
    // 0x3b736c: 0x0  nop
    ctx->pc = 0x3b736cu;
    // NOP
label_3b7370:
    // 0x3b7370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b7370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b7374:
    // 0x3b7374: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b7374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3b7378:
    // 0x3b7378: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b7378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b737c:
    // 0x3b737c: 0xc0ed294  jal         func_3B4A50
label_3b7380:
    if (ctx->pc == 0x3B7380u) {
        ctx->pc = 0x3B7384u;
        goto label_3b7384;
    }
    ctx->pc = 0x3B737Cu;
    SET_GPR_U32(ctx, 31, 0x3B7384u);
    ctx->pc = 0x3B4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4A50u, 0x3B737Cu, 0x3B7384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7384u;
label_3b7384:
    // 0x3b7384: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b7384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b7388:
    // 0x3b7388: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b7388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b738c:
    // 0x3b738c: 0xc0ed13c  jal         func_3B44F0
label_3b7390:
    if (ctx->pc == 0x3B7390u) {
        ctx->pc = 0x3B7390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B738Cu;
        // 0x3b7390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7394u;
        goto label_3b7394;
    }
    ctx->pc = 0x3B738Cu;
    SET_GPR_U32(ctx, 31, 0x3B7394u);
    ctx->pc = 0x3B7390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B738Cu;
    // 0x3b7390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B44F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B44F0u, 0x3B738Cu, 0x3B7394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7394u;
label_3b7394:
    // 0x3b7394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b7394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b7398:
    // 0x3b7398: 0xc0ede68  jal         func_3B79A0
label_3b739c:
    if (ctx->pc == 0x3B739Cu) {
        ctx->pc = 0x3B739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7398u;
        // 0x3b739c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B73A0u;
        goto label_3b73a0;
    }
    ctx->pc = 0x3B7398u;
    SET_GPR_U32(ctx, 31, 0x3B73A0u);
    ctx->pc = 0x3B739Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7398u;
    // 0x3b739c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B79A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B79A0u, 0x3B7398u, 0x3B73A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B73A0u;
label_3b73a0:
    // 0x3b73a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b73a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b73a4:
    // 0x3b73a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b73a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b73a8:
    // 0x3b73a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b73a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b73ac:
    // 0x3b73ac: 0x3e00008  jr          $ra
label_3b73b0:
    if (ctx->pc == 0x3B73B0u) {
        ctx->pc = 0x3B73B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B73ACu;
        // 0x3b73b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B73B4u;
        goto label_3b73b4;
    }
    ctx->pc = 0x3B73ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B73B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B73ACu;
        // 0x3b73b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B73ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B73B4u;
label_3b73b4:
    // 0x3b73b4: 0x0  nop
    ctx->pc = 0x3b73b4u;
    // NOP
label_3b73b8:
    // 0x3b73b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b73b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3b73bc:
    // 0x3b73bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3b73bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3b73c0:
    // 0x3b73c0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3b73c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3b73c4:
    // 0x3b73c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b73c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b73c8:
    // 0x3b73c8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3b73c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3b73cc:
    // 0x3b73cc: 0x12802b  sltu        $s0, $zero, $s2
    ctx->pc = 0x3b73ccu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_3b73d0:
    // 0x3b73d0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3b73d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3b73d4:
    // 0x3b73d4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3b73d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3b73d8:
    // 0x3b73d8: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
label_3b73dc:
    if (ctx->pc == 0x3B73DCu) {
        ctx->pc = 0x3B73DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B73D8u;
        // 0x3b73dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B73E0u;
        goto label_3b73e0;
    }
    ctx->pc = 0x3B73D8u;
    {
        const bool branch_taken_0x3b73d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B73DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B73D8u;
        // 0x3b73dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b73d8) {
            ctx->pc = 0x3B7488u;
            goto label_3b7488;
        }
    }
    ctx->pc = 0x3B73E0u;
label_3b73e0:
    // 0x3b73e0: 0x8e4400b8  lw          $a0, 0xB8($s2)
    ctx->pc = 0x3b73e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_3b73e4:
    // 0x3b73e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3b73e8:
    if (ctx->pc == 0x3B73E8u) {
        ctx->pc = 0x3B73E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B73E4u;
        // 0x3b73e8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B73ECu;
        goto label_3b73ec;
    }
    ctx->pc = 0x3B73E4u;
    {
        const bool branch_taken_0x3b73e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B73E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B73E4u;
        // 0x3b73e8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b73e4) {
            ctx->pc = 0x3B73F8u;
            goto label_3b73f8;
        }
    }
    ctx->pc = 0x3B73ECu;
label_3b73ec:
    // 0x3b73ec: 0xc103684  jal         func_40DA10
label_3b73f0:
    if (ctx->pc == 0x3B73F0u) {
        ctx->pc = 0x3B73F4u;
        goto label_3b73f4;
    }
    ctx->pc = 0x3B73ECu;
    SET_GPR_U32(ctx, 31, 0x3B73F4u);
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3B73ECu, 0x3B73F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B73F4u;
label_3b73f4:
    // 0x3b73f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b73f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b73f8:
    // 0x3b73f8: 0xc1036d2  jal         func_40DB48
label_3b73fc:
    if (ctx->pc == 0x3B73FCu) {
        ctx->pc = 0x3B73FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B73F8u;
        // 0x3b73fc: 0x8e4400b0  lw          $a0, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7400u;
        goto label_3b7400;
    }
    ctx->pc = 0x3B73F8u;
    SET_GPR_U32(ctx, 31, 0x3B7400u);
    ctx->pc = 0x3B73FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B73F8u;
    // 0x3b73fc: 0x8e4400b0  lw          $a0, 0xB0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B73F8u, 0x3B7400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7400u;
label_3b7400:
    // 0x3b7400: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x3b7400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_3b7404:
    // 0x3b7404: 0x24050110  addiu       $a1, $zero, 0x110
    ctx->pc = 0x3b7404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_3b7408:
    // 0x3b7408: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x3b7408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3b740c:
    // 0x3b740c: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x3b740cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3b7410:
    // 0x3b7410: 0xc1036d2  jal         func_40DB48
label_3b7414:
    if (ctx->pc == 0x3B7414u) {
        ctx->pc = 0x3B7414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7410u;
        // 0x3b7414: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7418u;
        goto label_3b7418;
    }
    ctx->pc = 0x3B7410u;
    SET_GPR_U32(ctx, 31, 0x3B7418u);
    ctx->pc = 0x3B7414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7410u;
    // 0x3b7414: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B7410u, 0x3B7418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7418u;
label_3b7418:
    // 0x3b7418: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b7418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b741c:
    // 0x3b741c: 0x1211000c  beq         $s0, $s1, . + 4 + (0xC << 2)
label_3b7420:
    if (ctx->pc == 0x3B7420u) {
        ctx->pc = 0x3B7420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B741Cu;
        // 0x3b7420: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7424u;
        goto label_3b7424;
    }
    ctx->pc = 0x3B741Cu;
    {
        const bool branch_taken_0x3b741c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x3B7420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B741Cu;
        // 0x3b7420: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b741c) {
            ctx->pc = 0x3B7450u;
            goto label_3b7450;
        }
    }
    ctx->pc = 0x3B7424u;
label_3b7424:
    // 0x3b7424: 0x0  nop
    ctx->pc = 0x3b7424u;
    // NOP
label_3b7428:
    // 0x3b7428: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_3b742c:
    if (ctx->pc == 0x3B742Cu) {
        ctx->pc = 0x3B742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7428u;
        // 0x3b742c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7430u;
        goto label_3b7430;
    }
    ctx->pc = 0x3B7428u;
    {
        const bool branch_taken_0x3b7428 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7428u;
        // 0x3b742c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7428) {
            ctx->pc = 0x3B7444u;
            goto label_3b7444;
        }
    }
    ctx->pc = 0x3B7430u;
label_3b7430:
    // 0x3b7430: 0xc0ed2d0  jal         func_3B4B40
label_3b7434:
    if (ctx->pc == 0x3B7434u) {
        ctx->pc = 0x3B7434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7430u;
        // 0x3b7434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7438u;
        goto label_3b7438;
    }
    ctx->pc = 0x3B7430u;
    SET_GPR_U32(ctx, 31, 0x3B7438u);
    ctx->pc = 0x3B7434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7430u;
    // 0x3b7434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4B40u, 0x3B7430u, 0x3B7438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7438u;
label_3b7438:
    // 0x3b7438: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3b7438u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b743c:
    // 0x3b743c: 0x282180b  movn        $v1, $s4, $v0
    ctx->pc = 0x3b743cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 20));
label_3b7440:
    // 0x3b7440: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3b7440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3b7444:
    // 0x3b7444: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x3b7444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_3b7448:
    // 0x3b7448: 0x1611fff7  bne         $s0, $s1, . + 4 + (-0x9 << 2)
label_3b744c:
    if (ctx->pc == 0x3B744Cu) {
        ctx->pc = 0x3B744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7448u;
        // 0x3b744c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7450u;
        goto label_3b7450;
    }
    ctx->pc = 0x3B7448u;
    {
        const bool branch_taken_0x3b7448 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x3B744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7448u;
        // 0x3b744c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7448) {
            ctx->pc = 0x3B7428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b7428;
        }
    }
    ctx->pc = 0x3B7450u;
label_3b7450:
    // 0x3b7450: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_3b7454:
    if (ctx->pc == 0x3B7454u) {
        ctx->pc = 0x3B7454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7450u;
        // 0x3b7454: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7458u;
        goto label_3b7458;
    }
    ctx->pc = 0x3B7450u;
    {
        const bool branch_taken_0x3b7450 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7450u;
        // 0x3b7454: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7450) {
            ctx->pc = 0x3B7464u;
            goto label_3b7464;
        }
    }
    ctx->pc = 0x3B7458u;
label_3b7458:
    // 0x3b7458: 0xc103684  jal         func_40DA10
label_3b745c:
    if (ctx->pc == 0x3B745Cu) {
        ctx->pc = 0x3B745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7458u;
        // 0x3b745c: 0x8e4400b0  lw          $a0, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7460u;
        goto label_3b7460;
    }
    ctx->pc = 0x3B7458u;
    SET_GPR_U32(ctx, 31, 0x3B7460u);
    ctx->pc = 0x3B745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7458u;
    // 0x3b745c: 0x8e4400b0  lw          $a0, 0xB0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3B7458u, 0x3B7460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7460u;
label_3b7460:
    // 0x3b7460: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x3b7460u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3b7464:
    // 0x3b7464: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b7464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3b7468:
    // 0x3b7468: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3b7468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_3b746c:
    // 0x3b746c: 0x24a5ce80  addiu       $a1, $a1, -0x3180
    ctx->pc = 0x3b746cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954624));
label_3b7470:
    // 0x3b7470: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3b7470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3b7474:
    // 0x3b7474: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b7474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b7478:
    // 0x3b7478: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x3b7478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_3b747c:
    // 0x3b747c: 0x8ca4052c  lw          $a0, 0x52C($a1)
    ctx->pc = 0x3b747cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1324)));
label_3b7480:
    // 0x3b7480: 0x40f809  jalr        $v0
label_3b7484:
    if (ctx->pc == 0x3B7484u) {
        ctx->pc = 0x3B7484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7480u;
        // 0x3b7484: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7488u;
        goto label_3b7488;
    }
    ctx->pc = 0x3B7480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B7488u);
        ctx->pc = 0x3B7484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7480u;
        // 0x3b7484: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7480u, 0x3B7488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B7488u;
label_3b7488:
    // 0x3b7488: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b7488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b748c:
    // 0x3b748c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3b748cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b7490:
    // 0x3b7490: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3b7490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b7494:
    // 0x3b7494: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3b7494u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b7498:
    // 0x3b7498: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3b7498u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b749c:
    // 0x3b749c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3b749cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b74a0:
    // 0x3b74a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b74a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b74a4:
    // 0x3b74a4: 0x3e00008  jr          $ra
label_3b74a8:
    if (ctx->pc == 0x3B74A8u) {
        ctx->pc = 0x3B74A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B74A4u;
        // 0x3b74a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B74ACu;
        goto label_3b74ac;
    }
    ctx->pc = 0x3B74A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B74A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B74A4u;
        // 0x3b74a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B74A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B74ACu;
label_3b74ac:
    // 0x3b74ac: 0x0  nop
    ctx->pc = 0x3b74acu;
    // NOP
label_3b74b0:
    // 0x3b74b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b74b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3b74b4:
    // 0x3b74b4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3b74b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3b74b8:
    // 0x3b74b8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3b74b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3b74bc:
    // 0x3b74bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b74bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b74c0:
    // 0x3b74c0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3b74c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3b74c4:
    // 0x3b74c4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3b74c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3b74c8:
    // 0x3b74c8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3b74c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3b74cc:
    // 0x3b74cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b74ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b74d0:
    // 0x3b74d0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3b74d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3b74d4:
    // 0x3b74d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b74d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b74d8:
    // 0x3b74d8: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_3b74dc:
    if (ctx->pc == 0x3B74DCu) {
        ctx->pc = 0x3B74DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B74D8u;
        // 0x3b74dc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B74E0u;
        goto label_3b74e0;
    }
    ctx->pc = 0x3B74D8u;
    {
        const bool branch_taken_0x3b74d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B74DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B74D8u;
        // 0x3b74dc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b74d8) {
            ctx->pc = 0x3B7570u;
            goto label_3b7570;
        }
    }
    ctx->pc = 0x3B74E0u;
label_3b74e0:
    // 0x3b74e0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b74e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b74e4:
    // 0x3b74e4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3b74e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b74e8:
    // 0x3b74e8: 0xc103642  jal         func_40D908
label_3b74ec:
    if (ctx->pc == 0x3B74ECu) {
        ctx->pc = 0x3B74ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B74E8u;
        // 0x3b74ec: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B74F0u;
        goto label_3b74f0;
    }
    ctx->pc = 0x3B74E8u;
    SET_GPR_U32(ctx, 31, 0x3B74F0u);
    ctx->pc = 0x3B74ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B74E8u;
    // 0x3b74ec: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3B74E8u, 0x3B74F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B74F0u;
label_3b74f0:
    // 0x3b74f0: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x3b74f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3b74f4:
    // 0x3b74f4: 0xc1036d2  jal         func_40DB48
label_3b74f8:
    if (ctx->pc == 0x3B74F8u) {
        ctx->pc = 0x3B74F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B74F4u;
        // 0x3b74f8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B74FCu;
        goto label_3b74fc;
    }
    ctx->pc = 0x3B74F4u;
    SET_GPR_U32(ctx, 31, 0x3B74FCu);
    ctx->pc = 0x3B74F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B74F4u;
    // 0x3b74f8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B74F4u, 0x3B74FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B74FCu;
label_3b74fc:
    // 0x3b74fc: 0x8e4400b4  lw          $a0, 0xB4($s2)
    ctx->pc = 0x3b74fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_3b7500:
    // 0x3b7500: 0x24030110  addiu       $v1, $zero, 0x110
    ctx->pc = 0x3b7500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_3b7504:
    // 0x3b7504: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b7504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b7508:
    // 0x3b7508: 0x832818  mult        $a1, $a0, $v1
    ctx->pc = 0x3b7508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3b750c:
    // 0x3b750c: 0xa29821  addu        $s3, $a1, $v0
    ctx->pc = 0x3b750cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3b7510:
    // 0x3b7510: 0x1233000d  beq         $s1, $s3, . + 4 + (0xD << 2)
label_3b7514:
    if (ctx->pc == 0x3B7514u) {
        ctx->pc = 0x3B7514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7510u;
        // 0x3b7514: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7518u;
        goto label_3b7518;
    }
    ctx->pc = 0x3B7510u;
    {
        const bool branch_taken_0x3b7510 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x3B7514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7510u;
        // 0x3b7514: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7510) {
            ctx->pc = 0x3B7548u;
            goto label_3b7548;
        }
    }
    ctx->pc = 0x3B7518u;
label_3b7518:
    // 0x3b7518: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b7518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b751c:
    // 0x3b751c: 0xc1036e0  jal         func_40DB80
label_3b7520:
    if (ctx->pc == 0x3B7520u) {
        ctx->pc = 0x3B7520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B751Cu;
        // 0x3b7520: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7524u;
        goto label_3b7524;
    }
    ctx->pc = 0x3B751Cu;
    SET_GPR_U32(ctx, 31, 0x3B7524u);
    ctx->pc = 0x3B7520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B751Cu;
    // 0x3b7520: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3B751Cu, 0x3B7524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7524u;
label_3b7524:
    // 0x3b7524: 0xc0ed294  jal         func_3B4A50
label_3b7528:
    if (ctx->pc == 0x3B7528u) {
        ctx->pc = 0x3B7528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7524u;
        // 0x3b7528: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B752Cu;
        goto label_3b752c;
    }
    ctx->pc = 0x3B7524u;
    SET_GPR_U32(ctx, 31, 0x3B752Cu);
    ctx->pc = 0x3B7528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7524u;
    // 0x3b7528: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4A50u, 0x3B7524u, 0x3B752Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B752Cu;
label_3b752c:
    // 0x3b752c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b752cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b7530:
    // 0x3b7530: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3b7530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3b7534:
    // 0x3b7534: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b7534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b7538:
    // 0x3b7538: 0xc0ed2f2  jal         func_3B4BC8
label_3b753c:
    if (ctx->pc == 0x3B753Cu) {
        ctx->pc = 0x3B753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7538u;
        // 0x3b753c: 0x26310110  addiu       $s1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7540u;
        goto label_3b7540;
    }
    ctx->pc = 0x3B7538u;
    SET_GPR_U32(ctx, 31, 0x3B7540u);
    ctx->pc = 0x3B753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7538u;
    // 0x3b753c: 0x26310110  addiu       $s1, $s1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4BC8u, 0x3B7538u, 0x3B7540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7540u;
label_3b7540:
    // 0x3b7540: 0x1633fff5  bne         $s1, $s3, . + 4 + (-0xB << 2)
label_3b7544:
    if (ctx->pc == 0x3B7544u) {
        ctx->pc = 0x3B7544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7540u;
        // 0x3b7544: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7548u;
        goto label_3b7548;
    }
    ctx->pc = 0x3B7540u;
    {
        const bool branch_taken_0x3b7540 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x3B7544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7540u;
        // 0x3b7544: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7540) {
            ctx->pc = 0x3B7518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b7518;
        }
    }
    ctx->pc = 0x3B7548u;
label_3b7548:
    // 0x3b7548: 0xc103684  jal         func_40DA10
label_3b754c:
    if (ctx->pc == 0x3B754Cu) {
        ctx->pc = 0x3B754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7548u;
        // 0x3b754c: 0x8e4400b0  lw          $a0, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7550u;
        goto label_3b7550;
    }
    ctx->pc = 0x3B7548u;
    SET_GPR_U32(ctx, 31, 0x3B7550u);
    ctx->pc = 0x3B754Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7548u;
    // 0x3b754c: 0x8e4400b0  lw          $a0, 0xB0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3B7548u, 0x3B7550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7550u;
label_3b7550:
    // 0x3b7550: 0xc103684  jal         func_40DA10
label_3b7554:
    if (ctx->pc == 0x3B7554u) {
        ctx->pc = 0x3B7554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7550u;
        // 0x3b7554: 0x8e4400b8  lw          $a0, 0xB8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7558u;
        goto label_3b7558;
    }
    ctx->pc = 0x3B7550u;
    SET_GPR_U32(ctx, 31, 0x3B7558u);
    ctx->pc = 0x3B7554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7550u;
    // 0x3b7554: 0x8e4400b8  lw          $a0, 0xB8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3B7550u, 0x3B7558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7558u;
label_3b7558:
    // 0x3b7558: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3b7558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3b755c:
    // 0x3b755c: 0xae5400b0  sw          $s4, 0xB0($s2)
    ctx->pc = 0x3b755cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 20));
label_3b7560:
    // 0x3b7560: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3b7560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_3b7564:
    // 0x3b7564: 0xae4000b8  sw          $zero, 0xB8($s2)
    ctx->pc = 0x3b7564u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 0));
label_3b7568:
    // 0x3b7568: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x3b7568u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_3b756c:
    // 0x3b756c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3b756cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b7570:
    // 0x3b7570: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3b7570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b7574:
    // 0x3b7574: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3b7574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b7578:
    // 0x3b7578: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3b7578u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b757c:
    // 0x3b757c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3b757cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b7580:
    // 0x3b7580: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3b7580u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b7584:
    // 0x3b7584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b7584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b7588:
    // 0x3b7588: 0x3e00008  jr          $ra
label_3b758c:
    if (ctx->pc == 0x3B758Cu) {
        ctx->pc = 0x3B758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7588u;
        // 0x3b758c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7590u;
        goto label_fallthrough_0x3b7588;
    }
    ctx->pc = 0x3B7588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7588u;
        // 0x3b758c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b7588:
    ctx->pc = 0x3B7590u;
}
