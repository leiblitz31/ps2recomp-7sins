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

// Function: sub_0049E188
// Address: 0x49e188 - 0x49e470
void sub_0049E188_0x49e188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049E188_0x49e188");
#endif

    switch (ctx->pc) {
        case 0x49e1b8u: goto label_49e1b8;
        case 0x49e1c0u: goto label_49e1c0;
        case 0x49e1dcu: goto label_49e1dc;
        case 0x49e1f8u: goto label_49e1f8;
        case 0x49e208u: goto label_49e208;
        case 0x49e210u: goto label_49e210;
        case 0x49e220u: goto label_49e220;
        case 0x49e248u: goto label_49e248;
        case 0x49e254u: goto label_49e254;
        case 0x49e25cu: goto label_49e25c;
        case 0x49e280u: goto label_49e280;
        case 0x49e298u: goto label_49e298;
        case 0x49e2c8u: goto label_49e2c8;
        case 0x49e2e0u: goto label_49e2e0;
        case 0x49e344u: goto label_49e344;
        case 0x49e358u: goto label_49e358;
        case 0x49e380u: goto label_49e380;
        case 0x49e398u: goto label_49e398;
        case 0x49e3acu: goto label_49e3ac;
        case 0x49e3f8u: goto label_49e3f8;
        case 0x49e408u: goto label_49e408;
        case 0x49e418u: goto label_49e418;
        case 0x49e428u: goto label_49e428;
        case 0x49e43cu: goto label_49e43c;
        default: break;
    }

    ctx->pc = 0x49e188u;

label_49e188:
    // 0x49e188: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x49e188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x49e18c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x49e18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x49e190: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x49e190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x49e194: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49e194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e198: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49e198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x49e19c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x49e19cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e1a0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x49e1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x49e1a4: 0x3c120066  lui         $s2, 0x66
    ctx->pc = 0x49e1a4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)102 << 16));
    // 0x49e1a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49e1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49e1ac: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x49e1acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49e1b0: 0x26448330  addiu       $a0, $s2, -0x7CD0
    ctx->pc = 0x49e1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935344));
    // 0x49e1b4: 0x0  nop
    ctx->pc = 0x49e1b4u;
    // NOP
label_49e1b8:
    // 0x49e1b8: 0xc127c62  jal         func_49F188
    ctx->pc = 0x49E1B8u;
    SET_GPR_U32(ctx, 31, 0x49E1C0u);
    ctx->pc = 0x49E1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E1B8u;
    // 0x49e1bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F188u, 0x49E1B8u, 0x49E1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E1C0u;
label_49e1c0:
    // 0x49e1c0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x49E1C0u;
    {
        const bool branch_taken_0x49e1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e1c0) {
            ctx->pc = 0x49E1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E1C0u;
            // 0x49e1c4: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E1E4u;
            goto label_49e1e4;
        }
    }
    ctx->pc = 0x49E1C8u;
    // 0x49e1c8: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x49E1C8u;
    {
        const bool branch_taken_0x49e1c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x49E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E1C8u;
        // 0x49e1cc: 0x26448330  addiu       $a0, $s2, -0x7CD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e1c8) {
            ctx->pc = 0x49E1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e1b8;
        }
    }
    ctx->pc = 0x49E1D0u;
    // 0x49e1d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49e1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e1d4: 0xc127862  jal         func_49E188
    ctx->pc = 0x49E1D4u;
    SET_GPR_U32(ctx, 31, 0x49E1DCu);
    ctx->pc = 0x49E1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E1D4u;
    // 0x49e1d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E188u;
    goto label_49e188;
    ctx->pc = 0x49E1DCu;
label_49e1dc:
    // 0x49e1dc: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x49E1DCu;
    {
        const bool branch_taken_0x49e1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E1DCu;
        // 0x49e1e0: 0x26448330  addiu       $a0, $s2, -0x7CD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e1dc) {
            ctx->pc = 0x49E1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e1b8;
        }
    }
    ctx->pc = 0x49E1E4u;
label_49e1e4:
    // 0x49e1e4: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x49e1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x49e1e8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x49E1E8u;
    {
        const bool branch_taken_0x49e1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e1e8) {
            ctx->pc = 0x49E1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E1E8u;
            // 0x49e1ec: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E228u;
            goto label_49e228;
        }
    }
    ctx->pc = 0x49E1F0u;
    // 0x49e1f0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x49E1F0u;
    {
        const bool branch_taken_0x49e1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E1F0u;
        // 0x49e1f4: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e1f0) {
            ctx->pc = 0x49E22Cu;
            goto label_49e22c;
        }
    }
    ctx->pc = 0x49E1F8u;
label_49e1f8:
    // 0x49e1f8: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x49e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x49e1fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x49e1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e200: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x49E200u;
    SET_GPR_U32(ctx, 31, 0x49E208u);
    ctx->pc = 0x49E204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E200u;
    // 0x49e204: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x49E200u, 0x49E208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E208u;
label_49e208:
    // 0x49e208: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x49E208u;
    {
        const bool branch_taken_0x49e208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E208u;
        // 0x49e20c: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e208) {
            ctx->pc = 0x49E2B8u;
            goto label_49e2b8;
        }
    }
    ctx->pc = 0x49E210u;
label_49e210:
    // 0x49e210: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x49e210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x49e214: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x49e214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e218: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x49E218u;
    SET_GPR_U32(ctx, 31, 0x49E220u);
    ctx->pc = 0x49E21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E218u;
    // 0x49e21c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x49E218u, 0x49E220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E220u;
label_49e220:
    // 0x49e220: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x49E220u;
    {
        const bool branch_taken_0x49e220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E220u;
        // 0x49e224: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e220) {
            ctx->pc = 0x49E300u;
            goto label_49e300;
        }
    }
    ctx->pc = 0x49E228u;
label_49e228:
    // 0x49e228: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x49e228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_49e22c:
    // 0x49e22c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49e22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x49e230: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x49E230u;
    {
        const bool branch_taken_0x49e230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49e230) {
            ctx->pc = 0x49E234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E230u;
            // 0x49e234: 0x26448330  addiu       $a0, $s2, -0x7CD0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935344));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E24Cu;
            goto label_49e24c;
        }
    }
    ctx->pc = 0x49E238u;
    // 0x49e238: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x49e238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x49e23c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x49e23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e240: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x49E240u;
    SET_GPR_U32(ctx, 31, 0x49E248u);
    ctx->pc = 0x49E244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E240u;
    // 0x49e244: 0x24848340  addiu       $a0, $a0, -0x7CC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x49E240u, 0x49E248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E248u;
label_49e248:
    // 0x49e248: 0x26448330  addiu       $a0, $s2, -0x7CD0
    ctx->pc = 0x49e248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935344));
label_49e24c:
    // 0x49e24c: 0xc127c0e  jal         func_49F038
    ctx->pc = 0x49E24Cu;
    SET_GPR_U32(ctx, 31, 0x49E254u);
    ctx->pc = 0x49E250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E24Cu;
    // 0x49e250: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F038u, 0x49E24Cu, 0x49E254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E254u;
label_49e254:
    // 0x49e254: 0xc12a492  jal         func_4A9248
    ctx->pc = 0x49E254u;
    SET_GPR_U32(ctx, 31, 0x49E25Cu);
    ctx->pc = 0x49E258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E254u;
    // 0x49e258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x49E254u, 0x49E25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E25Cu;
label_49e25c:
    // 0x49e25c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x49e25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x49e260: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x49e260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x49e264: 0x54600026  bnel        $v1, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x49E264u;
    {
        const bool branch_taken_0x49e264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x49e264) {
            ctx->pc = 0x49E268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E264u;
            // 0x49e268: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E300u;
            goto label_49e300;
        }
    }
    ctx->pc = 0x49E26Cu;
    // 0x49e26c: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x49e26cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x49e270: 0x52200011  beql        $s1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x49E270u;
    {
        const bool branch_taken_0x49e270 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e270) {
            ctx->pc = 0x49E274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E270u;
            // 0x49e274: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E2B8u;
            goto label_49e2b8;
        }
    }
    ctx->pc = 0x49E278u;
    // 0x49e278: 0xc127d08  jal         func_49F420
    ctx->pc = 0x49E278u;
    SET_GPR_U32(ctx, 31, 0x49E280u);
    ctx->pc = 0x49E27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E278u;
    // 0x49e27c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F420u, 0x49E278u, 0x49E280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E280u;
label_49e280:
    // 0x49e280: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x49e280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e284: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x49e284u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e288: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x49e288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x49e28c: 0x24475ae8  addiu       $a3, $v0, 0x5AE8
    ctx->pc = 0x49e28cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 23272));
    // 0x49e290: 0x24e50004  addiu       $a1, $a3, 0x4
    ctx->pc = 0x49e290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x49e294: 0x0  nop
    ctx->pc = 0x49e294u;
    // NOP
label_49e298:
    // 0x49e298: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49e298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49e29c: 0x1046ffd6  beq         $v0, $a2, . + 4 + (-0x2A << 2)
    ctx->pc = 0x49E29Cu;
    {
        const bool branch_taken_0x49e29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x49E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E29Cu;
        // 0x49e2a0: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e29c) {
            ctx->pc = 0x49E1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e1f8;
        }
    }
    ctx->pc = 0x49E2A4u;
    // 0x49e2a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x49e2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x49e2a8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x49e2a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x49e2ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49E2ACu;
    {
        const bool branch_taken_0x49e2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E2ACu;
        // 0x49e2b0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e2ac) {
            ctx->pc = 0x49E298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e298;
        }
    }
    ctx->pc = 0x49E2B4u;
    // 0x49e2b4: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x49e2b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_49e2b8:
    // 0x49e2b8: 0x52200011  beql        $s1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x49E2B8u;
    {
        const bool branch_taken_0x49e2b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e2b8) {
            ctx->pc = 0x49E2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E2B8u;
            // 0x49e2bc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E300u;
            goto label_49e300;
        }
    }
    ctx->pc = 0x49E2C0u;
    // 0x49e2c0: 0xc127d08  jal         func_49F420
    ctx->pc = 0x49E2C0u;
    SET_GPR_U32(ctx, 31, 0x49E2C8u);
    ctx->pc = 0x49E2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E2C0u;
    // 0x49e2c4: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F420u, 0x49E2C0u, 0x49E2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E2C8u;
label_49e2c8:
    // 0x49e2c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x49e2c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e2cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x49e2ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e2d0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x49e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x49e2d4: 0x24475ae8  addiu       $a3, $v0, 0x5AE8
    ctx->pc = 0x49e2d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 23272));
    // 0x49e2d8: 0x24e50004  addiu       $a1, $a3, 0x4
    ctx->pc = 0x49e2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x49e2dc: 0x0  nop
    ctx->pc = 0x49e2dcu;
    // NOP
label_49e2e0:
    // 0x49e2e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49e2e4: 0x1046ffca  beq         $v0, $a2, . + 4 + (-0x36 << 2)
    ctx->pc = 0x49E2E4u;
    {
        const bool branch_taken_0x49e2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x49E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E2E4u;
        // 0x49e2e8: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e2e4) {
            ctx->pc = 0x49E210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e210;
        }
    }
    ctx->pc = 0x49E2ECu;
    // 0x49e2ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x49e2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x49e2f0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x49e2f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x49e2f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49E2F4u;
    {
        const bool branch_taken_0x49e2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E2F4u;
        // 0x49e2f8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e2f4) {
            ctx->pc = 0x49E2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e2e0;
        }
    }
    ctx->pc = 0x49E2FCu;
    // 0x49e2fc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x49e2fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49e300:
    // 0x49e300: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x49e300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49e304: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49e304u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49e308: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x49e308u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49e30c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49e30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49e310: 0x3e00008  jr          $ra
    ctx->pc = 0x49E310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E310u;
        // 0x49e314: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49E310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49E318u;
    // 0x49e318: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x49e318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x49e31c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x49e31cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x49e320: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x49e320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x49e324: 0x24848330  addiu       $a0, $a0, -0x7CD0
    ctx->pc = 0x49e324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935344));
    // 0x49e328: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x49e328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x49e32c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x49e32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x49e330: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x49e330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x49e334: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x49e334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x49e338: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49e338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49e33c: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x49E33Cu;
    SET_GPR_U32(ctx, 31, 0x49E344u);
    ctx->pc = 0x49E340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E33Cu;
    // 0x49e340: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x49E33Cu, 0x49E344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E344u;
label_49e344:
    // 0x49e344: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x49e344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x49e348: 0x24525ae8  addiu       $s2, $v0, 0x5AE8
    ctx->pc = 0x49e348u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 23272));
    // 0x49e34c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x49e34cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e350: 0x26530004  addiu       $s3, $s2, 0x4
    ctx->pc = 0x49e350u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x49e354: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x49e354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_49e358:
    // 0x49e358: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x49e358u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x49e35c: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x49e35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x49e360: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x49e360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x49e364: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x49e364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x49e368: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x49e368u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49e36c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x49e36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49e370: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x49e370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x49e374: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x49e374u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e378: 0xc12aa26  jal         func_4AA898
    ctx->pc = 0x49E378u;
    SET_GPR_U32(ctx, 31, 0x49E380u);
    ctx->pc = 0x49E37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E378u;
    // 0x49e37c: 0x35290803  ori         $t1, $t1, 0x803 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2051);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA898u, 0x49E378u, 0x49E380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E380u;
label_49e380:
    // 0x49e380: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x49E380u;
    {
        const bool branch_taken_0x49e380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49e380) {
            ctx->pc = 0x49E384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E380u;
            // 0x49e384: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E3B8u;
            goto label_49e3b8;
        }
    }
    ctx->pc = 0x49E388u;
    // 0x49e388: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x49E388u;
    {
        const bool branch_taken_0x49e388 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e388) {
            ctx->pc = 0x49E38Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49E388u;
            // 0x49e38c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49E3B8u;
            goto label_49e3b8;
        }
    }
    ctx->pc = 0x49E390u;
    // 0x49e390: 0x26915ae8  addiu       $s1, $s4, 0x5AE8
    ctx->pc = 0x49e390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 23272));
    // 0x49e394: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x49e394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_49e398:
    // 0x49e398: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x49e398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x49e39c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49e39cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e3a0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x49e3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x49e3a4: 0xc12aa86  jal         func_4AAA18
    ctx->pc = 0x49E3A4u;
    SET_GPR_U32(ctx, 31, 0x49E3ACu);
    ctx->pc = 0x49E3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E3A4u;
    // 0x49e3a8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x49E3A4u, 0x49E3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E3ACu;
label_49e3ac:
    // 0x49e3ac: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49E3ACu;
    {
        const bool branch_taken_0x49e3ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E3ACu;
        // 0x49e3b0: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e3ac) {
            ctx->pc = 0x49E398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e398;
        }
    }
    ctx->pc = 0x49E3B4u;
    // 0x49e3b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x49e3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_49e3b8:
    // 0x49e3b8: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x49e3b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x49e3bc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x49E3BCu;
    {
        const bool branch_taken_0x49e3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E3BCu;
        // 0x49e3c0: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e3bc) {
            ctx->pc = 0x49E358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e358;
        }
    }
    ctx->pc = 0x49E3C4u;
    // 0x49e3c4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x49e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x49e3c8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x49e3c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49e3cc: 0x24528340  addiu       $s2, $v0, -0x7CC0
    ctx->pc = 0x49e3ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935360));
    // 0x49e3d0: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x49e3d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x49e3d4: 0xaf80c1b0  sw          $zero, -0x3E50($gp)
    ctx->pc = 0x49e3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951344), GPR_U32(ctx, 0));
    // 0x49e3d8: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x49e3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x49e3dc: 0xaf91b7c8  sw          $s1, -0x4838($gp)
    ctx->pc = 0x49e3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948808), GPR_U32(ctx, 17));
    // 0x49e3e0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x49e3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x49e3e4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x49e3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x49e3e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x49e3e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e3ec: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x49e3ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e3f0: 0xc12aa26  jal         func_4AA898
    ctx->pc = 0x49E3F0u;
    SET_GPR_U32(ctx, 31, 0x49E3F8u);
    ctx->pc = 0x49E3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E3F0u;
    // 0x49e3f4: 0x35290803  ori         $t1, $t1, 0x803 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2051);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA898u, 0x49E3F0u, 0x49E3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E3F8u;
label_49e3f8:
    // 0x49e3f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x49E3F8u;
    {
        const bool branch_taken_0x49e3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e3f8) {
            ctx->pc = 0x49E418u;
            goto label_49e418;
        }
    }
    ctx->pc = 0x49E400u;
    // 0x49e400: 0xc127ba4  jal         func_49EE90
    ctx->pc = 0x49E400u;
    SET_GPR_U32(ctx, 31, 0x49E408u);
    ctx->pc = 0x49EE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EE90u, 0x49E400u, 0x49E408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E408u;
label_49e408:
    // 0x49e408: 0x10510010  beq         $v0, $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x49E408u;
    {
        const bool branch_taken_0x49e408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x49E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E408u;
        // 0x49e40c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e408) {
            ctx->pc = 0x49E44Cu;
            goto label_49e44c;
        }
    }
    ctx->pc = 0x49E410u;
    // 0x49e410: 0xc12aa86  jal         func_4AAA18
    ctx->pc = 0x49E410u;
    SET_GPR_U32(ctx, 31, 0x49E418u);
    ctx->pc = 0x49E414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E410u;
    // 0x49e414: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x49E410u, 0x49E418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E418u;
label_49e418:
    // 0x49e418: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x49E418u;
    {
        const bool branch_taken_0x49e418 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E418u;
        // 0x49e41c: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e418) {
            ctx->pc = 0x49E444u;
            goto label_49e444;
        }
    }
    ctx->pc = 0x49E420u;
    // 0x49e420: 0x24515ae8  addiu       $s1, $v0, 0x5AE8
    ctx->pc = 0x49e420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 23272));
    // 0x49e424: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x49e424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_49e428:
    // 0x49e428: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x49e428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x49e42c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x49e42cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e430: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x49e430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x49e434: 0xc12aa86  jal         func_4AAA18
    ctx->pc = 0x49E434u;
    SET_GPR_U32(ctx, 31, 0x49E43Cu);
    ctx->pc = 0x49E438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E434u;
    // 0x49e438: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x49E434u, 0x49E43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E43Cu;
label_49e43c:
    // 0x49e43c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49E43Cu;
    {
        const bool branch_taken_0x49e43c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E43Cu;
        // 0x49e440: 0x2603ffff  addiu       $v1, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e43c) {
            ctx->pc = 0x49E428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49e428;
        }
    }
    ctx->pc = 0x49E444u;
label_49e444:
    // 0x49e444: 0xaf80b7c8  sw          $zero, -0x4838($gp)
    ctx->pc = 0x49e444u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948808), GPR_U32(ctx, 0));
    // 0x49e448: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49e448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49e44c:
    // 0x49e44c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x49e44cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x49e450: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x49e450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49e454: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x49e454u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49e458: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x49e458u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49e45c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x49e45cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49e460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49e460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49e464: 0x3e00008  jr          $ra
    ctx->pc = 0x49E464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49E468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E464u;
        // 0x49e468: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49E464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49E46Cu;
    // 0x49e46c: 0x0  nop
    ctx->pc = 0x49e46cu;
    // NOP
    ctx->pc = 0x49e470u;
}
