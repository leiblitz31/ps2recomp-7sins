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

// Function: sub_00227380
// Address: 0x227380 - 0x2275a0
void sub_00227380_0x227380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227380_0x227380");
#endif

    switch (ctx->pc) {
        case 0x227380u: goto label_227380;
        case 0x227384u: goto label_227384;
        case 0x227388u: goto label_227388;
        case 0x22738cu: goto label_22738c;
        case 0x227390u: goto label_227390;
        case 0x227394u: goto label_227394;
        case 0x227398u: goto label_227398;
        case 0x22739cu: goto label_22739c;
        case 0x2273a0u: goto label_2273a0;
        case 0x2273a4u: goto label_2273a4;
        case 0x2273a8u: goto label_2273a8;
        case 0x2273acu: goto label_2273ac;
        case 0x2273b0u: goto label_2273b0;
        case 0x2273b4u: goto label_2273b4;
        case 0x2273b8u: goto label_2273b8;
        case 0x2273bcu: goto label_2273bc;
        case 0x2273c0u: goto label_2273c0;
        case 0x2273c4u: goto label_2273c4;
        case 0x2273c8u: goto label_2273c8;
        case 0x2273ccu: goto label_2273cc;
        case 0x2273d0u: goto label_2273d0;
        case 0x2273d4u: goto label_2273d4;
        case 0x2273d8u: goto label_2273d8;
        case 0x2273dcu: goto label_2273dc;
        case 0x2273e0u: goto label_2273e0;
        case 0x2273e4u: goto label_2273e4;
        case 0x2273e8u: goto label_2273e8;
        case 0x2273ecu: goto label_2273ec;
        case 0x2273f0u: goto label_2273f0;
        case 0x2273f4u: goto label_2273f4;
        case 0x2273f8u: goto label_2273f8;
        case 0x2273fcu: goto label_2273fc;
        case 0x227400u: goto label_227400;
        case 0x227404u: goto label_227404;
        case 0x227408u: goto label_227408;
        case 0x22740cu: goto label_22740c;
        case 0x227410u: goto label_227410;
        case 0x227414u: goto label_227414;
        case 0x227418u: goto label_227418;
        case 0x22741cu: goto label_22741c;
        case 0x227420u: goto label_227420;
        case 0x227424u: goto label_227424;
        case 0x227428u: goto label_227428;
        case 0x22742cu: goto label_22742c;
        case 0x227430u: goto label_227430;
        case 0x227434u: goto label_227434;
        case 0x227438u: goto label_227438;
        case 0x22743cu: goto label_22743c;
        case 0x227440u: goto label_227440;
        case 0x227444u: goto label_227444;
        case 0x227448u: goto label_227448;
        case 0x22744cu: goto label_22744c;
        case 0x227450u: goto label_227450;
        case 0x227454u: goto label_227454;
        case 0x227458u: goto label_227458;
        case 0x22745cu: goto label_22745c;
        case 0x227460u: goto label_227460;
        case 0x227464u: goto label_227464;
        case 0x227468u: goto label_227468;
        case 0x22746cu: goto label_22746c;
        case 0x227470u: goto label_227470;
        case 0x227474u: goto label_227474;
        case 0x227478u: goto label_227478;
        case 0x22747cu: goto label_22747c;
        case 0x227480u: goto label_227480;
        case 0x227484u: goto label_227484;
        case 0x227488u: goto label_227488;
        case 0x22748cu: goto label_22748c;
        case 0x227490u: goto label_227490;
        case 0x227494u: goto label_227494;
        case 0x227498u: goto label_227498;
        case 0x22749cu: goto label_22749c;
        case 0x2274a0u: goto label_2274a0;
        case 0x2274a4u: goto label_2274a4;
        case 0x2274a8u: goto label_2274a8;
        case 0x2274acu: goto label_2274ac;
        case 0x2274b0u: goto label_2274b0;
        case 0x2274b4u: goto label_2274b4;
        case 0x2274b8u: goto label_2274b8;
        case 0x2274bcu: goto label_2274bc;
        case 0x2274c0u: goto label_2274c0;
        case 0x2274c4u: goto label_2274c4;
        case 0x2274c8u: goto label_2274c8;
        case 0x2274ccu: goto label_2274cc;
        case 0x2274d0u: goto label_2274d0;
        case 0x2274d4u: goto label_2274d4;
        case 0x2274d8u: goto label_2274d8;
        case 0x2274dcu: goto label_2274dc;
        case 0x2274e0u: goto label_2274e0;
        case 0x2274e4u: goto label_2274e4;
        case 0x2274e8u: goto label_2274e8;
        case 0x2274ecu: goto label_2274ec;
        case 0x2274f0u: goto label_2274f0;
        case 0x2274f4u: goto label_2274f4;
        case 0x2274f8u: goto label_2274f8;
        case 0x2274fcu: goto label_2274fc;
        case 0x227500u: goto label_227500;
        case 0x227504u: goto label_227504;
        case 0x227508u: goto label_227508;
        case 0x22750cu: goto label_22750c;
        case 0x227510u: goto label_227510;
        case 0x227514u: goto label_227514;
        case 0x227518u: goto label_227518;
        case 0x22751cu: goto label_22751c;
        case 0x227520u: goto label_227520;
        case 0x227524u: goto label_227524;
        case 0x227528u: goto label_227528;
        case 0x22752cu: goto label_22752c;
        case 0x227530u: goto label_227530;
        case 0x227534u: goto label_227534;
        case 0x227538u: goto label_227538;
        case 0x22753cu: goto label_22753c;
        case 0x227540u: goto label_227540;
        case 0x227544u: goto label_227544;
        case 0x227548u: goto label_227548;
        case 0x22754cu: goto label_22754c;
        case 0x227550u: goto label_227550;
        case 0x227554u: goto label_227554;
        case 0x227558u: goto label_227558;
        case 0x22755cu: goto label_22755c;
        case 0x227560u: goto label_227560;
        case 0x227564u: goto label_227564;
        case 0x227568u: goto label_227568;
        case 0x22756cu: goto label_22756c;
        case 0x227570u: goto label_227570;
        case 0x227574u: goto label_227574;
        case 0x227578u: goto label_227578;
        case 0x22757cu: goto label_22757c;
        case 0x227580u: goto label_227580;
        case 0x227584u: goto label_227584;
        case 0x227588u: goto label_227588;
        case 0x22758cu: goto label_22758c;
        case 0x227590u: goto label_227590;
        case 0x227594u: goto label_227594;
        case 0x227598u: goto label_227598;
        case 0x22759cu: goto label_22759c;
        default: break;
    }

    ctx->pc = 0x227380u;

label_227380:
    // 0x227380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x227380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_227384:
    // 0x227384: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x227384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_227388:
    // 0x227388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x227388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22738c:
    // 0x22738c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22738cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_227390:
    // 0x227390: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x227390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_227394:
    // 0x227394: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x227394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227398:
    // 0x227398: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x227398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_22739c:
    // 0x22739c: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x22739cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
label_2273a0:
    // 0x2273a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2273a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2273a4:
    // 0x2273a4: 0x8c510018  lw          $s1, 0x18($v0)
    ctx->pc = 0x2273a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2273a8:
    // 0x2273a8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2273a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2273ac:
    // 0x2273ac: 0x1222005f  beq         $s1, $v0, . + 4 + (0x5F << 2)
label_2273b0:
    if (ctx->pc == 0x2273B0u) {
        ctx->pc = 0x2273B4u;
        goto label_2273b4;
    }
    ctx->pc = 0x2273ACu;
    {
        const bool branch_taken_0x2273ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2273ac) {
            ctx->pc = 0x22752Cu;
            goto label_22752c;
        }
    }
    ctx->pc = 0x2273B4u;
label_2273b4:
    // 0x2273b4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2273b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2273b8:
    // 0x2273b8: 0x12220046  beq         $s1, $v0, . + 4 + (0x46 << 2)
label_2273bc:
    if (ctx->pc == 0x2273BCu) {
        ctx->pc = 0x2273C0u;
        goto label_2273c0;
    }
    ctx->pc = 0x2273B8u;
    {
        const bool branch_taken_0x2273b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2273b8) {
            ctx->pc = 0x2274D4u;
            goto label_2274d4;
        }
    }
    ctx->pc = 0x2273C0u;
label_2273c0:
    // 0x2273c0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2273c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2273c4:
    // 0x2273c4: 0x12220021  beq         $s1, $v0, . + 4 + (0x21 << 2)
label_2273c8:
    if (ctx->pc == 0x2273C8u) {
        ctx->pc = 0x2273CCu;
        goto label_2273cc;
    }
    ctx->pc = 0x2273C4u;
    {
        const bool branch_taken_0x2273c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2273c4) {
            ctx->pc = 0x22744Cu;
            goto label_22744c;
        }
    }
    ctx->pc = 0x2273CCu;
label_2273cc:
    // 0x2273cc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2273ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2273d0:
    // 0x2273d0: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
label_2273d4:
    if (ctx->pc == 0x2273D4u) {
        ctx->pc = 0x2273D8u;
        goto label_2273d8;
    }
    ctx->pc = 0x2273D0u;
    {
        const bool branch_taken_0x2273d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2273d0) {
            ctx->pc = 0x2273F4u;
            goto label_2273f4;
        }
    }
    ctx->pc = 0x2273D8u;
label_2273d8:
    // 0x2273d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2273d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2273dc:
    // 0x2273dc: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_2273e0:
    if (ctx->pc == 0x2273E0u) {
        ctx->pc = 0x2273E4u;
        goto label_2273e4;
    }
    ctx->pc = 0x2273DCu;
    {
        const bool branch_taken_0x2273dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2273dc) {
            ctx->pc = 0x2273ECu;
            goto label_2273ec;
        }
    }
    ctx->pc = 0x2273E4u;
label_2273e4:
    // 0x2273e4: 0x10000051  b           . + 4 + (0x51 << 2)
label_2273e8:
    if (ctx->pc == 0x2273E8u) {
        ctx->pc = 0x2273ECu;
        goto label_2273ec;
    }
    ctx->pc = 0x2273E4u;
    {
        const bool branch_taken_0x2273e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2273e4) {
            ctx->pc = 0x22752Cu;
            goto label_22752c;
        }
    }
    ctx->pc = 0x2273ECu;
label_2273ec:
    // 0x2273ec: 0x10000063  b           . + 4 + (0x63 << 2)
label_2273f0:
    if (ctx->pc == 0x2273F0u) {
        ctx->pc = 0x2273F4u;
        goto label_2273f4;
    }
    ctx->pc = 0x2273ECu;
    {
        const bool branch_taken_0x2273ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2273ec) {
            ctx->pc = 0x22757Cu;
            goto label_22757c;
        }
    }
    ctx->pc = 0x2273F4u;
label_2273f4:
    // 0x2273f4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2273f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2273f8:
    // 0x2273f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2273f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2273fc:
    // 0x2273fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2273fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_227400:
    // 0x227400: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x227400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_227404:
    // 0x227404: 0x40f809  jalr        $v0
label_227408:
    if (ctx->pc == 0x227408u) {
        ctx->pc = 0x22740Cu;
        goto label_22740c;
    }
    ctx->pc = 0x227404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22740Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227404u, 0x22740Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22740Cu;
label_22740c:
    // 0x22740c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x22740cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_227410:
    // 0x227410: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x227410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_227414:
    // 0x227414: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x227414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
label_227418:
    // 0x227418: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x227418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22741c:
    // 0x22741c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x22741cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_227420:
    // 0x227420: 0x40f809  jalr        $v0
label_227424:
    if (ctx->pc == 0x227424u) {
        ctx->pc = 0x227428u;
        goto label_227428;
    }
    ctx->pc = 0x227420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227428u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227420u, 0x227428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227428u;
label_227428:
    // 0x227428: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x227428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22742c:
    // 0x22742c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x22742cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_227430:
    // 0x227430: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x227430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_227434:
    // 0x227434: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x227434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_227438:
    // 0x227438: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x227438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_22743c:
    // 0x22743c: 0x40f809  jalr        $v0
label_227440:
    if (ctx->pc == 0x227440u) {
        ctx->pc = 0x227444u;
        goto label_227444;
    }
    ctx->pc = 0x22743Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227444u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22743Cu, 0x227444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227444u;
label_227444:
    // 0x227444: 0x1000004d  b           . + 4 + (0x4D << 2)
label_227448:
    if (ctx->pc == 0x227448u) {
        ctx->pc = 0x22744Cu;
        goto label_22744c;
    }
    ctx->pc = 0x227444u;
    {
        const bool branch_taken_0x227444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227444) {
            ctx->pc = 0x22757Cu;
            goto label_22757c;
        }
    }
    ctx->pc = 0x22744Cu;
label_22744c:
    // 0x22744c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x22744cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_227450:
    // 0x227450: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x227450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_227454:
    // 0x227454: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x227454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_227458:
    // 0x227458: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x227458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_22745c:
    // 0x22745c: 0x40f809  jalr        $v0
label_227460:
    if (ctx->pc == 0x227460u) {
        ctx->pc = 0x227464u;
        goto label_227464;
    }
    ctx->pc = 0x22745Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227464u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22745Cu, 0x227464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227464u;
label_227464:
    // 0x227464: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x227464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_227468:
    // 0x227468: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x227468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22746c:
    // 0x22746c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x22746cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_227470:
    // 0x227470: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x227470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_227474:
    // 0x227474: 0x40f809  jalr        $v0
label_227478:
    if (ctx->pc == 0x227478u) {
        ctx->pc = 0x22747Cu;
        goto label_22747c;
    }
    ctx->pc = 0x227474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22747Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227474u, 0x22747Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22747Cu;
label_22747c:
    // 0x22747c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x22747cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_227480:
    // 0x227480: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x227480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_227484:
    // 0x227484: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x227484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
label_227488:
    // 0x227488: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x227488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22748c:
    // 0x22748c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x22748cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_227490:
    // 0x227490: 0x40f809  jalr        $v0
label_227494:
    if (ctx->pc == 0x227494u) {
        ctx->pc = 0x227498u;
        goto label_227498;
    }
    ctx->pc = 0x227490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227498u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227490u, 0x227498u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227498u;
label_227498:
    // 0x227498: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x227498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22749c:
    // 0x22749c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x22749cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2274a0:
    // 0x2274a0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2274a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2274a4:
    // 0x2274a4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2274a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2274a8:
    // 0x2274a8: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2274a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2274ac:
    // 0x2274ac: 0x40f809  jalr        $v0
label_2274b0:
    if (ctx->pc == 0x2274B0u) {
        ctx->pc = 0x2274B4u;
        goto label_2274b4;
    }
    ctx->pc = 0x2274ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2274B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2274ACu, 0x2274B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2274B4u;
label_2274b4:
    // 0x2274b4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2274b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2274b8:
    // 0x2274b8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2274b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2274bc:
    // 0x2274bc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2274bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2274c0:
    // 0x2274c0: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2274c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2274c4:
    // 0x2274c4: 0x40f809  jalr        $v0
label_2274c8:
    if (ctx->pc == 0x2274C8u) {
        ctx->pc = 0x2274CCu;
        goto label_2274cc;
    }
    ctx->pc = 0x2274C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2274CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2274C4u, 0x2274CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2274CCu;
label_2274cc:
    // 0x2274cc: 0x1000002b  b           . + 4 + (0x2B << 2)
label_2274d0:
    if (ctx->pc == 0x2274D0u) {
        ctx->pc = 0x2274D4u;
        goto label_2274d4;
    }
    ctx->pc = 0x2274CCu;
    {
        const bool branch_taken_0x2274cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2274cc) {
            ctx->pc = 0x22757Cu;
            goto label_22757c;
        }
    }
    ctx->pc = 0x2274D4u;
label_2274d4:
    // 0x2274d4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2274d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2274d8:
    // 0x2274d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2274d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2274dc:
    // 0x2274dc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2274dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2274e0:
    // 0x2274e0: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2274e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2274e4:
    // 0x2274e4: 0x40f809  jalr        $v0
label_2274e8:
    if (ctx->pc == 0x2274E8u) {
        ctx->pc = 0x2274ECu;
        goto label_2274ec;
    }
    ctx->pc = 0x2274E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2274ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2274E4u, 0x2274ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2274ECu;
label_2274ec:
    // 0x2274ec: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2274ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2274f0:
    // 0x2274f0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2274f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2274f4:
    // 0x2274f4: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x2274f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
label_2274f8:
    // 0x2274f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2274f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2274fc:
    // 0x2274fc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2274fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_227500:
    // 0x227500: 0x40f809  jalr        $v0
label_227504:
    if (ctx->pc == 0x227504u) {
        ctx->pc = 0x227508u;
        goto label_227508;
    }
    ctx->pc = 0x227500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227508u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227500u, 0x227508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227508u;
label_227508:
    // 0x227508: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x227508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22750c:
    // 0x22750c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x22750cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_227510:
    // 0x227510: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x227510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_227514:
    // 0x227514: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x227514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_227518:
    // 0x227518: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x227518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_22751c:
    // 0x22751c: 0x40f809  jalr        $v0
label_227520:
    if (ctx->pc == 0x227520u) {
        ctx->pc = 0x227524u;
        goto label_227524;
    }
    ctx->pc = 0x22751Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227524u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22751Cu, 0x227524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227524u;
label_227524:
    // 0x227524: 0x10000015  b           . + 4 + (0x15 << 2)
label_227528:
    if (ctx->pc == 0x227528u) {
        ctx->pc = 0x22752Cu;
        goto label_22752c;
    }
    ctx->pc = 0x227524u;
    {
        const bool branch_taken_0x227524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227524) {
            ctx->pc = 0x22757Cu;
            goto label_22757c;
        }
    }
    ctx->pc = 0x22752Cu;
label_22752c:
    // 0x22752c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x22752cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_227530:
    // 0x227530: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x227530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_227534:
    // 0x227534: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x227534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_227538:
    // 0x227538: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x227538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_22753c:
    // 0x22753c: 0x40f809  jalr        $v0
label_227540:
    if (ctx->pc == 0x227540u) {
        ctx->pc = 0x227544u;
        goto label_227544;
    }
    ctx->pc = 0x22753Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227544u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22753Cu, 0x227544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227544u;
label_227544:
    // 0x227544: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x227544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_227548:
    // 0x227548: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x227548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_22754c:
    // 0x22754c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x22754cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_227550:
    // 0x227550: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x227550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_227554:
    // 0x227554: 0x40f809  jalr        $v0
label_227558:
    if (ctx->pc == 0x227558u) {
        ctx->pc = 0x22755Cu;
        goto label_22755c;
    }
    ctx->pc = 0x227554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22755Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227554u, 0x22755Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22755Cu;
label_22755c:
    // 0x22755c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x22755cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_227560:
    // 0x227560: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x227560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_227564:
    // 0x227564: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x227564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
label_227568:
    // 0x227568: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x227568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22756c:
    // 0x22756c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x22756cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_227570:
    // 0x227570: 0x40f809  jalr        $v0
label_227574:
    if (ctx->pc == 0x227574u) {
        ctx->pc = 0x227578u;
        goto label_227578;
    }
    ctx->pc = 0x227570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227578u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227570u, 0x227578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227578u;
label_227578:
    // 0x227578: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x227578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22757c:
    // 0x22757c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22757cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_227580:
    // 0x227580: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x227580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_227584:
    // 0x227584: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x227584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_227588:
    // 0x227588: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x227588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22758c:
    // 0x22758c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22758cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_227590:
    // 0x227590: 0x3e00008  jr          $ra
label_227594:
    if (ctx->pc == 0x227594u) {
        ctx->pc = 0x227598u;
        goto label_227598;
    }
    ctx->pc = 0x227590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227598u;
label_227598:
    // 0x227598: 0x0  nop
    ctx->pc = 0x227598u;
    // NOP
label_22759c:
    // 0x22759c: 0x0  nop
    ctx->pc = 0x22759cu;
    // NOP
    ctx->pc = 0x2275a0u;
}
