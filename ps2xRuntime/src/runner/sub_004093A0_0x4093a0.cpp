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

// Function: sub_004093A0
// Address: 0x4093a0 - 0x409708
void sub_004093A0_0x4093a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004093A0_0x4093a0");
#endif

    switch (ctx->pc) {
        case 0x4093a0u: goto label_4093a0;
        case 0x4093a4u: goto label_4093a4;
        case 0x4093a8u: goto label_4093a8;
        case 0x4093acu: goto label_4093ac;
        case 0x4093b0u: goto label_4093b0;
        case 0x4093b4u: goto label_4093b4;
        case 0x4093b8u: goto label_4093b8;
        case 0x4093bcu: goto label_4093bc;
        case 0x4093c0u: goto label_4093c0;
        case 0x4093c4u: goto label_4093c4;
        case 0x4093c8u: goto label_4093c8;
        case 0x4093ccu: goto label_4093cc;
        case 0x4093d0u: goto label_4093d0;
        case 0x4093d4u: goto label_4093d4;
        case 0x4093d8u: goto label_4093d8;
        case 0x4093dcu: goto label_4093dc;
        case 0x4093e0u: goto label_4093e0;
        case 0x4093e4u: goto label_4093e4;
        case 0x4093e8u: goto label_4093e8;
        case 0x4093ecu: goto label_4093ec;
        case 0x4093f0u: goto label_4093f0;
        case 0x4093f4u: goto label_4093f4;
        case 0x4093f8u: goto label_4093f8;
        case 0x4093fcu: goto label_4093fc;
        case 0x409400u: goto label_409400;
        case 0x409404u: goto label_409404;
        case 0x409408u: goto label_409408;
        case 0x40940cu: goto label_40940c;
        case 0x409410u: goto label_409410;
        case 0x409414u: goto label_409414;
        case 0x409418u: goto label_409418;
        case 0x40941cu: goto label_40941c;
        case 0x409420u: goto label_409420;
        case 0x409424u: goto label_409424;
        case 0x409428u: goto label_409428;
        case 0x40942cu: goto label_40942c;
        case 0x409430u: goto label_409430;
        case 0x409434u: goto label_409434;
        case 0x409438u: goto label_409438;
        case 0x40943cu: goto label_40943c;
        case 0x409440u: goto label_409440;
        case 0x409444u: goto label_409444;
        case 0x409448u: goto label_409448;
        case 0x40944cu: goto label_40944c;
        case 0x409450u: goto label_409450;
        case 0x409454u: goto label_409454;
        case 0x409458u: goto label_409458;
        case 0x40945cu: goto label_40945c;
        case 0x409460u: goto label_409460;
        case 0x409464u: goto label_409464;
        case 0x409468u: goto label_409468;
        case 0x40946cu: goto label_40946c;
        case 0x409470u: goto label_409470;
        case 0x409474u: goto label_409474;
        case 0x409478u: goto label_409478;
        case 0x40947cu: goto label_40947c;
        case 0x409480u: goto label_409480;
        case 0x409484u: goto label_409484;
        case 0x409488u: goto label_409488;
        case 0x40948cu: goto label_40948c;
        case 0x409490u: goto label_409490;
        case 0x409494u: goto label_409494;
        case 0x409498u: goto label_409498;
        case 0x40949cu: goto label_40949c;
        case 0x4094a0u: goto label_4094a0;
        case 0x4094a4u: goto label_4094a4;
        case 0x4094a8u: goto label_4094a8;
        case 0x4094acu: goto label_4094ac;
        case 0x4094b0u: goto label_4094b0;
        case 0x4094b4u: goto label_4094b4;
        case 0x4094b8u: goto label_4094b8;
        case 0x4094bcu: goto label_4094bc;
        case 0x4094c0u: goto label_4094c0;
        case 0x4094c4u: goto label_4094c4;
        case 0x4094c8u: goto label_4094c8;
        case 0x4094ccu: goto label_4094cc;
        case 0x4094d0u: goto label_4094d0;
        case 0x4094d4u: goto label_4094d4;
        case 0x4094d8u: goto label_4094d8;
        case 0x4094dcu: goto label_4094dc;
        case 0x4094e0u: goto label_4094e0;
        case 0x4094e4u: goto label_4094e4;
        case 0x4094e8u: goto label_4094e8;
        case 0x4094ecu: goto label_4094ec;
        case 0x4094f0u: goto label_4094f0;
        case 0x4094f4u: goto label_4094f4;
        case 0x4094f8u: goto label_4094f8;
        case 0x4094fcu: goto label_4094fc;
        case 0x409500u: goto label_409500;
        case 0x409504u: goto label_409504;
        case 0x409508u: goto label_409508;
        case 0x40950cu: goto label_40950c;
        case 0x409510u: goto label_409510;
        case 0x409514u: goto label_409514;
        case 0x409518u: goto label_409518;
        case 0x40951cu: goto label_40951c;
        case 0x409520u: goto label_409520;
        case 0x409524u: goto label_409524;
        case 0x409528u: goto label_409528;
        case 0x40952cu: goto label_40952c;
        case 0x409530u: goto label_409530;
        case 0x409534u: goto label_409534;
        case 0x409538u: goto label_409538;
        case 0x40953cu: goto label_40953c;
        case 0x409540u: goto label_409540;
        case 0x409544u: goto label_409544;
        case 0x409548u: goto label_409548;
        case 0x40954cu: goto label_40954c;
        case 0x409550u: goto label_409550;
        case 0x409554u: goto label_409554;
        case 0x409558u: goto label_409558;
        case 0x40955cu: goto label_40955c;
        case 0x409560u: goto label_409560;
        case 0x409564u: goto label_409564;
        case 0x409568u: goto label_409568;
        case 0x40956cu: goto label_40956c;
        case 0x409570u: goto label_409570;
        case 0x409574u: goto label_409574;
        case 0x409578u: goto label_409578;
        case 0x40957cu: goto label_40957c;
        case 0x409580u: goto label_409580;
        case 0x409584u: goto label_409584;
        case 0x409588u: goto label_409588;
        case 0x40958cu: goto label_40958c;
        case 0x409590u: goto label_409590;
        case 0x409594u: goto label_409594;
        case 0x409598u: goto label_409598;
        case 0x40959cu: goto label_40959c;
        case 0x4095a0u: goto label_4095a0;
        case 0x4095a4u: goto label_4095a4;
        case 0x4095a8u: goto label_4095a8;
        case 0x4095acu: goto label_4095ac;
        case 0x4095b0u: goto label_4095b0;
        case 0x4095b4u: goto label_4095b4;
        case 0x4095b8u: goto label_4095b8;
        case 0x4095bcu: goto label_4095bc;
        case 0x4095c0u: goto label_4095c0;
        case 0x4095c4u: goto label_4095c4;
        case 0x4095c8u: goto label_4095c8;
        case 0x4095ccu: goto label_4095cc;
        case 0x4095d0u: goto label_4095d0;
        case 0x4095d4u: goto label_4095d4;
        case 0x4095d8u: goto label_4095d8;
        case 0x4095dcu: goto label_4095dc;
        case 0x4095e0u: goto label_4095e0;
        case 0x4095e4u: goto label_4095e4;
        case 0x4095e8u: goto label_4095e8;
        case 0x4095ecu: goto label_4095ec;
        case 0x4095f0u: goto label_4095f0;
        case 0x4095f4u: goto label_4095f4;
        case 0x4095f8u: goto label_4095f8;
        case 0x4095fcu: goto label_4095fc;
        case 0x409600u: goto label_409600;
        case 0x409604u: goto label_409604;
        case 0x409608u: goto label_409608;
        case 0x40960cu: goto label_40960c;
        case 0x409610u: goto label_409610;
        case 0x409614u: goto label_409614;
        case 0x409618u: goto label_409618;
        case 0x40961cu: goto label_40961c;
        case 0x409620u: goto label_409620;
        case 0x409624u: goto label_409624;
        case 0x409628u: goto label_409628;
        case 0x40962cu: goto label_40962c;
        case 0x409630u: goto label_409630;
        case 0x409634u: goto label_409634;
        case 0x409638u: goto label_409638;
        case 0x40963cu: goto label_40963c;
        case 0x409640u: goto label_409640;
        case 0x409644u: goto label_409644;
        case 0x409648u: goto label_409648;
        case 0x40964cu: goto label_40964c;
        case 0x409650u: goto label_409650;
        case 0x409654u: goto label_409654;
        case 0x409658u: goto label_409658;
        case 0x40965cu: goto label_40965c;
        case 0x409660u: goto label_409660;
        case 0x409664u: goto label_409664;
        case 0x409668u: goto label_409668;
        case 0x40966cu: goto label_40966c;
        case 0x409670u: goto label_409670;
        case 0x409674u: goto label_409674;
        case 0x409678u: goto label_409678;
        case 0x40967cu: goto label_40967c;
        case 0x409680u: goto label_409680;
        case 0x409684u: goto label_409684;
        case 0x409688u: goto label_409688;
        case 0x40968cu: goto label_40968c;
        case 0x409690u: goto label_409690;
        case 0x409694u: goto label_409694;
        case 0x409698u: goto label_409698;
        case 0x40969cu: goto label_40969c;
        case 0x4096a0u: goto label_4096a0;
        case 0x4096a4u: goto label_4096a4;
        case 0x4096a8u: goto label_4096a8;
        case 0x4096acu: goto label_4096ac;
        case 0x4096b0u: goto label_4096b0;
        case 0x4096b4u: goto label_4096b4;
        case 0x4096b8u: goto label_4096b8;
        case 0x4096bcu: goto label_4096bc;
        case 0x4096c0u: goto label_4096c0;
        case 0x4096c4u: goto label_4096c4;
        case 0x4096c8u: goto label_4096c8;
        case 0x4096ccu: goto label_4096cc;
        case 0x4096d0u: goto label_4096d0;
        case 0x4096d4u: goto label_4096d4;
        case 0x4096d8u: goto label_4096d8;
        case 0x4096dcu: goto label_4096dc;
        case 0x4096e0u: goto label_4096e0;
        case 0x4096e4u: goto label_4096e4;
        case 0x4096e8u: goto label_4096e8;
        case 0x4096ecu: goto label_4096ec;
        case 0x4096f0u: goto label_4096f0;
        case 0x4096f4u: goto label_4096f4;
        case 0x4096f8u: goto label_4096f8;
        case 0x4096fcu: goto label_4096fc;
        case 0x409700u: goto label_409700;
        case 0x409704u: goto label_409704;
        default: break;
    }

    ctx->pc = 0x4093a0u;

label_4093a0:
    // 0x4093a0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x4093a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_4093a4:
    // 0x4093a4: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x4093a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_4093a8:
    // 0x4093a8: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x4093a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_4093ac:
    // 0x4093ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4093acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4093b0:
    // 0x4093b0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x4093b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_4093b4:
    // 0x4093b4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4093b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4093b8:
    // 0x4093b8: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x4093b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_4093bc:
    // 0x4093bc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x4093bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4093c0:
    // 0x4093c0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x4093c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_4093c4:
    // 0x4093c4: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x4093c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_4093c8:
    // 0x4093c8: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x4093c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_4093cc:
    // 0x4093cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4093ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4093d0:
    // 0x4093d0: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x4093d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_4093d4:
    // 0x4093d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4093d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4093d8:
    // 0x4093d8: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x4093d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_4093dc:
    // 0x4093dc: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x4093dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_4093e0:
    // 0x4093e0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x4093e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_4093e4:
    // 0x4093e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x4093e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_4093e8:
    // 0x4093e8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x4093e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_4093ec:
    // 0x4093ec: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x4093ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_4093f0:
    // 0x4093f0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x4093f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_4093f4:
    // 0x4093f4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x4093f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_4093f8:
    // 0x4093f8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x4093f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_4093fc:
    // 0x4093fc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x4093fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_409400:
    // 0x409400: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x409400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_409404:
    // 0x409404: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x409404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_409408:
    // 0x409408: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x409408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_40940c:
    // 0x40940c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x40940cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_409410:
    // 0x409410: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x409410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_409414:
    // 0x409414: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x409414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_409418:
    // 0x409418: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x409418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_40941c:
    // 0x40941c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x40941cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_409420:
    // 0x409420: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x409420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_409424:
    // 0x409424: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x409424u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_409428:
    // 0x409428: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x409428u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40942c:
    // 0x40942c: 0x10000036  b           . + 4 + (0x36 << 2)
label_409430:
    if (ctx->pc == 0x409430u) {
        ctx->pc = 0x409430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40942Cu;
        // 0x409430: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409434u;
        goto label_409434;
    }
    ctx->pc = 0x40942Cu;
    {
        const bool branch_taken_0x40942c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x409430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40942Cu;
        // 0x409430: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40942c) {
            ctx->pc = 0x409508u;
            goto label_409508;
        }
    }
    ctx->pc = 0x409434u;
label_409434:
    // 0x409434: 0x0  nop
    ctx->pc = 0x409434u;
    // NOP
label_409438:
    // 0x409438: 0x8ea3005c  lw          $v1, 0x5C($s5)
    ctx->pc = 0x409438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
label_40943c:
    // 0x40943c: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x40943cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
label_409440:
    // 0x409440: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x409440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_409444:
    // 0x409444: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x409444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_409448:
    // 0x409448: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x409448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_40944c:
    // 0x40944c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x40944cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_409450:
    // 0x409450: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x409450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_409454:
    // 0x409454: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x409454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_409458:
    // 0x409458: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x409458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_40945c:
    // 0x40945c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x40945cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_409460:
    // 0x409460: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x409460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_409464:
    // 0x409464: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x409464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_409468:
    // 0x409468: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x409468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_40946c:
    // 0x40946c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x40946cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_409470:
    // 0x409470: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x409470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_409474:
    // 0x409474: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x409474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_409478:
    // 0x409478: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x409478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_40947c:
    // 0x40947c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x40947cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_409480:
    // 0x409480: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x409480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
label_409484:
    // 0x409484: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x409484u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_409488:
    // 0x409488: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x409488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_40948c:
    // 0x40948c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_409490:
    if (ctx->pc == 0x409490u) {
        ctx->pc = 0x409490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40948Cu;
        // 0x409490: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409494u;
        goto label_409494;
    }
    ctx->pc = 0x40948Cu;
    {
        const bool branch_taken_0x40948c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x409490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40948Cu;
        // 0x409490: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40948c) {
            ctx->pc = 0x4094D8u;
            goto label_4094d8;
        }
    }
    ctx->pc = 0x409494u;
label_409494:
    // 0x409494: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x409494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_409498:
    // 0x409498: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x409498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_40949c:
    // 0x40949c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x40949cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4094a0:
    // 0x4094a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4094a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4094a4:
    // 0x4094a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4094a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4094a8:
    // 0x4094a8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4094a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4094ac:
    // 0x4094ac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4094acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4094b0:
    // 0x4094b0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4094b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4094b4:
    // 0x4094b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4094b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4094b8:
    // 0x4094b8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4094b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4094bc:
    // 0x4094bc: 0xc1023a2  jal         func_408E88
label_4094c0:
    if (ctx->pc == 0x4094C0u) {
        ctx->pc = 0x4094C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4094BCu;
        // 0x4094c0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4094C4u;
        goto label_4094c4;
    }
    ctx->pc = 0x4094BCu;
    SET_GPR_U32(ctx, 31, 0x4094C4u);
    ctx->pc = 0x4094C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4094BCu;
    // 0x4094c0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x408E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x408E88u, 0x4094BCu, 0x4094C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4094C4u;
label_4094c4:
    // 0x4094c4: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x4094c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_4094c8:
    // 0x4094c8: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x4094c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4094cc:
    // 0x4094cc: 0x264202b  sltu        $a0, $s3, $a0
    ctx->pc = 0x4094ccu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4094d0:
    // 0x4094d0: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
label_4094d4:
    if (ctx->pc == 0x4094D4u) {
        ctx->pc = 0x4094D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4094D0u;
        // 0x4094d4: 0x62a00b  movn        $s4, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4094D8u;
        goto label_4094d8;
    }
    ctx->pc = 0x4094D0u;
    {
        const bool branch_taken_0x4094d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4094D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4094D0u;
        // 0x4094d4: 0x62a00b  movn        $s4, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4094d0) {
            ctx->pc = 0x409498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_409498;
        }
    }
    ctx->pc = 0x4094D8u;
label_4094d8:
    // 0x4094d8: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_4094dc:
    if (ctx->pc == 0x4094DCu) {
        ctx->pc = 0x4094DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4094D8u;
        // 0x4094dc: 0x111143  sra         $v0, $s1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4094E0u;
        goto label_4094e0;
    }
    ctx->pc = 0x4094D8u;
    {
        const bool branch_taken_0x4094d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4094DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4094D8u;
        // 0x4094dc: 0x111143  sra         $v0, $s1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4094d8) {
            ctx->pc = 0x4094ECu;
            goto label_4094ec;
        }
    }
    ctx->pc = 0x4094E0u;
label_4094e0:
    // 0x4094e0: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x4094e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_4094e4:
    // 0x4094e4: 0x16820011  bne         $s4, $v0, . + 4 + (0x11 << 2)
label_4094e8:
    if (ctx->pc == 0x4094E8u) {
        ctx->pc = 0x4094E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4094E4u;
        // 0x4094e8: 0x111143  sra         $v0, $s1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4094ECu;
        goto label_4094ec;
    }
    ctx->pc = 0x4094E4u;
    {
        const bool branch_taken_0x4094e4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x4094E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4094E4u;
        // 0x4094e8: 0x111143  sra         $v0, $s1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4094e4) {
            ctx->pc = 0x40952Cu;
            goto label_40952c;
        }
    }
    ctx->pc = 0x4094ECu;
label_4094ec:
    // 0x4094ec: 0x3224001f  andi        $a0, $s1, 0x1F
    ctx->pc = 0x4094ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
label_4094f0:
    // 0x4094f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4094f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4094f4:
    // 0x4094f4: 0x9e2004  sllv        $a0, $fp, $a0
    ctx->pc = 0x4094f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), GPR_U32(ctx, 4) & 0x1F));
label_4094f8:
    // 0x4094f8: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x4094f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_4094fc:
    // 0x4094fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4094fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_409500:
    // 0x409500: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x409500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_409504:
    // 0x409504: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x409504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_409508:
    // 0x409508: 0x12c00008  beqz        $s6, . + 4 + (0x8 << 2)
label_40950c:
    if (ctx->pc == 0x40950Cu) {
        ctx->pc = 0x40950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409508u;
        // 0x40950c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409510u;
        goto label_409510;
    }
    ctx->pc = 0x409508u;
    {
        const bool branch_taken_0x409508 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x40950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409508u;
        // 0x40950c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409508) {
            ctx->pc = 0x40952Cu;
            goto label_40952c;
        }
    }
    ctx->pc = 0x409510u;
label_409510:
    // 0x409510: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x409510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_409514:
    // 0x409514: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x409514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_409518:
    // 0x409518: 0xc10297a  jal         func_40A5E8
label_40951c:
    if (ctx->pc == 0x40951Cu) {
        ctx->pc = 0x40951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409518u;
        // 0x40951c: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409520u;
        goto label_409520;
    }
    ctx->pc = 0x409518u;
    SET_GPR_U32(ctx, 31, 0x409520u);
    ctx->pc = 0x40951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409518u;
    // 0x40951c: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A5E8u, 0x409518u, 0x409520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409520u;
label_409520:
    // 0x409520: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x409520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_409524:
    // 0x409524: 0x621ffc4  bgez        $s1, . + 4 + (-0x3C << 2)
label_409528:
    if (ctx->pc == 0x409528u) {
        ctx->pc = 0x409528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409524u;
        // 0x409528: 0x27b70020  addiu       $s7, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40952Cu;
        goto label_40952c;
    }
    ctx->pc = 0x409524u;
    {
        const bool branch_taken_0x409524 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x409528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409524u;
        // 0x409528: 0x27b70020  addiu       $s7, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409524) {
            ctx->pc = 0x409438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_409438;
        }
    }
    ctx->pc = 0x40952Cu;
label_40952c:
    // 0x40952c: 0x6200069  bltz        $s1, . + 4 + (0x69 << 2)
label_409530:
    if (ctx->pc == 0x409530u) {
        ctx->pc = 0x409530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40952Cu;
        // 0x409530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409534u;
        goto label_409534;
    }
    ctx->pc = 0x40952Cu;
    {
        const bool branch_taken_0x40952c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x409530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40952Cu;
        // 0x409530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40952c) {
            ctx->pc = 0x4096D4u;
            goto label_4096d4;
        }
    }
    ctx->pc = 0x409534u;
label_409534:
    // 0x409534: 0x12c00068  beqz        $s6, . + 4 + (0x68 << 2)
label_409538:
    if (ctx->pc == 0x409538u) {
        ctx->pc = 0x409538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409534u;
        // 0x409538: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40953Cu;
        goto label_40953c;
    }
    ctx->pc = 0x409534u;
    {
        const bool branch_taken_0x409534 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x409538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409534u;
        // 0x409538: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409534) {
            ctx->pc = 0x4096D8u;
            goto label_4096d8;
        }
    }
    ctx->pc = 0x40953Cu;
label_40953c:
    // 0x40953c: 0xc0e3736  jal         func_38DCD8
label_409540:
    if (ctx->pc == 0x409540u) {
        ctx->pc = 0x409540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40953Cu;
        // 0x409540: 0x8e440078  lw          $a0, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409544u;
        goto label_409544;
    }
    ctx->pc = 0x40953Cu;
    SET_GPR_U32(ctx, 31, 0x409544u);
    ctx->pc = 0x409540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40953Cu;
    // 0x409540: 0x8e440078  lw          $a0, 0x78($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DCD8u, 0x40953Cu, 0x409544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409544u;
label_409544:
    // 0x409544: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x409544u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_409548:
    // 0x409548: 0x12600027  beqz        $s3, . + 4 + (0x27 << 2)
label_40954c:
    if (ctx->pc == 0x40954Cu) {
        ctx->pc = 0x40954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409548u;
        // 0x40954c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409550u;
        goto label_409550;
    }
    ctx->pc = 0x409548u;
    {
        const bool branch_taken_0x409548 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x40954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409548u;
        // 0x40954c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409548) {
            ctx->pc = 0x4095E8u;
            goto label_4095e8;
        }
    }
    ctx->pc = 0x409550u;
label_409550:
    // 0x409550: 0x148080  sll         $s0, $s4, 2
    ctx->pc = 0x409550u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_409554:
    // 0x409554: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x409554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_409558:
    // 0x409558: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x409558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_40955c:
    // 0x40955c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x40955cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_409560:
    // 0x409560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_409564:
    // 0x409564: 0x40f809  jalr        $v0
label_409568:
    if (ctx->pc == 0x409568u) {
        ctx->pc = 0x409568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409564u;
        // 0x409568: 0x34a501b8  ori         $a1, $a1, 0x1B8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)440);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40956Cu;
        goto label_40956c;
    }
    ctx->pc = 0x409564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40956Cu);
        ctx->pc = 0x409568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409564u;
        // 0x409568: 0x34a501b8  ori         $a1, $a1, 0x1B8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)440);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x409564u, 0x40956Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40956Cu;
label_40956c:
    // 0x40956c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x40956cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_409570:
    // 0x409570: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x409570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_409574:
    // 0x409574: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_409578:
    // 0x409578: 0xc0bb7e6  jal         func_2EDF98
label_40957c:
    if (ctx->pc == 0x40957Cu) {
        ctx->pc = 0x40957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409578u;
        // 0x40957c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409580u;
        goto label_409580;
    }
    ctx->pc = 0x409578u;
    SET_GPR_U32(ctx, 31, 0x409580u);
    ctx->pc = 0x40957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409578u;
    // 0x40957c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x409578u, 0x409580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409580u;
label_409580:
    // 0x409580: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_409584:
    if (ctx->pc == 0x409584u) {
        ctx->pc = 0x409584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409580u;
        // 0x409584: 0x26220090  addiu       $v0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409588u;
        goto label_409588;
    }
    ctx->pc = 0x409580u;
    {
        const bool branch_taken_0x409580 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x409584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409580u;
        // 0x409584: 0x26220090  addiu       $v0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409580) {
            ctx->pc = 0x4095E0u;
            goto label_4095e0;
        }
    }
    ctx->pc = 0x409588u;
label_409588:
    // 0x409588: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x409588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_40958c:
    // 0x40958c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x40958cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_409590:
    // 0x409590: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x409590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_409594:
    // 0x409594: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x409594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_409598:
    // 0x409598: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x409598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_40959c:
    // 0x40959c: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x40959cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_4095a0:
    // 0x4095a0: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x4095a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_4095a4:
    // 0x4095a4: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x4095a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_4095a8:
    // 0x4095a8: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x4095a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_4095ac:
    // 0x4095ac: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x4095acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_4095b0:
    // 0x4095b0: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x4095b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_4095b4:
    // 0x4095b4: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x4095b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_4095b8:
    // 0x4095b8: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x4095b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_4095bc:
    // 0x4095bc: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x4095bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_4095c0:
    // 0x4095c0: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x4095c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_4095c4:
    // 0x4095c4: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x4095c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_4095c8:
    // 0x4095c8: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x4095c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_4095cc:
    // 0x4095cc: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x4095ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_4095d0:
    // 0x4095d0: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x4095d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
label_4095d4:
    // 0x4095d4: 0xae340084  sw          $s4, 0x84($s1)
    ctx->pc = 0x4095d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 20));
label_4095d8:
    // 0x4095d8: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x4095d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
label_4095dc:
    // 0x4095dc: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x4095dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_4095e0:
    // 0x4095e0: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_4095e4:
    if (ctx->pc == 0x4095E4u) {
        ctx->pc = 0x4095E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4095E0u;
        // 0x4095e4: 0x8ea40008  lw          $a0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4095E8u;
        goto label_4095e8;
    }
    ctx->pc = 0x4095E0u;
    {
        const bool branch_taken_0x4095e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4095e0) {
            ctx->pc = 0x4095E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4095E0u;
            // 0x4095e4: 0x8ea40008  lw          $a0, 0x8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4095F0u;
            goto label_4095f0;
        }
    }
    ctx->pc = 0x4095E8u;
label_4095e8:
    // 0x4095e8: 0x1000003a  b           . + 4 + (0x3A << 2)
label_4095ec:
    if (ctx->pc == 0x4095ECu) {
        ctx->pc = 0x4095ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4095E8u;
        // 0x4095ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4095F0u;
        goto label_4095f0;
    }
    ctx->pc = 0x4095E8u;
    {
        const bool branch_taken_0x4095e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4095ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4095E8u;
        // 0x4095ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4095e8) {
            ctx->pc = 0x4096D4u;
            goto label_4096d4;
        }
    }
    ctx->pc = 0x4095F0u;
label_4095f0:
    // 0x4095f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4095f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4095f4:
    // 0x4095f4: 0xae330078  sw          $s3, 0x78($s1)
    ctx->pc = 0x4095f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 19));
label_4095f8:
    // 0x4095f8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x4095f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4095fc:
    // 0x4095fc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x4095fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_409600:
    // 0x409600: 0xc0e3e2a  jal         func_38F8A8
label_409604:
    if (ctx->pc == 0x409604u) {
        ctx->pc = 0x409604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409600u;
        // 0x409604: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409608u;
        goto label_409608;
    }
    ctx->pc = 0x409600u;
    SET_GPR_U32(ctx, 31, 0x409608u);
    ctx->pc = 0x409604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409600u;
    // 0x409604: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F8A8u, 0x409600u, 0x409608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409608u;
label_409608:
    // 0x409608: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x409608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
label_40960c:
    // 0x40960c: 0x8e430080  lw          $v1, 0x80($s2)
    ctx->pc = 0x40960cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_409610:
    // 0x409610: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x409610u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
label_409614:
    // 0x409614: 0x8ea20040  lw          $v0, 0x40($s5)
    ctx->pc = 0x409614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_409618:
    // 0x409618: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x409618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_40961c:
    // 0x40961c: 0xaea20040  sw          $v0, 0x40($s5)
    ctx->pc = 0x40961cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 2));
label_409620:
    // 0x409620: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x409620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_409624:
    // 0x409624: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_409628:
    if (ctx->pc == 0x409628u) {
        ctx->pc = 0x409628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409624u;
        // 0x409628: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40962Cu;
        goto label_40962c;
    }
    ctx->pc = 0x409624u;
    {
        const bool branch_taken_0x409624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x409628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409624u;
        // 0x409628: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409624) {
            ctx->pc = 0x4096B0u;
            goto label_4096b0;
        }
    }
    ctx->pc = 0x40962Cu;
label_40962c:
    // 0x40962c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x40962cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_409630:
    // 0x409630: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x409630u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_409634:
    // 0x409634: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x409634u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_409638:
    // 0x409638: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x409638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_40963c:
    // 0x40963c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x40963cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_409640:
    // 0x409640: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x409640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_409644:
    // 0x409644: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x409644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_409648:
    // 0x409648: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x409648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_40964c:
    // 0x40964c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x40964cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_409650:
    // 0x409650: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x409650u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_409654:
    // 0x409654: 0xc1023a2  jal         func_408E88
label_409658:
    if (ctx->pc == 0x409658u) {
        ctx->pc = 0x409658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409654u;
        // 0x409658: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40965Cu;
        goto label_40965c;
    }
    ctx->pc = 0x409654u;
    SET_GPR_U32(ctx, 31, 0x40965Cu);
    ctx->pc = 0x409658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409654u;
    // 0x409658: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x408E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x408E88u, 0x409654u, 0x40965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40965Cu;
label_40965c:
    // 0x40965c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_409660:
    if (ctx->pc == 0x409660u) {
        ctx->pc = 0x409660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40965Cu;
        // 0x409660: 0x8e42008c  lw          $v0, 0x8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409664u;
        goto label_409664;
    }
    ctx->pc = 0x40965Cu;
    {
        const bool branch_taken_0x40965c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x409660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40965Cu;
        // 0x409660: 0x8e42008c  lw          $v0, 0x8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40965c) {
            ctx->pc = 0x409684u;
            goto label_409684;
        }
    }
    ctx->pc = 0x409664u;
label_409664:
    // 0x409664: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x409664u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_409668:
    // 0x409668: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x409668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_40966c:
    // 0x40966c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x40966cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_409670:
    // 0x409670: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x409670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_409674:
    // 0x409674: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x409674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_409678:
    // 0x409678: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x409678u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_40967c:
    // 0x40967c: 0x10000007  b           . + 4 + (0x7 << 2)
label_409680:
    if (ctx->pc == 0x409680u) {
        ctx->pc = 0x409680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40967Cu;
        // 0x409680: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409684u;
        goto label_409684;
    }
    ctx->pc = 0x40967Cu;
    {
        const bool branch_taken_0x40967c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x409680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40967Cu;
        // 0x409680: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40967c) {
            ctx->pc = 0x40969Cu;
            goto label_40969c;
        }
    }
    ctx->pc = 0x409684u;
label_409684:
    // 0x409684: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x409684u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_409688:
    // 0x409688: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x409688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_40968c:
    // 0x40968c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x40968cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_409690:
    // 0x409690: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x409690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_409694:
    // 0x409694: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x409694u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_409698:
    // 0x409698: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x409698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_40969c:
    // 0x40969c: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x40969cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_4096a0:
    // 0x4096a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4096a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4096a4:
    // 0x4096a4: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x4096a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4096a8:
    // 0x4096a8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_4096ac:
    if (ctx->pc == 0x4096ACu) {
        ctx->pc = 0x4096ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4096A8u;
        // 0x4096ac: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4096B0u;
        goto label_4096b0;
    }
    ctx->pc = 0x4096A8u;
    {
        const bool branch_taken_0x4096a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4096ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4096A8u;
        // 0x4096ac: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4096a8) {
            ctx->pc = 0x409638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_409638;
        }
    }
    ctx->pc = 0x4096B0u;
label_4096b0:
    // 0x4096b0: 0xae5e0088  sw          $fp, 0x88($s2)
    ctx->pc = 0x4096b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 30));
label_4096b4:
    // 0x4096b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4096b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4096b8:
    // 0x4096b8: 0xae340088  sw          $s4, 0x88($s1)
    ctx->pc = 0x4096b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 20));
label_4096bc:
    // 0x4096bc: 0xc102438  jal         func_4090E0
label_4096c0:
    if (ctx->pc == 0x4096C0u) {
        ctx->pc = 0x4096C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4096BCu;
        // 0x4096c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4096C4u;
        goto label_4096c4;
    }
    ctx->pc = 0x4096BCu;
    SET_GPR_U32(ctx, 31, 0x4096C4u);
    ctx->pc = 0x4096C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4096BCu;
    // 0x4096c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4090E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4090E0u, 0x4096BCu, 0x4096C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4096C4u;
label_4096c4:
    // 0x4096c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4096c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4096c8:
    // 0x4096c8: 0xc102438  jal         func_4090E0
label_4096cc:
    if (ctx->pc == 0x4096CCu) {
        ctx->pc = 0x4096CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4096C8u;
        // 0x4096cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4096D0u;
        goto label_4096d0;
    }
    ctx->pc = 0x4096C8u;
    SET_GPR_U32(ctx, 31, 0x4096D0u);
    ctx->pc = 0x4096CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4096C8u;
    // 0x4096cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4090E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4090E0u, 0x4096C8u, 0x4096D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4096D0u;
label_4096d0:
    // 0x4096d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4096d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4096d4:
    // 0x4096d4: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x4096d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_4096d8:
    // 0x4096d8: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x4096d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4096dc:
    // 0x4096dc: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x4096dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4096e0:
    // 0x4096e0: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x4096e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4096e4:
    // 0x4096e4: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x4096e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4096e8:
    // 0x4096e8: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x4096e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4096ec:
    // 0x4096ec: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x4096ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4096f0:
    // 0x4096f0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4096f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4096f4:
    // 0x4096f4: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x4096f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4096f8:
    // 0x4096f8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4096f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4096fc:
    // 0x4096fc: 0x3e00008  jr          $ra
label_409700:
    if (ctx->pc == 0x409700u) {
        ctx->pc = 0x409700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4096FCu;
        // 0x409700: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409704u;
        goto label_409704;
    }
    ctx->pc = 0x4096FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4096FCu;
        // 0x409700: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4096FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x409704u;
label_409704:
    // 0x409704: 0x0  nop
    ctx->pc = 0x409704u;
    // NOP
    ctx->pc = 0x409708u;
}
