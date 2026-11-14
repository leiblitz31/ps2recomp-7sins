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

// Function: sub_003AC0C8
// Address: 0x3ac0c8 - 0x3ac2b8
void sub_003AC0C8_0x3ac0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC0C8_0x3ac0c8");
#endif

    switch (ctx->pc) {
        case 0x3ac0c8u: goto label_3ac0c8;
        case 0x3ac0ccu: goto label_3ac0cc;
        case 0x3ac0d0u: goto label_3ac0d0;
        case 0x3ac0d4u: goto label_3ac0d4;
        case 0x3ac0d8u: goto label_3ac0d8;
        case 0x3ac0dcu: goto label_3ac0dc;
        case 0x3ac0e0u: goto label_3ac0e0;
        case 0x3ac0e4u: goto label_3ac0e4;
        case 0x3ac0e8u: goto label_3ac0e8;
        case 0x3ac0ecu: goto label_3ac0ec;
        case 0x3ac0f0u: goto label_3ac0f0;
        case 0x3ac0f4u: goto label_3ac0f4;
        case 0x3ac0f8u: goto label_3ac0f8;
        case 0x3ac0fcu: goto label_3ac0fc;
        case 0x3ac100u: goto label_3ac100;
        case 0x3ac104u: goto label_3ac104;
        case 0x3ac108u: goto label_3ac108;
        case 0x3ac10cu: goto label_3ac10c;
        case 0x3ac110u: goto label_3ac110;
        case 0x3ac114u: goto label_3ac114;
        case 0x3ac118u: goto label_3ac118;
        case 0x3ac11cu: goto label_3ac11c;
        case 0x3ac120u: goto label_3ac120;
        case 0x3ac124u: goto label_3ac124;
        case 0x3ac128u: goto label_3ac128;
        case 0x3ac12cu: goto label_3ac12c;
        case 0x3ac130u: goto label_3ac130;
        case 0x3ac134u: goto label_3ac134;
        case 0x3ac138u: goto label_3ac138;
        case 0x3ac13cu: goto label_3ac13c;
        case 0x3ac140u: goto label_3ac140;
        case 0x3ac144u: goto label_3ac144;
        case 0x3ac148u: goto label_3ac148;
        case 0x3ac14cu: goto label_3ac14c;
        case 0x3ac150u: goto label_3ac150;
        case 0x3ac154u: goto label_3ac154;
        case 0x3ac158u: goto label_3ac158;
        case 0x3ac15cu: goto label_3ac15c;
        case 0x3ac160u: goto label_3ac160;
        case 0x3ac164u: goto label_3ac164;
        case 0x3ac168u: goto label_3ac168;
        case 0x3ac16cu: goto label_3ac16c;
        case 0x3ac170u: goto label_3ac170;
        case 0x3ac174u: goto label_3ac174;
        case 0x3ac178u: goto label_3ac178;
        case 0x3ac17cu: goto label_3ac17c;
        case 0x3ac180u: goto label_3ac180;
        case 0x3ac184u: goto label_3ac184;
        case 0x3ac188u: goto label_3ac188;
        case 0x3ac18cu: goto label_3ac18c;
        case 0x3ac190u: goto label_3ac190;
        case 0x3ac194u: goto label_3ac194;
        case 0x3ac198u: goto label_3ac198;
        case 0x3ac19cu: goto label_3ac19c;
        case 0x3ac1a0u: goto label_3ac1a0;
        case 0x3ac1a4u: goto label_3ac1a4;
        case 0x3ac1a8u: goto label_3ac1a8;
        case 0x3ac1acu: goto label_3ac1ac;
        case 0x3ac1b0u: goto label_3ac1b0;
        case 0x3ac1b4u: goto label_3ac1b4;
        case 0x3ac1b8u: goto label_3ac1b8;
        case 0x3ac1bcu: goto label_3ac1bc;
        case 0x3ac1c0u: goto label_3ac1c0;
        case 0x3ac1c4u: goto label_3ac1c4;
        case 0x3ac1c8u: goto label_3ac1c8;
        case 0x3ac1ccu: goto label_3ac1cc;
        case 0x3ac1d0u: goto label_3ac1d0;
        case 0x3ac1d4u: goto label_3ac1d4;
        case 0x3ac1d8u: goto label_3ac1d8;
        case 0x3ac1dcu: goto label_3ac1dc;
        case 0x3ac1e0u: goto label_3ac1e0;
        case 0x3ac1e4u: goto label_3ac1e4;
        case 0x3ac1e8u: goto label_3ac1e8;
        case 0x3ac1ecu: goto label_3ac1ec;
        case 0x3ac1f0u: goto label_3ac1f0;
        case 0x3ac1f4u: goto label_3ac1f4;
        case 0x3ac1f8u: goto label_3ac1f8;
        case 0x3ac1fcu: goto label_3ac1fc;
        case 0x3ac200u: goto label_3ac200;
        case 0x3ac204u: goto label_3ac204;
        case 0x3ac208u: goto label_3ac208;
        case 0x3ac20cu: goto label_3ac20c;
        case 0x3ac210u: goto label_3ac210;
        case 0x3ac214u: goto label_3ac214;
        case 0x3ac218u: goto label_3ac218;
        case 0x3ac21cu: goto label_3ac21c;
        case 0x3ac220u: goto label_3ac220;
        case 0x3ac224u: goto label_3ac224;
        case 0x3ac228u: goto label_3ac228;
        case 0x3ac22cu: goto label_3ac22c;
        case 0x3ac230u: goto label_3ac230;
        case 0x3ac234u: goto label_3ac234;
        case 0x3ac238u: goto label_3ac238;
        case 0x3ac23cu: goto label_3ac23c;
        case 0x3ac240u: goto label_3ac240;
        case 0x3ac244u: goto label_3ac244;
        case 0x3ac248u: goto label_3ac248;
        case 0x3ac24cu: goto label_3ac24c;
        case 0x3ac250u: goto label_3ac250;
        case 0x3ac254u: goto label_3ac254;
        case 0x3ac258u: goto label_3ac258;
        case 0x3ac25cu: goto label_3ac25c;
        case 0x3ac260u: goto label_3ac260;
        case 0x3ac264u: goto label_3ac264;
        case 0x3ac268u: goto label_3ac268;
        case 0x3ac26cu: goto label_3ac26c;
        case 0x3ac270u: goto label_3ac270;
        case 0x3ac274u: goto label_3ac274;
        case 0x3ac278u: goto label_3ac278;
        case 0x3ac27cu: goto label_3ac27c;
        case 0x3ac280u: goto label_3ac280;
        case 0x3ac284u: goto label_3ac284;
        case 0x3ac288u: goto label_3ac288;
        case 0x3ac28cu: goto label_3ac28c;
        case 0x3ac290u: goto label_3ac290;
        case 0x3ac294u: goto label_3ac294;
        case 0x3ac298u: goto label_3ac298;
        case 0x3ac29cu: goto label_3ac29c;
        case 0x3ac2a0u: goto label_3ac2a0;
        case 0x3ac2a4u: goto label_3ac2a4;
        case 0x3ac2a8u: goto label_3ac2a8;
        case 0x3ac2acu: goto label_3ac2ac;
        case 0x3ac2b0u: goto label_3ac2b0;
        case 0x3ac2b4u: goto label_3ac2b4;
        default: break;
    }

    ctx->pc = 0x3ac0c8u;

label_3ac0c8:
    // 0x3ac0c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ac0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3ac0cc:
    // 0x3ac0cc: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x3ac0ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
label_3ac0d0:
    // 0x3ac0d0: 0x8f85aaf8  lw          $a1, -0x5508($gp)
    ctx->pc = 0x3ac0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945528)));
label_3ac0d4:
    // 0x3ac0d4: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x3ac0d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
label_3ac0d8:
    // 0x3ac0d8: 0x8f87aafc  lw          $a3, -0x5504($gp)
    ctx->pc = 0x3ac0d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945532)));
label_3ac0dc:
    // 0x3ac0dc: 0x2508ce28  addiu       $t0, $t0, -0x31D8
    ctx->pc = 0x3ac0dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954536));
label_3ac0e0:
    // 0x3ac0e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3ac0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3ac0e4:
    // 0x3ac0e4: 0x24040144  addiu       $a0, $zero, 0x144
    ctx->pc = 0x3ac0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 324));
label_3ac0e8:
    // 0x3ac0e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ac0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ac0ec:
    // 0x3ac0ec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3ac0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ac0f0:
    // 0x3ac0f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ac0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ac0f4:
    // 0x3ac0f4: 0xc10408c  jal         func_410230
label_3ac0f8:
    if (ctx->pc == 0x3AC0F8u) {
        ctx->pc = 0x3AC0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC0F4u;
        // 0x3ac0f8: 0x35290199  ori         $t1, $t1, 0x199 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)409);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC0FCu;
        goto label_3ac0fc;
    }
    ctx->pc = 0x3AC0F4u;
    SET_GPR_U32(ctx, 31, 0x3AC0FCu);
    ctx->pc = 0x3AC0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC0F4u;
    // 0x3ac0f8: 0x35290199  ori         $t1, $t1, 0x199 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)409);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x3AC0F4u, 0x3AC0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC0FCu;
label_3ac0fc:
    // 0x3ac0fc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3ac0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3ac100:
    // 0x3ac100: 0x2470ce80  addiu       $s0, $v1, -0x3180
    ctx->pc = 0x3ac100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_3ac104:
    // 0x3ac104: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x3ac104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3ac108:
    // 0x3ac108: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_3ac10c:
    if (ctx->pc == 0x3AC10Cu) {
        ctx->pc = 0x3AC10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC108u;
        // 0x3ac10c: 0xae020508  sw          $v0, 0x508($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC110u;
        goto label_3ac110;
    }
    ctx->pc = 0x3AC108u;
    {
        const bool branch_taken_0x3ac108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC108u;
        // 0x3ac10c: 0xae020508  sw          $v0, 0x508($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac108) {
            ctx->pc = 0x3AC15Cu;
            goto label_3ac15c;
        }
    }
    ctx->pc = 0x3AC110u;
label_3ac110:
    // 0x3ac110: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x3ac110u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
label_3ac114:
    // 0x3ac114: 0x8f85ab00  lw          $a1, -0x5500($gp)
    ctx->pc = 0x3ac114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945536)));
label_3ac118:
    // 0x3ac118: 0x8f87ab04  lw          $a3, -0x54FC($gp)
    ctx->pc = 0x3ac118u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945540)));
label_3ac11c:
    // 0x3ac11c: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x3ac11cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
label_3ac120:
    // 0x3ac120: 0x2508ce50  addiu       $t0, $t0, -0x31B0
    ctx->pc = 0x3ac120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954576));
label_3ac124:
    // 0x3ac124: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3ac124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3ac128:
    // 0x3ac128: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3ac128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ac12c:
    // 0x3ac12c: 0xc10408c  jal         func_410230
label_3ac130:
    if (ctx->pc == 0x3AC130u) {
        ctx->pc = 0x3AC130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC12Cu;
        // 0x3ac130: 0x35290190  ori         $t1, $t1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC134u;
        goto label_3ac134;
    }
    ctx->pc = 0x3AC12Cu;
    SET_GPR_U32(ctx, 31, 0x3AC134u);
    ctx->pc = 0x3AC130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC12Cu;
    // 0x3ac130: 0x35290190  ori         $t1, $t1, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x3AC12Cu, 0x3AC134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC134u;
label_3ac134:
    // 0x3ac134: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3ac138:
    if (ctx->pc == 0x3AC138u) {
        ctx->pc = 0x3AC138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC134u;
        // 0x3ac138: 0xae020514  sw          $v0, 0x514($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC13Cu;
        goto label_3ac13c;
    }
    ctx->pc = 0x3AC134u;
    {
        const bool branch_taken_0x3ac134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC134u;
        // 0x3ac138: 0xae020514  sw          $v0, 0x514($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac134) {
            ctx->pc = 0x3AC15Cu;
            goto label_3ac15c;
        }
    }
    ctx->pc = 0x3AC13Cu;
label_3ac13c:
    // 0x3ac13c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3ac13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3ac140:
    // 0x3ac140: 0x3c050104  lui         $a1, 0x104
    ctx->pc = 0x3ac140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)260 << 16));
label_3ac144:
    // 0x3ac144: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3ac144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3ac148:
    // 0x3ac148: 0x24040051  addiu       $a0, $zero, 0x51
    ctx->pc = 0x3ac148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_3ac14c:
    // 0x3ac14c: 0x40f809  jalr        $v0
label_3ac150:
    if (ctx->pc == 0x3AC150u) {
        ctx->pc = 0x3AC150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC14Cu;
        // 0x3ac150: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC154u;
        goto label_3ac154;
    }
    ctx->pc = 0x3AC14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC154u);
        ctx->pc = 0x3AC150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC14Cu;
        // 0x3ac150: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC14Cu, 0x3AC154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC154u;
label_3ac154:
    // 0x3ac154: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3ac158:
    if (ctx->pc == 0x3AC158u) {
        ctx->pc = 0x3AC158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC154u;
        // 0x3ac158: 0xae02050c  sw          $v0, 0x50C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC15Cu;
        goto label_3ac15c;
    }
    ctx->pc = 0x3AC154u;
    {
        const bool branch_taken_0x3ac154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC154u;
        // 0x3ac158: 0xae02050c  sw          $v0, 0x50C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac154) {
            ctx->pc = 0x3AC164u;
            goto label_3ac164;
        }
    }
    ctx->pc = 0x3AC15Cu;
label_3ac15c:
    // 0x3ac15c: 0x10000050  b           . + 4 + (0x50 << 2)
label_3ac160:
    if (ctx->pc == 0x3AC160u) {
        ctx->pc = 0x3AC160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC15Cu;
        // 0x3ac160: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC164u;
        goto label_3ac164;
    }
    ctx->pc = 0x3AC15Cu;
    {
        const bool branch_taken_0x3ac15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC15Cu;
        // 0x3ac160: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac15c) {
            ctx->pc = 0x3AC2A0u;
            goto label_3ac2a0;
        }
    }
    ctx->pc = 0x3AC164u;
label_3ac164:
    // 0x3ac164: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x3ac164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_3ac168:
    // 0x3ac168: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x3ac168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_3ac16c:
    // 0x3ac16c: 0xae020510  sw          $v0, 0x510($s0)
    ctx->pc = 0x3ac16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1296), GPR_U32(ctx, 2));
label_3ac170:
    // 0x3ac170: 0xc0eb31a  jal         func_3ACC68
label_3ac174:
    if (ctx->pc == 0x3AC174u) {
        ctx->pc = 0x3AC174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC170u;
        // 0x3ac174: 0x24849a78  addiu       $a0, $a0, -0x6588 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC178u;
        goto label_3ac178;
    }
    ctx->pc = 0x3AC170u;
    SET_GPR_U32(ctx, 31, 0x3AC178u);
    ctx->pc = 0x3AC174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC170u;
    // 0x3ac174: 0x24849a78  addiu       $a0, $a0, -0x6588 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACC68u, 0x3AC170u, 0x3AC178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC178u;
label_3ac178:
    // 0x3ac178: 0x260e0200  addiu       $t6, $s0, 0x200
    ctx->pc = 0x3ac178u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_3ac17c:
    // 0x3ac17c: 0x260f0500  addiu       $t7, $s0, 0x500
    ctx->pc = 0x3ac17cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 1280));
label_3ac180:
    // 0x3ac180: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ac180u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ac184:
    // 0x3ac184: 0x1c0682d  daddu       $t5, $t6, $zero
    ctx->pc = 0x3ac184u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_3ac188:
    // 0x3ac188: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x3ac188u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_3ac18c:
    // 0x3ac18c: 0x1c0582d  daddu       $t3, $t6, $zero
    ctx->pc = 0x3ac18cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_3ac190:
    // 0x3ac190: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x3ac190u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_3ac194:
    // 0x3ac194: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x3ac194u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_3ac198:
    // 0x3ac198: 0x1c0402d  daddu       $t0, $t6, $zero
    ctx->pc = 0x3ac198u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_3ac19c:
    // 0x3ac19c: 0x0  nop
    ctx->pc = 0x3ac19cu;
    // NOP
label_3ac1a0:
    // 0x3ac1a0: 0xa5070000  sh          $a3, 0x0($t0)
    ctx->pc = 0x3ac1a0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
label_3ac1a4:
    // 0x3ac1a4: 0x24e20002  addiu       $v0, $a3, 0x2
    ctx->pc = 0x3ac1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_3ac1a8:
    // 0x3ac1a8: 0xa5220002  sh          $v0, 0x2($t1)
    ctx->pc = 0x3ac1a8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 2), (uint16_t)GPR_U32(ctx, 2));
label_3ac1ac:
    // 0x3ac1ac: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x3ac1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
label_3ac1b0:
    // 0x3ac1b0: 0xa5430004  sh          $v1, 0x4($t2)
    ctx->pc = 0x3ac1b0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4), (uint16_t)GPR_U32(ctx, 3));
label_3ac1b4:
    // 0x3ac1b4: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x3ac1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3ac1b8:
    // 0x3ac1b8: 0xa5670006  sh          $a3, 0x6($t3)
    ctx->pc = 0x3ac1b8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 6), (uint16_t)GPR_U32(ctx, 7));
label_3ac1bc:
    // 0x3ac1bc: 0x24e40004  addiu       $a0, $a3, 0x4
    ctx->pc = 0x3ac1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3ac1c0:
    // 0x3ac1c0: 0xa5830008  sh          $v1, 0x8($t4)
    ctx->pc = 0x3ac1c0u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 8), (uint16_t)GPR_U32(ctx, 3));
label_3ac1c4:
    // 0x3ac1c4: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x3ac1c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_3ac1c8:
    // 0x3ac1c8: 0xa5a2000a  sh          $v0, 0xA($t5)
    ctx->pc = 0x3ac1c8u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 10), (uint16_t)GPR_U32(ctx, 2));
label_3ac1cc:
    // 0x3ac1cc: 0x24e30002  addiu       $v1, $a3, 0x2
    ctx->pc = 0x3ac1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_3ac1d0:
    // 0x3ac1d0: 0xa507000c  sh          $a3, 0xC($t0)
    ctx->pc = 0x3ac1d0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 12), (uint16_t)GPR_U32(ctx, 7));
label_3ac1d4:
    // 0x3ac1d4: 0x24e20003  addiu       $v0, $a3, 0x3
    ctx->pc = 0x3ac1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
label_3ac1d8:
    // 0x3ac1d8: 0xa523000e  sh          $v1, 0xE($t1)
    ctx->pc = 0x3ac1d8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 14), (uint16_t)GPR_U32(ctx, 3));
label_3ac1dc:
    // 0x3ac1dc: 0x24e40004  addiu       $a0, $a3, 0x4
    ctx->pc = 0x3ac1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3ac1e0:
    // 0x3ac1e0: 0xa5420010  sh          $v0, 0x10($t2)
    ctx->pc = 0x3ac1e0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 16), (uint16_t)GPR_U32(ctx, 2));
label_3ac1e4:
    // 0x3ac1e4: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x3ac1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3ac1e8:
    // 0x3ac1e8: 0xa5670012  sh          $a3, 0x12($t3)
    ctx->pc = 0x3ac1e8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 18), (uint16_t)GPR_U32(ctx, 7));
label_3ac1ec:
    // 0x3ac1ec: 0x25ce0030  addiu       $t6, $t6, 0x30
    ctx->pc = 0x3ac1ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 48));
label_3ac1f0:
    // 0x3ac1f0: 0xa5820014  sh          $v0, 0x14($t4)
    ctx->pc = 0x3ac1f0u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 20), (uint16_t)GPR_U32(ctx, 2));
label_3ac1f4:
    // 0x3ac1f4: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x3ac1f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_3ac1f8:
    // 0x3ac1f8: 0xa5a30016  sh          $v1, 0x16($t5)
    ctx->pc = 0x3ac1f8u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 22), (uint16_t)GPR_U32(ctx, 3));
label_3ac1fc:
    // 0x3ac1fc: 0x24e20002  addiu       $v0, $a3, 0x2
    ctx->pc = 0x3ac1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_3ac200:
    // 0x3ac200: 0xa5070018  sh          $a3, 0x18($t0)
    ctx->pc = 0x3ac200u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 24), (uint16_t)GPR_U32(ctx, 7));
label_3ac204:
    // 0x3ac204: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x3ac204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
label_3ac208:
    // 0x3ac208: 0xa522001a  sh          $v0, 0x1A($t1)
    ctx->pc = 0x3ac208u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 26), (uint16_t)GPR_U32(ctx, 2));
label_3ac20c:
    // 0x3ac20c: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x3ac20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3ac210:
    // 0x3ac210: 0xa543001c  sh          $v1, 0x1C($t2)
    ctx->pc = 0x3ac210u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 28), (uint16_t)GPR_U32(ctx, 3));
label_3ac214:
    // 0x3ac214: 0x24e50004  addiu       $a1, $a3, 0x4
    ctx->pc = 0x3ac214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3ac218:
    // 0x3ac218: 0xa567001e  sh          $a3, 0x1E($t3)
    ctx->pc = 0x3ac218u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 30), (uint16_t)GPR_U32(ctx, 7));
label_3ac21c:
    // 0x3ac21c: 0x1cf302a  slt         $a2, $t6, $t7
    ctx->pc = 0x3ac21cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
label_3ac220:
    // 0x3ac220: 0xa5830020  sh          $v1, 0x20($t4)
    ctx->pc = 0x3ac220u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 32), (uint16_t)GPR_U32(ctx, 3));
label_3ac224:
    // 0x3ac224: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x3ac224u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_3ac228:
    // 0x3ac228: 0xa5a40022  sh          $a0, 0x22($t5)
    ctx->pc = 0x3ac228u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 34), (uint16_t)GPR_U32(ctx, 4));
label_3ac22c:
    // 0x3ac22c: 0x24e20002  addiu       $v0, $a3, 0x2
    ctx->pc = 0x3ac22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_3ac230:
    // 0x3ac230: 0xa5070024  sh          $a3, 0x24($t0)
    ctx->pc = 0x3ac230u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 36), (uint16_t)GPR_U32(ctx, 7));
label_3ac234:
    // 0x3ac234: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x3ac234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
label_3ac238:
    // 0x3ac238: 0xa5220026  sh          $v0, 0x26($t1)
    ctx->pc = 0x3ac238u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 38), (uint16_t)GPR_U32(ctx, 2));
label_3ac23c:
    // 0x3ac23c: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x3ac23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3ac240:
    // 0x3ac240: 0xa5430028  sh          $v1, 0x28($t2)
    ctx->pc = 0x3ac240u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 40), (uint16_t)GPR_U32(ctx, 3));
label_3ac244:
    // 0x3ac244: 0x24e20004  addiu       $v0, $a3, 0x4
    ctx->pc = 0x3ac244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3ac248:
    // 0x3ac248: 0xa567002a  sh          $a3, 0x2A($t3)
    ctx->pc = 0x3ac248u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 42), (uint16_t)GPR_U32(ctx, 7));
label_3ac24c:
    // 0x3ac24c: 0x254a0030  addiu       $t2, $t2, 0x30
    ctx->pc = 0x3ac24cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
label_3ac250:
    // 0x3ac250: 0xa583002c  sh          $v1, 0x2C($t4)
    ctx->pc = 0x3ac250u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 44), (uint16_t)GPR_U32(ctx, 3));
label_3ac254:
    // 0x3ac254: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x3ac254u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3ac258:
    // 0x3ac258: 0xa5a4002e  sh          $a0, 0x2E($t5)
    ctx->pc = 0x3ac258u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 46), (uint16_t)GPR_U32(ctx, 4));
label_3ac25c:
    // 0x3ac25c: 0x258c0030  addiu       $t4, $t4, 0x30
    ctx->pc = 0x3ac25cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 48));
label_3ac260:
    // 0x3ac260: 0x25ad0030  addiu       $t5, $t5, 0x30
    ctx->pc = 0x3ac260u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 48));
label_3ac264:
    // 0x3ac264: 0x256b0030  addiu       $t3, $t3, 0x30
    ctx->pc = 0x3ac264u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 48));
label_3ac268:
    // 0x3ac268: 0x25290030  addiu       $t1, $t1, 0x30
    ctx->pc = 0x3ac268u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
label_3ac26c:
    // 0x3ac26c: 0x14c0ffcc  bnez        $a2, . + 4 + (-0x34 << 2)
label_3ac270:
    if (ctx->pc == 0x3AC270u) {
        ctx->pc = 0x3AC270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC26Cu;
        // 0x3ac270: 0x25080030  addiu       $t0, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC274u;
        goto label_3ac274;
    }
    ctx->pc = 0x3AC26Cu;
    {
        const bool branch_taken_0x3ac26c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC26Cu;
        // 0x3ac270: 0x25080030  addiu       $t0, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac26c) {
            ctx->pc = 0x3AC1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac1a0;
        }
    }
    ctx->pc = 0x3AC274u;
label_3ac274:
    // 0x3ac274: 0x2630ce80  addiu       $s0, $s1, -0x3180
    ctx->pc = 0x3ac274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954624));
label_3ac278:
    // 0x3ac278: 0xc1081b0  jal         func_4206C0
label_3ac27c:
    if (ctx->pc == 0x3AC27Cu) {
        ctx->pc = 0x3AC27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC278u;
        // 0x3ac27c: 0xae000518  sw          $zero, 0x518($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC280u;
        goto label_3ac280;
    }
    ctx->pc = 0x3AC278u;
    SET_GPR_U32(ctx, 31, 0x3AC280u);
    ctx->pc = 0x3AC27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC278u;
    // 0x3ac27c: 0xae000518  sw          $zero, 0x518($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4206C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4206C0u, 0x3AC278u, 0x3AC280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC280u;
label_3ac280:
    // 0x3ac280: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x3ac280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_3ac284:
    // 0x3ac284: 0xae000d78  sw          $zero, 0xD78($s0)
    ctx->pc = 0x3ac284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3448), GPR_U32(ctx, 0));
label_3ac288:
    // 0x3ac288: 0xae020520  sw          $v0, 0x520($s0)
    ctx->pc = 0x3ac288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 2));
label_3ac28c:
    // 0x3ac28c: 0x2484c5f0  addiu       $a0, $a0, -0x3A10
    ctx->pc = 0x3ac28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952432));
label_3ac290:
    // 0x3ac290: 0xae02051c  sw          $v0, 0x51C($s0)
    ctx->pc = 0x3ac290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1308), GPR_U32(ctx, 2));
label_3ac294:
    // 0x3ac294: 0xc0eb358  jal         func_3ACD60
label_3ac298:
    if (ctx->pc == 0x3AC298u) {
        ctx->pc = 0x3AC298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC294u;
        // 0x3ac298: 0xae000d74  sw          $zero, 0xD74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3444), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC29Cu;
        goto label_3ac29c;
    }
    ctx->pc = 0x3AC294u;
    SET_GPR_U32(ctx, 31, 0x3AC29Cu);
    ctx->pc = 0x3AC298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC294u;
    // 0x3ac298: 0xae000d74  sw          $zero, 0xD74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 3444), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACD60u, 0x3AC294u, 0x3AC29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC29Cu;
label_3ac29c:
    // 0x3ac29c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ac29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ac2a0:
    // 0x3ac2a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3ac2a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ac2a4:
    // 0x3ac2a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ac2a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ac2a8:
    // 0x3ac2a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ac2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ac2ac:
    // 0x3ac2ac: 0x3e00008  jr          $ra
label_3ac2b0:
    if (ctx->pc == 0x3AC2B0u) {
        ctx->pc = 0x3AC2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC2ACu;
        // 0x3ac2b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC2B4u;
        goto label_3ac2b4;
    }
    ctx->pc = 0x3AC2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC2ACu;
        // 0x3ac2b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AC2B4u;
label_3ac2b4:
    // 0x3ac2b4: 0x0  nop
    ctx->pc = 0x3ac2b4u;
    // NOP
    ctx->pc = 0x3ac2b8u;
}
