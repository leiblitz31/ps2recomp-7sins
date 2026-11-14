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

// Function: sub_00238260
// Address: 0x238260 - 0x2385d0
void sub_00238260_0x238260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238260_0x238260");
#endif

    switch (ctx->pc) {
        case 0x238260u: goto label_238260;
        case 0x238264u: goto label_238264;
        case 0x238268u: goto label_238268;
        case 0x23826cu: goto label_23826c;
        case 0x238270u: goto label_238270;
        case 0x238274u: goto label_238274;
        case 0x238278u: goto label_238278;
        case 0x23827cu: goto label_23827c;
        case 0x238280u: goto label_238280;
        case 0x238284u: goto label_238284;
        case 0x238288u: goto label_238288;
        case 0x23828cu: goto label_23828c;
        case 0x238290u: goto label_238290;
        case 0x238294u: goto label_238294;
        case 0x238298u: goto label_238298;
        case 0x23829cu: goto label_23829c;
        case 0x2382a0u: goto label_2382a0;
        case 0x2382a4u: goto label_2382a4;
        case 0x2382a8u: goto label_2382a8;
        case 0x2382acu: goto label_2382ac;
        case 0x2382b0u: goto label_2382b0;
        case 0x2382b4u: goto label_2382b4;
        case 0x2382b8u: goto label_2382b8;
        case 0x2382bcu: goto label_2382bc;
        case 0x2382c0u: goto label_2382c0;
        case 0x2382c4u: goto label_2382c4;
        case 0x2382c8u: goto label_2382c8;
        case 0x2382ccu: goto label_2382cc;
        case 0x2382d0u: goto label_2382d0;
        case 0x2382d4u: goto label_2382d4;
        case 0x2382d8u: goto label_2382d8;
        case 0x2382dcu: goto label_2382dc;
        case 0x2382e0u: goto label_2382e0;
        case 0x2382e4u: goto label_2382e4;
        case 0x2382e8u: goto label_2382e8;
        case 0x2382ecu: goto label_2382ec;
        case 0x2382f0u: goto label_2382f0;
        case 0x2382f4u: goto label_2382f4;
        case 0x2382f8u: goto label_2382f8;
        case 0x2382fcu: goto label_2382fc;
        case 0x238300u: goto label_238300;
        case 0x238304u: goto label_238304;
        case 0x238308u: goto label_238308;
        case 0x23830cu: goto label_23830c;
        case 0x238310u: goto label_238310;
        case 0x238314u: goto label_238314;
        case 0x238318u: goto label_238318;
        case 0x23831cu: goto label_23831c;
        case 0x238320u: goto label_238320;
        case 0x238324u: goto label_238324;
        case 0x238328u: goto label_238328;
        case 0x23832cu: goto label_23832c;
        case 0x238330u: goto label_238330;
        case 0x238334u: goto label_238334;
        case 0x238338u: goto label_238338;
        case 0x23833cu: goto label_23833c;
        case 0x238340u: goto label_238340;
        case 0x238344u: goto label_238344;
        case 0x238348u: goto label_238348;
        case 0x23834cu: goto label_23834c;
        case 0x238350u: goto label_238350;
        case 0x238354u: goto label_238354;
        case 0x238358u: goto label_238358;
        case 0x23835cu: goto label_23835c;
        case 0x238360u: goto label_238360;
        case 0x238364u: goto label_238364;
        case 0x238368u: goto label_238368;
        case 0x23836cu: goto label_23836c;
        case 0x238370u: goto label_238370;
        case 0x238374u: goto label_238374;
        case 0x238378u: goto label_238378;
        case 0x23837cu: goto label_23837c;
        case 0x238380u: goto label_238380;
        case 0x238384u: goto label_238384;
        case 0x238388u: goto label_238388;
        case 0x23838cu: goto label_23838c;
        case 0x238390u: goto label_238390;
        case 0x238394u: goto label_238394;
        case 0x238398u: goto label_238398;
        case 0x23839cu: goto label_23839c;
        case 0x2383a0u: goto label_2383a0;
        case 0x2383a4u: goto label_2383a4;
        case 0x2383a8u: goto label_2383a8;
        case 0x2383acu: goto label_2383ac;
        case 0x2383b0u: goto label_2383b0;
        case 0x2383b4u: goto label_2383b4;
        case 0x2383b8u: goto label_2383b8;
        case 0x2383bcu: goto label_2383bc;
        case 0x2383c0u: goto label_2383c0;
        case 0x2383c4u: goto label_2383c4;
        case 0x2383c8u: goto label_2383c8;
        case 0x2383ccu: goto label_2383cc;
        case 0x2383d0u: goto label_2383d0;
        case 0x2383d4u: goto label_2383d4;
        case 0x2383d8u: goto label_2383d8;
        case 0x2383dcu: goto label_2383dc;
        case 0x2383e0u: goto label_2383e0;
        case 0x2383e4u: goto label_2383e4;
        case 0x2383e8u: goto label_2383e8;
        case 0x2383ecu: goto label_2383ec;
        case 0x2383f0u: goto label_2383f0;
        case 0x2383f4u: goto label_2383f4;
        case 0x2383f8u: goto label_2383f8;
        case 0x2383fcu: goto label_2383fc;
        case 0x238400u: goto label_238400;
        case 0x238404u: goto label_238404;
        case 0x238408u: goto label_238408;
        case 0x23840cu: goto label_23840c;
        case 0x238410u: goto label_238410;
        case 0x238414u: goto label_238414;
        case 0x238418u: goto label_238418;
        case 0x23841cu: goto label_23841c;
        case 0x238420u: goto label_238420;
        case 0x238424u: goto label_238424;
        case 0x238428u: goto label_238428;
        case 0x23842cu: goto label_23842c;
        case 0x238430u: goto label_238430;
        case 0x238434u: goto label_238434;
        case 0x238438u: goto label_238438;
        case 0x23843cu: goto label_23843c;
        case 0x238440u: goto label_238440;
        case 0x238444u: goto label_238444;
        case 0x238448u: goto label_238448;
        case 0x23844cu: goto label_23844c;
        case 0x238450u: goto label_238450;
        case 0x238454u: goto label_238454;
        case 0x238458u: goto label_238458;
        case 0x23845cu: goto label_23845c;
        case 0x238460u: goto label_238460;
        case 0x238464u: goto label_238464;
        case 0x238468u: goto label_238468;
        case 0x23846cu: goto label_23846c;
        case 0x238470u: goto label_238470;
        case 0x238474u: goto label_238474;
        case 0x238478u: goto label_238478;
        case 0x23847cu: goto label_23847c;
        case 0x238480u: goto label_238480;
        case 0x238484u: goto label_238484;
        case 0x238488u: goto label_238488;
        case 0x23848cu: goto label_23848c;
        case 0x238490u: goto label_238490;
        case 0x238494u: goto label_238494;
        case 0x238498u: goto label_238498;
        case 0x23849cu: goto label_23849c;
        case 0x2384a0u: goto label_2384a0;
        case 0x2384a4u: goto label_2384a4;
        case 0x2384a8u: goto label_2384a8;
        case 0x2384acu: goto label_2384ac;
        case 0x2384b0u: goto label_2384b0;
        case 0x2384b4u: goto label_2384b4;
        case 0x2384b8u: goto label_2384b8;
        case 0x2384bcu: goto label_2384bc;
        case 0x2384c0u: goto label_2384c0;
        case 0x2384c4u: goto label_2384c4;
        case 0x2384c8u: goto label_2384c8;
        case 0x2384ccu: goto label_2384cc;
        case 0x2384d0u: goto label_2384d0;
        case 0x2384d4u: goto label_2384d4;
        case 0x2384d8u: goto label_2384d8;
        case 0x2384dcu: goto label_2384dc;
        case 0x2384e0u: goto label_2384e0;
        case 0x2384e4u: goto label_2384e4;
        case 0x2384e8u: goto label_2384e8;
        case 0x2384ecu: goto label_2384ec;
        case 0x2384f0u: goto label_2384f0;
        case 0x2384f4u: goto label_2384f4;
        case 0x2384f8u: goto label_2384f8;
        case 0x2384fcu: goto label_2384fc;
        case 0x238500u: goto label_238500;
        case 0x238504u: goto label_238504;
        case 0x238508u: goto label_238508;
        case 0x23850cu: goto label_23850c;
        case 0x238510u: goto label_238510;
        case 0x238514u: goto label_238514;
        case 0x238518u: goto label_238518;
        case 0x23851cu: goto label_23851c;
        case 0x238520u: goto label_238520;
        case 0x238524u: goto label_238524;
        case 0x238528u: goto label_238528;
        case 0x23852cu: goto label_23852c;
        case 0x238530u: goto label_238530;
        case 0x238534u: goto label_238534;
        case 0x238538u: goto label_238538;
        case 0x23853cu: goto label_23853c;
        case 0x238540u: goto label_238540;
        case 0x238544u: goto label_238544;
        case 0x238548u: goto label_238548;
        case 0x23854cu: goto label_23854c;
        case 0x238550u: goto label_238550;
        case 0x238554u: goto label_238554;
        case 0x238558u: goto label_238558;
        case 0x23855cu: goto label_23855c;
        case 0x238560u: goto label_238560;
        case 0x238564u: goto label_238564;
        case 0x238568u: goto label_238568;
        case 0x23856cu: goto label_23856c;
        case 0x238570u: goto label_238570;
        case 0x238574u: goto label_238574;
        case 0x238578u: goto label_238578;
        case 0x23857cu: goto label_23857c;
        case 0x238580u: goto label_238580;
        case 0x238584u: goto label_238584;
        case 0x238588u: goto label_238588;
        case 0x23858cu: goto label_23858c;
        case 0x238590u: goto label_238590;
        case 0x238594u: goto label_238594;
        case 0x238598u: goto label_238598;
        case 0x23859cu: goto label_23859c;
        case 0x2385a0u: goto label_2385a0;
        case 0x2385a4u: goto label_2385a4;
        case 0x2385a8u: goto label_2385a8;
        case 0x2385acu: goto label_2385ac;
        case 0x2385b0u: goto label_2385b0;
        case 0x2385b4u: goto label_2385b4;
        case 0x2385b8u: goto label_2385b8;
        case 0x2385bcu: goto label_2385bc;
        case 0x2385c0u: goto label_2385c0;
        case 0x2385c4u: goto label_2385c4;
        case 0x2385c8u: goto label_2385c8;
        case 0x2385ccu: goto label_2385cc;
        default: break;
    }

    ctx->pc = 0x238260u;

label_238260:
    // 0x238260: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x238260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_238264:
    // 0x238264: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x238264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_238268:
    // 0x238268: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x238268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23826c:
    // 0x23826c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23826cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_238270:
    // 0x238270: 0x8f82bbc4  lw          $v0, -0x443C($gp)
    ctx->pc = 0x238270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949828)));
label_238274:
    // 0x238274: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x238274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_238278:
    // 0x238278: 0xaf83bbc4  sw          $v1, -0x443C($gp)
    ctx->pc = 0x238278u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949828), GPR_U32(ctx, 3));
label_23827c:
    // 0x23827c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23827cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_238280:
    // 0x238280: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x238280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_238284:
    // 0x238284: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_238288:
    if (ctx->pc == 0x238288u) {
        ctx->pc = 0x23828Cu;
        goto label_23828c;
    }
    ctx->pc = 0x238284u;
    {
        const bool branch_taken_0x238284 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x238284) {
            ctx->pc = 0x238298u;
            goto label_238298;
        }
    }
    ctx->pc = 0x23828Cu;
label_23828c:
    // 0x23828c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_238290:
    if (ctx->pc == 0x238290u) {
        ctx->pc = 0x238294u;
        goto label_238294;
    }
    ctx->pc = 0x23828Cu;
    {
        const bool branch_taken_0x23828c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23828c) {
            ctx->pc = 0x238298u;
            goto label_238298;
        }
    }
    ctx->pc = 0x238294u;
label_238294:
    // 0x238294: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x238294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_238298:
    // 0x238298: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_23829c:
    if (ctx->pc == 0x23829Cu) {
        ctx->pc = 0x2382A0u;
        goto label_2382a0;
    }
    ctx->pc = 0x238298u;
    {
        const bool branch_taken_0x238298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238298) {
            ctx->pc = 0x2382B4u;
            goto label_2382b4;
        }
    }
    ctx->pc = 0x2382A0u;
label_2382a0:
    // 0x2382a0: 0xf  sync
    ctx->pc = 0x2382a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2382a4:
    // 0x2382a4: 0x42000038  ei
    ctx->pc = 0x2382a4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_2382a8:
    // 0x2382a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2382a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2382ac:
    // 0x2382ac: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_2382b0:
    if (ctx->pc == 0x2382B0u) {
        ctx->pc = 0x2382B4u;
        goto label_2382b4;
    }
    ctx->pc = 0x2382ACu;
    {
        const bool branch_taken_0x2382ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2382ac) {
            ctx->pc = 0x2385B4u;
            goto label_2385b4;
        }
    }
    ctx->pc = 0x2382B4u;
label_2382b4:
    // 0x2382b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2382b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2382b8:
    // 0x2382b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2382b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2382bc:
    // 0x2382bc: 0xc0bf252  jal         func_2FC948
label_2382c0:
    if (ctx->pc == 0x2382C0u) {
        ctx->pc = 0x2382C4u;
        goto label_2382c4;
    }
    ctx->pc = 0x2382BCu;
    SET_GPR_U32(ctx, 31, 0x2382C4u);
    ctx->pc = 0x2FC948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC948u, 0x2382BCu, 0x2382C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2382C4u;
label_2382c4:
    // 0x2382c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2382c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2382c8:
    // 0x2382c8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2382cc:
    if (ctx->pc == 0x2382CCu) {
        ctx->pc = 0x2382D0u;
        goto label_2382d0;
    }
    ctx->pc = 0x2382C8u;
    {
        const bool branch_taken_0x2382c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2382c8) {
            ctx->pc = 0x2382E4u;
            goto label_2382e4;
        }
    }
    ctx->pc = 0x2382D0u;
label_2382d0:
    // 0x2382d0: 0xf  sync
    ctx->pc = 0x2382d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2382d4:
    // 0x2382d4: 0x42000038  ei
    ctx->pc = 0x2382d4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_2382d8:
    // 0x2382d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2382d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2382dc:
    // 0x2382dc: 0x100000b5  b           . + 4 + (0xB5 << 2)
label_2382e0:
    if (ctx->pc == 0x2382E0u) {
        ctx->pc = 0x2382E4u;
        goto label_2382e4;
    }
    ctx->pc = 0x2382DCu;
    {
        const bool branch_taken_0x2382dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2382dc) {
            ctx->pc = 0x2385B4u;
            goto label_2385b4;
        }
    }
    ctx->pc = 0x2382E4u;
label_2382e4:
    // 0x2382e4: 0xc12242c  jal         func_4890B0
label_2382e8:
    if (ctx->pc == 0x2382E8u) {
        ctx->pc = 0x2382ECu;
        goto label_2382ec;
    }
    ctx->pc = 0x2382E4u;
    SET_GPR_U32(ctx, 31, 0x2382ECu);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x2382E4u, 0x2382ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2382ECu;
label_2382ec:
    // 0x2382ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2382ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2382f0:
    // 0x2382f0: 0x120000a8  beqz        $s0, . + 4 + (0xA8 << 2)
label_2382f4:
    if (ctx->pc == 0x2382F4u) {
        ctx->pc = 0x2382F8u;
        goto label_2382f8;
    }
    ctx->pc = 0x2382F0u;
    {
        const bool branch_taken_0x2382f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2382f0) {
            ctx->pc = 0x238594u;
            goto label_238594;
        }
    }
    ctx->pc = 0x2382F8u;
label_2382f8:
    // 0x2382f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2382f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2382fc:
    // 0x2382fc: 0xc105f96  jal         func_417E58
label_238300:
    if (ctx->pc == 0x238300u) {
        ctx->pc = 0x238304u;
        goto label_238304;
    }
    ctx->pc = 0x2382FCu;
    SET_GPR_U32(ctx, 31, 0x238304u);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x2382FCu, 0x238304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238304u;
label_238304:
    // 0x238304: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
label_238308:
    if (ctx->pc == 0x238308u) {
        ctx->pc = 0x23830Cu;
        goto label_23830c;
    }
    ctx->pc = 0x238304u;
    {
        const bool branch_taken_0x238304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238304) {
            ctx->pc = 0x238594u;
            goto label_238594;
        }
    }
    ctx->pc = 0x23830Cu;
label_23830c:
    // 0x23830c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x23830cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_238310:
    // 0x238310: 0xc440e898  lwc1        $f0, -0x1768($v0)
    ctx->pc = 0x238310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238314:
    // 0x238314: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x238314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_238318:
    // 0x238318: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x238318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23831c:
    // 0x23831c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x23831cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_238320:
    // 0x238320: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x238320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_238324:
    // 0x238324: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x238324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_238328:
    // 0x238328: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x238328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23832c:
    // 0x23832c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x23832cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_238330:
    // 0x238330: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x238330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_238334:
    // 0x238334: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x238334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_238338:
    // 0x238338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23833c:
    // 0x23833c: 0x0  nop
    ctx->pc = 0x23833cu;
    // NOP
label_238340:
    // 0x238340: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x238340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_238344:
    // 0x238344: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x238344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_238348:
    // 0x238348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23834c:
    // 0x23834c: 0x0  nop
    ctx->pc = 0x23834cu;
    // NOP
label_238350:
    // 0x238350: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x238350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_238354:
    // 0x238354: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x238354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_238358:
    // 0x238358: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23835c:
    // 0x23835c: 0x0  nop
    ctx->pc = 0x23835cu;
    // NOP
label_238360:
    // 0x238360: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x238360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_238364:
    // 0x238364: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x238364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_238368:
    // 0x238368: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23836c:
    // 0x23836c: 0x0  nop
    ctx->pc = 0x23836cu;
    // NOP
label_238370:
    // 0x238370: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x238370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_238374:
    // 0x238374: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x238374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_238378:
    // 0x238378: 0xc440e898  lwc1        $f0, -0x1768($v0)
    ctx->pc = 0x238378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23837c:
    // 0x23837c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x23837cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_238380:
    // 0x238380: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x238380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238384:
    // 0x238384: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x238384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_238388:
    // 0x238388: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x238388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_23838c:
    // 0x23838c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23838cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_238390:
    // 0x238390: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x238390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238394:
    // 0x238394: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x238394u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_238398:
    // 0x238398: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x238398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_23839c:
    // 0x23839c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23839cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_2383a0:
    // 0x2383a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2383a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2383a4:
    // 0x2383a4: 0x0  nop
    ctx->pc = 0x2383a4u;
    // NOP
label_2383a8:
    // 0x2383a8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2383a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2383ac:
    // 0x2383ac: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2383acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_2383b0:
    // 0x2383b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2383b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2383b4:
    // 0x2383b4: 0x0  nop
    ctx->pc = 0x2383b4u;
    // NOP
label_2383b8:
    // 0x2383b8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2383b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_2383bc:
    // 0x2383bc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2383bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_2383c0:
    // 0x2383c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2383c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2383c4:
    // 0x2383c4: 0x0  nop
    ctx->pc = 0x2383c4u;
    // NOP
label_2383c8:
    // 0x2383c8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2383c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2383cc:
    // 0x2383cc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2383ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_2383d0:
    // 0x2383d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2383d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2383d4:
    // 0x2383d4: 0x0  nop
    ctx->pc = 0x2383d4u;
    // NOP
label_2383d8:
    // 0x2383d8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2383d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_2383dc:
    // 0x2383dc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2383dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2383e0:
    // 0x2383e0: 0xc440e898  lwc1        $f0, -0x1768($v0)
    ctx->pc = 0x2383e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2383e4:
    // 0x2383e4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2383e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_2383e8:
    // 0x2383e8: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x2383e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2383ec:
    // 0x2383ec: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2383ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_2383f0:
    // 0x2383f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2383f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2383f4:
    // 0x2383f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2383f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2383f8:
    // 0x2383f8: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x2383f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2383fc:
    // 0x2383fc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2383fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_238400:
    // 0x238400: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x238400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_238404:
    // 0x238404: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x238404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_238408:
    // 0x238408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23840c:
    // 0x23840c: 0x0  nop
    ctx->pc = 0x23840cu;
    // NOP
label_238410:
    // 0x238410: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x238410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_238414:
    // 0x238414: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x238414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_238418:
    // 0x238418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23841c:
    // 0x23841c: 0x0  nop
    ctx->pc = 0x23841cu;
    // NOP
label_238420:
    // 0x238420: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x238420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_238424:
    // 0x238424: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x238424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_238428:
    // 0x238428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23842c:
    // 0x23842c: 0x0  nop
    ctx->pc = 0x23842cu;
    // NOP
label_238430:
    // 0x238430: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x238430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_238434:
    // 0x238434: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x238434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_238438:
    // 0x238438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23843c:
    // 0x23843c: 0x0  nop
    ctx->pc = 0x23843cu;
    // NOP
label_238440:
    // 0x238440: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x238440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_238444:
    // 0x238444: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x238444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_238448:
    // 0x238448: 0xc440e898  lwc1        $f0, -0x1768($v0)
    ctx->pc = 0x238448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23844c:
    // 0x23844c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x23844cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_238450:
    // 0x238450: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x238450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238454:
    // 0x238454: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x238454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_238458:
    // 0x238458: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x238458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_23845c:
    // 0x23845c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23845cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_238460:
    // 0x238460: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x238460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238464:
    // 0x238464: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x238464u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_238468:
    // 0x238468: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x238468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_23846c:
    // 0x23846c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23846cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_238470:
    // 0x238470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238474:
    // 0x238474: 0x0  nop
    ctx->pc = 0x238474u;
    // NOP
label_238478:
    // 0x238478: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x238478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_23847c:
    // 0x23847c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23847cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_238480:
    // 0x238480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238484:
    // 0x238484: 0x0  nop
    ctx->pc = 0x238484u;
    // NOP
label_238488:
    // 0x238488: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x238488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_23848c:
    // 0x23848c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23848cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_238490:
    // 0x238490: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238494:
    // 0x238494: 0x0  nop
    ctx->pc = 0x238494u;
    // NOP
label_238498:
    // 0x238498: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x238498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_23849c:
    // 0x23849c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23849cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_2384a0:
    // 0x2384a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2384a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2384a4:
    // 0x2384a4: 0x0  nop
    ctx->pc = 0x2384a4u;
    // NOP
label_2384a8:
    // 0x2384a8: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x2384a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_2384ac:
    // 0x2384ac: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2384acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2384b0:
    // 0x2384b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2384b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2384b4:
    // 0x2384b4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2384b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2384b8:
    // 0x2384b8: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2384b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2384bc:
    // 0x2384bc: 0x40f809  jalr        $v0
label_2384c0:
    if (ctx->pc == 0x2384C0u) {
        ctx->pc = 0x2384C4u;
        goto label_2384c4;
    }
    ctx->pc = 0x2384BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2384C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2384BCu, 0x2384C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2384C4u;
label_2384c4:
    // 0x2384c4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2384c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2384c8:
    // 0x2384c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2384c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2384cc:
    // 0x2384cc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2384ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2384d0:
    // 0x2384d0: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2384d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2384d4:
    // 0x2384d4: 0x40f809  jalr        $v0
label_2384d8:
    if (ctx->pc == 0x2384D8u) {
        ctx->pc = 0x2384DCu;
        goto label_2384dc;
    }
    ctx->pc = 0x2384D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2384DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2384D4u, 0x2384DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2384DCu;
label_2384dc:
    // 0x2384dc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2384dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2384e0:
    // 0x2384e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2384e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2384e4:
    // 0x2384e4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2384e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2384e8:
    // 0x2384e8: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2384e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2384ec:
    // 0x2384ec: 0x40f809  jalr        $v0
label_2384f0:
    if (ctx->pc == 0x2384F0u) {
        ctx->pc = 0x2384F4u;
        goto label_2384f4;
    }
    ctx->pc = 0x2384ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2384F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2384ECu, 0x2384F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2384F4u;
label_2384f4:
    // 0x2384f4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2384f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2384f8:
    // 0x2384f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2384f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2384fc:
    // 0x2384fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2384fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_238500:
    // 0x238500: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x238500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_238504:
    // 0x238504: 0x40f809  jalr        $v0
label_238508:
    if (ctx->pc == 0x238508u) {
        ctx->pc = 0x23850Cu;
        goto label_23850c;
    }
    ctx->pc = 0x238504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23850Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238504u, 0x23850Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23850Cu;
label_23850c:
    // 0x23850c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x23850cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_238510:
    // 0x238510: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x238510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238514:
    // 0x238514: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x238514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_238518:
    // 0x238518: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x238518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_23851c:
    // 0x23851c: 0x40f809  jalr        $v0
label_238520:
    if (ctx->pc == 0x238520u) {
        ctx->pc = 0x238524u;
        goto label_238524;
    }
    ctx->pc = 0x23851Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238524u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23851Cu, 0x238524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238524u;
label_238524:
    // 0x238524: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x238524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_238528:
    // 0x238528: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x238528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23852c:
    // 0x23852c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x23852cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_238530:
    // 0x238530: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x238530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_238534:
    // 0x238534: 0x40f809  jalr        $v0
label_238538:
    if (ctx->pc == 0x238538u) {
        ctx->pc = 0x23853Cu;
        goto label_23853c;
    }
    ctx->pc = 0x238534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23853Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238534u, 0x23853Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23853Cu;
label_23853c:
    // 0x23853c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x23853cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_238540:
    // 0x238540: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x238540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_238544:
    // 0x238544: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x238544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_238548:
    // 0x238548: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x238548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_23854c:
    // 0x23854c: 0x40f809  jalr        $v0
label_238550:
    if (ctx->pc == 0x238550u) {
        ctx->pc = 0x238554u;
        goto label_238554;
    }
    ctx->pc = 0x23854Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238554u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23854Cu, 0x238554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238554u;
label_238554:
    // 0x238554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238558:
    // 0x238558: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x238558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_23855c:
    // 0x23855c: 0xc08e174  jal         func_2385D0
label_238560:
    if (ctx->pc == 0x238560u) {
        ctx->pc = 0x238564u;
        goto label_238564;
    }
    ctx->pc = 0x23855Cu;
    SET_GPR_U32(ctx, 31, 0x238564u);
    ctx->pc = 0x2385D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2385D0u, 0x23855Cu, 0x238564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238564u;
label_238564:
    // 0x238564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238568:
    // 0x238568: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x238568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_23856c:
    // 0x23856c: 0xc08e24c  jal         func_238930
label_238570:
    if (ctx->pc == 0x238570u) {
        ctx->pc = 0x238574u;
        goto label_238574;
    }
    ctx->pc = 0x23856Cu;
    SET_GPR_U32(ctx, 31, 0x238574u);
    ctx->pc = 0x238930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238930u, 0x23856Cu, 0x238574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238574u;
label_238574:
    // 0x238574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238578:
    // 0x238578: 0xc105f9e  jal         func_417E78
label_23857c:
    if (ctx->pc == 0x23857Cu) {
        ctx->pc = 0x238580u;
        goto label_238580;
    }
    ctx->pc = 0x238578u;
    SET_GPR_U32(ctx, 31, 0x238580u);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x238578u, 0x238580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238580u;
label_238580:
    // 0x238580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238584:
    // 0x238584: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x238584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_238588:
    // 0x238588: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x238588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23858c:
    // 0x23858c: 0xc105fb4  jal         func_417ED0
label_238590:
    if (ctx->pc == 0x238590u) {
        ctx->pc = 0x238594u;
        goto label_238594;
    }
    ctx->pc = 0x23858Cu;
    SET_GPR_U32(ctx, 31, 0x238594u);
    ctx->pc = 0x417ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417ED0u, 0x23858Cu, 0x238594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238594u;
label_238594:
    // 0x238594: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x238594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_238598:
    // 0x238598: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x238598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23859c:
    // 0x23859c: 0xc0bf252  jal         func_2FC948
label_2385a0:
    if (ctx->pc == 0x2385A0u) {
        ctx->pc = 0x2385A4u;
        goto label_2385a4;
    }
    ctx->pc = 0x23859Cu;
    SET_GPR_U32(ctx, 31, 0x2385A4u);
    ctx->pc = 0x2FC948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC948u, 0x23859Cu, 0x2385A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2385A4u;
label_2385a4:
    // 0x2385a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2385a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2385a8:
    // 0x2385a8: 0xf  sync
    ctx->pc = 0x2385a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2385ac:
    // 0x2385ac: 0x42000038  ei
    ctx->pc = 0x2385acu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_2385b0:
    // 0x2385b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2385b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2385b4:
    // 0x2385b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2385b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2385b8:
    // 0x2385b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2385b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2385bc:
    // 0x2385bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2385bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2385c0:
    // 0x2385c0: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x2385c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2385c4:
    // 0x2385c4: 0x3e00008  jr          $ra
label_2385c8:
    if (ctx->pc == 0x2385C8u) {
        ctx->pc = 0x2385CCu;
        goto label_2385cc;
    }
    ctx->pc = 0x2385C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2385C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2385CCu;
label_2385cc:
    // 0x2385cc: 0x0  nop
    ctx->pc = 0x2385ccu;
    // NOP
    ctx->pc = 0x2385d0u;
}
