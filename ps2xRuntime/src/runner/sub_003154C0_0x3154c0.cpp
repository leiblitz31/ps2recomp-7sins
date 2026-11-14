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

// Function: sub_003154C0
// Address: 0x3154c0 - 0x315810
void sub_003154C0_0x3154c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003154C0_0x3154c0");
#endif

    switch (ctx->pc) {
        case 0x3154c0u: goto label_3154c0;
        case 0x3154c4u: goto label_3154c4;
        case 0x3154c8u: goto label_3154c8;
        case 0x3154ccu: goto label_3154cc;
        case 0x3154d0u: goto label_3154d0;
        case 0x3154d4u: goto label_3154d4;
        case 0x3154d8u: goto label_3154d8;
        case 0x3154dcu: goto label_3154dc;
        case 0x3154e0u: goto label_3154e0;
        case 0x3154e4u: goto label_3154e4;
        case 0x3154e8u: goto label_3154e8;
        case 0x3154ecu: goto label_3154ec;
        case 0x3154f0u: goto label_3154f0;
        case 0x3154f4u: goto label_3154f4;
        case 0x3154f8u: goto label_3154f8;
        case 0x3154fcu: goto label_3154fc;
        case 0x315500u: goto label_315500;
        case 0x315504u: goto label_315504;
        case 0x315508u: goto label_315508;
        case 0x31550cu: goto label_31550c;
        case 0x315510u: goto label_315510;
        case 0x315514u: goto label_315514;
        case 0x315518u: goto label_315518;
        case 0x31551cu: goto label_31551c;
        case 0x315520u: goto label_315520;
        case 0x315524u: goto label_315524;
        case 0x315528u: goto label_315528;
        case 0x31552cu: goto label_31552c;
        case 0x315530u: goto label_315530;
        case 0x315534u: goto label_315534;
        case 0x315538u: goto label_315538;
        case 0x31553cu: goto label_31553c;
        case 0x315540u: goto label_315540;
        case 0x315544u: goto label_315544;
        case 0x315548u: goto label_315548;
        case 0x31554cu: goto label_31554c;
        case 0x315550u: goto label_315550;
        case 0x315554u: goto label_315554;
        case 0x315558u: goto label_315558;
        case 0x31555cu: goto label_31555c;
        case 0x315560u: goto label_315560;
        case 0x315564u: goto label_315564;
        case 0x315568u: goto label_315568;
        case 0x31556cu: goto label_31556c;
        case 0x315570u: goto label_315570;
        case 0x315574u: goto label_315574;
        case 0x315578u: goto label_315578;
        case 0x31557cu: goto label_31557c;
        case 0x315580u: goto label_315580;
        case 0x315584u: goto label_315584;
        case 0x315588u: goto label_315588;
        case 0x31558cu: goto label_31558c;
        case 0x315590u: goto label_315590;
        case 0x315594u: goto label_315594;
        case 0x315598u: goto label_315598;
        case 0x31559cu: goto label_31559c;
        case 0x3155a0u: goto label_3155a0;
        case 0x3155a4u: goto label_3155a4;
        case 0x3155a8u: goto label_3155a8;
        case 0x3155acu: goto label_3155ac;
        case 0x3155b0u: goto label_3155b0;
        case 0x3155b4u: goto label_3155b4;
        case 0x3155b8u: goto label_3155b8;
        case 0x3155bcu: goto label_3155bc;
        case 0x3155c0u: goto label_3155c0;
        case 0x3155c4u: goto label_3155c4;
        case 0x3155c8u: goto label_3155c8;
        case 0x3155ccu: goto label_3155cc;
        case 0x3155d0u: goto label_3155d0;
        case 0x3155d4u: goto label_3155d4;
        case 0x3155d8u: goto label_3155d8;
        case 0x3155dcu: goto label_3155dc;
        case 0x3155e0u: goto label_3155e0;
        case 0x3155e4u: goto label_3155e4;
        case 0x3155e8u: goto label_3155e8;
        case 0x3155ecu: goto label_3155ec;
        case 0x3155f0u: goto label_3155f0;
        case 0x3155f4u: goto label_3155f4;
        case 0x3155f8u: goto label_3155f8;
        case 0x3155fcu: goto label_3155fc;
        case 0x315600u: goto label_315600;
        case 0x315604u: goto label_315604;
        case 0x315608u: goto label_315608;
        case 0x31560cu: goto label_31560c;
        case 0x315610u: goto label_315610;
        case 0x315614u: goto label_315614;
        case 0x315618u: goto label_315618;
        case 0x31561cu: goto label_31561c;
        case 0x315620u: goto label_315620;
        case 0x315624u: goto label_315624;
        case 0x315628u: goto label_315628;
        case 0x31562cu: goto label_31562c;
        case 0x315630u: goto label_315630;
        case 0x315634u: goto label_315634;
        case 0x315638u: goto label_315638;
        case 0x31563cu: goto label_31563c;
        case 0x315640u: goto label_315640;
        case 0x315644u: goto label_315644;
        case 0x315648u: goto label_315648;
        case 0x31564cu: goto label_31564c;
        case 0x315650u: goto label_315650;
        case 0x315654u: goto label_315654;
        case 0x315658u: goto label_315658;
        case 0x31565cu: goto label_31565c;
        case 0x315660u: goto label_315660;
        case 0x315664u: goto label_315664;
        case 0x315668u: goto label_315668;
        case 0x31566cu: goto label_31566c;
        case 0x315670u: goto label_315670;
        case 0x315674u: goto label_315674;
        case 0x315678u: goto label_315678;
        case 0x31567cu: goto label_31567c;
        case 0x315680u: goto label_315680;
        case 0x315684u: goto label_315684;
        case 0x315688u: goto label_315688;
        case 0x31568cu: goto label_31568c;
        case 0x315690u: goto label_315690;
        case 0x315694u: goto label_315694;
        case 0x315698u: goto label_315698;
        case 0x31569cu: goto label_31569c;
        case 0x3156a0u: goto label_3156a0;
        case 0x3156a4u: goto label_3156a4;
        case 0x3156a8u: goto label_3156a8;
        case 0x3156acu: goto label_3156ac;
        case 0x3156b0u: goto label_3156b0;
        case 0x3156b4u: goto label_3156b4;
        case 0x3156b8u: goto label_3156b8;
        case 0x3156bcu: goto label_3156bc;
        case 0x3156c0u: goto label_3156c0;
        case 0x3156c4u: goto label_3156c4;
        case 0x3156c8u: goto label_3156c8;
        case 0x3156ccu: goto label_3156cc;
        case 0x3156d0u: goto label_3156d0;
        case 0x3156d4u: goto label_3156d4;
        case 0x3156d8u: goto label_3156d8;
        case 0x3156dcu: goto label_3156dc;
        case 0x3156e0u: goto label_3156e0;
        case 0x3156e4u: goto label_3156e4;
        case 0x3156e8u: goto label_3156e8;
        case 0x3156ecu: goto label_3156ec;
        case 0x3156f0u: goto label_3156f0;
        case 0x3156f4u: goto label_3156f4;
        case 0x3156f8u: goto label_3156f8;
        case 0x3156fcu: goto label_3156fc;
        case 0x315700u: goto label_315700;
        case 0x315704u: goto label_315704;
        case 0x315708u: goto label_315708;
        case 0x31570cu: goto label_31570c;
        case 0x315710u: goto label_315710;
        case 0x315714u: goto label_315714;
        case 0x315718u: goto label_315718;
        case 0x31571cu: goto label_31571c;
        case 0x315720u: goto label_315720;
        case 0x315724u: goto label_315724;
        case 0x315728u: goto label_315728;
        case 0x31572cu: goto label_31572c;
        case 0x315730u: goto label_315730;
        case 0x315734u: goto label_315734;
        case 0x315738u: goto label_315738;
        case 0x31573cu: goto label_31573c;
        case 0x315740u: goto label_315740;
        case 0x315744u: goto label_315744;
        case 0x315748u: goto label_315748;
        case 0x31574cu: goto label_31574c;
        case 0x315750u: goto label_315750;
        case 0x315754u: goto label_315754;
        case 0x315758u: goto label_315758;
        case 0x31575cu: goto label_31575c;
        case 0x315760u: goto label_315760;
        case 0x315764u: goto label_315764;
        case 0x315768u: goto label_315768;
        case 0x31576cu: goto label_31576c;
        case 0x315770u: goto label_315770;
        case 0x315774u: goto label_315774;
        case 0x315778u: goto label_315778;
        case 0x31577cu: goto label_31577c;
        case 0x315780u: goto label_315780;
        case 0x315784u: goto label_315784;
        case 0x315788u: goto label_315788;
        case 0x31578cu: goto label_31578c;
        case 0x315790u: goto label_315790;
        case 0x315794u: goto label_315794;
        case 0x315798u: goto label_315798;
        case 0x31579cu: goto label_31579c;
        case 0x3157a0u: goto label_3157a0;
        case 0x3157a4u: goto label_3157a4;
        case 0x3157a8u: goto label_3157a8;
        case 0x3157acu: goto label_3157ac;
        case 0x3157b0u: goto label_3157b0;
        case 0x3157b4u: goto label_3157b4;
        case 0x3157b8u: goto label_3157b8;
        case 0x3157bcu: goto label_3157bc;
        case 0x3157c0u: goto label_3157c0;
        case 0x3157c4u: goto label_3157c4;
        case 0x3157c8u: goto label_3157c8;
        case 0x3157ccu: goto label_3157cc;
        case 0x3157d0u: goto label_3157d0;
        case 0x3157d4u: goto label_3157d4;
        case 0x3157d8u: goto label_3157d8;
        case 0x3157dcu: goto label_3157dc;
        case 0x3157e0u: goto label_3157e0;
        case 0x3157e4u: goto label_3157e4;
        case 0x3157e8u: goto label_3157e8;
        case 0x3157ecu: goto label_3157ec;
        case 0x3157f0u: goto label_3157f0;
        case 0x3157f4u: goto label_3157f4;
        case 0x3157f8u: goto label_3157f8;
        case 0x3157fcu: goto label_3157fc;
        case 0x315800u: goto label_315800;
        case 0x315804u: goto label_315804;
        case 0x315808u: goto label_315808;
        case 0x31580cu: goto label_31580c;
        default: break;
    }

    ctx->pc = 0x3154c0u;

label_3154c0:
    // 0x3154c0: 0x27bdfc70  addiu       $sp, $sp, -0x390
    ctx->pc = 0x3154c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966384));
label_3154c4:
    // 0x3154c4: 0x7fb00380  sq          $s0, 0x380($sp)
    ctx->pc = 0x3154c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 16));
label_3154c8:
    // 0x3154c8: 0x7fb10370  sq          $s1, 0x370($sp)
    ctx->pc = 0x3154c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 17));
label_3154cc:
    // 0x3154cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3154ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3154d0:
    // 0x3154d0: 0x7fb20360  sq          $s2, 0x360($sp)
    ctx->pc = 0x3154d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 18));
label_3154d4:
    // 0x3154d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3154d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3154d8:
    // 0x3154d8: 0x7fb30350  sq          $s3, 0x350($sp)
    ctx->pc = 0x3154d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 19));
label_3154dc:
    // 0x3154dc: 0xffbf0340  sd          $ra, 0x340($sp)
    ctx->pc = 0x3154dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 832), GPR_U64(ctx, 31));
label_3154e0:
    // 0x3154e0: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x3154e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3154e4:
    // 0x3154e4: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x3154e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3154e8:
    // 0x3154e8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3154e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3154ec:
    // 0x3154ec: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x3154ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3154f0:
    // 0x3154f0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x3154f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3154f4:
    // 0x3154f4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x3154f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_3154f8:
    // 0x3154f8: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x3154f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3154fc:
    // 0x3154fc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3154fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315500:
    // 0x315500: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x315500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315504:
    // 0x315504: 0x46001101  sub.s       $f4, $f2, $f0
    ctx->pc = 0x315504u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_315508:
    // 0x315508: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x315508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_31550c:
    // 0x31550c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x31550cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315510:
    // 0x315510: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x315510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_315514:
    // 0x315514: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x315514u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_315518:
    // 0x315518: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x315518u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_31551c:
    // 0x31551c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x31551cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_315520:
    // 0x315520: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x315520u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_315524:
    // 0x315524: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x315524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_315528:
    // 0x315528: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x315528u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31552c:
    // 0x31552c: 0x46002032  c.eq.s      $f4, $f0
    ctx->pc = 0x31552cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315530:
    // 0x315530: 0x0  nop
    ctx->pc = 0x315530u;
    // NOP
label_315534:
    // 0x315534: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_315538:
    if (ctx->pc == 0x315538u) {
        ctx->pc = 0x315538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315534u;
        // 0x315538: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31553Cu;
        goto label_31553c;
    }
    ctx->pc = 0x315534u;
    {
        const bool branch_taken_0x315534 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x315538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315534u;
        // 0x315538: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315534) {
            ctx->pc = 0x315548u;
            goto label_315548;
        }
    }
    ctx->pc = 0x31553Cu;
label_31553c:
    // 0x31553c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31553cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_315540:
    // 0x315540: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x315540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315544:
    // 0x315544: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x315544u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
label_315548:
    // 0x315548: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x315548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31554c:
    // 0x31554c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x31554cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_315550:
    // 0x315550: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x315550u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315554:
    // 0x315554: 0x0  nop
    ctx->pc = 0x315554u;
    // NOP
label_315558:
    // 0x315558: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_31555c:
    if (ctx->pc == 0x31555Cu) {
        ctx->pc = 0x31555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315558u;
        // 0x31555c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x315560u;
        goto label_315560;
    }
    ctx->pc = 0x315558u;
    {
        const bool branch_taken_0x315558 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315558u;
        // 0x31555c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x315558) {
            ctx->pc = 0x315574u;
            goto label_315574;
        }
    }
    ctx->pc = 0x315560u;
label_315560:
    // 0x315560: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x315560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_315564:
    // 0x315564: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x315564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315568:
    // 0x315568: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x315568u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_31556c:
    // 0x31556c: 0x10000004  b           . + 4 + (0x4 << 2)
label_315570:
    if (ctx->pc == 0x315570u) {
        ctx->pc = 0x315570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31556Cu;
        // 0x315570: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x315574u;
        goto label_315574;
    }
    ctx->pc = 0x31556Cu;
    {
        const bool branch_taken_0x31556c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31556Cu;
        // 0x315570: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31556c) {
            ctx->pc = 0x315580u;
            goto label_315580;
        }
    }
    ctx->pc = 0x315574u;
label_315574:
    // 0x315574: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x315574u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_315578:
    // 0x315578: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x315578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31557c:
    // 0x31557c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x31557cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_315580:
    // 0x315580: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x315580u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315584:
    // 0x315584: 0x0  nop
    ctx->pc = 0x315584u;
    // NOP
label_315588:
    // 0x315588: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_31558c:
    if (ctx->pc == 0x31558Cu) {
        ctx->pc = 0x31558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315588u;
        // 0x31558c: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x315590u;
        goto label_315590;
    }
    ctx->pc = 0x315588u;
    {
        const bool branch_taken_0x315588 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315588u;
        // 0x31558c: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x315588) {
            ctx->pc = 0x3155A4u;
            goto label_3155a4;
        }
    }
    ctx->pc = 0x315590u;
label_315590:
    // 0x315590: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x315590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_315594:
    // 0x315594: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x315594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315598:
    // 0x315598: 0x46010183  div.s       $f6, $f0, $f1
    ctx->pc = 0x315598u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_31559c:
    // 0x31559c: 0x10000003  b           . + 4 + (0x3 << 2)
label_3155a0:
    if (ctx->pc == 0x3155A0u) {
        ctx->pc = 0x3155A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31559Cu;
        // 0x3155a0: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3155A4u;
        goto label_3155a4;
    }
    ctx->pc = 0x31559Cu;
    {
        const bool branch_taken_0x31559c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3155A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31559Cu;
        // 0x3155a0: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31559c) {
            ctx->pc = 0x3155ACu;
            goto label_3155ac;
        }
    }
    ctx->pc = 0x3155A4u;
label_3155a4:
    // 0x3155a4: 0x46001186  mov.s       $f6, $f2
    ctx->pc = 0x3155a4u;
    ctx->f[6] = FPU_MOV_S(ctx->f[2]);
label_3155a8:
    // 0x3155a8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3155a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3155ac:
    // 0x3155ac: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x3155acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3155b0:
    // 0x3155b0: 0xc6050010  lwc1        $f5, 0x10($s0)
    ctx->pc = 0x3155b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3155b4:
    // 0x3155b4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x3155b4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_3155b8:
    // 0x3155b8: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x3155b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3155bc:
    // 0x3155bc: 0x460018c5  abs.s       $f3, $f3
    ctx->pc = 0x3155bcu;
    ctx->f[3] = FPU_ABS_S(ctx->f[3]);
label_3155c0:
    // 0x3155c0: 0xc6040014  lwc1        $f4, 0x14($s0)
    ctx->pc = 0x3155c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3155c4:
    // 0x3155c4: 0x46002945  abs.s       $f5, $f5
    ctx->pc = 0x3155c4u;
    ctx->f[5] = FPU_ABS_S(ctx->f[5]);
label_3155c8:
    // 0x3155c8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x3155c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3155cc:
    // 0x3155cc: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x3155ccu;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
label_3155d0:
    // 0x3155d0: 0x46002105  abs.s       $f4, $f4
    ctx->pc = 0x3155d0u;
    ctx->f[4] = FPU_ABS_S(ctx->f[4]);
label_3155d4:
    // 0x3155d4: 0x460018e8  max.s       $f3, $f3, $f0
    ctx->pc = 0x3155d4u;
    ctx->f[3] = std::max(ctx->f[3], ctx->f[0]);
label_3155d8:
    // 0x3155d8: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x3155d8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_3155dc:
    // 0x3155dc: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x3155dcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3155e0:
    // 0x3155e0: 0x460510a8  max.s       $f2, $f2, $f5
    ctx->pc = 0x3155e0u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[5]);
label_3155e4:
    // 0x3155e4: 0x46040868  max.s       $f1, $f1, $f4
    ctx->pc = 0x3155e4u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[4]);
label_3155e8:
    // 0x3155e8: 0xc7808110  lwc1        $f0, -0x7EF0($gp)
    ctx->pc = 0x3155e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3155ec:
    // 0x3155ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3155ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3155f0:
    // 0x3155f0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3155f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3155f4:
    // 0x3155f4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3155f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3155f8:
    // 0x3155f8: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x3155f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_3155fc:
    // 0x3155fc: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x3155fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_315600:
    // 0x315600: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x315600u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_315604:
    // 0x315604: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x315604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_315608:
    // 0x315608: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x315608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_31560c:
    // 0x31560c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31560cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315610:
    // 0x315610: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x315610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_315614:
    // 0x315614: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x315614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_315618:
    // 0x315618: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x315618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_31561c:
    // 0x31561c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x31561cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_315620:
    // 0x315620: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x315620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_315624:
    // 0x315624: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x315624u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315628:
    // 0x315628: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x315628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_31562c:
    // 0x31562c: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
label_315630:
    if (ctx->pc == 0x315630u) {
        ctx->pc = 0x315630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31562Cu;
        // 0x315630: 0xafa3033c  sw          $v1, 0x33C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315634u;
        goto label_315634;
    }
    ctx->pc = 0x31562Cu;
    {
        const bool branch_taken_0x31562c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31562Cu;
        // 0x315630: 0xafa3033c  sw          $v1, 0x33C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31562c) {
            ctx->pc = 0x3157F0u;
            goto label_3157f0;
        }
    }
    ctx->pc = 0x315634u;
label_315634:
    // 0x315634: 0x8c62fff4  lw          $v0, -0xC($v1)
    ctx->pc = 0x315634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
label_315638:
    // 0x315638: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x315638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_31563c:
    // 0x31563c: 0xafa3033c  sw          $v1, 0x33C($sp)
    ctx->pc = 0x31563cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 3));
label_315640:
    // 0x315640: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x315640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_315644:
    // 0x315644: 0x4800060  bltz        $a0, . + 4 + (0x60 << 2)
label_315648:
    if (ctx->pc == 0x315648u) {
        ctx->pc = 0x315648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315644u;
        // 0x315648: 0x8fa2033c  lw          $v0, 0x33C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31564Cu;
        goto label_31564c;
    }
    ctx->pc = 0x315644u;
    {
        const bool branch_taken_0x315644 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x315648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315644u;
        // 0x315648: 0x8fa2033c  lw          $v0, 0x33C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315644) {
            ctx->pc = 0x3157C8u;
            goto label_3157c8;
        }
    }
    ctx->pc = 0x31564Cu;
label_31564c:
    // 0x31564c: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x31564cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_315650:
    // 0x315650: 0x8fa4033c  lw          $a0, 0x33C($sp)
    ctx->pc = 0x315650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_315654:
    // 0x315654: 0x0  nop
    ctx->pc = 0x315654u;
    // NOP
label_315658:
    // 0x315658: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x315658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31565c:
    // 0x31565c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x31565cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_315660:
    // 0x315660: 0x5d3021  addu        $a2, $v0, $sp
    ctx->pc = 0x315660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_315664:
    // 0x315664: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x315664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_315668:
    // 0x315668: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x315668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31566c:
    // 0x31566c: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x31566cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_315670:
    // 0x315670: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x315670u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_315674:
    // 0x315674: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x315674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_315678:
    // 0x315678: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x315678u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_31567c:
    // 0x31567c: 0xc4c30024  lwc1        $f3, 0x24($a2)
    ctx->pc = 0x31567cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_315680:
    // 0x315680: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x315680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315684:
    // 0x315684: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x315684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315688:
    // 0x315688: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x315688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31568c:
    // 0x31568c: 0x46022880  add.s       $f2, $f5, $f2
    ctx->pc = 0x31568cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_315690:
    // 0x315690: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x315690u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_315694:
    // 0x315694: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x315694u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_315698:
    // 0x315698: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_31569c:
    if (ctx->pc == 0x31569Cu) {
        ctx->pc = 0x31569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315698u;
        // 0x31569c: 0x46042940  add.s       $f5, $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3156A0u;
        goto label_3156a0;
    }
    ctx->pc = 0x315698u;
    {
        const bool branch_taken_0x315698 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315698u;
        // 0x31569c: 0x46042940  add.s       $f5, $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x315698) {
            ctx->pc = 0x31571Cu;
            goto label_31571c;
        }
    }
    ctx->pc = 0x3156A0u;
label_3156a0:
    // 0x3156a0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3156a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3156a4:
    // 0x3156a4: 0x0  nop
    ctx->pc = 0x3156a4u;
    // NOP
label_3156a8:
    // 0x3156a8: 0x45030027  bc1tl       . + 4 + (0x27 << 2)
label_3156ac:
    if (ctx->pc == 0x3156ACu) {
        ctx->pc = 0x3156ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156A8u;
        // 0x3156ac: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3156B0u;
        goto label_3156b0;
    }
    ctx->pc = 0x3156A8u;
    {
        const bool branch_taken_0x3156a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3156a8) {
            ctx->pc = 0x3156ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3156A8u;
            // 0x3156ac: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315748u;
            goto label_315748;
        }
    }
    ctx->pc = 0x3156B0u;
label_3156b0:
    // 0x3156b0: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x3156b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3156b4:
    // 0x3156b4: 0x0  nop
    ctx->pc = 0x3156b4u;
    // NOP
label_3156b8:
    // 0x3156b8: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
label_3156bc:
    if (ctx->pc == 0x3156BCu) {
        ctx->pc = 0x3156BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156B8u;
        // 0x3156bc: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3156C0u;
        goto label_3156c0;
    }
    ctx->pc = 0x3156B8u;
    {
        const bool branch_taken_0x3156b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3156b8) {
            ctx->pc = 0x3156BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3156B8u;
            // 0x3156bc: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31572Cu;
            goto label_31572c;
        }
    }
    ctx->pc = 0x3156C0u;
label_3156c0:
    // 0x3156c0: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x3156c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_3156c4:
    // 0x3156c4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3156c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3156c8:
    // 0x3156c8: 0xc460fff8  lwc1        $f0, -0x8($v1)
    ctx->pc = 0x3156c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3156cc:
    // 0x3156cc: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x3156ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3156d0:
    // 0x3156d0: 0xc4c60018  lwc1        $f6, 0x18($a2)
    ctx->pc = 0x3156d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3156d4:
    // 0x3156d4: 0xc464fffc  lwc1        $f4, -0x4($v1)
    ctx->pc = 0x3156d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3156d8:
    // 0x3156d8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3156d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3156dc:
    // 0x3156dc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3156dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3156e0:
    // 0x3156e0: 0xafa3033c  sw          $v1, 0x33C($sp)
    ctx->pc = 0x3156e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 3));
label_3156e4:
    // 0x3156e4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_3156e8:
    if (ctx->pc == 0x3156E8u) {
        ctx->pc = 0x3156E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156E4u;
        // 0x3156e8: 0xe4640008  swc1        $f4, 0x8($v1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3156ECu;
        goto label_3156ec;
    }
    ctx->pc = 0x3156E4u;
    {
        const bool branch_taken_0x3156e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3156E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156E4u;
        // 0x3156e8: 0xe4640008  swc1        $f4, 0x8($v1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3156e4) {
            ctx->pc = 0x315700u;
            goto label_315700;
        }
    }
    ctx->pc = 0x3156ECu;
label_3156ec:
    // 0x3156ec: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x3156ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_3156f0:
    // 0x3156f0: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x3156f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_3156f4:
    // 0x3156f4: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x3156f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_3156f8:
    // 0x3156f8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3156f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3156fc:
    // 0x3156fc: 0x0  nop
    ctx->pc = 0x3156fcu;
    // NOP
label_315700:
    // 0x315700: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x315700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_315704:
    // 0x315704: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x315704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315708:
    // 0x315708: 0x8fa3033c  lw          $v1, 0x33C($sp)
    ctx->pc = 0x315708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_31570c:
    // 0x31570c: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_315710:
    if (ctx->pc == 0x315710u) {
        ctx->pc = 0x315710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31570Cu;
        // 0x315710: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315714u;
        goto label_315714;
    }
    ctx->pc = 0x31570Cu;
    {
        const bool branch_taken_0x31570c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x315710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31570Cu;
        // 0x315710: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31570c) {
            ctx->pc = 0x3157B0u;
            goto label_3157b0;
        }
    }
    ctx->pc = 0x315714u;
label_315714:
    // 0x315714: 0x10000022  b           . + 4 + (0x22 << 2)
label_315718:
    if (ctx->pc == 0x315718u) {
        ctx->pc = 0x315718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315714u;
        // 0x315718: 0x46050801  sub.s       $f0, $f1, $f5 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31571Cu;
        goto label_31571c;
    }
    ctx->pc = 0x315714u;
    {
        const bool branch_taken_0x315714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315714u;
        // 0x315718: 0x46050801  sub.s       $f0, $f1, $f5 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x315714) {
            ctx->pc = 0x3157A0u;
            goto label_3157a0;
        }
    }
    ctx->pc = 0x31571Cu;
label_31571c:
    // 0x31571c: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x31571cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315720:
    // 0x315720: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_315724:
    if (ctx->pc == 0x315724u) {
        ctx->pc = 0x315728u;
        goto label_315728;
    }
    ctx->pc = 0x315720u;
    {
        const bool branch_taken_0x315720 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x315720) {
            ctx->pc = 0x315734u;
            goto label_315734;
        }
    }
    ctx->pc = 0x315728u;
label_315728:
    // 0x315728: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x315728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_31572c:
    // 0x31572c: 0x10000020  b           . + 4 + (0x20 << 2)
label_315730:
    if (ctx->pc == 0x315730u) {
        ctx->pc = 0x315730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31572Cu;
        // 0x315730: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315734u;
        goto label_315734;
    }
    ctx->pc = 0x31572Cu;
    {
        const bool branch_taken_0x31572c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31572Cu;
        // 0x315730: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31572c) {
            ctx->pc = 0x3157B0u;
            goto label_3157b0;
        }
    }
    ctx->pc = 0x315734u;
label_315734:
    // 0x315734: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x315734u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315738:
    // 0x315738: 0x0  nop
    ctx->pc = 0x315738u;
    // NOP
label_31573c:
    // 0x31573c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_315740:
    if (ctx->pc == 0x315740u) {
        ctx->pc = 0x315740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31573Cu;
        // 0x315740: 0x2483000c  addiu       $v1, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315744u;
        goto label_315744;
    }
    ctx->pc = 0x31573Cu;
    {
        const bool branch_taken_0x31573c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x315740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31573Cu;
        // 0x315740: 0x2483000c  addiu       $v1, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31573c) {
            ctx->pc = 0x315750u;
            goto label_315750;
        }
    }
    ctx->pc = 0x315744u;
label_315744:
    // 0x315744: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x315744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_315748:
    // 0x315748: 0x10000019  b           . + 4 + (0x19 << 2)
label_31574c:
    if (ctx->pc == 0x31574Cu) {
        ctx->pc = 0x31574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315748u;
        // 0x31574c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315750u;
        goto label_315750;
    }
    ctx->pc = 0x315748u;
    {
        const bool branch_taken_0x315748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315748u;
        // 0x31574c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315748) {
            ctx->pc = 0x3157B0u;
            goto label_3157b0;
        }
    }
    ctx->pc = 0x315750u;
label_315750:
    // 0x315750: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x315750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_315754:
    // 0x315754: 0xc460fff8  lwc1        $f0, -0x8($v1)
    ctx->pc = 0x315754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315758:
    // 0x315758: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x315758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31575c:
    // 0x31575c: 0xc4c60018  lwc1        $f6, 0x18($a2)
    ctx->pc = 0x31575cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_315760:
    // 0x315760: 0xc464fffc  lwc1        $f4, -0x4($v1)
    ctx->pc = 0x315760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_315764:
    // 0x315764: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x315764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_315768:
    // 0x315768: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x315768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_31576c:
    // 0x31576c: 0xafa3033c  sw          $v1, 0x33C($sp)
    ctx->pc = 0x31576cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 3));
label_315770:
    // 0x315770: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_315774:
    if (ctx->pc == 0x315774u) {
        ctx->pc = 0x315774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315770u;
        // 0x315774: 0xe4640008  swc1        $f4, 0x8($v1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x315778u;
        goto label_315778;
    }
    ctx->pc = 0x315770u;
    {
        const bool branch_taken_0x315770 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x315774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315770u;
        // 0x315774: 0xe4640008  swc1        $f4, 0x8($v1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x315770) {
            ctx->pc = 0x315788u;
            goto label_315788;
        }
    }
    ctx->pc = 0x315778u;
label_315778:
    // 0x315778: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x315778u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_31577c:
    // 0x31577c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x31577cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_315780:
    // 0x315780: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x315780u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_315784:
    // 0x315784: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x315784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_315788:
    // 0x315788: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x315788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_31578c:
    // 0x31578c: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x31578cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315790:
    // 0x315790: 0x8fa3033c  lw          $v1, 0x33C($sp)
    ctx->pc = 0x315790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_315794:
    // 0x315794: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_315798:
    if (ctx->pc == 0x315798u) {
        ctx->pc = 0x315798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315794u;
        // 0x315798: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31579Cu;
        goto label_31579c;
    }
    ctx->pc = 0x315794u;
    {
        const bool branch_taken_0x315794 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x315798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315794u;
        // 0x315798: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315794) {
            ctx->pc = 0x3157B0u;
            goto label_3157b0;
        }
    }
    ctx->pc = 0x31579Cu;
label_31579c:
    // 0x31579c: 0x46051801  sub.s       $f0, $f3, $f5
    ctx->pc = 0x31579cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
label_3157a0:
    // 0x3157a0: 0xc461fff8  lwc1        $f1, -0x8($v1)
    ctx->pc = 0x3157a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3157a4:
    // 0x3157a4: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x3157a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_3157a8:
    // 0x3157a8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3157a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3157ac:
    // 0x3157ac: 0xe461fff8  swc1        $f1, -0x8($v1)
    ctx->pc = 0x3157acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), bits); }
label_3157b0:
    // 0x3157b0: 0x8fa2033c  lw          $v0, 0x33C($sp)
    ctx->pc = 0x3157b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_3157b4:
    // 0x3157b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3157b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3157b8:
    // 0x3157b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3157b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3157bc:
    // 0x3157bc: 0x481ffa6  bgez        $a0, . + 4 + (-0x5A << 2)
label_3157c0:
    if (ctx->pc == 0x3157C0u) {
        ctx->pc = 0x3157C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3157BCu;
        // 0x3157c0: 0x8fa4033c  lw          $a0, 0x33C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3157C4u;
        goto label_3157c4;
    }
    ctx->pc = 0x3157BCu;
    {
        const bool branch_taken_0x3157bc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x3157C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3157BCu;
        // 0x3157c0: 0x8fa4033c  lw          $a0, 0x33C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3157bc) {
            ctx->pc = 0x315658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315658;
        }
    }
    ctx->pc = 0x3157C4u;
label_3157c4:
    // 0x3157c4: 0x8fa2033c  lw          $v0, 0x33C($sp)
    ctx->pc = 0x3157c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_3157c8:
    // 0x3157c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3157c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3157cc:
    // 0x3157cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3157ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3157d0:
    // 0x3157d0: 0x220f809  jalr        $s1
label_3157d4:
    if (ctx->pc == 0x3157D4u) {
        ctx->pc = 0x3157D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3157D0u;
        // 0x3157d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3157D8u;
        goto label_3157d8;
    }
    ctx->pc = 0x3157D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x3157D8u);
        ctx->pc = 0x3157D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3157D0u;
        // 0x3157d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3157D0u, 0x3157D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3157D8u;
label_3157d8:
    // 0x3157d8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3157dc:
    if (ctx->pc == 0x3157DCu) {
        ctx->pc = 0x3157DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3157D8u;
        // 0x3157dc: 0x7bb00380  lq          $s0, 0x380($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3157E0u;
        goto label_3157e0;
    }
    ctx->pc = 0x3157D8u;
    {
        const bool branch_taken_0x3157d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3157d8) {
            ctx->pc = 0x3157DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3157D8u;
            // 0x3157dc: 0x7bb00380  lq          $s0, 0x380($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3157F4u;
            goto label_3157f4;
        }
    }
    ctx->pc = 0x3157E0u;
label_3157e0:
    // 0x3157e0: 0x8fa3033c  lw          $v1, 0x33C($sp)
    ctx->pc = 0x3157e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_3157e4:
    // 0x3157e4: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x3157e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3157e8:
    // 0x3157e8: 0x5440ff93  bnel        $v0, $zero, . + 4 + (-0x6D << 2)
label_3157ec:
    if (ctx->pc == 0x3157ECu) {
        ctx->pc = 0x3157ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3157E8u;
        // 0x3157ec: 0x8c62fff4  lw          $v0, -0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3157F0u;
        goto label_3157f0;
    }
    ctx->pc = 0x3157E8u;
    {
        const bool branch_taken_0x3157e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3157e8) {
            ctx->pc = 0x3157ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3157E8u;
            // 0x3157ec: 0x8c62fff4  lw          $v0, -0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315638;
        }
    }
    ctx->pc = 0x3157F0u;
label_3157f0:
    // 0x3157f0: 0x7bb00380  lq          $s0, 0x380($sp)
    ctx->pc = 0x3157f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
label_3157f4:
    // 0x3157f4: 0x7bb10370  lq          $s1, 0x370($sp)
    ctx->pc = 0x3157f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 880)));
label_3157f8:
    // 0x3157f8: 0x7bb20360  lq          $s2, 0x360($sp)
    ctx->pc = 0x3157f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 864)));
label_3157fc:
    // 0x3157fc: 0x7bb30350  lq          $s3, 0x350($sp)
    ctx->pc = 0x3157fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 848)));
label_315800:
    // 0x315800: 0xdfbf0340  ld          $ra, 0x340($sp)
    ctx->pc = 0x315800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 832)));
label_315804:
    // 0x315804: 0x3e00008  jr          $ra
label_315808:
    if (ctx->pc == 0x315808u) {
        ctx->pc = 0x315808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315804u;
        // 0x315808: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31580Cu;
        goto label_31580c;
    }
    ctx->pc = 0x315804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315804u;
        // 0x315808: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31580Cu;
label_31580c:
    // 0x31580c: 0x0  nop
    ctx->pc = 0x31580cu;
    // NOP
    ctx->pc = 0x315810u;
}
