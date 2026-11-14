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

// Function: sub_00419250
// Address: 0x419250 - 0x419358
void sub_00419250_0x419250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419250_0x419250");
#endif

    switch (ctx->pc) {
        case 0x419250u: goto label_419250;
        case 0x419254u: goto label_419254;
        case 0x419258u: goto label_419258;
        case 0x41925cu: goto label_41925c;
        case 0x419260u: goto label_419260;
        case 0x419264u: goto label_419264;
        case 0x419268u: goto label_419268;
        case 0x41926cu: goto label_41926c;
        case 0x419270u: goto label_419270;
        case 0x419274u: goto label_419274;
        case 0x419278u: goto label_419278;
        case 0x41927cu: goto label_41927c;
        case 0x419280u: goto label_419280;
        case 0x419284u: goto label_419284;
        case 0x419288u: goto label_419288;
        case 0x41928cu: goto label_41928c;
        case 0x419290u: goto label_419290;
        case 0x419294u: goto label_419294;
        case 0x419298u: goto label_419298;
        case 0x41929cu: goto label_41929c;
        case 0x4192a0u: goto label_4192a0;
        case 0x4192a4u: goto label_4192a4;
        case 0x4192a8u: goto label_4192a8;
        case 0x4192acu: goto label_4192ac;
        case 0x4192b0u: goto label_4192b0;
        case 0x4192b4u: goto label_4192b4;
        case 0x4192b8u: goto label_4192b8;
        case 0x4192bcu: goto label_4192bc;
        case 0x4192c0u: goto label_4192c0;
        case 0x4192c4u: goto label_4192c4;
        case 0x4192c8u: goto label_4192c8;
        case 0x4192ccu: goto label_4192cc;
        case 0x4192d0u: goto label_4192d0;
        case 0x4192d4u: goto label_4192d4;
        case 0x4192d8u: goto label_4192d8;
        case 0x4192dcu: goto label_4192dc;
        case 0x4192e0u: goto label_4192e0;
        case 0x4192e4u: goto label_4192e4;
        case 0x4192e8u: goto label_4192e8;
        case 0x4192ecu: goto label_4192ec;
        case 0x4192f0u: goto label_4192f0;
        case 0x4192f4u: goto label_4192f4;
        case 0x4192f8u: goto label_4192f8;
        case 0x4192fcu: goto label_4192fc;
        case 0x419300u: goto label_419300;
        case 0x419304u: goto label_419304;
        case 0x419308u: goto label_419308;
        case 0x41930cu: goto label_41930c;
        case 0x419310u: goto label_419310;
        case 0x419314u: goto label_419314;
        case 0x419318u: goto label_419318;
        case 0x41931cu: goto label_41931c;
        case 0x419320u: goto label_419320;
        case 0x419324u: goto label_419324;
        case 0x419328u: goto label_419328;
        case 0x41932cu: goto label_41932c;
        case 0x419330u: goto label_419330;
        case 0x419334u: goto label_419334;
        case 0x419338u: goto label_419338;
        case 0x41933cu: goto label_41933c;
        case 0x419340u: goto label_419340;
        case 0x419344u: goto label_419344;
        case 0x419348u: goto label_419348;
        case 0x41934cu: goto label_41934c;
        case 0x419350u: goto label_419350;
        case 0x419354u: goto label_419354;
        default: break;
    }

    ctx->pc = 0x419250u;

label_419250:
    // 0x419250: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x419250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_419254:
    // 0x419254: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x419254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_419258:
    // 0x419258: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x419258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_41925c:
    // 0x41925c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x41925cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_419260:
    // 0x419260: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x419260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_419264:
    // 0x419264: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x419264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_419268:
    // 0x419268: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x419268u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_41926c:
    // 0x41926c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41926cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_419270:
    // 0x419270: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x419270u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_419274:
    // 0x419274: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x419274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_419278:
    // 0x419278: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x419278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41927c:
    // 0x41927c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x41927cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_419280:
    // 0x419280: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x419280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_419284:
    // 0x419284: 0x40f809  jalr        $v0
label_419288:
    if (ctx->pc == 0x419288u) {
        ctx->pc = 0x419288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419284u;
        // 0x419288: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41928Cu;
        goto label_41928c;
    }
    ctx->pc = 0x419284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41928Cu);
        ctx->pc = 0x419288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419284u;
        // 0x419288: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419284u, 0x41928Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41928Cu;
label_41928c:
    // 0x41928c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41928cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_419290:
    // 0x419290: 0x16000029  bnez        $s0, . + 4 + (0x29 << 2)
label_419294:
    if (ctx->pc == 0x419294u) {
        ctx->pc = 0x419294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419290u;
        // 0x419294: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419298u;
        goto label_419298;
    }
    ctx->pc = 0x419290u;
    {
        const bool branch_taken_0x419290 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x419294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419290u;
        // 0x419294: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419290) {
            ctx->pc = 0x419338u;
            goto label_419338;
        }
    }
    ctx->pc = 0x419298u;
label_419298:
    // 0x419298: 0x2663fff3  addiu       $v1, $s3, -0xD
    ctx->pc = 0x419298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967283));
label_41929c:
    // 0x41929c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x41929cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_4192a0:
    // 0x4192a0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_4192a4:
    if (ctx->pc == 0x4192A4u) {
        ctx->pc = 0x4192A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4192A0u;
        // 0x4192a4: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4192A8u;
        goto label_4192a8;
    }
    ctx->pc = 0x4192A0u;
    {
        const bool branch_taken_0x4192a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4192A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4192A0u;
        // 0x4192a4: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4192a0) {
            ctx->pc = 0x419308u;
            goto label_419308;
        }
    }
    ctx->pc = 0x4192A8u;
label_4192a8:
    // 0x4192a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4192a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4192ac:
    // 0x4192ac: 0x244206c0  addiu       $v0, $v0, 0x6C0
    ctx->pc = 0x4192acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
label_4192b0:
    // 0x4192b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4192b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4192b4:
    // 0x4192b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4192b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4192b8:
    // 0x4192b8: 0x800008  jr          $a0
label_4192bc:
    if (ctx->pc == 0x4192BCu) {
        ctx->pc = 0x4192C0u;
        goto label_4192c0;
    }
    ctx->pc = 0x4192B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4192C0u: goto label_4192c0;
            case 0x4192D0u: goto label_4192d0;
            case 0x4192F8u: goto label_4192f8;
            case 0x4192FCu: goto label_4192fc;
            case 0x419304u: goto label_419304;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4192B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4192C0u;
label_4192c0:
    // 0x4192c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4192c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4192c4:
    // 0x4192c4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x4192c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4192c8:
    // 0x4192c8: 0x1000000f  b           . + 4 + (0xF << 2)
label_4192cc:
    if (ctx->pc == 0x4192CCu) {
        ctx->pc = 0x4192CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4192C8u;
        // 0x4192cc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4192D0u;
        goto label_4192d0;
    }
    ctx->pc = 0x4192C8u;
    {
        const bool branch_taken_0x4192c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4192CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4192C8u;
        // 0x4192cc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4192c8) {
            ctx->pc = 0x419308u;
            goto label_419308;
        }
    }
    ctx->pc = 0x4192D0u;
label_4192d0:
    // 0x4192d0: 0x2e300001  sltiu       $s0, $s1, 0x1
    ctx->pc = 0x4192d0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4192d4:
    // 0x4192d4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_4192d8:
    if (ctx->pc == 0x4192D8u) {
        ctx->pc = 0x4192D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4192D4u;
        // 0x4192d8: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4192DCu;
        goto label_4192dc;
    }
    ctx->pc = 0x4192D4u;
    {
        const bool branch_taken_0x4192d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4192D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4192D4u;
        // 0x4192d8: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4192d4) {
            ctx->pc = 0x419310u;
            goto label_419310;
        }
    }
    ctx->pc = 0x4192DCu;
label_4192dc:
    // 0x4192dc: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4192dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_4192e0:
    // 0x4192e0: 0x8c62e94c  lw          $v0, -0x16B4($v1)
    ctx->pc = 0x4192e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961484)));
label_4192e4:
    // 0x4192e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4192e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4192e8:
    // 0x4192e8: 0x40f809  jalr        $v0
label_4192ec:
    if (ctx->pc == 0x4192ECu) {
        ctx->pc = 0x4192ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4192E8u;
        // 0x4192ec: 0x24a50698  addiu       $a1, $a1, 0x698 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4192F0u;
        goto label_4192f0;
    }
    ctx->pc = 0x4192E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4192F0u);
        ctx->pc = 0x4192ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4192E8u;
        // 0x4192ec: 0x24a50698  addiu       $a1, $a1, 0x698 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1688));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4192E8u, 0x4192F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4192F0u;
label_4192f0:
    // 0x4192f0: 0x10000005  b           . + 4 + (0x5 << 2)
label_4192f4:
    if (ctx->pc == 0x4192F4u) {
        ctx->pc = 0x4192F8u;
        goto label_4192f8;
    }
    ctx->pc = 0x4192F0u;
    {
        const bool branch_taken_0x4192f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4192f0) {
            ctx->pc = 0x419308u;
            goto label_419308;
        }
    }
    ctx->pc = 0x4192F8u;
label_4192f8:
    // 0x4192f8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x4192f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_4192fc:
    // 0x4192fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_419300:
    if (ctx->pc == 0x419300u) {
        ctx->pc = 0x419300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4192FCu;
        // 0x419300: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419304u;
        goto label_419304;
    }
    ctx->pc = 0x4192FCu;
    {
        const bool branch_taken_0x4192fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x419300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4192FCu;
        // 0x419300: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4192fc) {
            ctx->pc = 0x419308u;
            goto label_419308;
        }
    }
    ctx->pc = 0x419304u;
label_419304:
    // 0x419304: 0x2e300001  sltiu       $s0, $s1, 0x1
    ctx->pc = 0x419304u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_419308:
    // 0x419308: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_41930c:
    if (ctx->pc == 0x41930Cu) {
        ctx->pc = 0x41930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419308u;
        // 0x41930c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419310u;
        goto label_419310;
    }
    ctx->pc = 0x419308u;
    {
        const bool branch_taken_0x419308 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x41930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419308u;
        // 0x41930c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419308) {
            ctx->pc = 0x419338u;
            goto label_419338;
        }
    }
    ctx->pc = 0x419310u;
label_419310:
    // 0x419310: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x419310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_419314:
    // 0x419314: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x419314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_419318:
    // 0x419318: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x419318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41931c:
    // 0x41931c: 0xc1035f6  jal         func_40D7D8
label_419320:
    if (ctx->pc == 0x419320u) {
        ctx->pc = 0x419320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41931Cu;
        // 0x419320: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419324u;
        goto label_419324;
    }
    ctx->pc = 0x41931Cu;
    SET_GPR_U32(ctx, 31, 0x419324u);
    ctx->pc = 0x419320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41931Cu;
    // 0x419320: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41931Cu, 0x419324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419324u;
label_419324:
    // 0x419324: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x419324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_419328:
    // 0x419328: 0xc103628  jal         func_40D8A0
label_41932c:
    if (ctx->pc == 0x41932Cu) {
        ctx->pc = 0x41932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419328u;
        // 0x41932c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419330u;
        goto label_419330;
    }
    ctx->pc = 0x419328u;
    SET_GPR_U32(ctx, 31, 0x419330u);
    ctx->pc = 0x41932Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419328u;
    // 0x41932c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x419328u, 0x419330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419330u;
label_419330:
    // 0x419330: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x419330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_419334:
    // 0x419334: 0x0  nop
    ctx->pc = 0x419334u;
    // NOP
label_419338:
    // 0x419338: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x419338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41933c:
    // 0x41933c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x41933cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_419340:
    // 0x419340: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x419340u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_419344:
    // 0x419344: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x419344u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_419348:
    // 0x419348: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x419348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41934c:
    // 0x41934c: 0x3e00008  jr          $ra
label_419350:
    if (ctx->pc == 0x419350u) {
        ctx->pc = 0x419350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41934Cu;
        // 0x419350: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419354u;
        goto label_419354;
    }
    ctx->pc = 0x41934Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41934Cu;
        // 0x419350: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41934Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419354u;
label_419354:
    // 0x419354: 0x0  nop
    ctx->pc = 0x419354u;
    // NOP
    ctx->pc = 0x419358u;
}
