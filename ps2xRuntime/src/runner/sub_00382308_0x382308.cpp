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

// Function: sub_00382308
// Address: 0x382308 - 0x3824e8
void sub_00382308_0x382308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382308_0x382308");
#endif

    switch (ctx->pc) {
        case 0x382308u: goto label_382308;
        case 0x38230cu: goto label_38230c;
        case 0x382310u: goto label_382310;
        case 0x382314u: goto label_382314;
        case 0x382318u: goto label_382318;
        case 0x38231cu: goto label_38231c;
        case 0x382320u: goto label_382320;
        case 0x382324u: goto label_382324;
        case 0x382328u: goto label_382328;
        case 0x38232cu: goto label_38232c;
        case 0x382330u: goto label_382330;
        case 0x382334u: goto label_382334;
        case 0x382338u: goto label_382338;
        case 0x38233cu: goto label_38233c;
        case 0x382340u: goto label_382340;
        case 0x382344u: goto label_382344;
        case 0x382348u: goto label_382348;
        case 0x38234cu: goto label_38234c;
        case 0x382350u: goto label_382350;
        case 0x382354u: goto label_382354;
        case 0x382358u: goto label_382358;
        case 0x38235cu: goto label_38235c;
        case 0x382360u: goto label_382360;
        case 0x382364u: goto label_382364;
        case 0x382368u: goto label_382368;
        case 0x38236cu: goto label_38236c;
        case 0x382370u: goto label_382370;
        case 0x382374u: goto label_382374;
        case 0x382378u: goto label_382378;
        case 0x38237cu: goto label_38237c;
        case 0x382380u: goto label_382380;
        case 0x382384u: goto label_382384;
        case 0x382388u: goto label_382388;
        case 0x38238cu: goto label_38238c;
        case 0x382390u: goto label_382390;
        case 0x382394u: goto label_382394;
        case 0x382398u: goto label_382398;
        case 0x38239cu: goto label_38239c;
        case 0x3823a0u: goto label_3823a0;
        case 0x3823a4u: goto label_3823a4;
        case 0x3823a8u: goto label_3823a8;
        case 0x3823acu: goto label_3823ac;
        case 0x3823b0u: goto label_3823b0;
        case 0x3823b4u: goto label_3823b4;
        case 0x3823b8u: goto label_3823b8;
        case 0x3823bcu: goto label_3823bc;
        case 0x3823c0u: goto label_3823c0;
        case 0x3823c4u: goto label_3823c4;
        case 0x3823c8u: goto label_3823c8;
        case 0x3823ccu: goto label_3823cc;
        case 0x3823d0u: goto label_3823d0;
        case 0x3823d4u: goto label_3823d4;
        case 0x3823d8u: goto label_3823d8;
        case 0x3823dcu: goto label_3823dc;
        case 0x3823e0u: goto label_3823e0;
        case 0x3823e4u: goto label_3823e4;
        case 0x3823e8u: goto label_3823e8;
        case 0x3823ecu: goto label_3823ec;
        case 0x3823f0u: goto label_3823f0;
        case 0x3823f4u: goto label_3823f4;
        case 0x3823f8u: goto label_3823f8;
        case 0x3823fcu: goto label_3823fc;
        case 0x382400u: goto label_382400;
        case 0x382404u: goto label_382404;
        case 0x382408u: goto label_382408;
        case 0x38240cu: goto label_38240c;
        case 0x382410u: goto label_382410;
        case 0x382414u: goto label_382414;
        case 0x382418u: goto label_382418;
        case 0x38241cu: goto label_38241c;
        case 0x382420u: goto label_382420;
        case 0x382424u: goto label_382424;
        case 0x382428u: goto label_382428;
        case 0x38242cu: goto label_38242c;
        case 0x382430u: goto label_382430;
        case 0x382434u: goto label_382434;
        case 0x382438u: goto label_382438;
        case 0x38243cu: goto label_38243c;
        case 0x382440u: goto label_382440;
        case 0x382444u: goto label_382444;
        case 0x382448u: goto label_382448;
        case 0x38244cu: goto label_38244c;
        case 0x382450u: goto label_382450;
        case 0x382454u: goto label_382454;
        case 0x382458u: goto label_382458;
        case 0x38245cu: goto label_38245c;
        case 0x382460u: goto label_382460;
        case 0x382464u: goto label_382464;
        case 0x382468u: goto label_382468;
        case 0x38246cu: goto label_38246c;
        case 0x382470u: goto label_382470;
        case 0x382474u: goto label_382474;
        case 0x382478u: goto label_382478;
        case 0x38247cu: goto label_38247c;
        case 0x382480u: goto label_382480;
        case 0x382484u: goto label_382484;
        case 0x382488u: goto label_382488;
        case 0x38248cu: goto label_38248c;
        case 0x382490u: goto label_382490;
        case 0x382494u: goto label_382494;
        case 0x382498u: goto label_382498;
        case 0x38249cu: goto label_38249c;
        case 0x3824a0u: goto label_3824a0;
        case 0x3824a4u: goto label_3824a4;
        case 0x3824a8u: goto label_3824a8;
        case 0x3824acu: goto label_3824ac;
        case 0x3824b0u: goto label_3824b0;
        case 0x3824b4u: goto label_3824b4;
        case 0x3824b8u: goto label_3824b8;
        case 0x3824bcu: goto label_3824bc;
        case 0x3824c0u: goto label_3824c0;
        case 0x3824c4u: goto label_3824c4;
        case 0x3824c8u: goto label_3824c8;
        case 0x3824ccu: goto label_3824cc;
        case 0x3824d0u: goto label_3824d0;
        case 0x3824d4u: goto label_3824d4;
        case 0x3824d8u: goto label_3824d8;
        case 0x3824dcu: goto label_3824dc;
        case 0x3824e0u: goto label_3824e0;
        case 0x3824e4u: goto label_3824e4;
        default: break;
    }

    ctx->pc = 0x382308u;

label_382308:
    // 0x382308: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x382308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_38230c:
    // 0x38230c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x38230cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_382310:
    // 0x382310: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x382310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_382314:
    // 0x382314: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x382314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_382318:
    // 0x382318: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x382318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_38231c:
    // 0x38231c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x38231cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_382320:
    // 0x382320: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x382320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_382324:
    // 0x382324: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x382324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_382328:
    // 0x382328: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x382328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38232c:
    // 0x38232c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_382330:
    if (ctx->pc == 0x382330u) {
        ctx->pc = 0x382330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38232Cu;
        // 0x382330: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382334u;
        goto label_382334;
    }
    ctx->pc = 0x38232Cu;
    {
        const bool branch_taken_0x38232c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x382330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38232Cu;
        // 0x382330: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38232c) {
            ctx->pc = 0x382350u;
            goto label_382350;
        }
    }
    ctx->pc = 0x382334u;
label_382334:
    // 0x382334: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x382334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_382338:
    // 0x382338: 0x8c62e974  lw          $v0, -0x168C($v1)
    ctx->pc = 0x382338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961524)));
label_38233c:
    // 0x38233c: 0x40f809  jalr        $v0
label_382340:
    if (ctx->pc == 0x382340u) {
        ctx->pc = 0x382344u;
        goto label_382344;
    }
    ctx->pc = 0x38233Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x382344u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38233Cu, 0x382344u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x382344u;
label_382344:
    // 0x382344: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x382344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_382348:
    // 0x382348: 0x10000002  b           . + 4 + (0x2 << 2)
label_38234c:
    if (ctx->pc == 0x38234Cu) {
        ctx->pc = 0x38234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382348u;
        // 0x38234c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382350u;
        goto label_382350;
    }
    ctx->pc = 0x382348u;
    {
        const bool branch_taken_0x382348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382348u;
        // 0x38234c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382348) {
            ctx->pc = 0x382354u;
            goto label_382354;
        }
    }
    ctx->pc = 0x382350u;
label_382350:
    // 0x382350: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x382350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_382354:
    // 0x382354: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x382354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_382358:
    // 0x382358: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x382358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_38235c:
    // 0x38235c: 0xc103440  jal         func_40D100
label_382360:
    if (ctx->pc == 0x382360u) {
        ctx->pc = 0x382360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38235Cu;
        // 0x382360: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382364u;
        goto label_382364;
    }
    ctx->pc = 0x38235Cu;
    SET_GPR_U32(ctx, 31, 0x382364u);
    ctx->pc = 0x382360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38235Cu;
    // 0x382360: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x38235Cu, 0x382364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382364u;
label_382364:
    // 0x382364: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
label_382368:
    if (ctx->pc == 0x382368u) {
        ctx->pc = 0x382368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382364u;
        // 0x382368: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38236Cu;
        goto label_38236c;
    }
    ctx->pc = 0x382364u;
    {
        const bool branch_taken_0x382364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382364u;
        // 0x382368: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382364) {
            ctx->pc = 0x3824B8u;
            goto label_3824b8;
        }
    }
    ctx->pc = 0x38236Cu;
label_38236c:
    // 0x38236c: 0x18c00006  blez        $a2, . + 4 + (0x6 << 2)
label_382370:
    if (ctx->pc == 0x382370u) {
        ctx->pc = 0x382370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38236Cu;
        // 0x382370: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382374u;
        goto label_382374;
    }
    ctx->pc = 0x38236Cu;
    {
        const bool branch_taken_0x38236c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x382370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38236Cu;
        // 0x382370: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38236c) {
            ctx->pc = 0x382388u;
            goto label_382388;
        }
    }
    ctx->pc = 0x382374u;
label_382374:
    // 0x382374: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x382374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_382378:
    // 0x382378: 0xc10486e  jal         func_4121B8
label_38237c:
    if (ctx->pc == 0x38237Cu) {
        ctx->pc = 0x38237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382378u;
        // 0x38237c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382380u;
        goto label_382380;
    }
    ctx->pc = 0x382378u;
    SET_GPR_U32(ctx, 31, 0x382380u);
    ctx->pc = 0x38237Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382378u;
    // 0x38237c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x382378u, 0x382380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382380u;
label_382380:
    // 0x382380: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_382384:
    if (ctx->pc == 0x382384u) {
        ctx->pc = 0x382384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382380u;
        // 0x382384: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382388u;
        goto label_382388;
    }
    ctx->pc = 0x382380u;
    {
        const bool branch_taken_0x382380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382380u;
        // 0x382384: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382380) {
            ctx->pc = 0x3824B8u;
            goto label_3824b8;
        }
    }
    ctx->pc = 0x382388u;
label_382388:
    // 0x382388: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x382388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_38238c:
    // 0x38238c: 0xc103440  jal         func_40D100
label_382390:
    if (ctx->pc == 0x382390u) {
        ctx->pc = 0x382390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38238Cu;
        // 0x382390: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382394u;
        goto label_382394;
    }
    ctx->pc = 0x38238Cu;
    SET_GPR_U32(ctx, 31, 0x382394u);
    ctx->pc = 0x382390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38238Cu;
    // 0x382390: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x38238Cu, 0x382394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382394u;
label_382394:
    // 0x382394: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_382398:
    if (ctx->pc == 0x382398u) {
        ctx->pc = 0x382398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382394u;
        // 0x382398: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38239Cu;
        goto label_38239c;
    }
    ctx->pc = 0x382394u;
    {
        const bool branch_taken_0x382394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382394u;
        // 0x382398: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382394) {
            ctx->pc = 0x3824B8u;
            goto label_3824b8;
        }
    }
    ctx->pc = 0x38239Cu;
label_38239c:
    // 0x38239c: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x38239cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3823a0:
    // 0x3823a0: 0xc103440  jal         func_40D100
label_3823a4:
    if (ctx->pc == 0x3823A4u) {
        ctx->pc = 0x3823A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3823A0u;
        // 0x3823a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3823A8u;
        goto label_3823a8;
    }
    ctx->pc = 0x3823A0u;
    SET_GPR_U32(ctx, 31, 0x3823A8u);
    ctx->pc = 0x3823A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3823A0u;
    // 0x3823a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3823A0u, 0x3823A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3823A8u;
label_3823a8:
    // 0x3823a8: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_3823ac:
    if (ctx->pc == 0x3823ACu) {
        ctx->pc = 0x3823ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3823A8u;
        // 0x3823ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3823B0u;
        goto label_3823b0;
    }
    ctx->pc = 0x3823A8u;
    {
        const bool branch_taken_0x3823a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3823ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3823A8u;
        // 0x3823ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3823a8) {
            ctx->pc = 0x3824B8u;
            goto label_3824b8;
        }
    }
    ctx->pc = 0x3823B0u;
label_3823b0:
    // 0x3823b0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3823b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3823b4:
    // 0x3823b4: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_3823b8:
    if (ctx->pc == 0x3823B8u) {
        ctx->pc = 0x3823B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3823B4u;
        // 0x3823b8: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3823BCu;
        goto label_3823bc;
    }
    ctx->pc = 0x3823B4u;
    {
        const bool branch_taken_0x3823b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3823B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3823B4u;
        // 0x3823b8: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3823b4) {
            ctx->pc = 0x382404u;
            goto label_382404;
        }
    }
    ctx->pc = 0x3823BCu;
label_3823bc:
    // 0x3823bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3823c0:
    if (ctx->pc == 0x3823C0u) {
        ctx->pc = 0x3823C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3823BCu;
        // 0x3823c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3823C4u;
        goto label_3823c4;
    }
    ctx->pc = 0x3823BCu;
    {
        const bool branch_taken_0x3823bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3823C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3823BCu;
        // 0x3823c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3823bc) {
            ctx->pc = 0x3823D4u;
            goto label_3823d4;
        }
    }
    ctx->pc = 0x3823C4u;
label_3823c4:
    // 0x3823c4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_3823c8:
    if (ctx->pc == 0x3823C8u) {
        ctx->pc = 0x3823C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3823C4u;
        // 0x3823c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3823CCu;
        goto label_3823cc;
    }
    ctx->pc = 0x3823C4u;
    {
        const bool branch_taken_0x3823c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3823C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3823C4u;
        // 0x3823c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3823c4) {
            ctx->pc = 0x3823E8u;
            goto label_3823e8;
        }
    }
    ctx->pc = 0x3823CCu;
label_3823cc:
    // 0x3823cc: 0x1000003e  b           . + 4 + (0x3E << 2)
label_3823d0:
    if (ctx->pc == 0x3823D0u) {
        ctx->pc = 0x3823D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3823CCu;
        // 0x3823d0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3823D4u;
        goto label_3823d4;
    }
    ctx->pc = 0x3823CCu;
    {
        const bool branch_taken_0x3823cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3823D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3823CCu;
        // 0x3823d0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3823cc) {
            ctx->pc = 0x3824C8u;
            goto label_3824c8;
        }
    }
    ctx->pc = 0x3823D4u;
label_3823d4:
    // 0x3823d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3823d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3823d8:
    // 0x3823d8: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_3823dc:
    if (ctx->pc == 0x3823DCu) {
        ctx->pc = 0x3823DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3823D8u;
        // 0x3823dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3823E0u;
        goto label_3823e0;
    }
    ctx->pc = 0x3823D8u;
    {
        const bool branch_taken_0x3823d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3823DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3823D8u;
        // 0x3823dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3823d8) {
            ctx->pc = 0x382428u;
            goto label_382428;
        }
    }
    ctx->pc = 0x3823E0u;
label_3823e0:
    // 0x3823e0: 0x10000039  b           . + 4 + (0x39 << 2)
label_3823e4:
    if (ctx->pc == 0x3823E4u) {
        ctx->pc = 0x3823E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3823E0u;
        // 0x3823e4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3823E8u;
        goto label_3823e8;
    }
    ctx->pc = 0x3823E0u;
    {
        const bool branch_taken_0x3823e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3823E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3823E0u;
        // 0x3823e4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3823e0) {
            ctx->pc = 0x3824C8u;
            goto label_3824c8;
        }
    }
    ctx->pc = 0x3823E8u;
label_3823e8:
    // 0x3823e8: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3823e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3823ec:
    // 0x3823ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3823ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3823f0:
    // 0x3823f0: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x3823f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3823f4:
    // 0x3823f4: 0xc103440  jal         func_40D100
label_3823f8:
    if (ctx->pc == 0x3823F8u) {
        ctx->pc = 0x3823F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3823F4u;
        // 0x3823f8: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3823FCu;
        goto label_3823fc;
    }
    ctx->pc = 0x3823F4u;
    SET_GPR_U32(ctx, 31, 0x3823FCu);
    ctx->pc = 0x3823F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3823F4u;
    // 0x3823f8: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3823F4u, 0x3823FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3823FCu;
label_3823fc:
    // 0x3823fc: 0x10000006  b           . + 4 + (0x6 << 2)
label_382400:
    if (ctx->pc == 0x382400u) {
        ctx->pc = 0x382404u;
        goto label_382404;
    }
    ctx->pc = 0x3823FCu;
    {
        const bool branch_taken_0x3823fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3823fc) {
            ctx->pc = 0x382418u;
            goto label_382418;
        }
    }
    ctx->pc = 0x382404u;
label_382404:
    // 0x382404: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x382404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_382408:
    // 0x382408: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x382408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38240c:
    // 0x38240c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x38240cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_382410:
    // 0x382410: 0xc10341a  jal         func_40D068
label_382414:
    if (ctx->pc == 0x382414u) {
        ctx->pc = 0x382414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382410u;
        // 0x382414: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382418u;
        goto label_382418;
    }
    ctx->pc = 0x382410u;
    SET_GPR_U32(ctx, 31, 0x382418u);
    ctx->pc = 0x382414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382410u;
    // 0x382414: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x382410u, 0x382418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382418u;
label_382418:
    // 0x382418: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_38241c:
    if (ctx->pc == 0x38241Cu) {
        ctx->pc = 0x38241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382418u;
        // 0x38241c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382420u;
        goto label_382420;
    }
    ctx->pc = 0x382418u;
    {
        const bool branch_taken_0x382418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382418u;
        // 0x38241c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382418) {
            ctx->pc = 0x3824C4u;
            goto label_3824c4;
        }
    }
    ctx->pc = 0x382420u;
label_382420:
    // 0x382420: 0x10000028  b           . + 4 + (0x28 << 2)
label_382424:
    if (ctx->pc == 0x382424u) {
        ctx->pc = 0x382424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382420u;
        // 0x382424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382428u;
        goto label_382428;
    }
    ctx->pc = 0x382420u;
    {
        const bool branch_taken_0x382420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382420u;
        // 0x382424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382420) {
            ctx->pc = 0x3824C4u;
            goto label_3824c4;
        }
    }
    ctx->pc = 0x382428u;
label_382428:
    // 0x382428: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x382428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_38242c:
    // 0x38242c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x38242cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_382430:
    // 0x382430: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
label_382434:
    if (ctx->pc == 0x382434u) {
        ctx->pc = 0x382434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382430u;
        // 0x382434: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382438u;
        goto label_382438;
    }
    ctx->pc = 0x382430u;
    {
        const bool branch_taken_0x382430 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x382434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382430u;
        // 0x382434: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382430) {
            ctx->pc = 0x3824C0u;
            goto label_3824c0;
        }
    }
    ctx->pc = 0x382438u;
label_382438:
    // 0x382438: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x382438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_38243c:
    // 0x38243c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38243cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_382440:
    // 0x382440: 0x2454e880  addiu       $s4, $v0, -0x1780
    ctx->pc = 0x382440u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_382444:
    // 0x382444: 0x0  nop
    ctx->pc = 0x382444u;
    // NOP
label_382448:
    // 0x382448: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x382448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38244c:
    // 0x38244c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_382450:
    if (ctx->pc == 0x382450u) {
        ctx->pc = 0x382450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38244Cu;
        // 0x382450: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382454u;
        goto label_382454;
    }
    ctx->pc = 0x38244Cu;
    {
        const bool branch_taken_0x38244c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38244c) {
            ctx->pc = 0x382450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38244Cu;
            // 0x382450: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382468u;
            goto label_382468;
        }
    }
    ctx->pc = 0x382454u;
label_382454:
    // 0x382454: 0x8e8200f4  lw          $v0, 0xF4($s4)
    ctx->pc = 0x382454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
label_382458:
    // 0x382458: 0x40f809  jalr        $v0
label_38245c:
    if (ctx->pc == 0x38245Cu) {
        ctx->pc = 0x382460u;
        goto label_382460;
    }
    ctx->pc = 0x382458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x382460u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382458u, 0x382460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x382460u;
label_382460:
    // 0x382460: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x382460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_382464:
    // 0x382464: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x382464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_382468:
    // 0x382468: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x382468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38246c:
    // 0x38246c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38246cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_382470:
    // 0x382470: 0xc103440  jal         func_40D100
label_382474:
    if (ctx->pc == 0x382474u) {
        ctx->pc = 0x382474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382470u;
        // 0x382474: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382478u;
        goto label_382478;
    }
    ctx->pc = 0x382470u;
    SET_GPR_U32(ctx, 31, 0x382478u);
    ctx->pc = 0x382474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382470u;
    // 0x382474: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x382470u, 0x382478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382478u;
label_382478:
    // 0x382478: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_38247c:
    if (ctx->pc == 0x38247Cu) {
        ctx->pc = 0x38247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382478u;
        // 0x38247c: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382480u;
        goto label_382480;
    }
    ctx->pc = 0x382478u;
    {
        const bool branch_taken_0x382478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382478u;
        // 0x38247c: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382478) {
            ctx->pc = 0x3824B8u;
            goto label_3824b8;
        }
    }
    ctx->pc = 0x382480u;
label_382480:
    // 0x382480: 0x58c00007  blezl       $a2, . + 4 + (0x7 << 2)
label_382484:
    if (ctx->pc == 0x382484u) {
        ctx->pc = 0x382484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382480u;
        // 0x382484: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382488u;
        goto label_382488;
    }
    ctx->pc = 0x382480u;
    {
        const bool branch_taken_0x382480 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x382480) {
            ctx->pc = 0x382484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382480u;
            // 0x382484: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3824A0u;
            goto label_3824a0;
        }
    }
    ctx->pc = 0x382488u;
label_382488:
    // 0x382488: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x382488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38248c:
    // 0x38248c: 0xc10486e  jal         func_4121B8
label_382490:
    if (ctx->pc == 0x382490u) {
        ctx->pc = 0x382490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38248Cu;
        // 0x382490: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382494u;
        goto label_382494;
    }
    ctx->pc = 0x38248Cu;
    SET_GPR_U32(ctx, 31, 0x382494u);
    ctx->pc = 0x382490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38248Cu;
    // 0x382490: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x38248Cu, 0x382494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382494u;
label_382494:
    // 0x382494: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_382498:
    if (ctx->pc == 0x382498u) {
        ctx->pc = 0x382498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382494u;
        // 0x382498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38249Cu;
        goto label_38249c;
    }
    ctx->pc = 0x382494u;
    {
        const bool branch_taken_0x382494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382494u;
        // 0x382498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382494) {
            ctx->pc = 0x3824C4u;
            goto label_3824c4;
        }
    }
    ctx->pc = 0x38249Cu;
label_38249c:
    // 0x38249c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x38249cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3824a0:
    // 0x3824a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3824a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3824a4:
    // 0x3824a4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3824a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3824a8:
    // 0x3824a8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_3824ac:
    if (ctx->pc == 0x3824ACu) {
        ctx->pc = 0x3824ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3824A8u;
        // 0x3824ac: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3824B0u;
        goto label_3824b0;
    }
    ctx->pc = 0x3824A8u;
    {
        const bool branch_taken_0x3824a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3824ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3824A8u;
        // 0x3824ac: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3824a8) {
            ctx->pc = 0x382448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382448;
        }
    }
    ctx->pc = 0x3824B0u;
label_3824b0:
    // 0x3824b0: 0x10000004  b           . + 4 + (0x4 << 2)
label_3824b4:
    if (ctx->pc == 0x3824B4u) {
        ctx->pc = 0x3824B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3824B0u;
        // 0x3824b4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3824B8u;
        goto label_3824b8;
    }
    ctx->pc = 0x3824B0u;
    {
        const bool branch_taken_0x3824b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3824B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3824B0u;
        // 0x3824b4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3824b0) {
            ctx->pc = 0x3824C4u;
            goto label_3824c4;
        }
    }
    ctx->pc = 0x3824B8u;
label_3824b8:
    // 0x3824b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_3824bc:
    if (ctx->pc == 0x3824BCu) {
        ctx->pc = 0x3824BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3824B8u;
        // 0x3824bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3824C0u;
        goto label_3824c0;
    }
    ctx->pc = 0x3824B8u;
    {
        const bool branch_taken_0x3824b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3824BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3824B8u;
        // 0x3824bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3824b8) {
            ctx->pc = 0x3824C4u;
            goto label_3824c4;
        }
    }
    ctx->pc = 0x3824C0u;
label_3824c0:
    // 0x3824c0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3824c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3824c4:
    // 0x3824c4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3824c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3824c8:
    // 0x3824c8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3824c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3824cc:
    // 0x3824cc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3824ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3824d0:
    // 0x3824d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3824d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3824d4:
    // 0x3824d4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3824d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3824d8:
    // 0x3824d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3824d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3824dc:
    // 0x3824dc: 0x3e00008  jr          $ra
label_3824e0:
    if (ctx->pc == 0x3824E0u) {
        ctx->pc = 0x3824E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3824DCu;
        // 0x3824e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3824E4u;
        goto label_3824e4;
    }
    ctx->pc = 0x3824DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3824E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3824DCu;
        // 0x3824e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3824DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3824E4u;
label_3824e4:
    // 0x3824e4: 0x0  nop
    ctx->pc = 0x3824e4u;
    // NOP
    ctx->pc = 0x3824e8u;
}
