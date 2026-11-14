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

// Function: sub_00484250
// Address: 0x484250 - 0x484560
void sub_00484250_0x484250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484250_0x484250");
#endif

    switch (ctx->pc) {
        case 0x484250u: goto label_484250;
        case 0x484254u: goto label_484254;
        case 0x484258u: goto label_484258;
        case 0x48425cu: goto label_48425c;
        case 0x484260u: goto label_484260;
        case 0x484264u: goto label_484264;
        case 0x484268u: goto label_484268;
        case 0x48426cu: goto label_48426c;
        case 0x484270u: goto label_484270;
        case 0x484274u: goto label_484274;
        case 0x484278u: goto label_484278;
        case 0x48427cu: goto label_48427c;
        case 0x484280u: goto label_484280;
        case 0x484284u: goto label_484284;
        case 0x484288u: goto label_484288;
        case 0x48428cu: goto label_48428c;
        case 0x484290u: goto label_484290;
        case 0x484294u: goto label_484294;
        case 0x484298u: goto label_484298;
        case 0x48429cu: goto label_48429c;
        case 0x4842a0u: goto label_4842a0;
        case 0x4842a4u: goto label_4842a4;
        case 0x4842a8u: goto label_4842a8;
        case 0x4842acu: goto label_4842ac;
        case 0x4842b0u: goto label_4842b0;
        case 0x4842b4u: goto label_4842b4;
        case 0x4842b8u: goto label_4842b8;
        case 0x4842bcu: goto label_4842bc;
        case 0x4842c0u: goto label_4842c0;
        case 0x4842c4u: goto label_4842c4;
        case 0x4842c8u: goto label_4842c8;
        case 0x4842ccu: goto label_4842cc;
        case 0x4842d0u: goto label_4842d0;
        case 0x4842d4u: goto label_4842d4;
        case 0x4842d8u: goto label_4842d8;
        case 0x4842dcu: goto label_4842dc;
        case 0x4842e0u: goto label_4842e0;
        case 0x4842e4u: goto label_4842e4;
        case 0x4842e8u: goto label_4842e8;
        case 0x4842ecu: goto label_4842ec;
        case 0x4842f0u: goto label_4842f0;
        case 0x4842f4u: goto label_4842f4;
        case 0x4842f8u: goto label_4842f8;
        case 0x4842fcu: goto label_4842fc;
        case 0x484300u: goto label_484300;
        case 0x484304u: goto label_484304;
        case 0x484308u: goto label_484308;
        case 0x48430cu: goto label_48430c;
        case 0x484310u: goto label_484310;
        case 0x484314u: goto label_484314;
        case 0x484318u: goto label_484318;
        case 0x48431cu: goto label_48431c;
        case 0x484320u: goto label_484320;
        case 0x484324u: goto label_484324;
        case 0x484328u: goto label_484328;
        case 0x48432cu: goto label_48432c;
        case 0x484330u: goto label_484330;
        case 0x484334u: goto label_484334;
        case 0x484338u: goto label_484338;
        case 0x48433cu: goto label_48433c;
        case 0x484340u: goto label_484340;
        case 0x484344u: goto label_484344;
        case 0x484348u: goto label_484348;
        case 0x48434cu: goto label_48434c;
        case 0x484350u: goto label_484350;
        case 0x484354u: goto label_484354;
        case 0x484358u: goto label_484358;
        case 0x48435cu: goto label_48435c;
        case 0x484360u: goto label_484360;
        case 0x484364u: goto label_484364;
        case 0x484368u: goto label_484368;
        case 0x48436cu: goto label_48436c;
        case 0x484370u: goto label_484370;
        case 0x484374u: goto label_484374;
        case 0x484378u: goto label_484378;
        case 0x48437cu: goto label_48437c;
        case 0x484380u: goto label_484380;
        case 0x484384u: goto label_484384;
        case 0x484388u: goto label_484388;
        case 0x48438cu: goto label_48438c;
        case 0x484390u: goto label_484390;
        case 0x484394u: goto label_484394;
        case 0x484398u: goto label_484398;
        case 0x48439cu: goto label_48439c;
        case 0x4843a0u: goto label_4843a0;
        case 0x4843a4u: goto label_4843a4;
        case 0x4843a8u: goto label_4843a8;
        case 0x4843acu: goto label_4843ac;
        case 0x4843b0u: goto label_4843b0;
        case 0x4843b4u: goto label_4843b4;
        case 0x4843b8u: goto label_4843b8;
        case 0x4843bcu: goto label_4843bc;
        case 0x4843c0u: goto label_4843c0;
        case 0x4843c4u: goto label_4843c4;
        case 0x4843c8u: goto label_4843c8;
        case 0x4843ccu: goto label_4843cc;
        case 0x4843d0u: goto label_4843d0;
        case 0x4843d4u: goto label_4843d4;
        case 0x4843d8u: goto label_4843d8;
        case 0x4843dcu: goto label_4843dc;
        case 0x4843e0u: goto label_4843e0;
        case 0x4843e4u: goto label_4843e4;
        case 0x4843e8u: goto label_4843e8;
        case 0x4843ecu: goto label_4843ec;
        case 0x4843f0u: goto label_4843f0;
        case 0x4843f4u: goto label_4843f4;
        case 0x4843f8u: goto label_4843f8;
        case 0x4843fcu: goto label_4843fc;
        case 0x484400u: goto label_484400;
        case 0x484404u: goto label_484404;
        case 0x484408u: goto label_484408;
        case 0x48440cu: goto label_48440c;
        case 0x484410u: goto label_484410;
        case 0x484414u: goto label_484414;
        case 0x484418u: goto label_484418;
        case 0x48441cu: goto label_48441c;
        case 0x484420u: goto label_484420;
        case 0x484424u: goto label_484424;
        case 0x484428u: goto label_484428;
        case 0x48442cu: goto label_48442c;
        case 0x484430u: goto label_484430;
        case 0x484434u: goto label_484434;
        case 0x484438u: goto label_484438;
        case 0x48443cu: goto label_48443c;
        case 0x484440u: goto label_484440;
        case 0x484444u: goto label_484444;
        case 0x484448u: goto label_484448;
        case 0x48444cu: goto label_48444c;
        case 0x484450u: goto label_484450;
        case 0x484454u: goto label_484454;
        case 0x484458u: goto label_484458;
        case 0x48445cu: goto label_48445c;
        case 0x484460u: goto label_484460;
        case 0x484464u: goto label_484464;
        case 0x484468u: goto label_484468;
        case 0x48446cu: goto label_48446c;
        case 0x484470u: goto label_484470;
        case 0x484474u: goto label_484474;
        case 0x484478u: goto label_484478;
        case 0x48447cu: goto label_48447c;
        case 0x484480u: goto label_484480;
        case 0x484484u: goto label_484484;
        case 0x484488u: goto label_484488;
        case 0x48448cu: goto label_48448c;
        case 0x484490u: goto label_484490;
        case 0x484494u: goto label_484494;
        case 0x484498u: goto label_484498;
        case 0x48449cu: goto label_48449c;
        case 0x4844a0u: goto label_4844a0;
        case 0x4844a4u: goto label_4844a4;
        case 0x4844a8u: goto label_4844a8;
        case 0x4844acu: goto label_4844ac;
        case 0x4844b0u: goto label_4844b0;
        case 0x4844b4u: goto label_4844b4;
        case 0x4844b8u: goto label_4844b8;
        case 0x4844bcu: goto label_4844bc;
        case 0x4844c0u: goto label_4844c0;
        case 0x4844c4u: goto label_4844c4;
        case 0x4844c8u: goto label_4844c8;
        case 0x4844ccu: goto label_4844cc;
        case 0x4844d0u: goto label_4844d0;
        case 0x4844d4u: goto label_4844d4;
        case 0x4844d8u: goto label_4844d8;
        case 0x4844dcu: goto label_4844dc;
        case 0x4844e0u: goto label_4844e0;
        case 0x4844e4u: goto label_4844e4;
        case 0x4844e8u: goto label_4844e8;
        case 0x4844ecu: goto label_4844ec;
        case 0x4844f0u: goto label_4844f0;
        case 0x4844f4u: goto label_4844f4;
        case 0x4844f8u: goto label_4844f8;
        case 0x4844fcu: goto label_4844fc;
        case 0x484500u: goto label_484500;
        case 0x484504u: goto label_484504;
        case 0x484508u: goto label_484508;
        case 0x48450cu: goto label_48450c;
        case 0x484510u: goto label_484510;
        case 0x484514u: goto label_484514;
        case 0x484518u: goto label_484518;
        case 0x48451cu: goto label_48451c;
        case 0x484520u: goto label_484520;
        case 0x484524u: goto label_484524;
        case 0x484528u: goto label_484528;
        case 0x48452cu: goto label_48452c;
        case 0x484530u: goto label_484530;
        case 0x484534u: goto label_484534;
        case 0x484538u: goto label_484538;
        case 0x48453cu: goto label_48453c;
        case 0x484540u: goto label_484540;
        case 0x484544u: goto label_484544;
        case 0x484548u: goto label_484548;
        case 0x48454cu: goto label_48454c;
        case 0x484550u: goto label_484550;
        case 0x484554u: goto label_484554;
        case 0x484558u: goto label_484558;
        case 0x48455cu: goto label_48455c;
        default: break;
    }

    ctx->pc = 0x484250u;

label_484250:
    // 0x484250: 0x27bdfce0  addiu       $sp, $sp, -0x320
    ctx->pc = 0x484250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966496));
label_484254:
    // 0x484254: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x484254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_484258:
    // 0x484258: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x484258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_48425c:
    // 0x48425c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x48425cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_484260:
    // 0x484260: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x484260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_484264:
    // 0x484264: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x484264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_484268:
    // 0x484268: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x484268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_48426c:
    // 0x48426c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48426cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_484270:
    // 0x484270: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x484270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_484274:
    // 0x484274: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x484274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_484278:
    // 0x484278: 0xafa40310  sw          $a0, 0x310($sp)
    ctx->pc = 0x484278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 4));
label_48427c:
    // 0x48427c: 0x8fa20310  lw          $v0, 0x310($sp)
    ctx->pc = 0x48427cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_484280:
    // 0x484280: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x484280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_484284:
    // 0x484284: 0xc121158  jal         func_484560
label_484288:
    if (ctx->pc == 0x484288u) {
        ctx->pc = 0x48428Cu;
        goto label_48428c;
    }
    ctx->pc = 0x484284u;
    SET_GPR_U32(ctx, 31, 0x48428Cu);
    ctx->pc = 0x484560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484560u, 0x484284u, 0x48428Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48428Cu;
label_48428c:
    // 0x48428c: 0x144000a6  bnez        $v0, . + 4 + (0xA6 << 2)
label_484290:
    if (ctx->pc == 0x484290u) {
        ctx->pc = 0x484294u;
        goto label_484294;
    }
    ctx->pc = 0x48428Cu;
    {
        const bool branch_taken_0x48428c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48428c) {
            ctx->pc = 0x484528u;
            goto label_484528;
        }
    }
    ctx->pc = 0x484294u;
label_484294:
    // 0x484294: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x484294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484298:
    // 0x484298: 0x8fa20310  lw          $v0, 0x310($sp)
    ctx->pc = 0x484298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_48429c:
    // 0x48429c: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x48429cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_4842a0:
    // 0x4842a0: 0xc120a80  jal         func_482A00
label_4842a4:
    if (ctx->pc == 0x4842A4u) {
        ctx->pc = 0x4842A8u;
        goto label_4842a8;
    }
    ctx->pc = 0x4842A0u;
    SET_GPR_U32(ctx, 31, 0x4842A8u);
    ctx->pc = 0x482A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482A00u, 0x4842A0u, 0x4842A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4842A8u;
label_4842a8:
    // 0x4842a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4842a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4842ac:
    // 0x4842ac: 0x10000009  b           . + 4 + (0x9 << 2)
label_4842b0:
    if (ctx->pc == 0x4842B0u) {
        ctx->pc = 0x4842B4u;
        goto label_4842b4;
    }
    ctx->pc = 0x4842ACu;
    {
        const bool branch_taken_0x4842ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4842ac) {
            ctx->pc = 0x4842D4u;
            goto label_4842d4;
        }
    }
    ctx->pc = 0x4842B4u;
label_4842b4:
    // 0x4842b4: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x4842b4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4842b8:
    // 0x4842b8: 0x8e830050  lw          $v1, 0x50($s4)
    ctx->pc = 0x4842b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_4842bc:
    // 0x4842bc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_4842c0:
    if (ctx->pc == 0x4842C0u) {
        ctx->pc = 0x4842C4u;
        goto label_4842c4;
    }
    ctx->pc = 0x4842BCu;
    {
        const bool branch_taken_0x4842bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4842bc) {
            ctx->pc = 0x4842D0u;
            goto label_4842d0;
        }
    }
    ctx->pc = 0x4842C4u;
label_4842c4:
    // 0x4842c4: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x4842c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4842c8:
    // 0x4842c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_4842cc:
    if (ctx->pc == 0x4842CCu) {
        ctx->pc = 0x4842D0u;
        goto label_4842d0;
    }
    ctx->pc = 0x4842C8u;
    {
        const bool branch_taken_0x4842c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4842c8) {
            ctx->pc = 0x4842ECu;
            goto label_4842ec;
        }
    }
    ctx->pc = 0x4842D0u;
label_4842d0:
    // 0x4842d0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4842d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_4842d4:
    // 0x4842d4: 0x8fa20310  lw          $v0, 0x310($sp)
    ctx->pc = 0x4842d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_4842d8:
    // 0x4842d8: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x4842d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_4842dc:
    // 0x4842dc: 0xc120a78  jal         func_4829E0
label_4842e0:
    if (ctx->pc == 0x4842E0u) {
        ctx->pc = 0x4842E4u;
        goto label_4842e4;
    }
    ctx->pc = 0x4842DCu;
    SET_GPR_U32(ctx, 31, 0x4842E4u);
    ctx->pc = 0x4829E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4829E0u, 0x4842DCu, 0x4842E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4842E4u;
label_4842e4:
    // 0x4842e4: 0x1662fff3  bne         $s3, $v0, . + 4 + (-0xD << 2)
label_4842e8:
    if (ctx->pc == 0x4842E8u) {
        ctx->pc = 0x4842ECu;
        goto label_4842ec;
    }
    ctx->pc = 0x4842E4u;
    {
        const bool branch_taken_0x4842e4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x4842e4) {
            ctx->pc = 0x4842B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4842b4;
        }
    }
    ctx->pc = 0x4842ECu;
label_4842ec:
    // 0x4842ec: 0x1010008e  beq         $zero, $s0, . + 4 + (0x8E << 2)
label_4842f0:
    if (ctx->pc == 0x4842F0u) {
        ctx->pc = 0x4842F4u;
        goto label_4842f4;
    }
    ctx->pc = 0x4842ECu;
    {
        const bool branch_taken_0x4842ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x4842ec) {
            ctx->pc = 0x484528u;
            goto label_484528;
        }
    }
    ctx->pc = 0x4842F4u;
label_4842f4:
    // 0x4842f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4842f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4842f8:
    // 0x4842f8: 0x1000000c  b           . + 4 + (0xC << 2)
label_4842fc:
    if (ctx->pc == 0x4842FCu) {
        ctx->pc = 0x484300u;
        goto label_484300;
    }
    ctx->pc = 0x4842F8u;
    {
        const bool branch_taken_0x4842f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4842f8) {
            ctx->pc = 0x48432Cu;
            goto label_48432c;
        }
    }
    ctx->pc = 0x484300u;
label_484300:
    // 0x484300: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x484300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_484304:
    // 0x484304: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x484304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_484308:
    // 0x484308: 0x24421820  addiu       $v0, $v0, 0x1820
    ctx->pc = 0x484308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6176));
label_48430c:
    // 0x48430c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48430cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_484310:
    // 0x484310: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x484310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_484314:
    // 0x484314: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x484314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_484318:
    // 0x484318: 0xc0bc48e  jal         func_2F1238
label_48431c:
    if (ctx->pc == 0x48431Cu) {
        ctx->pc = 0x484320u;
        goto label_484320;
    }
    ctx->pc = 0x484318u;
    SET_GPR_U32(ctx, 31, 0x484320u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x484318u, 0x484320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484320u;
label_484320:
    // 0x484320: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_484324:
    if (ctx->pc == 0x484324u) {
        ctx->pc = 0x484328u;
        goto label_484328;
    }
    ctx->pc = 0x484320u;
    {
        const bool branch_taken_0x484320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x484320) {
            ctx->pc = 0x484338u;
            goto label_484338;
        }
    }
    ctx->pc = 0x484328u;
label_484328:
    // 0x484328: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x484328u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_48432c:
    // 0x48432c: 0x2e2208bc  sltiu       $v0, $s1, 0x8BC
    ctx->pc = 0x48432cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2236) ? 1 : 0);
label_484330:
    // 0x484330: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_484334:
    if (ctx->pc == 0x484334u) {
        ctx->pc = 0x484338u;
        goto label_484338;
    }
    ctx->pc = 0x484330u;
    {
        const bool branch_taken_0x484330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x484330) {
            ctx->pc = 0x484300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_484300;
        }
    }
    ctx->pc = 0x484338u;
label_484338:
    // 0x484338: 0x240208bc  addiu       $v0, $zero, 0x8BC
    ctx->pc = 0x484338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2236));
label_48433c:
    // 0x48433c: 0x16220027  bne         $s1, $v0, . + 4 + (0x27 << 2)
label_484340:
    if (ctx->pc == 0x484340u) {
        ctx->pc = 0x484344u;
        goto label_484344;
    }
    ctx->pc = 0x48433Cu;
    {
        const bool branch_taken_0x48433c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x48433c) {
            ctx->pc = 0x4843DCu;
            goto label_4843dc;
        }
    }
    ctx->pc = 0x484344u;
label_484344:
    // 0x484344: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x484344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_484348:
    // 0x484348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x484348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48434c:
    // 0x48434c: 0x27a60300  addiu       $a2, $sp, 0x300
    ctx->pc = 0x48434cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_484350:
    // 0x484350: 0xc115ee8  jal         func_457BA0
label_484354:
    if (ctx->pc == 0x484354u) {
        ctx->pc = 0x484358u;
        goto label_484358;
    }
    ctx->pc = 0x484350u;
    SET_GPR_U32(ctx, 31, 0x484358u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x484350u, 0x484358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484358u;
label_484358:
    // 0x484358: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_48435c:
    if (ctx->pc == 0x48435Cu) {
        ctx->pc = 0x484360u;
        goto label_484360;
    }
    ctx->pc = 0x484358u;
    {
        const bool branch_taken_0x484358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x484358) {
            ctx->pc = 0x4843DCu;
            goto label_4843dc;
        }
    }
    ctx->pc = 0x484360u;
label_484360:
    // 0x484360: 0x8fa20308  lw          $v0, 0x308($sp)
    ctx->pc = 0x484360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 776)));
label_484364:
    // 0x484364: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_484368:
    if (ctx->pc == 0x484368u) {
        ctx->pc = 0x48436Cu;
        goto label_48436c;
    }
    ctx->pc = 0x484364u;
    {
        const bool branch_taken_0x484364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x484364) {
            ctx->pc = 0x4843DCu;
            goto label_4843dc;
        }
    }
    ctx->pc = 0x48436Cu;
label_48436c:
    // 0x48436c: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x48436cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_484370:
    // 0x484370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x484370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484374:
    // 0x484374: 0x8fa60304  lw          $a2, 0x304($sp)
    ctx->pc = 0x484374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
label_484378:
    // 0x484378: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x484378u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48437c:
    // 0x48437c: 0x24e73b10  addiu       $a3, $a3, 0x3B10
    ctx->pc = 0x48437cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15120));
label_484380:
    // 0x484380: 0x24080171  addiu       $t0, $zero, 0x171
    ctx->pc = 0x484380u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 369));
label_484384:
    // 0x484384: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x484384u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484388:
    // 0x484388: 0xc113940  jal         func_44E500
label_48438c:
    if (ctx->pc == 0x48438Cu) {
        ctx->pc = 0x484390u;
        goto label_484390;
    }
    ctx->pc = 0x484388u;
    SET_GPR_U32(ctx, 31, 0x484390u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x484388u, 0x484390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484390u;
label_484390:
    // 0x484390: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x484390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_484394:
    // 0x484394: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x484394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_484398:
    // 0x484398: 0x24a53c10  addiu       $a1, $a1, 0x3C10
    ctx->pc = 0x484398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15376));
label_48439c:
    // 0x48439c: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x48439cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_4843a0:
    // 0x4843a0: 0xc115c24  jal         func_457090
label_4843a4:
    if (ctx->pc == 0x4843A4u) {
        ctx->pc = 0x4843A8u;
        goto label_4843a8;
    }
    ctx->pc = 0x4843A0u;
    SET_GPR_U32(ctx, 31, 0x4843A8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4843A0u, 0x4843A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4843A8u;
label_4843a8:
    // 0x4843a8: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x4843a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_4843ac:
    // 0x4843ac: 0x8fa20308  lw          $v0, 0x308($sp)
    ctx->pc = 0x4843acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 776)));
label_4843b0:
    // 0x4843b0: 0x40f809  jalr        $v0
label_4843b4:
    if (ctx->pc == 0x4843B4u) {
        ctx->pc = 0x4843B8u;
        goto label_4843b8;
    }
    ctx->pc = 0x4843B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4843B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4843B0u, 0x4843B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4843B8u;
label_4843b8:
    // 0x4843b8: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x4843b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_4843bc:
    // 0x4843bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4843c0:
    if (ctx->pc == 0x4843C0u) {
        ctx->pc = 0x4843C4u;
        goto label_4843c4;
    }
    ctx->pc = 0x4843BCu;
    {
        const bool branch_taken_0x4843bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4843bc) {
            ctx->pc = 0x4843CCu;
            goto label_4843cc;
        }
    }
    ctx->pc = 0x4843C4u;
label_4843c4:
    // 0x4843c4: 0xd  break       0
    ctx->pc = 0x4843c4u;
    runtime->handleBreak(rdram, ctx);
label_4843c8:
    // 0x4843c8: 0x0  nop
    ctx->pc = 0x4843c8u;
    // NOP
label_4843cc:
    // 0x4843cc: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x4843ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_4843d0:
    // 0x4843d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4843d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4843d4:
    // 0x4843d4: 0xc11392c  jal         func_44E4B0
label_4843d8:
    if (ctx->pc == 0x4843D8u) {
        ctx->pc = 0x4843DCu;
        goto label_4843dc;
    }
    ctx->pc = 0x4843D4u;
    SET_GPR_U32(ctx, 31, 0x4843DCu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4843D4u, 0x4843DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4843DCu;
label_4843dc:
    // 0x4843dc: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x4843dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_4843e0:
    // 0x4843e0: 0x222001b  divu        $zero, $s1, $v0
    ctx->pc = 0x4843e0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
label_4843e4:
    // 0x4843e4: 0xb812  mflo        $s7
    ctx->pc = 0x4843e4u;
    SET_GPR_U64(ctx, 23, ctx->lo);
label_4843e8:
    // 0x4843e8: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x4843e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_4843ec:
    // 0x4843ec: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4843ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_4843f0:
    // 0x4843f0: 0x24a53c30  addiu       $a1, $a1, 0x3C30
    ctx->pc = 0x4843f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15408));
label_4843f4:
    // 0x4843f4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4843f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4843f8:
    // 0x4843f8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4843f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4843fc:
    // 0x4843fc: 0xc0bc3e2  jal         func_2F0F88
label_484400:
    if (ctx->pc == 0x484400u) {
        ctx->pc = 0x484404u;
        goto label_484404;
    }
    ctx->pc = 0x4843FCu;
    SET_GPR_U32(ctx, 31, 0x484404u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x4843FCu, 0x484404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484404u;
label_484404:
    // 0x484404: 0x24160031  addiu       $s6, $zero, 0x31
    ctx->pc = 0x484404u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_484408:
    // 0x484408: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x484408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48440c:
    // 0x48440c: 0x8fa20310  lw          $v0, 0x310($sp)
    ctx->pc = 0x48440cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_484410:
    // 0x484410: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x484410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_484414:
    // 0x484414: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x484414u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484418:
    // 0x484418: 0x8f82bc64  lw          $v0, -0x439C($gp)
    ctx->pc = 0x484418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949988)));
label_48441c:
    // 0x48441c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x48441cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_484420:
    // 0x484420: 0xaf82bc64  sw          $v0, -0x439C($gp)
    ctx->pc = 0x484420u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949988), GPR_U32(ctx, 2));
label_484424:
    // 0x484424: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x484424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_484428:
    // 0x484428: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x484428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_48442c:
    // 0x48442c: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x48442cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_484430:
    // 0x484430: 0x24c64590  addiu       $a2, $a2, 0x4590
    ctx->pc = 0x484430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17808));
label_484434:
    // 0x484434: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x484434u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_484438:
    // 0x484438: 0xc0f09a8  jal         func_3C26A0
label_48443c:
    if (ctx->pc == 0x48443Cu) {
        ctx->pc = 0x484440u;
        goto label_484440;
    }
    ctx->pc = 0x484438u;
    SET_GPR_U32(ctx, 31, 0x484440u);
    ctx->pc = 0x3C26A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C26A0u, 0x484438u, 0x484440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484440u;
label_484440:
    // 0x484440: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x484440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_484444:
    // 0x484444: 0x14120027  bne         $zero, $s2, . + 4 + (0x27 << 2)
label_484448:
    if (ctx->pc == 0x484448u) {
        ctx->pc = 0x48444Cu;
        goto label_48444c;
    }
    ctx->pc = 0x484444u;
    {
        const bool branch_taken_0x484444 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 18));
        if (branch_taken_0x484444) {
            ctx->pc = 0x4844E4u;
            goto label_4844e4;
        }
    }
    ctx->pc = 0x48444Cu;
label_48444c:
    // 0x48444c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48444cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_484450:
    // 0x484450: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x484450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484454:
    // 0x484454: 0x27a602f0  addiu       $a2, $sp, 0x2F0
    ctx->pc = 0x484454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_484458:
    // 0x484458: 0xc115ee8  jal         func_457BA0
label_48445c:
    if (ctx->pc == 0x48445Cu) {
        ctx->pc = 0x484460u;
        goto label_484460;
    }
    ctx->pc = 0x484458u;
    SET_GPR_U32(ctx, 31, 0x484460u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x484458u, 0x484460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484460u;
label_484460:
    // 0x484460: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_484464:
    if (ctx->pc == 0x484464u) {
        ctx->pc = 0x484468u;
        goto label_484468;
    }
    ctx->pc = 0x484460u;
    {
        const bool branch_taken_0x484460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x484460) {
            ctx->pc = 0x4844E4u;
            goto label_4844e4;
        }
    }
    ctx->pc = 0x484468u;
label_484468:
    // 0x484468: 0x8fa202f8  lw          $v0, 0x2F8($sp)
    ctx->pc = 0x484468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
label_48446c:
    // 0x48446c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_484470:
    if (ctx->pc == 0x484470u) {
        ctx->pc = 0x484474u;
        goto label_484474;
    }
    ctx->pc = 0x48446Cu;
    {
        const bool branch_taken_0x48446c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48446c) {
            ctx->pc = 0x4844E4u;
            goto label_4844e4;
        }
    }
    ctx->pc = 0x484474u;
label_484474:
    // 0x484474: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x484474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_484478:
    // 0x484478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x484478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48447c:
    // 0x48447c: 0x8fa602f4  lw          $a2, 0x2F4($sp)
    ctx->pc = 0x48447cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
label_484480:
    // 0x484480: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x484480u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_484484:
    // 0x484484: 0x24e73b10  addiu       $a3, $a3, 0x3B10
    ctx->pc = 0x484484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15120));
label_484488:
    // 0x484488: 0x2408018d  addiu       $t0, $zero, 0x18D
    ctx->pc = 0x484488u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 397));
label_48448c:
    // 0x48448c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x48448cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484490:
    // 0x484490: 0xc113940  jal         func_44E500
label_484494:
    if (ctx->pc == 0x484494u) {
        ctx->pc = 0x484498u;
        goto label_484498;
    }
    ctx->pc = 0x484490u;
    SET_GPR_U32(ctx, 31, 0x484498u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x484490u, 0x484498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484498u;
label_484498:
    // 0x484498: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x484498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_48449c:
    // 0x48449c: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48449cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_4844a0:
    // 0x4844a0: 0x24a53c50  addiu       $a1, $a1, 0x3C50
    ctx->pc = 0x4844a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15440));
label_4844a4:
    // 0x4844a4: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x4844a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_4844a8:
    // 0x4844a8: 0xc115c24  jal         func_457090
label_4844ac:
    if (ctx->pc == 0x4844ACu) {
        ctx->pc = 0x4844B0u;
        goto label_4844b0;
    }
    ctx->pc = 0x4844A8u;
    SET_GPR_U32(ctx, 31, 0x4844B0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4844A8u, 0x4844B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4844B0u;
label_4844b0:
    // 0x4844b0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4844b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4844b4:
    // 0x4844b4: 0x8fa202f8  lw          $v0, 0x2F8($sp)
    ctx->pc = 0x4844b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
label_4844b8:
    // 0x4844b8: 0x40f809  jalr        $v0
label_4844bc:
    if (ctx->pc == 0x4844BCu) {
        ctx->pc = 0x4844C0u;
        goto label_4844c0;
    }
    ctx->pc = 0x4844B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4844C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4844B8u, 0x4844C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4844C0u;
label_4844c0:
    // 0x4844c0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x4844c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_4844c4:
    // 0x4844c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4844c8:
    if (ctx->pc == 0x4844C8u) {
        ctx->pc = 0x4844CCu;
        goto label_4844cc;
    }
    ctx->pc = 0x4844C4u;
    {
        const bool branch_taken_0x4844c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4844c4) {
            ctx->pc = 0x4844D4u;
            goto label_4844d4;
        }
    }
    ctx->pc = 0x4844CCu;
label_4844cc:
    // 0x4844cc: 0xd  break       0
    ctx->pc = 0x4844ccu;
    runtime->handleBreak(rdram, ctx);
label_4844d0:
    // 0x4844d0: 0x0  nop
    ctx->pc = 0x4844d0u;
    // NOP
label_4844d4:
    // 0x4844d4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4844d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4844d8:
    // 0x4844d8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4844d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4844dc:
    // 0x4844dc: 0xc11392c  jal         func_44E4B0
label_4844e0:
    if (ctx->pc == 0x4844E0u) {
        ctx->pc = 0x4844E4u;
        goto label_4844e4;
    }
    ctx->pc = 0x4844DCu;
    SET_GPR_U32(ctx, 31, 0x4844E4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4844DCu, 0x4844E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4844E4u;
label_4844e4:
    // 0x4844e4: 0xae120054  sw          $s2, 0x54($s0)
    ctx->pc = 0x4844e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 18));
label_4844e8:
    // 0x4844e8: 0x8fa20310  lw          $v0, 0x310($sp)
    ctx->pc = 0x4844e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_4844ec:
    // 0x4844ec: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x4844ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_4844f0:
    // 0x4844f0: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x4844f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_4844f4:
    // 0x4844f4: 0xc120e04  jal         func_483810
label_4844f8:
    if (ctx->pc == 0x4844F8u) {
        ctx->pc = 0x4844FCu;
        goto label_4844fc;
    }
    ctx->pc = 0x4844F4u;
    SET_GPR_U32(ctx, 31, 0x4844FCu);
    ctx->pc = 0x483810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483810u, 0x4844F4u, 0x4844FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4844FCu;
label_4844fc:
    // 0x4844fc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4844fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_484500:
    // 0x484500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x484500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_484504:
    // 0x484504: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x484504u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
label_484508:
    // 0x484508: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x484508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_48450c:
    // 0x48450c: 0x24845bc0  addiu       $a0, $a0, 0x5BC0
    ctx->pc = 0x48450cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23488));
label_484510:
    // 0x484510: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x484510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_484514:
    // 0x484514: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x484514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_484518:
    // 0x484518: 0x34462000  ori         $a2, $v0, 0x2000
    ctx->pc = 0x484518u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_48451c:
    // 0x48451c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x48451cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_484520:
    // 0x484520: 0xc0f0b08  jal         func_3C2C20
label_484524:
    if (ctx->pc == 0x484524u) {
        ctx->pc = 0x484528u;
        goto label_484528;
    }
    ctx->pc = 0x484520u;
    SET_GPR_U32(ctx, 31, 0x484528u);
    ctx->pc = 0x3C2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2C20u, 0x484520u, 0x484528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484528u;
label_484528:
    // 0x484528: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x484528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_48452c:
    // 0x48452c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x48452cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_484530:
    // 0x484530: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x484530u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_484534:
    // 0x484534: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x484534u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_484538:
    // 0x484538: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x484538u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_48453c:
    // 0x48453c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48453cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_484540:
    // 0x484540: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x484540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_484544:
    // 0x484544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x484544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_484548:
    // 0x484548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x484548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48454c:
    // 0x48454c: 0x27bd0320  addiu       $sp, $sp, 0x320
    ctx->pc = 0x48454cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_484550:
    // 0x484550: 0x3e00008  jr          $ra
label_484554:
    if (ctx->pc == 0x484554u) {
        ctx->pc = 0x484558u;
        goto label_484558;
    }
    ctx->pc = 0x484550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x484558u;
label_484558:
    // 0x484558: 0x0  nop
    ctx->pc = 0x484558u;
    // NOP
label_48455c:
    // 0x48455c: 0x0  nop
    ctx->pc = 0x48455cu;
    // NOP
    ctx->pc = 0x484560u;
}
