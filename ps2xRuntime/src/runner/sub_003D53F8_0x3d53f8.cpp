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

// Function: sub_003D53F8
// Address: 0x3d53f8 - 0x3d56c0
void sub_003D53F8_0x3d53f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D53F8_0x3d53f8");
#endif

    switch (ctx->pc) {
        case 0x3d53f8u: goto label_3d53f8;
        case 0x3d53fcu: goto label_3d53fc;
        case 0x3d5400u: goto label_3d5400;
        case 0x3d5404u: goto label_3d5404;
        case 0x3d5408u: goto label_3d5408;
        case 0x3d540cu: goto label_3d540c;
        case 0x3d5410u: goto label_3d5410;
        case 0x3d5414u: goto label_3d5414;
        case 0x3d5418u: goto label_3d5418;
        case 0x3d541cu: goto label_3d541c;
        case 0x3d5420u: goto label_3d5420;
        case 0x3d5424u: goto label_3d5424;
        case 0x3d5428u: goto label_3d5428;
        case 0x3d542cu: goto label_3d542c;
        case 0x3d5430u: goto label_3d5430;
        case 0x3d5434u: goto label_3d5434;
        case 0x3d5438u: goto label_3d5438;
        case 0x3d543cu: goto label_3d543c;
        case 0x3d5440u: goto label_3d5440;
        case 0x3d5444u: goto label_3d5444;
        case 0x3d5448u: goto label_3d5448;
        case 0x3d544cu: goto label_3d544c;
        case 0x3d5450u: goto label_3d5450;
        case 0x3d5454u: goto label_3d5454;
        case 0x3d5458u: goto label_3d5458;
        case 0x3d545cu: goto label_3d545c;
        case 0x3d5460u: goto label_3d5460;
        case 0x3d5464u: goto label_3d5464;
        case 0x3d5468u: goto label_3d5468;
        case 0x3d546cu: goto label_3d546c;
        case 0x3d5470u: goto label_3d5470;
        case 0x3d5474u: goto label_3d5474;
        case 0x3d5478u: goto label_3d5478;
        case 0x3d547cu: goto label_3d547c;
        case 0x3d5480u: goto label_3d5480;
        case 0x3d5484u: goto label_3d5484;
        case 0x3d5488u: goto label_3d5488;
        case 0x3d548cu: goto label_3d548c;
        case 0x3d5490u: goto label_3d5490;
        case 0x3d5494u: goto label_3d5494;
        case 0x3d5498u: goto label_3d5498;
        case 0x3d549cu: goto label_3d549c;
        case 0x3d54a0u: goto label_3d54a0;
        case 0x3d54a4u: goto label_3d54a4;
        case 0x3d54a8u: goto label_3d54a8;
        case 0x3d54acu: goto label_3d54ac;
        case 0x3d54b0u: goto label_3d54b0;
        case 0x3d54b4u: goto label_3d54b4;
        case 0x3d54b8u: goto label_3d54b8;
        case 0x3d54bcu: goto label_3d54bc;
        case 0x3d54c0u: goto label_3d54c0;
        case 0x3d54c4u: goto label_3d54c4;
        case 0x3d54c8u: goto label_3d54c8;
        case 0x3d54ccu: goto label_3d54cc;
        case 0x3d54d0u: goto label_3d54d0;
        case 0x3d54d4u: goto label_3d54d4;
        case 0x3d54d8u: goto label_3d54d8;
        case 0x3d54dcu: goto label_3d54dc;
        case 0x3d54e0u: goto label_3d54e0;
        case 0x3d54e4u: goto label_3d54e4;
        case 0x3d54e8u: goto label_3d54e8;
        case 0x3d54ecu: goto label_3d54ec;
        case 0x3d54f0u: goto label_3d54f0;
        case 0x3d54f4u: goto label_3d54f4;
        case 0x3d54f8u: goto label_3d54f8;
        case 0x3d54fcu: goto label_3d54fc;
        case 0x3d5500u: goto label_3d5500;
        case 0x3d5504u: goto label_3d5504;
        case 0x3d5508u: goto label_3d5508;
        case 0x3d550cu: goto label_3d550c;
        case 0x3d5510u: goto label_3d5510;
        case 0x3d5514u: goto label_3d5514;
        case 0x3d5518u: goto label_3d5518;
        case 0x3d551cu: goto label_3d551c;
        case 0x3d5520u: goto label_3d5520;
        case 0x3d5524u: goto label_3d5524;
        case 0x3d5528u: goto label_3d5528;
        case 0x3d552cu: goto label_3d552c;
        case 0x3d5530u: goto label_3d5530;
        case 0x3d5534u: goto label_3d5534;
        case 0x3d5538u: goto label_3d5538;
        case 0x3d553cu: goto label_3d553c;
        case 0x3d5540u: goto label_3d5540;
        case 0x3d5544u: goto label_3d5544;
        case 0x3d5548u: goto label_3d5548;
        case 0x3d554cu: goto label_3d554c;
        case 0x3d5550u: goto label_3d5550;
        case 0x3d5554u: goto label_3d5554;
        case 0x3d5558u: goto label_3d5558;
        case 0x3d555cu: goto label_3d555c;
        case 0x3d5560u: goto label_3d5560;
        case 0x3d5564u: goto label_3d5564;
        case 0x3d5568u: goto label_3d5568;
        case 0x3d556cu: goto label_3d556c;
        case 0x3d5570u: goto label_3d5570;
        case 0x3d5574u: goto label_3d5574;
        case 0x3d5578u: goto label_3d5578;
        case 0x3d557cu: goto label_3d557c;
        case 0x3d5580u: goto label_3d5580;
        case 0x3d5584u: goto label_3d5584;
        case 0x3d5588u: goto label_3d5588;
        case 0x3d558cu: goto label_3d558c;
        case 0x3d5590u: goto label_3d5590;
        case 0x3d5594u: goto label_3d5594;
        case 0x3d5598u: goto label_3d5598;
        case 0x3d559cu: goto label_3d559c;
        case 0x3d55a0u: goto label_3d55a0;
        case 0x3d55a4u: goto label_3d55a4;
        case 0x3d55a8u: goto label_3d55a8;
        case 0x3d55acu: goto label_3d55ac;
        case 0x3d55b0u: goto label_3d55b0;
        case 0x3d55b4u: goto label_3d55b4;
        case 0x3d55b8u: goto label_3d55b8;
        case 0x3d55bcu: goto label_3d55bc;
        case 0x3d55c0u: goto label_3d55c0;
        case 0x3d55c4u: goto label_3d55c4;
        case 0x3d55c8u: goto label_3d55c8;
        case 0x3d55ccu: goto label_3d55cc;
        case 0x3d55d0u: goto label_3d55d0;
        case 0x3d55d4u: goto label_3d55d4;
        case 0x3d55d8u: goto label_3d55d8;
        case 0x3d55dcu: goto label_3d55dc;
        case 0x3d55e0u: goto label_3d55e0;
        case 0x3d55e4u: goto label_3d55e4;
        case 0x3d55e8u: goto label_3d55e8;
        case 0x3d55ecu: goto label_3d55ec;
        case 0x3d55f0u: goto label_3d55f0;
        case 0x3d55f4u: goto label_3d55f4;
        case 0x3d55f8u: goto label_3d55f8;
        case 0x3d55fcu: goto label_3d55fc;
        case 0x3d5600u: goto label_3d5600;
        case 0x3d5604u: goto label_3d5604;
        case 0x3d5608u: goto label_3d5608;
        case 0x3d560cu: goto label_3d560c;
        case 0x3d5610u: goto label_3d5610;
        case 0x3d5614u: goto label_3d5614;
        case 0x3d5618u: goto label_3d5618;
        case 0x3d561cu: goto label_3d561c;
        case 0x3d5620u: goto label_3d5620;
        case 0x3d5624u: goto label_3d5624;
        case 0x3d5628u: goto label_3d5628;
        case 0x3d562cu: goto label_3d562c;
        case 0x3d5630u: goto label_3d5630;
        case 0x3d5634u: goto label_3d5634;
        case 0x3d5638u: goto label_3d5638;
        case 0x3d563cu: goto label_3d563c;
        case 0x3d5640u: goto label_3d5640;
        case 0x3d5644u: goto label_3d5644;
        case 0x3d5648u: goto label_3d5648;
        case 0x3d564cu: goto label_3d564c;
        case 0x3d5650u: goto label_3d5650;
        case 0x3d5654u: goto label_3d5654;
        case 0x3d5658u: goto label_3d5658;
        case 0x3d565cu: goto label_3d565c;
        case 0x3d5660u: goto label_3d5660;
        case 0x3d5664u: goto label_3d5664;
        case 0x3d5668u: goto label_3d5668;
        case 0x3d566cu: goto label_3d566c;
        case 0x3d5670u: goto label_3d5670;
        case 0x3d5674u: goto label_3d5674;
        case 0x3d5678u: goto label_3d5678;
        case 0x3d567cu: goto label_3d567c;
        case 0x3d5680u: goto label_3d5680;
        case 0x3d5684u: goto label_3d5684;
        case 0x3d5688u: goto label_3d5688;
        case 0x3d568cu: goto label_3d568c;
        case 0x3d5690u: goto label_3d5690;
        case 0x3d5694u: goto label_3d5694;
        case 0x3d5698u: goto label_3d5698;
        case 0x3d569cu: goto label_3d569c;
        case 0x3d56a0u: goto label_3d56a0;
        case 0x3d56a4u: goto label_3d56a4;
        case 0x3d56a8u: goto label_3d56a8;
        case 0x3d56acu: goto label_3d56ac;
        case 0x3d56b0u: goto label_3d56b0;
        case 0x3d56b4u: goto label_3d56b4;
        case 0x3d56b8u: goto label_3d56b8;
        case 0x3d56bcu: goto label_3d56bc;
        default: break;
    }

    ctx->pc = 0x3d53f8u;

label_3d53f8:
    // 0x3d53f8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3d53f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3d53fc:
    // 0x3d53fc: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x3d53fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_3d5400:
    // 0x3d5400: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3d5400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3d5404:
    // 0x3d5404: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3d5404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3d5408:
    // 0x3d5408: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3d5408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3d540c:
    // 0x3d540c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3d540cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3d5410:
    // 0x3d5410: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3d5410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3d5414:
    // 0x3d5414: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3d5414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_3d5418:
    // 0x3d5418: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3d5418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_3d541c:
    // 0x3d541c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d541cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d5420:
    // 0x3d5420: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3d5420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_3d5424:
    // 0x3d5424: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3d5424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3d5428:
    // 0x3d5428: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x3d5428u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d542c:
    // 0x3d542c: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_3d5430:
    if (ctx->pc == 0x3D5430u) {
        ctx->pc = 0x3D5430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D542Cu;
        // 0x3d5430: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5434u;
        goto label_3d5434;
    }
    ctx->pc = 0x3D542Cu;
    {
        const bool branch_taken_0x3d542c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D542Cu;
        // 0x3d5430: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d542c) {
            ctx->pc = 0x3D5480u;
            goto label_3d5480;
        }
    }
    ctx->pc = 0x3D5434u;
label_3d5434:
    // 0x3d5434: 0xc1074ce  jal         func_41D338
label_3d5438:
    if (ctx->pc == 0x3D5438u) {
        ctx->pc = 0x3D5438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5434u;
        // 0x3d5438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D543Cu;
        goto label_3d543c;
    }
    ctx->pc = 0x3D5434u;
    SET_GPR_U32(ctx, 31, 0x3D543Cu);
    ctx->pc = 0x3D5438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5434u;
    // 0x3d5438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D338u, 0x3D5434u, 0x3D543Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D543Cu;
label_3d543c:
    // 0x3d543c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3d543cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5440:
    // 0x3d5440: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d5440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d5444:
    // 0x3d5444: 0x12e2000e  beq         $s7, $v0, . + 4 + (0xE << 2)
label_3d5448:
    if (ctx->pc == 0x3D5448u) {
        ctx->pc = 0x3D5448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5444u;
        // 0x3d5448: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D544Cu;
        goto label_3d544c;
    }
    ctx->pc = 0x3D5444u;
    {
        const bool branch_taken_0x3d5444 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D5448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5444u;
        // 0x3d5448: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5444) {
            ctx->pc = 0x3D5480u;
            goto label_3d5480;
        }
    }
    ctx->pc = 0x3D544Cu;
label_3d544c:
    // 0x3d544c: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x3d544cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
label_3d5450:
    // 0x3d5450: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3d5450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3d5454:
    // 0x3d5454: 0xc10486e  jal         func_4121B8
label_3d5458:
    if (ctx->pc == 0x3D5458u) {
        ctx->pc = 0x3D5458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5454u;
        // 0x3d5458: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D545Cu;
        goto label_3d545c;
    }
    ctx->pc = 0x3D5454u;
    SET_GPR_U32(ctx, 31, 0x3D545Cu);
    ctx->pc = 0x3D5458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5454u;
    // 0x3d5458: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3D5454u, 0x3D545Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D545Cu;
label_3d545c:
    // 0x3d545c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_3d5460:
    if (ctx->pc == 0x3D5460u) {
        ctx->pc = 0x3D5460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D545Cu;
        // 0x3d5460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5464u;
        goto label_3d5464;
    }
    ctx->pc = 0x3D545Cu;
    {
        const bool branch_taken_0x3d545c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D545Cu;
        // 0x3d5460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d545c) {
            ctx->pc = 0x3D5488u;
            goto label_3d5488;
        }
    }
    ctx->pc = 0x3D5464u;
label_3d5464:
    // 0x3d5464: 0x10000089  b           . + 4 + (0x89 << 2)
label_3d5468:
    if (ctx->pc == 0x3D5468u) {
        ctx->pc = 0x3D5468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5464u;
        // 0x3d5468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D546Cu;
        goto label_3d546c;
    }
    ctx->pc = 0x3D5464u;
    {
        const bool branch_taken_0x3d5464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5464u;
        // 0x3d5468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5464) {
            ctx->pc = 0x3D568Cu;
            goto label_3d568c;
        }
    }
    ctx->pc = 0x3D546Cu;
label_3d546c:
    // 0x3d546c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d546cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3d5470:
    // 0x3d5470: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x3d5470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3d5474:
    // 0x3d5474: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3d5474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3d5478:
    // 0x3d5478: 0x40f809  jalr        $v0
label_3d547c:
    if (ctx->pc == 0x3D547Cu) {
        ctx->pc = 0x3D547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5478u;
        // 0x3d547c: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5480u;
        goto label_3d5480;
    }
    ctx->pc = 0x3D5478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D5480u);
        ctx->pc = 0x3D547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5478u;
        // 0x3d547c: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5478u, 0x3D5480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D5480u;
label_3d5480:
    // 0x3d5480: 0x10000082  b           . + 4 + (0x82 << 2)
label_3d5484:
    if (ctx->pc == 0x3D5484u) {
        ctx->pc = 0x3D5484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5480u;
        // 0x3d5484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5488u;
        goto label_3d5488;
    }
    ctx->pc = 0x3D5480u;
    {
        const bool branch_taken_0x3d5480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5480u;
        // 0x3d5484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5480) {
            ctx->pc = 0x3D568Cu;
            goto label_3d568c;
        }
    }
    ctx->pc = 0x3D5488u;
label_3d5488:
    // 0x3d5488: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3d5488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d548c:
    // 0x3d548c: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x3d548cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_3d5490:
    // 0x3d5490: 0xc0f5974  jal         func_3D65D0
label_3d5494:
    if (ctx->pc == 0x3D5494u) {
        ctx->pc = 0x3D5494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5490u;
        // 0x3d5494: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5498u;
        goto label_3d5498;
    }
    ctx->pc = 0x3D5490u;
    SET_GPR_U32(ctx, 31, 0x3D5498u);
    ctx->pc = 0x3D5494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5490u;
    // 0x3d5494: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D65D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D65D0u, 0x3D5490u, 0x3D5498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5498u;
label_3d5498:
    // 0x3d5498: 0x1ae00071  blez        $s7, . + 4 + (0x71 << 2)
label_3d549c:
    if (ctx->pc == 0x3D549Cu) {
        ctx->pc = 0x3D549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5498u;
        // 0x3d549c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D54A0u;
        goto label_3d54a0;
    }
    ctx->pc = 0x3D5498u;
    {
        const bool branch_taken_0x3d5498 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x3D549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5498u;
        // 0x3d549c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5498) {
            ctx->pc = 0x3D5660u;
            goto label_3d5660;
        }
    }
    ctx->pc = 0x3D54A0u;
label_3d54a0:
    // 0x3d54a0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3d54a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d54a4:
    // 0x3d54a4: 0x8eb40000  lw          $s4, 0x0($s5)
    ctx->pc = 0x3d54a4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3d54a8:
    // 0x3d54a8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3d54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3d54ac:
    // 0x3d54ac: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3d54acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3d54b0:
    // 0x3d54b0: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
label_3d54b4:
    if (ctx->pc == 0x3D54B4u) {
        ctx->pc = 0x3D54B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D54B0u;
        // 0x3d54b4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D54B8u;
        goto label_3d54b8;
    }
    ctx->pc = 0x3D54B0u;
    {
        const bool branch_taken_0x3d54b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D54B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D54B0u;
        // 0x3d54b4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d54b0) {
            ctx->pc = 0x3D5634u;
            goto label_3d5634;
        }
    }
    ctx->pc = 0x3D54B8u;
label_3d54b8:
    // 0x3d54b8: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x3d54b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3d54bc:
    // 0x3d54bc: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_3d54c0:
    if (ctx->pc == 0x3D54C0u) {
        ctx->pc = 0x3D54C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D54BCu;
        // 0x3d54c0: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D54C4u;
        goto label_3d54c4;
    }
    ctx->pc = 0x3D54BCu;
    {
        const bool branch_taken_0x3d54bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D54C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D54BCu;
        // 0x3d54c0: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d54bc) {
            ctx->pc = 0x3D54F0u;
            goto label_3d54f0;
        }
    }
    ctx->pc = 0x3D54C4u;
label_3d54c4:
    // 0x3d54c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3d54c8:
    if (ctx->pc == 0x3D54C8u) {
        ctx->pc = 0x3D54C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D54C4u;
        // 0x3d54c8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D54CCu;
        goto label_3d54cc;
    }
    ctx->pc = 0x3D54C4u;
    {
        const bool branch_taken_0x3d54c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D54C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D54C4u;
        // 0x3d54c8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d54c4) {
            ctx->pc = 0x3D54DCu;
            goto label_3d54dc;
        }
    }
    ctx->pc = 0x3D54CCu;
label_3d54cc:
    // 0x3d54cc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_3d54d0:
    if (ctx->pc == 0x3D54D0u) {
        ctx->pc = 0x3D54D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D54CCu;
        // 0x3d54d0: 0x240201b3  addiu       $v0, $zero, 0x1B3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D54D4u;
        goto label_3d54d4;
    }
    ctx->pc = 0x3D54CCu;
    {
        const bool branch_taken_0x3d54cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D54D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D54CCu;
        // 0x3d54d0: 0x240201b3  addiu       $v0, $zero, 0x1B3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d54cc) {
            ctx->pc = 0x3D54F0u;
            goto label_3d54f0;
        }
    }
    ctx->pc = 0x3D54D4u;
label_3d54d4:
    // 0x3d54d4: 0x1000004a  b           . + 4 + (0x4A << 2)
label_3d54d8:
    if (ctx->pc == 0x3D54D8u) {
        ctx->pc = 0x3D54DCu;
        goto label_3d54dc;
    }
    ctx->pc = 0x3D54D4u;
    {
        const bool branch_taken_0x3d54d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d54d4) {
            ctx->pc = 0x3D5600u;
            goto label_3d5600;
        }
    }
    ctx->pc = 0x3D54DCu;
label_3d54dc:
    // 0x3d54dc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3d54dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3d54e0:
    // 0x3d54e0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_3d54e4:
    if (ctx->pc == 0x3D54E4u) {
        ctx->pc = 0x3D54E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D54E0u;
        // 0x3d54e4: 0x240201b3  addiu       $v0, $zero, 0x1B3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D54E8u;
        goto label_3d54e8;
    }
    ctx->pc = 0x3D54E0u;
    {
        const bool branch_taken_0x3d54e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D54E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D54E0u;
        // 0x3d54e4: 0x240201b3  addiu       $v0, $zero, 0x1B3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d54e0) {
            ctx->pc = 0x3D5514u;
            goto label_3d5514;
        }
    }
    ctx->pc = 0x3D54E8u;
label_3d54e8:
    // 0x3d54e8: 0x10000045  b           . + 4 + (0x45 << 2)
label_3d54ec:
    if (ctx->pc == 0x3D54ECu) {
        ctx->pc = 0x3D54F0u;
        goto label_3d54f0;
    }
    ctx->pc = 0x3D54E8u;
    {
        const bool branch_taken_0x3d54e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d54e8) {
            ctx->pc = 0x3D5600u;
            goto label_3d5600;
        }
    }
    ctx->pc = 0x3D54F0u;
label_3d54f0:
    // 0x3d54f0: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x3d54f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3d54f4:
    // 0x3d54f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d54f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d54f8:
    // 0x3d54f8: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x3d54f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_3d54fc:
    // 0x3d54fc: 0x10800049  beqz        $a0, . + 4 + (0x49 << 2)
label_3d5500:
    if (ctx->pc == 0x3D5500u) {
        ctx->pc = 0x3D5500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D54FCu;
        // 0x3d5500: 0x433004  sllv        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5504u;
        goto label_3d5504;
    }
    ctx->pc = 0x3D54FCu;
    {
        const bool branch_taken_0x3d54fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D54FCu;
        // 0x3d5500: 0x433004  sllv        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d54fc) {
            ctx->pc = 0x3D5624u;
            goto label_3d5624;
        }
    }
    ctx->pc = 0x3D5504u;
label_3d5504:
    // 0x3d5504: 0xc1072e6  jal         func_41CB98
label_3d5508:
    if (ctx->pc == 0x3D5508u) {
        ctx->pc = 0x3D5508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5504u;
        // 0x3d5508: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D550Cu;
        goto label_3d550c;
    }
    ctx->pc = 0x3D5504u;
    SET_GPR_U32(ctx, 31, 0x3D550Cu);
    ctx->pc = 0x3D5508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5504u;
    // 0x3d5508: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CB98u, 0x3D5504u, 0x3D550Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D550Cu;
label_3d550c:
    // 0x3d550c: 0x10000046  b           . + 4 + (0x46 << 2)
label_3d5510:
    if (ctx->pc == 0x3D5510u) {
        ctx->pc = 0x3D5510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D550Cu;
        // 0x3d5510: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5514u;
        goto label_3d5514;
    }
    ctx->pc = 0x3D550Cu;
    {
        const bool branch_taken_0x3d550c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D550Cu;
        // 0x3d5510: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d550c) {
            ctx->pc = 0x3D5628u;
            goto label_3d5628;
        }
    }
    ctx->pc = 0x3D5514u;
label_3d5514:
    // 0x3d5514: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x3d5514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3d5518:
    // 0x3d5518: 0x8e900014  lw          $s0, 0x14($s4)
    ctx->pc = 0x3d5518u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3d551c:
    // 0x3d551c: 0x8e930004  lw          $s3, 0x4($s4)
    ctx->pc = 0x3d551cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3d5520:
    // 0x3d5520: 0x18400040  blez        $v0, . + 4 + (0x40 << 2)
label_3d5524:
    if (ctx->pc == 0x3D5524u) {
        ctx->pc = 0x3D5524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5520u;
        // 0x3d5524: 0x8e920010  lw          $s2, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5528u;
        goto label_3d5528;
    }
    ctx->pc = 0x3D5520u;
    {
        const bool branch_taken_0x3d5520 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3D5524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5520u;
        // 0x3d5524: 0x8e920010  lw          $s2, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5520) {
            ctx->pc = 0x3D5624u;
            goto label_3d5624;
        }
    }
    ctx->pc = 0x3D5528u;
label_3d5528:
    // 0x3d5528: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d5528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d552c:
    // 0x3d552c: 0x111023  negu        $v0, $s1
    ctx->pc = 0x3d552cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_3d5530:
    // 0x3d5530: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3d5530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3d5534:
    // 0x3d5534: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_3d5538:
    if (ctx->pc == 0x3D5538u) {
        ctx->pc = 0x3D5538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5534u;
        // 0x3d5538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D553Cu;
        goto label_3d553c;
    }
    ctx->pc = 0x3D5534u;
    {
        const bool branch_taken_0x3d5534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5534u;
        // 0x3d5538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5534) {
            ctx->pc = 0x3D55A0u;
            goto label_3d55a0;
        }
    }
    ctx->pc = 0x3D553Cu;
label_3d553c:
    // 0x3d553c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3d553cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3d5540:
    // 0x3d5540: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3d5544:
    if (ctx->pc == 0x3D5544u) {
        ctx->pc = 0x3D5544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5540u;
        // 0x3d5544: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5548u;
        goto label_3d5548;
    }
    ctx->pc = 0x3D5540u;
    {
        const bool branch_taken_0x3d5540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5540u;
        // 0x3d5544: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5540) {
            ctx->pc = 0x3D557Cu;
            goto label_3d557c;
        }
    }
    ctx->pc = 0x3D5548u;
label_3d5548:
    // 0x3d5548: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3d554c:
    if (ctx->pc == 0x3D554Cu) {
        ctx->pc = 0x3D554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5548u;
        // 0x3d554c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5550u;
        goto label_3d5550;
    }
    ctx->pc = 0x3D5548u;
    {
        const bool branch_taken_0x3d5548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5548u;
        // 0x3d554c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5548) {
            ctx->pc = 0x3D5564u;
            goto label_3d5564;
        }
    }
    ctx->pc = 0x3D5550u;
label_3d5550:
    // 0x3d5550: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3d5550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d5554:
    // 0x3d5554: 0xc1072e6  jal         func_41CB98
label_3d5558:
    if (ctx->pc == 0x3D5558u) {
        ctx->pc = 0x3D5558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5554u;
        // 0x3d5558: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D555Cu;
        goto label_3d555c;
    }
    ctx->pc = 0x3D5554u;
    SET_GPR_U32(ctx, 31, 0x3D555Cu);
    ctx->pc = 0x3D5558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5554u;
    // 0x3d5558: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CB98u, 0x3D5554u, 0x3D555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D555Cu;
label_3d555c:
    // 0x3d555c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3d555cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3d5560:
    // 0x3d5560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d5560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d5564:
    // 0x3d5564: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d5564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d5568:
    // 0x3d5568: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3d5568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d556c:
    // 0x3d556c: 0xc1072e6  jal         func_41CB98
label_3d5570:
    if (ctx->pc == 0x3D5570u) {
        ctx->pc = 0x3D5570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D556Cu;
        // 0x3d5570: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5574u;
        goto label_3d5574;
    }
    ctx->pc = 0x3D556Cu;
    SET_GPR_U32(ctx, 31, 0x3D5574u);
    ctx->pc = 0x3D5570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D556Cu;
    // 0x3d5570: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CB98u, 0x3D556Cu, 0x3D5574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5574u;
label_3d5574:
    // 0x3d5574: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3d5574u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3d5578:
    // 0x3d5578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d5578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d557c:
    // 0x3d557c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d557cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d5580:
    // 0x3d5580: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3d5580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d5584:
    // 0x3d5584: 0xc1072e6  jal         func_41CB98
label_3d5588:
    if (ctx->pc == 0x3D5588u) {
        ctx->pc = 0x3D5588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5584u;
        // 0x3d5588: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D558Cu;
        goto label_3d558c;
    }
    ctx->pc = 0x3D5584u;
    SET_GPR_U32(ctx, 31, 0x3D558Cu);
    ctx->pc = 0x3D5588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5584u;
    // 0x3d5588: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CB98u, 0x3D5584u, 0x3D558Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D558Cu;
label_3d558c:
    // 0x3d558c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3d558cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3d5590:
    // 0x3d5590: 0x52200025  beql        $s1, $zero, . + 4 + (0x25 << 2)
label_3d5594:
    if (ctx->pc == 0x3D5594u) {
        ctx->pc = 0x3D5594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5590u;
        // 0x3d5594: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5598u;
        goto label_3d5598;
    }
    ctx->pc = 0x3D5590u;
    {
        const bool branch_taken_0x3d5590 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5590) {
            ctx->pc = 0x3D5594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D5590u;
            // 0x3d5594: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D5628u;
            goto label_3d5628;
        }
    }
    ctx->pc = 0x3D5598u;
label_3d5598:
    // 0x3d5598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d5598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d559c:
    // 0x3d559c: 0x0  nop
    ctx->pc = 0x3d559cu;
    // NOP
label_3d55a0:
    // 0x3d55a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d55a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d55a4:
    // 0x3d55a4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3d55a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d55a8:
    // 0x3d55a8: 0xc1072e6  jal         func_41CB98
label_3d55ac:
    if (ctx->pc == 0x3D55ACu) {
        ctx->pc = 0x3D55ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D55A8u;
        // 0x3d55ac: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D55B0u;
        goto label_3d55b0;
    }
    ctx->pc = 0x3D55A8u;
    SET_GPR_U32(ctx, 31, 0x3D55B0u);
    ctx->pc = 0x3D55ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D55A8u;
    // 0x3d55ac: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CB98u, 0x3D55A8u, 0x3D55B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D55B0u;
label_3d55b0:
    // 0x3d55b0: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x3d55b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_3d55b4:
    // 0x3d55b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d55b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d55b8:
    // 0x3d55b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d55b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d55bc:
    // 0x3d55bc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3d55bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d55c0:
    // 0x3d55c0: 0xc1072e6  jal         func_41CB98
label_3d55c4:
    if (ctx->pc == 0x3D55C4u) {
        ctx->pc = 0x3D55C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D55C0u;
        // 0x3d55c4: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D55C8u;
        goto label_3d55c8;
    }
    ctx->pc = 0x3D55C0u;
    SET_GPR_U32(ctx, 31, 0x3D55C8u);
    ctx->pc = 0x3D55C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D55C0u;
    // 0x3d55c4: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CB98u, 0x3D55C0u, 0x3D55C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D55C8u;
label_3d55c8:
    // 0x3d55c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d55c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d55cc:
    // 0x3d55cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d55ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d55d0:
    // 0x3d55d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3d55d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d55d4:
    // 0x3d55d4: 0xc1072e6  jal         func_41CB98
label_3d55d8:
    if (ctx->pc == 0x3D55D8u) {
        ctx->pc = 0x3D55D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D55D4u;
        // 0x3d55d8: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D55DCu;
        goto label_3d55dc;
    }
    ctx->pc = 0x3D55D4u;
    SET_GPR_U32(ctx, 31, 0x3D55DCu);
    ctx->pc = 0x3D55D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D55D4u;
    // 0x3d55d8: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CB98u, 0x3D55D4u, 0x3D55DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D55DCu;
label_3d55dc:
    // 0x3d55dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d55dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d55e0:
    // 0x3d55e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d55e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d55e4:
    // 0x3d55e4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3d55e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d55e8:
    // 0x3d55e8: 0xc1072e6  jal         func_41CB98
label_3d55ec:
    if (ctx->pc == 0x3D55ECu) {
        ctx->pc = 0x3D55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D55E8u;
        // 0x3d55ec: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D55F0u;
        goto label_3d55f0;
    }
    ctx->pc = 0x3D55E8u;
    SET_GPR_U32(ctx, 31, 0x3D55F0u);
    ctx->pc = 0x3D55ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D55E8u;
    // 0x3d55ec: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CB98u, 0x3D55E8u, 0x3D55F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D55F0u;
label_3d55f0:
    // 0x3d55f0: 0x1620ffeb  bnez        $s1, . + 4 + (-0x15 << 2)
label_3d55f4:
    if (ctx->pc == 0x3D55F4u) {
        ctx->pc = 0x3D55F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D55F0u;
        // 0x3d55f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D55F8u;
        goto label_3d55f8;
    }
    ctx->pc = 0x3D55F0u;
    {
        const bool branch_taken_0x3d55f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D55F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D55F0u;
        // 0x3d55f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d55f0) {
            ctx->pc = 0x3D55A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d55a0;
        }
    }
    ctx->pc = 0x3D55F8u;
label_3d55f8:
    // 0x3d55f8: 0x1000000b  b           . + 4 + (0xB << 2)
label_3d55fc:
    if (ctx->pc == 0x3D55FCu) {
        ctx->pc = 0x3D55FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D55F8u;
        // 0x3d55fc: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5600u;
        goto label_3d5600;
    }
    ctx->pc = 0x3D55F8u;
    {
        const bool branch_taken_0x3d55f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D55FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D55F8u;
        // 0x3d55fc: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d55f8) {
            ctx->pc = 0x3D5628u;
            goto label_3d5628;
        }
    }
    ctx->pc = 0x3D5600u;
label_3d5600:
    // 0x3d5600: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3d5600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3d5604:
    // 0x3d5604: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3d5604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3d5608:
    // 0x3d5608: 0xc1035f6  jal         func_40D7D8
label_3d560c:
    if (ctx->pc == 0x3D560Cu) {
        ctx->pc = 0x3D560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5608u;
        // 0x3d560c: 0x34840008  ori         $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5610u;
        goto label_3d5610;
    }
    ctx->pc = 0x3D5608u;
    SET_GPR_U32(ctx, 31, 0x3D5610u);
    ctx->pc = 0x3D560Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5608u;
    // 0x3d560c: 0x34840008  ori         $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3D5608u, 0x3D5610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5610u;
label_3d5610:
    // 0x3d5610: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d5610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d5614:
    // 0x3d5614: 0xc103628  jal         func_40D8A0
label_3d5618:
    if (ctx->pc == 0x3D5618u) {
        ctx->pc = 0x3D5618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5614u;
        // 0x3d5618: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D561Cu;
        goto label_3d561c;
    }
    ctx->pc = 0x3D5614u;
    SET_GPR_U32(ctx, 31, 0x3D561Cu);
    ctx->pc = 0x3D5618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5614u;
    // 0x3d5618: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3D5614u, 0x3D561Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D561Cu;
label_3d561c:
    // 0x3d561c: 0x10000006  b           . + 4 + (0x6 << 2)
label_3d5620:
    if (ctx->pc == 0x3D5620u) {
        ctx->pc = 0x3D5620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D561Cu;
        // 0x3d5620: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5624u;
        goto label_3d5624;
    }
    ctx->pc = 0x3D561Cu;
    {
        const bool branch_taken_0x3d561c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D561Cu;
        // 0x3d5620: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d561c) {
            ctx->pc = 0x3D5638u;
            goto label_3d5638;
        }
    }
    ctx->pc = 0x3D5624u;
label_3d5624:
    // 0x3d5624: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3d5624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3d5628:
    // 0x3d5628: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x3d5628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3d562c:
    // 0x3d562c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3d562cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3d5630:
    // 0x3d5630: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3d5630u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_3d5634:
    // 0x3d5634: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x3d5634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3d5638:
    // 0x3d5638: 0xc107284  jal         func_41CA10
label_3d563c:
    if (ctx->pc == 0x3D563Cu) {
        ctx->pc = 0x3D563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5638u;
        // 0x3d563c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5640u;
        goto label_3d5640;
    }
    ctx->pc = 0x3D5638u;
    SET_GPR_U32(ctx, 31, 0x3D5640u);
    ctx->pc = 0x3D563Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5638u;
    // 0x3d563c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CA10u, 0x3D5638u, 0x3D5640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5640u;
label_3d5640:
    // 0x3d5640: 0x1040ff8a  beqz        $v0, . + 4 + (-0x76 << 2)
label_3d5644:
    if (ctx->pc == 0x3D5644u) {
        ctx->pc = 0x3D5644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5640u;
        // 0x3d5644: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5648u;
        goto label_3d5648;
    }
    ctx->pc = 0x3D5640u;
    {
        const bool branch_taken_0x3d5640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5640u;
        // 0x3d5644: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5640) {
            ctx->pc = 0x3D546Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d546c;
        }
    }
    ctx->pc = 0x3D5648u;
label_3d5648:
    // 0x3d5648: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x3d5648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3d564c:
    // 0x3d564c: 0xc10705c  jal         func_41C170
label_3d5650:
    if (ctx->pc == 0x3D5650u) {
        ctx->pc = 0x3D5650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D564Cu;
        // 0x3d5650: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5654u;
        goto label_3d5654;
    }
    ctx->pc = 0x3D564Cu;
    SET_GPR_U32(ctx, 31, 0x3D5654u);
    ctx->pc = 0x3D5650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D564Cu;
    // 0x3d5650: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D564Cu, 0x3D5654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5654u;
label_3d5654:
    // 0x3d5654: 0x2d7182a  slt         $v1, $s6, $s7
    ctx->pc = 0x3d5654u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_3d5658:
    // 0x3d5658: 0x5460ff93  bnel        $v1, $zero, . + 4 + (-0x6D << 2)
label_3d565c:
    if (ctx->pc == 0x3D565Cu) {
        ctx->pc = 0x3D565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5658u;
        // 0x3d565c: 0x8eb40000  lw          $s4, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5660u;
        goto label_3d5660;
    }
    ctx->pc = 0x3D5658u;
    {
        const bool branch_taken_0x3d5658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d5658) {
            ctx->pc = 0x3D565Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D5658u;
            // 0x3d565c: 0x8eb40000  lw          $s4, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D54A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d54a8;
        }
    }
    ctx->pc = 0x3D5660u;
label_3d5660:
    // 0x3d5660: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d5660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3d5664:
    // 0x3d5664: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x3d5664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3d5668:
    // 0x3d5668: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3d5668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3d566c:
    // 0x3d566c: 0x40f809  jalr        $v0
label_3d5670:
    if (ctx->pc == 0x3D5670u) {
        ctx->pc = 0x3D5670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D566Cu;
        // 0x3d5670: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5674u;
        goto label_3d5674;
    }
    ctx->pc = 0x3D566Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D5674u);
        ctx->pc = 0x3D5670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D566Cu;
        // 0x3d5670: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D566Cu, 0x3D5674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D5674u;
label_3d5674:
    // 0x3d5674: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3d5674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3d5678:
    // 0x3d5678: 0xc105778  jal         func_415DE0
label_3d567c:
    if (ctx->pc == 0x3D567Cu) {
        ctx->pc = 0x3D567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5678u;
        // 0x3d567c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5680u;
        goto label_3d5680;
    }
    ctx->pc = 0x3D5678u;
    SET_GPR_U32(ctx, 31, 0x3D5680u);
    ctx->pc = 0x3D567Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5678u;
    // 0x3d567c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DE0u, 0x3D5678u, 0x3D5680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5680u;
label_3d5680:
    // 0x3d5680: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3d5680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3d5684:
    // 0x3d5684: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x3d5684u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_3d5688:
    // 0x3d5688: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3d5688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3d568c:
    // 0x3d568c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3d568cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3d5690:
    // 0x3d5690: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3d5690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3d5694:
    // 0x3d5694: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3d5694u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3d5698:
    // 0x3d5698: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3d5698u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3d569c:
    // 0x3d569c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3d569cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3d56a0:
    // 0x3d56a0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3d56a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d56a4:
    // 0x3d56a4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3d56a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d56a8:
    // 0x3d56a8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x3d56a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d56ac:
    // 0x3d56ac: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x3d56acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d56b0:
    // 0x3d56b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d56b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d56b4:
    // 0x3d56b4: 0x3e00008  jr          $ra
label_3d56b8:
    if (ctx->pc == 0x3D56B8u) {
        ctx->pc = 0x3D56B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D56B4u;
        // 0x3d56b8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D56BCu;
        goto label_3d56bc;
    }
    ctx->pc = 0x3D56B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D56B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D56B4u;
        // 0x3d56b8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D56B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D56BCu;
label_3d56bc:
    // 0x3d56bc: 0x0  nop
    ctx->pc = 0x3d56bcu;
    // NOP
    ctx->pc = 0x3d56c0u;
}
