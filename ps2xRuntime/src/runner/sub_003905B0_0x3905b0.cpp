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

// Function: sub_003905B0
// Address: 0x3905b0 - 0x3908f0
void sub_003905B0_0x3905b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003905B0_0x3905b0");
#endif

    switch (ctx->pc) {
        case 0x3905b0u: goto label_3905b0;
        case 0x3905b4u: goto label_3905b4;
        case 0x3905b8u: goto label_3905b8;
        case 0x3905bcu: goto label_3905bc;
        case 0x3905c0u: goto label_3905c0;
        case 0x3905c4u: goto label_3905c4;
        case 0x3905c8u: goto label_3905c8;
        case 0x3905ccu: goto label_3905cc;
        case 0x3905d0u: goto label_3905d0;
        case 0x3905d4u: goto label_3905d4;
        case 0x3905d8u: goto label_3905d8;
        case 0x3905dcu: goto label_3905dc;
        case 0x3905e0u: goto label_3905e0;
        case 0x3905e4u: goto label_3905e4;
        case 0x3905e8u: goto label_3905e8;
        case 0x3905ecu: goto label_3905ec;
        case 0x3905f0u: goto label_3905f0;
        case 0x3905f4u: goto label_3905f4;
        case 0x3905f8u: goto label_3905f8;
        case 0x3905fcu: goto label_3905fc;
        case 0x390600u: goto label_390600;
        case 0x390604u: goto label_390604;
        case 0x390608u: goto label_390608;
        case 0x39060cu: goto label_39060c;
        case 0x390610u: goto label_390610;
        case 0x390614u: goto label_390614;
        case 0x390618u: goto label_390618;
        case 0x39061cu: goto label_39061c;
        case 0x390620u: goto label_390620;
        case 0x390624u: goto label_390624;
        case 0x390628u: goto label_390628;
        case 0x39062cu: goto label_39062c;
        case 0x390630u: goto label_390630;
        case 0x390634u: goto label_390634;
        case 0x390638u: goto label_390638;
        case 0x39063cu: goto label_39063c;
        case 0x390640u: goto label_390640;
        case 0x390644u: goto label_390644;
        case 0x390648u: goto label_390648;
        case 0x39064cu: goto label_39064c;
        case 0x390650u: goto label_390650;
        case 0x390654u: goto label_390654;
        case 0x390658u: goto label_390658;
        case 0x39065cu: goto label_39065c;
        case 0x390660u: goto label_390660;
        case 0x390664u: goto label_390664;
        case 0x390668u: goto label_390668;
        case 0x39066cu: goto label_39066c;
        case 0x390670u: goto label_390670;
        case 0x390674u: goto label_390674;
        case 0x390678u: goto label_390678;
        case 0x39067cu: goto label_39067c;
        case 0x390680u: goto label_390680;
        case 0x390684u: goto label_390684;
        case 0x390688u: goto label_390688;
        case 0x39068cu: goto label_39068c;
        case 0x390690u: goto label_390690;
        case 0x390694u: goto label_390694;
        case 0x390698u: goto label_390698;
        case 0x39069cu: goto label_39069c;
        case 0x3906a0u: goto label_3906a0;
        case 0x3906a4u: goto label_3906a4;
        case 0x3906a8u: goto label_3906a8;
        case 0x3906acu: goto label_3906ac;
        case 0x3906b0u: goto label_3906b0;
        case 0x3906b4u: goto label_3906b4;
        case 0x3906b8u: goto label_3906b8;
        case 0x3906bcu: goto label_3906bc;
        case 0x3906c0u: goto label_3906c0;
        case 0x3906c4u: goto label_3906c4;
        case 0x3906c8u: goto label_3906c8;
        case 0x3906ccu: goto label_3906cc;
        case 0x3906d0u: goto label_3906d0;
        case 0x3906d4u: goto label_3906d4;
        case 0x3906d8u: goto label_3906d8;
        case 0x3906dcu: goto label_3906dc;
        case 0x3906e0u: goto label_3906e0;
        case 0x3906e4u: goto label_3906e4;
        case 0x3906e8u: goto label_3906e8;
        case 0x3906ecu: goto label_3906ec;
        case 0x3906f0u: goto label_3906f0;
        case 0x3906f4u: goto label_3906f4;
        case 0x3906f8u: goto label_3906f8;
        case 0x3906fcu: goto label_3906fc;
        case 0x390700u: goto label_390700;
        case 0x390704u: goto label_390704;
        case 0x390708u: goto label_390708;
        case 0x39070cu: goto label_39070c;
        case 0x390710u: goto label_390710;
        case 0x390714u: goto label_390714;
        case 0x390718u: goto label_390718;
        case 0x39071cu: goto label_39071c;
        case 0x390720u: goto label_390720;
        case 0x390724u: goto label_390724;
        case 0x390728u: goto label_390728;
        case 0x39072cu: goto label_39072c;
        case 0x390730u: goto label_390730;
        case 0x390734u: goto label_390734;
        case 0x390738u: goto label_390738;
        case 0x39073cu: goto label_39073c;
        case 0x390740u: goto label_390740;
        case 0x390744u: goto label_390744;
        case 0x390748u: goto label_390748;
        case 0x39074cu: goto label_39074c;
        case 0x390750u: goto label_390750;
        case 0x390754u: goto label_390754;
        case 0x390758u: goto label_390758;
        case 0x39075cu: goto label_39075c;
        case 0x390760u: goto label_390760;
        case 0x390764u: goto label_390764;
        case 0x390768u: goto label_390768;
        case 0x39076cu: goto label_39076c;
        case 0x390770u: goto label_390770;
        case 0x390774u: goto label_390774;
        case 0x390778u: goto label_390778;
        case 0x39077cu: goto label_39077c;
        case 0x390780u: goto label_390780;
        case 0x390784u: goto label_390784;
        case 0x390788u: goto label_390788;
        case 0x39078cu: goto label_39078c;
        case 0x390790u: goto label_390790;
        case 0x390794u: goto label_390794;
        case 0x390798u: goto label_390798;
        case 0x39079cu: goto label_39079c;
        case 0x3907a0u: goto label_3907a0;
        case 0x3907a4u: goto label_3907a4;
        case 0x3907a8u: goto label_3907a8;
        case 0x3907acu: goto label_3907ac;
        case 0x3907b0u: goto label_3907b0;
        case 0x3907b4u: goto label_3907b4;
        case 0x3907b8u: goto label_3907b8;
        case 0x3907bcu: goto label_3907bc;
        case 0x3907c0u: goto label_3907c0;
        case 0x3907c4u: goto label_3907c4;
        case 0x3907c8u: goto label_3907c8;
        case 0x3907ccu: goto label_3907cc;
        case 0x3907d0u: goto label_3907d0;
        case 0x3907d4u: goto label_3907d4;
        case 0x3907d8u: goto label_3907d8;
        case 0x3907dcu: goto label_3907dc;
        case 0x3907e0u: goto label_3907e0;
        case 0x3907e4u: goto label_3907e4;
        case 0x3907e8u: goto label_3907e8;
        case 0x3907ecu: goto label_3907ec;
        case 0x3907f0u: goto label_3907f0;
        case 0x3907f4u: goto label_3907f4;
        case 0x3907f8u: goto label_3907f8;
        case 0x3907fcu: goto label_3907fc;
        case 0x390800u: goto label_390800;
        case 0x390804u: goto label_390804;
        case 0x390808u: goto label_390808;
        case 0x39080cu: goto label_39080c;
        case 0x390810u: goto label_390810;
        case 0x390814u: goto label_390814;
        case 0x390818u: goto label_390818;
        case 0x39081cu: goto label_39081c;
        case 0x390820u: goto label_390820;
        case 0x390824u: goto label_390824;
        case 0x390828u: goto label_390828;
        case 0x39082cu: goto label_39082c;
        case 0x390830u: goto label_390830;
        case 0x390834u: goto label_390834;
        case 0x390838u: goto label_390838;
        case 0x39083cu: goto label_39083c;
        case 0x390840u: goto label_390840;
        case 0x390844u: goto label_390844;
        case 0x390848u: goto label_390848;
        case 0x39084cu: goto label_39084c;
        case 0x390850u: goto label_390850;
        case 0x390854u: goto label_390854;
        case 0x390858u: goto label_390858;
        case 0x39085cu: goto label_39085c;
        case 0x390860u: goto label_390860;
        case 0x390864u: goto label_390864;
        case 0x390868u: goto label_390868;
        case 0x39086cu: goto label_39086c;
        case 0x390870u: goto label_390870;
        case 0x390874u: goto label_390874;
        case 0x390878u: goto label_390878;
        case 0x39087cu: goto label_39087c;
        case 0x390880u: goto label_390880;
        case 0x390884u: goto label_390884;
        case 0x390888u: goto label_390888;
        case 0x39088cu: goto label_39088c;
        case 0x390890u: goto label_390890;
        case 0x390894u: goto label_390894;
        case 0x390898u: goto label_390898;
        case 0x39089cu: goto label_39089c;
        case 0x3908a0u: goto label_3908a0;
        case 0x3908a4u: goto label_3908a4;
        case 0x3908a8u: goto label_3908a8;
        case 0x3908acu: goto label_3908ac;
        case 0x3908b0u: goto label_3908b0;
        case 0x3908b4u: goto label_3908b4;
        case 0x3908b8u: goto label_3908b8;
        case 0x3908bcu: goto label_3908bc;
        case 0x3908c0u: goto label_3908c0;
        case 0x3908c4u: goto label_3908c4;
        case 0x3908c8u: goto label_3908c8;
        case 0x3908ccu: goto label_3908cc;
        case 0x3908d0u: goto label_3908d0;
        case 0x3908d4u: goto label_3908d4;
        case 0x3908d8u: goto label_3908d8;
        case 0x3908dcu: goto label_3908dc;
        case 0x3908e0u: goto label_3908e0;
        case 0x3908e4u: goto label_3908e4;
        case 0x3908e8u: goto label_3908e8;
        case 0x3908ecu: goto label_3908ec;
        default: break;
    }

    ctx->pc = 0x3905b0u;

label_3905b0:
    // 0x3905b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3905b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3905b4:
    // 0x3905b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3905b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3905b8:
    // 0x3905b8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3905b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3905bc:
    // 0x3905bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3905bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3905c0:
    // 0x3905c0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3905c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3905c4:
    // 0x3905c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3905c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3905c8:
    // 0x3905c8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3905c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_3905cc:
    // 0x3905cc: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3905ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_3905d0:
    // 0x3905d0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x3905d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3905d4:
    // 0x3905d4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3905d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3905d8:
    // 0x3905d8: 0x3c1e0062  lui         $fp, 0x62
    ctx->pc = 0x3905d8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)98 << 16));
label_3905dc:
    // 0x3905dc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3905dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3905e0:
    // 0x3905e0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3905e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3905e4:
    // 0x3905e4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3905e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_3905e8:
    // 0x3905e8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3905e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_3905ec:
    // 0x3905ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3905ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3905f0:
    // 0x3905f0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3905f4:
    if (ctx->pc == 0x3905F4u) {
        ctx->pc = 0x3905F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3905F0u;
        // 0x3905f4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3905F8u;
        goto label_3905f8;
    }
    ctx->pc = 0x3905F0u;
    {
        const bool branch_taken_0x3905f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3905f0) {
            ctx->pc = 0x3905F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3905F0u;
            // 0x3905f4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3905F8u;
            goto label_3905f8;
        }
    }
    ctx->pc = 0x3905F8u;
label_3905f8:
    // 0x3905f8: 0x8ee80004  lw          $t0, 0x4($s7)
    ctx->pc = 0x3905f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_3905fc:
    // 0x3905fc: 0x102001b  divu        $zero, $t0, $v0
    ctx->pc = 0x3905fcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
label_390600:
    // 0x390600: 0x9812  mflo        $s3
    ctx->pc = 0x390600u;
    SET_GPR_U64(ctx, 19, ctx->lo);
label_390604:
    // 0x390604: 0x11000026  beqz        $t0, . + 4 + (0x26 << 2)
label_390608:
    if (ctx->pc == 0x390608u) {
        ctx->pc = 0x390608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390604u;
        // 0x390608: 0x8ef20000  lw          $s2, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39060Cu;
        goto label_39060c;
    }
    ctx->pc = 0x390604u;
    {
        const bool branch_taken_0x390604 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x390608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390604u;
        // 0x390608: 0x8ef20000  lw          $s2, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390604) {
            ctx->pc = 0x3906A0u;
            goto label_3906a0;
        }
    }
    ctx->pc = 0x39060Cu;
label_39060c:
    // 0x39060c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39060cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_390610:
    // 0x390610: 0x1900000f  blez        $t0, . + 4 + (0xF << 2)
label_390614:
    if (ctx->pc == 0x390614u) {
        ctx->pc = 0x390614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390610u;
        // 0x390614: 0x31030003  andi        $v1, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x390618u;
        goto label_390618;
    }
    ctx->pc = 0x390610u;
    {
        const bool branch_taken_0x390610 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x390614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390610u;
        // 0x390614: 0x31030003  andi        $v1, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x390610) {
            ctx->pc = 0x390650u;
            goto label_390650;
        }
    }
    ctx->pc = 0x390618u;
label_390618:
    // 0x390618: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_39061c:
    if (ctx->pc == 0x39061Cu) {
        ctx->pc = 0x39061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390618u;
        // 0x39061c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x390620u;
        goto label_390620;
    }
    ctx->pc = 0x390618u;
    {
        const bool branch_taken_0x390618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390618u;
        // 0x39061c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x390618) {
            ctx->pc = 0x390668u;
            goto label_390668;
        }
    }
    ctx->pc = 0x390620u;
label_390620:
    // 0x390620: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_390624:
    if (ctx->pc == 0x390624u) {
        ctx->pc = 0x390624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390620u;
        // 0x390624: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390628u;
        goto label_390628;
    }
    ctx->pc = 0x390620u;
    {
        const bool branch_taken_0x390620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x390620) {
            ctx->pc = 0x390624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390620u;
            // 0x390624: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390654u;
            goto label_390654;
        }
    }
    ctx->pc = 0x390628u;
label_390628:
    // 0x390628: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x390628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_39062c:
    // 0x39062c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_390630:
    if (ctx->pc == 0x390630u) {
        ctx->pc = 0x390630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39062Cu;
        // 0x390630: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390634u;
        goto label_390634;
    }
    ctx->pc = 0x39062Cu;
    {
        const bool branch_taken_0x39062c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39062c) {
            ctx->pc = 0x390630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39062Cu;
            // 0x390630: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390644u;
            goto label_390644;
        }
    }
    ctx->pc = 0x390634u;
label_390634:
    // 0x390634: 0x96460000  lhu         $a2, 0x0($s2)
    ctx->pc = 0x390634u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_390638:
    // 0x390638: 0x26440002  addiu       $a0, $s2, 0x2
    ctx->pc = 0x390638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_39063c:
    // 0x39063c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x39063cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_390640:
    // 0x390640: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x390640u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_390644:
    // 0x390644: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x390644u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_390648:
    // 0x390648: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x390648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_39064c:
    // 0x39064c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x39064cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_390650:
    // 0x390650: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x390650u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_390654:
    // 0x390654: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x390654u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_390658:
    // 0x390658: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x390658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_39065c:
    // 0x39065c: 0x128382b  sltu        $a3, $t1, $t0
    ctx->pc = 0x39065cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_390660:
    // 0x390660: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
label_390664:
    if (ctx->pc == 0x390664u) {
        ctx->pc = 0x390664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390660u;
        // 0x390664: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390668u;
        goto label_390668;
    }
    ctx->pc = 0x390660u;
    {
        const bool branch_taken_0x390660 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x390664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390660u;
        // 0x390664: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390660) {
            ctx->pc = 0x3906A0u;
            goto label_3906a0;
        }
    }
    ctx->pc = 0x390668u;
label_390668:
    // 0x390668: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x390668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39066c:
    // 0x39066c: 0x0  nop
    ctx->pc = 0x39066cu;
    // NOP
label_390670:
    // 0x390670: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x390670u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_390674:
    // 0x390674: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x390674u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_390678:
    // 0x390678: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x390678u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_39067c:
    // 0x39067c: 0x128382b  sltu        $a3, $t1, $t0
    ctx->pc = 0x39067cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_390680:
    // 0x390680: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x390680u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_390684:
    // 0x390684: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x390684u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_390688:
    // 0x390688: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x390688u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_39068c:
    // 0x39068c: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x39068cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_390690:
    // 0x390690: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x390690u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_390694:
    // 0x390694: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x390694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_390698:
    // 0x390698: 0x14e0fff5  bnez        $a3, . + 4 + (-0xB << 2)
label_39069c:
    if (ctx->pc == 0x39069Cu) {
        ctx->pc = 0x39069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390698u;
        // 0x39069c: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3906A0u;
        goto label_3906a0;
    }
    ctx->pc = 0x390698u;
    {
        const bool branch_taken_0x390698 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x39069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390698u;
        // 0x39069c: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390698) {
            ctx->pc = 0x390670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390670;
        }
    }
    ctx->pc = 0x3906A0u;
label_3906a0:
    // 0x3906a0: 0x27d1e880  addiu       $s1, $fp, -0x1780
    ctx->pc = 0x3906a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961280));
label_3906a4:
    // 0x3906a4: 0x24d5001f  addiu       $s5, $a2, 0x1F
    ctx->pc = 0x3906a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), 31));
label_3906a8:
    // 0x3906a8: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x3906a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_3906ac:
    // 0x3906ac: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3906acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3906b0:
    // 0x3906b0: 0x1520c2  srl         $a0, $s5, 3
    ctx->pc = 0x3906b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 3));
label_3906b4:
    // 0x3906b4: 0x40f809  jalr        $v0
label_3906b8:
    if (ctx->pc == 0x3906B8u) {
        ctx->pc = 0x3906B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3906B4u;
        // 0x3906b8: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3906BCu;
        goto label_3906bc;
    }
    ctx->pc = 0x3906B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3906BCu);
        ctx->pc = 0x3906B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3906B4u;
        // 0x3906b8: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3906B4u, 0x3906BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3906BCu;
label_3906bc:
    // 0x3906bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3906bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3906c0:
    // 0x3906c0: 0x1200007d  beqz        $s0, . + 4 + (0x7D << 2)
label_3906c4:
    if (ctx->pc == 0x3906C4u) {
        ctx->pc = 0x3906C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3906C0u;
        // 0x3906c4: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3906C8u;
        goto label_3906c8;
    }
    ctx->pc = 0x3906C0u;
    {
        const bool branch_taken_0x3906c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3906C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3906C0u;
        // 0x3906c4: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3906c0) {
            ctx->pc = 0x3908B8u;
            goto label_3908b8;
        }
    }
    ctx->pc = 0x3906C8u;
label_3906c8:
    // 0x3906c8: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x3906c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_3906cc:
    // 0x3906cc: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x3906ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_3906d0:
    // 0x3906d0: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x3906d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_3906d4:
    // 0x3906d4: 0x38840  sll         $s1, $v1, 1
    ctx->pc = 0x3906d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3906d8:
    // 0x3906d8: 0x40f809  jalr        $v0
label_3906dc:
    if (ctx->pc == 0x3906DCu) {
        ctx->pc = 0x3906DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3906D8u;
        // 0x3906dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3906E0u;
        goto label_3906e0;
    }
    ctx->pc = 0x3906D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3906E0u);
        ctx->pc = 0x3906DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3906D8u;
        // 0x3906dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3906D8u, 0x3906E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3906E0u;
label_3906e0:
    // 0x3906e0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3906e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3906e4:
    // 0x3906e4: 0x12c00070  beqz        $s6, . + 4 + (0x70 << 2)
label_3906e8:
    if (ctx->pc == 0x3906E8u) {
        ctx->pc = 0x3906E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3906E4u;
        // 0x3906e8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3906ECu;
        goto label_3906ec;
    }
    ctx->pc = 0x3906E4u;
    {
        const bool branch_taken_0x3906e4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3906E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3906E4u;
        // 0x3906e8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3906e4) {
            ctx->pc = 0x3908A8u;
            goto label_3908a8;
        }
    }
    ctx->pc = 0x3906ECu;
label_3906ec:
    // 0x3906ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3906ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3906f0:
    // 0x3906f0: 0xc0bb778  jal         func_2EDDE0
label_3906f4:
    if (ctx->pc == 0x3906F4u) {
        ctx->pc = 0x3906F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3906F0u;
        // 0x3906f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3906F8u;
        goto label_3906f8;
    }
    ctx->pc = 0x3906F0u;
    SET_GPR_U32(ctx, 31, 0x3906F8u);
    ctx->pc = 0x3906F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3906F0u;
    // 0x3906f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3906F0u, 0x3906F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3906F8u;
label_3906f8:
    // 0x3906f8: 0x12600067  beqz        $s3, . + 4 + (0x67 << 2)
label_3906fc:
    if (ctx->pc == 0x3906FCu) {
        ctx->pc = 0x3906FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3906F8u;
        // 0x3906fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390700u;
        goto label_390700;
    }
    ctx->pc = 0x3906F8u;
    {
        const bool branch_taken_0x3906f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3906FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3906F8u;
        // 0x3906fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3906f8) {
            ctx->pc = 0x390898u;
            goto label_390898;
        }
    }
    ctx->pc = 0x390700u;
label_390700:
    // 0x390700: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x390700u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
label_390704:
    // 0x390704: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x390704u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_390708:
    // 0x390708: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x390708u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
label_39070c:
    // 0x39070c: 0x1518c2  srl         $v1, $s5, 3
    ctx->pc = 0x39070cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 3));
label_390710:
    // 0x390710: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x390710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_390714:
    // 0x390714: 0x1074001d  beq         $v1, $s4, . + 4 + (0x1D << 2)
label_390718:
    if (ctx->pc == 0x390718u) {
        ctx->pc = 0x390718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390714u;
        // 0x390718: 0x31027  nor         $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39071Cu;
        goto label_39071c;
    }
    ctx->pc = 0x390714u;
    {
        const bool branch_taken_0x390714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x390718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390714u;
        // 0x390718: 0x31027  nor         $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390714) {
            ctx->pc = 0x39078Cu;
            goto label_39078c;
        }
    }
    ctx->pc = 0x39071Cu;
label_39071c:
    // 0x39071c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x39071cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_390720:
    // 0x390720: 0x30460003  andi        $a2, $v0, 0x3
    ctx->pc = 0x390720u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_390724:
    // 0x390724: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x390724u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_390728:
    // 0x390728: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_39072c:
    if (ctx->pc == 0x39072Cu) {
        ctx->pc = 0x39072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390728u;
        // 0x39072c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390730u;
        goto label_390730;
    }
    ctx->pc = 0x390728u;
    {
        const bool branch_taken_0x390728 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x39072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390728u;
        // 0x39072c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390728) {
            ctx->pc = 0x39076Cu;
            goto label_39076c;
        }
    }
    ctx->pc = 0x390730u;
label_390730:
    // 0x390730: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x390730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
label_390734:
    // 0x390734: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_390738:
    if (ctx->pc == 0x390738u) {
        ctx->pc = 0x390738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390734u;
        // 0x390738: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39073Cu;
        goto label_39073c;
    }
    ctx->pc = 0x390734u;
    {
        const bool branch_taken_0x390734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390734u;
        // 0x390738: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x390734) {
            ctx->pc = 0x39075Cu;
            goto label_39075c;
        }
    }
    ctx->pc = 0x39073Cu;
label_39073c:
    // 0x39073c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_390740:
    if (ctx->pc == 0x390740u) {
        ctx->pc = 0x390740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39073Cu;
        // 0x390740: 0xa0b80000  sb          $t8, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390744u;
        goto label_390744;
    }
    ctx->pc = 0x39073Cu;
    {
        const bool branch_taken_0x39073c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39073c) {
            ctx->pc = 0x390740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39073Cu;
            // 0x390740: 0xa0b80000  sb          $t8, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390754u;
            goto label_390754;
        }
    }
    ctx->pc = 0x390744u;
label_390744:
    // 0x390744: 0xa2180000  sb          $t8, 0x0($s0)
    ctx->pc = 0x390744u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 24));
label_390748:
    // 0x390748: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x390748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_39074c:
    // 0x39074c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x39074cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_390750:
    // 0x390750: 0xa0b80000  sb          $t8, 0x0($a1)
    ctx->pc = 0x390750u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 24));
label_390754:
    // 0x390754: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x390754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_390758:
    // 0x390758: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x390758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_39075c:
    // 0x39075c: 0xa0b80000  sb          $t8, 0x0($a1)
    ctx->pc = 0x39075cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 24));
label_390760:
    // 0x390760: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x390760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_390764:
    // 0x390764: 0x10670009  beq         $v1, $a3, . + 4 + (0x9 << 2)
label_390768:
    if (ctx->pc == 0x390768u) {
        ctx->pc = 0x390768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390764u;
        // 0x390768: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39076Cu;
        goto label_39076c;
    }
    ctx->pc = 0x390764u;
    {
        const bool branch_taken_0x390764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x390768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390764u;
        // 0x390768: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390764) {
            ctx->pc = 0x39078Cu;
            goto label_39078c;
        }
    }
    ctx->pc = 0x39076Cu;
label_39076c:
    // 0x39076c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x39076cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_390770:
    // 0x390770: 0xa0580000  sb          $t8, 0x0($v0)
    ctx->pc = 0x390770u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 24));
label_390774:
    // 0x390774: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x390774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_390778:
    // 0x390778: 0xa0580001  sb          $t8, 0x1($v0)
    ctx->pc = 0x390778u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 24));
label_39077c:
    // 0x39077c: 0xa0580002  sb          $t8, 0x2($v0)
    ctx->pc = 0x39077cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 24));
label_390780:
    // 0x390780: 0xa0580003  sb          $t8, 0x3($v0)
    ctx->pc = 0x390780u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 24));
label_390784:
    // 0x390784: 0x1467fffa  bne         $v1, $a3, . + 4 + (-0x6 << 2)
label_390788:
    if (ctx->pc == 0x390788u) {
        ctx->pc = 0x390788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390784u;
        // 0x390788: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39078Cu;
        goto label_39078c;
    }
    ctx->pc = 0x390784u;
    {
        const bool branch_taken_0x390784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x390788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390784u;
        // 0x390788: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390784) {
            ctx->pc = 0x390770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390770;
        }
    }
    ctx->pc = 0x39078Cu;
label_39078c:
    // 0x39078c: 0x1260003f  beqz        $s3, . + 4 + (0x3F << 2)
label_390790:
    if (ctx->pc == 0x390790u) {
        ctx->pc = 0x390790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39078Cu;
        // 0x390790: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390794u;
        goto label_390794;
    }
    ctx->pc = 0x39078Cu;
    {
        const bool branch_taken_0x39078c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x390790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39078Cu;
        // 0x390790: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39078c) {
            ctx->pc = 0x39088Cu;
            goto label_39088c;
        }
    }
    ctx->pc = 0x390794u;
label_390794:
    // 0x390794: 0x3411ffff  ori         $s1, $zero, 0xFFFF
    ctx->pc = 0x390794u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_390798:
    // 0x390798: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x390798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_39079c:
    // 0x39079c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x39079cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3907a0:
    // 0x3907a0: 0x94aa0000  lhu         $t2, 0x0($a1)
    ctx->pc = 0x3907a0u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_3907a4:
    // 0x3907a4: 0x94a60002  lhu         $a2, 0x2($a1)
    ctx->pc = 0x3907a4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_3907a8:
    // 0x3907a8: 0x94a80004  lhu         $t0, 0x4($a1)
    ctx->pc = 0x3907a8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_3907ac:
    // 0x3907ac: 0x1461024  and         $v0, $t2, $a2
    ctx->pc = 0x3907acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 6));
label_3907b0:
    // 0x3907b0: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x3907b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_3907b4:
    // 0x3907b4: 0x10510031  beq         $v0, $s1, . + 4 + (0x31 << 2)
label_3907b8:
    if (ctx->pc == 0x3907B8u) {
        ctx->pc = 0x3907B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3907B4u;
        // 0x3907b8: 0xa1142  srl         $v0, $t2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3907BCu;
        goto label_3907bc;
    }
    ctx->pc = 0x3907B4u;
    {
        const bool branch_taken_0x3907b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x3907B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3907B4u;
        // 0x3907b8: 0xa1142  srl         $v0, $t2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3907b4) {
            ctx->pc = 0x39087Cu;
            goto label_39087c;
        }
    }
    ctx->pc = 0x3907BCu;
label_3907bc:
    // 0x3907bc: 0x3143001f  andi        $v1, $t2, 0x1F
    ctx->pc = 0x3907bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)31);
label_3907c0:
    // 0x3907c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3907c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3907c4:
    // 0x3907c4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x3907c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3907c8:
    // 0x3907c8: 0x507021  addu        $t6, $v0, $s0
    ctx->pc = 0x3907c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3907cc:
    // 0x3907cc: 0x6f6004  sllv        $t4, $t7, $v1
    ctx->pc = 0x3907ccu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 3) & 0x1F));
label_3907d0:
    // 0x3907d0: 0x8dcb0000  lw          $t3, 0x0($t6)
    ctx->pc = 0x3907d0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
label_3907d4:
    // 0x3907d4: 0x16c1024  and         $v0, $t3, $t4
    ctx->pc = 0x3907d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 12));
label_3907d8:
    // 0x3907d8: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
label_3907dc:
    if (ctx->pc == 0x3907DCu) {
        ctx->pc = 0x3907DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3907D8u;
        // 0x3907dc: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3907E0u;
        goto label_3907e0;
    }
    ctx->pc = 0x3907D8u;
    {
        const bool branch_taken_0x3907d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3907d8) {
            ctx->pc = 0x3907DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3907D8u;
            // 0x3907dc: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390880u;
            goto label_390880;
        }
    }
    ctx->pc = 0x3907E0u;
label_3907e0:
    // 0x3907e0: 0x61142  srl         $v0, $a2, 5
    ctx->pc = 0x3907e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
label_3907e4:
    // 0x3907e4: 0x30c3001f  andi        $v1, $a2, 0x1F
    ctx->pc = 0x3907e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
label_3907e8:
    // 0x3907e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3907e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3907ec:
    // 0x3907ec: 0x6f6804  sllv        $t5, $t7, $v1
    ctx->pc = 0x3907ecu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 3) & 0x1F));
label_3907f0:
    // 0x3907f0: 0x504821  addu        $t1, $v0, $s0
    ctx->pc = 0x3907f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3907f4:
    // 0x3907f4: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x3907f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_3907f8:
    // 0x3907f8: 0x6d1824  and         $v1, $v1, $t5
    ctx->pc = 0x3907f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 13));
label_3907fc:
    // 0x3907fc: 0x54600020  bnel        $v1, $zero, . + 4 + (0x20 << 2)
label_390800:
    if (ctx->pc == 0x390800u) {
        ctx->pc = 0x390800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3907FCu;
        // 0x390800: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390804u;
        goto label_390804;
    }
    ctx->pc = 0x3907FCu;
    {
        const bool branch_taken_0x3907fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3907fc) {
            ctx->pc = 0x390800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3907FCu;
            // 0x390800: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390880u;
            goto label_390880;
        }
    }
    ctx->pc = 0x390804u;
label_390804:
    // 0x390804: 0x81142  srl         $v0, $t0, 5
    ctx->pc = 0x390804u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 5));
label_390808:
    // 0x390808: 0x3103001f  andi        $v1, $t0, 0x1F
    ctx->pc = 0x390808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31);
label_39080c:
    // 0x39080c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39080cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_390810:
    // 0x390810: 0x6f4004  sllv        $t0, $t7, $v1
    ctx->pc = 0x390810u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 3) & 0x1F));
label_390814:
    // 0x390814: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x390814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_390818:
    // 0x390818: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x390818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39081c:
    // 0x39081c: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x39081cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
label_390820:
    // 0x390820: 0x54600017  bnel        $v1, $zero, . + 4 + (0x17 << 2)
label_390824:
    if (ctx->pc == 0x390824u) {
        ctx->pc = 0x390824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390820u;
        // 0x390824: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390828u;
        goto label_390828;
    }
    ctx->pc = 0x390820u;
    {
        const bool branch_taken_0x390820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x390820) {
            ctx->pc = 0x390824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390820u;
            // 0x390824: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390880u;
            goto label_390880;
        }
    }
    ctx->pc = 0x390828u;
label_390828:
    // 0x390828: 0x16c1025  or          $v0, $t3, $t4
    ctx->pc = 0x390828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_39082c:
    // 0x39082c: 0xa4ea0000  sh          $t2, 0x0($a3)
    ctx->pc = 0x39082cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 10));
label_390830:
    // 0x390830: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x390830u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
label_390834:
    // 0x390834: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x390834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_390838:
    // 0x390838: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x390838u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_39083c:
    // 0x39083c: 0x26520006  addiu       $s2, $s2, 0x6
    ctx->pc = 0x39083cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
label_390840:
    // 0x390840: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x390840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_390844:
    // 0x390844: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x390844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_390848:
    // 0x390848: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x390848u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
label_39084c:
    // 0x39084c: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x39084cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
label_390850:
    // 0x390850: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x390850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_390854:
    // 0x390854: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x390854u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_390858:
    // 0x390858: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x390858u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_39085c:
    // 0x39085c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x39085cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_390860:
    // 0x390860: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x390860u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
label_390864:
    // 0x390864: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x390864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_390868:
    // 0x390868: 0xa4b10004  sh          $s1, 0x4($a1)
    ctx->pc = 0x390868u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 17));
label_39086c:
    // 0x39086c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x39086cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_390870:
    // 0x390870: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x390870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_390874:
    // 0x390874: 0xa4b10002  sh          $s1, 0x2($a1)
    ctx->pc = 0x390874u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 17));
label_390878:
    // 0x390878: 0xa4b10000  sh          $s1, 0x0($a1)
    ctx->pc = 0x390878u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 17));
label_39087c:
    // 0x39087c: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x39087cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_390880:
    // 0x390880: 0x333102b  sltu        $v0, $t9, $s3
    ctx->pc = 0x390880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_390884:
    // 0x390884: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
label_390888:
    if (ctx->pc == 0x390888u) {
        ctx->pc = 0x390888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390884u;
        // 0x390888: 0x24a50006  addiu       $a1, $a1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39088Cu;
        goto label_39088c;
    }
    ctx->pc = 0x390884u;
    {
        const bool branch_taken_0x390884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390884u;
        // 0x390888: 0x24a50006  addiu       $a1, $a1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390884) {
            ctx->pc = 0x3907A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3907a0;
        }
    }
    ctx->pc = 0x39088Cu;
label_39088c:
    // 0x39088c: 0x93102b  sltu        $v0, $a0, $s3
    ctx->pc = 0x39088cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_390890:
    // 0x390890: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
label_390894:
    if (ctx->pc == 0x390894u) {
        ctx->pc = 0x390894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390890u;
        // 0x390894: 0x1518c2  srl         $v1, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390898u;
        goto label_390898;
    }
    ctx->pc = 0x390890u;
    {
        const bool branch_taken_0x390890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390890u;
        // 0x390894: 0x1518c2  srl         $v1, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390890) {
            ctx->pc = 0x390710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390710;
        }
    }
    ctx->pc = 0x390898u;
label_390898:
    // 0x390898: 0x27c3e880  addiu       $v1, $fp, -0x1780
    ctx->pc = 0x390898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961280));
label_39089c:
    // 0x39089c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x39089cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3908a0:
    // 0x3908a0: 0x40f809  jalr        $v0
label_3908a4:
    if (ctx->pc == 0x3908A4u) {
        ctx->pc = 0x3908A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3908A0u;
        // 0x3908a4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3908A8u;
        goto label_3908a8;
    }
    ctx->pc = 0x3908A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3908A8u);
        ctx->pc = 0x3908A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3908A0u;
        // 0x3908a4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3908A0u, 0x3908A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3908A8u;
label_3908a8:
    // 0x3908a8: 0x27c3e880  addiu       $v1, $fp, -0x1780
    ctx->pc = 0x3908a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961280));
label_3908ac:
    // 0x3908ac: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3908acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3908b0:
    // 0x3908b0: 0x40f809  jalr        $v0
label_3908b4:
    if (ctx->pc == 0x3908B4u) {
        ctx->pc = 0x3908B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3908B0u;
        // 0x3908b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3908B8u;
        goto label_3908b8;
    }
    ctx->pc = 0x3908B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3908B8u);
        ctx->pc = 0x3908B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3908B0u;
        // 0x3908b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3908B0u, 0x3908B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3908B8u;
label_3908b8:
    // 0x3908b8: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x3908b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3908bc:
    // 0x3908bc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3908bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3908c0:
    // 0x3908c0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3908c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3908c4:
    // 0x3908c4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3908c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3908c8:
    // 0x3908c8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3908c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3908cc:
    // 0x3908cc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3908ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3908d0:
    // 0x3908d0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3908d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3908d4:
    // 0x3908d4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3908d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3908d8:
    // 0x3908d8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3908d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3908dc:
    // 0x3908dc: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3908dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3908e0:
    // 0x3908e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3908e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3908e4:
    // 0x3908e4: 0x3e00008  jr          $ra
label_3908e8:
    if (ctx->pc == 0x3908E8u) {
        ctx->pc = 0x3908E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3908E4u;
        // 0x3908e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3908ECu;
        goto label_3908ec;
    }
    ctx->pc = 0x3908E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3908E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3908E4u;
        // 0x3908e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3908E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3908ECu;
label_3908ec:
    // 0x3908ec: 0x0  nop
    ctx->pc = 0x3908ecu;
    // NOP
    ctx->pc = 0x3908f0u;
}
