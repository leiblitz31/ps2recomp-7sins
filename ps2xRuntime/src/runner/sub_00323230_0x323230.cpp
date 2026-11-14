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

// Function: sub_00323230
// Address: 0x323230 - 0x323438
void sub_00323230_0x323230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323230_0x323230");
#endif

    switch (ctx->pc) {
        case 0x323230u: goto label_323230;
        case 0x323234u: goto label_323234;
        case 0x323238u: goto label_323238;
        case 0x32323cu: goto label_32323c;
        case 0x323240u: goto label_323240;
        case 0x323244u: goto label_323244;
        case 0x323248u: goto label_323248;
        case 0x32324cu: goto label_32324c;
        case 0x323250u: goto label_323250;
        case 0x323254u: goto label_323254;
        case 0x323258u: goto label_323258;
        case 0x32325cu: goto label_32325c;
        case 0x323260u: goto label_323260;
        case 0x323264u: goto label_323264;
        case 0x323268u: goto label_323268;
        case 0x32326cu: goto label_32326c;
        case 0x323270u: goto label_323270;
        case 0x323274u: goto label_323274;
        case 0x323278u: goto label_323278;
        case 0x32327cu: goto label_32327c;
        case 0x323280u: goto label_323280;
        case 0x323284u: goto label_323284;
        case 0x323288u: goto label_323288;
        case 0x32328cu: goto label_32328c;
        case 0x323290u: goto label_323290;
        case 0x323294u: goto label_323294;
        case 0x323298u: goto label_323298;
        case 0x32329cu: goto label_32329c;
        case 0x3232a0u: goto label_3232a0;
        case 0x3232a4u: goto label_3232a4;
        case 0x3232a8u: goto label_3232a8;
        case 0x3232acu: goto label_3232ac;
        case 0x3232b0u: goto label_3232b0;
        case 0x3232b4u: goto label_3232b4;
        case 0x3232b8u: goto label_3232b8;
        case 0x3232bcu: goto label_3232bc;
        case 0x3232c0u: goto label_3232c0;
        case 0x3232c4u: goto label_3232c4;
        case 0x3232c8u: goto label_3232c8;
        case 0x3232ccu: goto label_3232cc;
        case 0x3232d0u: goto label_3232d0;
        case 0x3232d4u: goto label_3232d4;
        case 0x3232d8u: goto label_3232d8;
        case 0x3232dcu: goto label_3232dc;
        case 0x3232e0u: goto label_3232e0;
        case 0x3232e4u: goto label_3232e4;
        case 0x3232e8u: goto label_3232e8;
        case 0x3232ecu: goto label_3232ec;
        case 0x3232f0u: goto label_3232f0;
        case 0x3232f4u: goto label_3232f4;
        case 0x3232f8u: goto label_3232f8;
        case 0x3232fcu: goto label_3232fc;
        case 0x323300u: goto label_323300;
        case 0x323304u: goto label_323304;
        case 0x323308u: goto label_323308;
        case 0x32330cu: goto label_32330c;
        case 0x323310u: goto label_323310;
        case 0x323314u: goto label_323314;
        case 0x323318u: goto label_323318;
        case 0x32331cu: goto label_32331c;
        case 0x323320u: goto label_323320;
        case 0x323324u: goto label_323324;
        case 0x323328u: goto label_323328;
        case 0x32332cu: goto label_32332c;
        case 0x323330u: goto label_323330;
        case 0x323334u: goto label_323334;
        case 0x323338u: goto label_323338;
        case 0x32333cu: goto label_32333c;
        case 0x323340u: goto label_323340;
        case 0x323344u: goto label_323344;
        case 0x323348u: goto label_323348;
        case 0x32334cu: goto label_32334c;
        case 0x323350u: goto label_323350;
        case 0x323354u: goto label_323354;
        case 0x323358u: goto label_323358;
        case 0x32335cu: goto label_32335c;
        case 0x323360u: goto label_323360;
        case 0x323364u: goto label_323364;
        case 0x323368u: goto label_323368;
        case 0x32336cu: goto label_32336c;
        case 0x323370u: goto label_323370;
        case 0x323374u: goto label_323374;
        case 0x323378u: goto label_323378;
        case 0x32337cu: goto label_32337c;
        case 0x323380u: goto label_323380;
        case 0x323384u: goto label_323384;
        case 0x323388u: goto label_323388;
        case 0x32338cu: goto label_32338c;
        case 0x323390u: goto label_323390;
        case 0x323394u: goto label_323394;
        case 0x323398u: goto label_323398;
        case 0x32339cu: goto label_32339c;
        case 0x3233a0u: goto label_3233a0;
        case 0x3233a4u: goto label_3233a4;
        case 0x3233a8u: goto label_3233a8;
        case 0x3233acu: goto label_3233ac;
        case 0x3233b0u: goto label_3233b0;
        case 0x3233b4u: goto label_3233b4;
        case 0x3233b8u: goto label_3233b8;
        case 0x3233bcu: goto label_3233bc;
        case 0x3233c0u: goto label_3233c0;
        case 0x3233c4u: goto label_3233c4;
        case 0x3233c8u: goto label_3233c8;
        case 0x3233ccu: goto label_3233cc;
        case 0x3233d0u: goto label_3233d0;
        case 0x3233d4u: goto label_3233d4;
        case 0x3233d8u: goto label_3233d8;
        case 0x3233dcu: goto label_3233dc;
        case 0x3233e0u: goto label_3233e0;
        case 0x3233e4u: goto label_3233e4;
        case 0x3233e8u: goto label_3233e8;
        case 0x3233ecu: goto label_3233ec;
        case 0x3233f0u: goto label_3233f0;
        case 0x3233f4u: goto label_3233f4;
        case 0x3233f8u: goto label_3233f8;
        case 0x3233fcu: goto label_3233fc;
        case 0x323400u: goto label_323400;
        case 0x323404u: goto label_323404;
        case 0x323408u: goto label_323408;
        case 0x32340cu: goto label_32340c;
        case 0x323410u: goto label_323410;
        case 0x323414u: goto label_323414;
        case 0x323418u: goto label_323418;
        case 0x32341cu: goto label_32341c;
        case 0x323420u: goto label_323420;
        case 0x323424u: goto label_323424;
        case 0x323428u: goto label_323428;
        case 0x32342cu: goto label_32342c;
        case 0x323430u: goto label_323430;
        case 0x323434u: goto label_323434;
        default: break;
    }

    ctx->pc = 0x323230u;

label_323230:
    // 0x323230: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x323230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_323234:
    // 0x323234: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x323234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_323238:
    // 0x323238: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x323238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_32323c:
    // 0x32323c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32323cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_323240:
    // 0x323240: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x323240u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_323244:
    // 0x323244: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x323244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_323248:
    // 0x323248: 0x2442b1e0  addiu       $v0, $v0, -0x4E20
    ctx->pc = 0x323248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
label_32324c:
    // 0x32324c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x32324cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_323250:
    // 0x323250: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x323250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_323254:
    // 0x323254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x323254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_323258:
    // 0x323258: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x323258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_32325c:
    // 0x32325c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_323260:
    if (ctx->pc == 0x323260u) {
        ctx->pc = 0x323260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32325Cu;
        // 0x323260: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323264u;
        goto label_323264;
    }
    ctx->pc = 0x32325Cu;
    {
        const bool branch_taken_0x32325c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x323260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32325Cu;
        // 0x323260: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32325c) {
            ctx->pc = 0x323284u;
            goto label_323284;
        }
    }
    ctx->pc = 0x323264u;
label_323264:
    // 0x323264: 0xc0c8bb4  jal         func_322ED0
label_323268:
    if (ctx->pc == 0x323268u) {
        ctx->pc = 0x32326Cu;
        goto label_32326c;
    }
    ctx->pc = 0x323264u;
    SET_GPR_U32(ctx, 31, 0x32326Cu);
    ctx->pc = 0x322ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322ED0u, 0x323264u, 0x32326Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32326Cu;
label_32326c:
    // 0x32326c: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
label_323270:
    if (ctx->pc == 0x323270u) {
        ctx->pc = 0x323270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32326Cu;
        // 0x323270: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323274u;
        goto label_323274;
    }
    ctx->pc = 0x32326Cu;
    {
        const bool branch_taken_0x32326c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32326Cu;
        // 0x323270: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32326c) {
            ctx->pc = 0x323414u;
            goto label_323414;
        }
    }
    ctx->pc = 0x323274u;
label_323274:
    // 0x323274: 0xc0c91c4  jal         func_324710
label_323278:
    if (ctx->pc == 0x323278u) {
        ctx->pc = 0x32327Cu;
        goto label_32327c;
    }
    ctx->pc = 0x323274u;
    SET_GPR_U32(ctx, 31, 0x32327Cu);
    ctx->pc = 0x324710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324710u, 0x323274u, 0x32327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32327Cu;
label_32327c:
    // 0x32327c: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
label_323280:
    if (ctx->pc == 0x323280u) {
        ctx->pc = 0x323284u;
        goto label_323284;
    }
    ctx->pc = 0x32327Cu;
    {
        const bool branch_taken_0x32327c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32327c) {
            ctx->pc = 0x323408u;
            goto label_323408;
        }
    }
    ctx->pc = 0x323284u;
label_323284:
    // 0x323284: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x323284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_323288:
    // 0x323288: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x323288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_32328c:
    // 0x32328c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x32328cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_323290:
    // 0x323290: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x323290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_323294:
    // 0x323294: 0x244a9588  addiu       $t2, $v0, -0x6A78
    ctx->pc = 0x323294u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940040));
label_323298:
    // 0x323298: 0x89430003  lwl         $v1, 0x3($t2)
    ctx->pc = 0x323298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_32329c:
    // 0x32329c: 0x99430000  lwr         $v1, 0x0($t2)
    ctx->pc = 0x32329cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_3232a0:
    // 0x3232a0: 0xaba30003  swl         $v1, 0x3($sp)
    ctx->pc = 0x3232a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3232a4:
    // 0x3232a4: 0xbba30000  swr         $v1, 0x0($sp)
    ctx->pc = 0x3232a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3232a8:
    // 0x3232a8: 0xc10746c  jal         func_41D1B0
label_3232ac:
    if (ctx->pc == 0x3232ACu) {
        ctx->pc = 0x3232ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232A8u;
        // 0x3232ac: 0x24070504  addiu       $a3, $zero, 0x504 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3232B0u;
        goto label_3232b0;
    }
    ctx->pc = 0x3232A8u;
    SET_GPR_U32(ctx, 31, 0x3232B0u);
    ctx->pc = 0x3232ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3232A8u;
    // 0x3232ac: 0x24070504  addiu       $a3, $zero, 0x504 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x3232A8u, 0x3232B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3232B0u;
label_3232b0:
    // 0x3232b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3232b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3232b4:
    // 0x3232b4: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
label_3232b8:
    if (ctx->pc == 0x3232B8u) {
        ctx->pc = 0x3232B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232B4u;
        // 0x3232b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3232BCu;
        goto label_3232bc;
    }
    ctx->pc = 0x3232B4u;
    {
        const bool branch_taken_0x3232b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3232B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232B4u;
        // 0x3232b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3232b4) {
            ctx->pc = 0x323390u;
            goto label_323390;
        }
    }
    ctx->pc = 0x3232BCu;
label_3232bc:
    // 0x3232bc: 0xc10820a  jal         func_420828
label_3232c0:
    if (ctx->pc == 0x3232C0u) {
        ctx->pc = 0x3232C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232BCu;
        // 0x3232c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3232C4u;
        goto label_3232c4;
    }
    ctx->pc = 0x3232BCu;
    SET_GPR_U32(ctx, 31, 0x3232C4u);
    ctx->pc = 0x3232C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3232BCu;
    // 0x3232c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420828u, 0x3232BCu, 0x3232C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3232C4u;
label_3232c4:
    // 0x3232c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3232c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3232c8:
    // 0x3232c8: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_3232cc:
    if (ctx->pc == 0x3232CCu) {
        ctx->pc = 0x3232CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232C8u;
        // 0x3232cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3232D0u;
        goto label_3232d0;
    }
    ctx->pc = 0x3232C8u;
    {
        const bool branch_taken_0x3232c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3232CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232C8u;
        // 0x3232cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3232c8) {
            ctx->pc = 0x3232E0u;
            goto label_3232e0;
        }
    }
    ctx->pc = 0x3232D0u;
label_3232d0:
    // 0x3232d0: 0xc1074ac  jal         func_41D2B0
label_3232d4:
    if (ctx->pc == 0x3232D4u) {
        ctx->pc = 0x3232D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232D0u;
        // 0x3232d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3232D8u;
        goto label_3232d8;
    }
    ctx->pc = 0x3232D0u;
    SET_GPR_U32(ctx, 31, 0x3232D8u);
    ctx->pc = 0x3232D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3232D0u;
    // 0x3232d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x3232D0u, 0x3232D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3232D8u;
label_3232d8:
    // 0x3232d8: 0x1000002d  b           . + 4 + (0x2D << 2)
label_3232dc:
    if (ctx->pc == 0x3232DCu) {
        ctx->pc = 0x3232DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232D8u;
        // 0x3232dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3232E0u;
        goto label_3232e0;
    }
    ctx->pc = 0x3232D8u;
    {
        const bool branch_taken_0x3232d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3232DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232D8u;
        // 0x3232dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3232d8) {
            ctx->pc = 0x323390u;
            goto label_323390;
        }
    }
    ctx->pc = 0x3232E0u;
label_3232e0:
    // 0x3232e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3232e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3232e4:
    // 0x3232e4: 0xc1075c0  jal         func_41D700
label_3232e8:
    if (ctx->pc == 0x3232E8u) {
        ctx->pc = 0x3232E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232E4u;
        // 0x3232e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3232ECu;
        goto label_3232ec;
    }
    ctx->pc = 0x3232E4u;
    SET_GPR_U32(ctx, 31, 0x3232ECu);
    ctx->pc = 0x3232E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3232E4u;
    // 0x3232e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x3232E4u, 0x3232ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3232ECu;
label_3232ec:
    // 0x3232ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3232ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3232f0:
    // 0x3232f0: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
label_3232f4:
    if (ctx->pc == 0x3232F4u) {
        ctx->pc = 0x3232F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232F0u;
        // 0x3232f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3232F8u;
        goto label_3232f8;
    }
    ctx->pc = 0x3232F0u;
    {
        const bool branch_taken_0x3232f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3232F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232F0u;
        // 0x3232f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3232f0) {
            ctx->pc = 0x323384u;
            goto label_323384;
        }
    }
    ctx->pc = 0x3232F8u;
label_3232f8:
    // 0x3232f8: 0x24050500  addiu       $a1, $zero, 0x500
    ctx->pc = 0x3232f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
label_3232fc:
    // 0x3232fc: 0xc10719c  jal         func_41C670
label_323300:
    if (ctx->pc == 0x323300u) {
        ctx->pc = 0x323300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232FCu;
        // 0x323300: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323304u;
        goto label_323304;
    }
    ctx->pc = 0x3232FCu;
    SET_GPR_U32(ctx, 31, 0x323304u);
    ctx->pc = 0x323300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3232FCu;
    // 0x323300: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C670u, 0x3232FCu, 0x323304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323304u;
label_323304:
    // 0x323304: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x323304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_323308:
    // 0x323308: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x323308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32330c:
    // 0x32330c: 0xb01018  mult        $v0, $a1, $s0
    ctx->pc = 0x32330cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_323310:
    // 0x323310: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x323310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_323314:
    // 0x323314: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x323314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_323318:
    // 0x323318: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x323318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32331c:
    // 0x32331c: 0x0  nop
    ctx->pc = 0x32331cu;
    // NOP
label_323320:
    // 0x323320: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x323320u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_323324:
    // 0x323324: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x323324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_323328:
    // 0x323328: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x323328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_32332c:
    // 0x32332c: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x32332cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_323330:
    // 0x323330: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x323330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_323334:
    // 0x323334: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x323334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_323338:
    // 0x323338: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x323338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
label_32333c:
    // 0x32333c: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x32333cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_323340:
    // 0x323340: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x323340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
label_323344:
    // 0x323344: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x323344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
label_323348:
    // 0x323348: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x323348u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
label_32334c:
    // 0x32334c: 0xac640024  sw          $a0, 0x24($v1)
    ctx->pc = 0x32334cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 4));
label_323350:
    // 0x323350: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x323350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
label_323354:
    // 0x323354: 0xac64002c  sw          $a0, 0x2C($v1)
    ctx->pc = 0x323354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 4));
label_323358:
    // 0x323358: 0xac640030  sw          $a0, 0x30($v1)
    ctx->pc = 0x323358u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 4));
label_32335c:
    // 0x32335c: 0xac640034  sw          $a0, 0x34($v1)
    ctx->pc = 0x32335cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 4));
label_323360:
    // 0x323360: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x323360u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
label_323364:
    // 0x323364: 0xac64003c  sw          $a0, 0x3C($v1)
    ctx->pc = 0x323364u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 4));
label_323368:
    // 0x323368: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_32336c:
    if (ctx->pc == 0x32336Cu) {
        ctx->pc = 0x32336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323368u;
        // 0x32336c: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323370u;
        goto label_323370;
    }
    ctx->pc = 0x323368u;
    {
        const bool branch_taken_0x323368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323368u;
        // 0x32336c: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323368) {
            ctx->pc = 0x323320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323320;
        }
    }
    ctx->pc = 0x323370u;
label_323370:
    // 0x323370: 0x2ca20020  sltiu       $v0, $a1, 0x20
    ctx->pc = 0x323370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_323374:
    // 0x323374: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_323378:
    if (ctx->pc == 0x323378u) {
        ctx->pc = 0x323378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323374u;
        // 0x323378: 0xb01018  mult        $v0, $a1, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x32337Cu;
        goto label_32337c;
    }
    ctx->pc = 0x323374u;
    {
        const bool branch_taken_0x323374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323374u;
        // 0x323378: 0xb01018  mult        $v0, $a1, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x323374) {
            ctx->pc = 0x323310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323310;
        }
    }
    ctx->pc = 0x32337Cu;
label_32337c:
    // 0x32337c: 0x10000004  b           . + 4 + (0x4 << 2)
label_323380:
    if (ctx->pc == 0x323380u) {
        ctx->pc = 0x323380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32337Cu;
        // 0x323380: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323384u;
        goto label_323384;
    }
    ctx->pc = 0x32337Cu;
    {
        const bool branch_taken_0x32337c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32337Cu;
        // 0x323380: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32337c) {
            ctx->pc = 0x323390u;
            goto label_323390;
        }
    }
    ctx->pc = 0x323384u;
label_323384:
    // 0x323384: 0xc10822c  jal         func_4208B0
label_323388:
    if (ctx->pc == 0x323388u) {
        ctx->pc = 0x323388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323384u;
        // 0x323388: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32338Cu;
        goto label_32338c;
    }
    ctx->pc = 0x323384u;
    SET_GPR_U32(ctx, 31, 0x32338Cu);
    ctx->pc = 0x323388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323384u;
    // 0x323388: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x323384u, 0x32338Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32338Cu;
label_32338c:
    // 0x32338c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32338cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_323390:
    // 0x323390: 0x2690b1e0  addiu       $s0, $s4, -0x4E20
    ctx->pc = 0x323390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294947296));
label_323394:
    // 0x323394: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_323398:
    if (ctx->pc == 0x323398u) {
        ctx->pc = 0x323398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323394u;
        // 0x323398: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32339Cu;
        goto label_32339c;
    }
    ctx->pc = 0x323394u;
    {
        const bool branch_taken_0x323394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323394u;
        // 0x323398: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323394) {
            ctx->pc = 0x323408u;
            goto label_323408;
        }
    }
    ctx->pc = 0x32339Cu;
label_32339c:
    // 0x32339c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x32339cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3233a0:
    // 0x3233a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3233a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3233a4:
    // 0x3233a4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x3233a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3233a8:
    // 0x3233a8: 0x8c62e944  lw          $v0, -0x16BC($v1)
    ctx->pc = 0x3233a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961476)));
label_3233ac:
    // 0x3233ac: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x3233acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
label_3233b0:
    // 0x3233b0: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3233b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3233b4:
    // 0x3233b4: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x3233b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_3233b8:
    // 0x3233b8: 0xae060024  sw          $a2, 0x24($s0)
    ctx->pc = 0x3233b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
label_3233bc:
    // 0x3233bc: 0x40f809  jalr        $v0
label_3233c0:
    if (ctx->pc == 0x3233C0u) {
        ctx->pc = 0x3233C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3233BCu;
        // 0x3233c0: 0x24a59578  addiu       $a1, $a1, -0x6A88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3233C4u;
        goto label_3233c4;
    }
    ctx->pc = 0x3233BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3233C4u);
        ctx->pc = 0x3233C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3233BCu;
        // 0x3233c0: 0x24a59578  addiu       $a1, $a1, -0x6A88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940024));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3233BCu, 0x3233C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3233C4u;
label_3233c4:
    // 0x3233c4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x3233c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3233c8:
    // 0x3233c8: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x3233c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3233cc:
    // 0x3233cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3233ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3233d0:
    // 0x3233d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3233d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3233d4:
    // 0x3233d4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3233d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3233d8:
    // 0x3233d8: 0xc7828100  lwc1        $f2, -0x7F00($gp)
    ctx->pc = 0x3233d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3233dc:
    // 0x3233dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3233dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3233e0:
    // 0x3233e0: 0xc78180f4  lwc1        $f1, -0x7F0C($gp)
    ctx->pc = 0x3233e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3233e4:
    // 0x3233e4: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x3233e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_3233e8:
    // 0x3233e8: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x3233e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
label_3233ec:
    // 0x3233ec: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x3233ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_3233f0:
    // 0x3233f0: 0xe6020048  swc1        $f2, 0x48($s0)
    ctx->pc = 0x3233f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_3233f4:
    // 0x3233f4: 0xe601004c  swc1        $f1, 0x4C($s0)
    ctx->pc = 0x3233f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
label_3233f8:
    // 0x3233f8: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x3233f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_3233fc:
    // 0x3233fc: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x3233fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_323400:
    // 0x323400: 0x10000004  b           . + 4 + (0x4 << 2)
label_323404:
    if (ctx->pc == 0x323404u) {
        ctx->pc = 0x323404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323400u;
        // 0x323404: 0xe6000040  swc1        $f0, 0x40($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x323408u;
        goto label_323408;
    }
    ctx->pc = 0x323400u;
    {
        const bool branch_taken_0x323400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323400u;
        // 0x323404: 0xe6000040  swc1        $f0, 0x40($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x323400) {
            ctx->pc = 0x323414u;
            goto label_323414;
        }
    }
    ctx->pc = 0x323408u;
label_323408:
    // 0x323408: 0xc0c8bba  jal         func_322EE8
label_32340c:
    if (ctx->pc == 0x32340Cu) {
        ctx->pc = 0x323410u;
        goto label_323410;
    }
    ctx->pc = 0x323408u;
    SET_GPR_U32(ctx, 31, 0x323410u);
    ctx->pc = 0x322EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322EE8u, 0x323408u, 0x323410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323410u;
label_323410:
    // 0x323410: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x323410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_323414:
    // 0x323414: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x323414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_323418:
    // 0x323418: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x323418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_32341c:
    // 0x32341c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x32341cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_323420:
    // 0x323420: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x323420u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_323424:
    // 0x323424: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x323424u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_323428:
    // 0x323428: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32342c:
    // 0x32342c: 0x3e00008  jr          $ra
label_323430:
    if (ctx->pc == 0x323430u) {
        ctx->pc = 0x323430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32342Cu;
        // 0x323430: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323434u;
        goto label_323434;
    }
    ctx->pc = 0x32342Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32342Cu;
        // 0x323430: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32342Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323434u;
label_323434:
    // 0x323434: 0x0  nop
    ctx->pc = 0x323434u;
    // NOP
    ctx->pc = 0x323438u;
}
