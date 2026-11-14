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

// Function: sub_002E7570
// Address: 0x2e7570 - 0x2e78f0
void sub_002E7570_0x2e7570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7570_0x2e7570");
#endif

    switch (ctx->pc) {
        case 0x2e7570u: goto label_2e7570;
        case 0x2e7574u: goto label_2e7574;
        case 0x2e7578u: goto label_2e7578;
        case 0x2e757cu: goto label_2e757c;
        case 0x2e7580u: goto label_2e7580;
        case 0x2e7584u: goto label_2e7584;
        case 0x2e7588u: goto label_2e7588;
        case 0x2e758cu: goto label_2e758c;
        case 0x2e7590u: goto label_2e7590;
        case 0x2e7594u: goto label_2e7594;
        case 0x2e7598u: goto label_2e7598;
        case 0x2e759cu: goto label_2e759c;
        case 0x2e75a0u: goto label_2e75a0;
        case 0x2e75a4u: goto label_2e75a4;
        case 0x2e75a8u: goto label_2e75a8;
        case 0x2e75acu: goto label_2e75ac;
        case 0x2e75b0u: goto label_2e75b0;
        case 0x2e75b4u: goto label_2e75b4;
        case 0x2e75b8u: goto label_2e75b8;
        case 0x2e75bcu: goto label_2e75bc;
        case 0x2e75c0u: goto label_2e75c0;
        case 0x2e75c4u: goto label_2e75c4;
        case 0x2e75c8u: goto label_2e75c8;
        case 0x2e75ccu: goto label_2e75cc;
        case 0x2e75d0u: goto label_2e75d0;
        case 0x2e75d4u: goto label_2e75d4;
        case 0x2e75d8u: goto label_2e75d8;
        case 0x2e75dcu: goto label_2e75dc;
        case 0x2e75e0u: goto label_2e75e0;
        case 0x2e75e4u: goto label_2e75e4;
        case 0x2e75e8u: goto label_2e75e8;
        case 0x2e75ecu: goto label_2e75ec;
        case 0x2e75f0u: goto label_2e75f0;
        case 0x2e75f4u: goto label_2e75f4;
        case 0x2e75f8u: goto label_2e75f8;
        case 0x2e75fcu: goto label_2e75fc;
        case 0x2e7600u: goto label_2e7600;
        case 0x2e7604u: goto label_2e7604;
        case 0x2e7608u: goto label_2e7608;
        case 0x2e760cu: goto label_2e760c;
        case 0x2e7610u: goto label_2e7610;
        case 0x2e7614u: goto label_2e7614;
        case 0x2e7618u: goto label_2e7618;
        case 0x2e761cu: goto label_2e761c;
        case 0x2e7620u: goto label_2e7620;
        case 0x2e7624u: goto label_2e7624;
        case 0x2e7628u: goto label_2e7628;
        case 0x2e762cu: goto label_2e762c;
        case 0x2e7630u: goto label_2e7630;
        case 0x2e7634u: goto label_2e7634;
        case 0x2e7638u: goto label_2e7638;
        case 0x2e763cu: goto label_2e763c;
        case 0x2e7640u: goto label_2e7640;
        case 0x2e7644u: goto label_2e7644;
        case 0x2e7648u: goto label_2e7648;
        case 0x2e764cu: goto label_2e764c;
        case 0x2e7650u: goto label_2e7650;
        case 0x2e7654u: goto label_2e7654;
        case 0x2e7658u: goto label_2e7658;
        case 0x2e765cu: goto label_2e765c;
        case 0x2e7660u: goto label_2e7660;
        case 0x2e7664u: goto label_2e7664;
        case 0x2e7668u: goto label_2e7668;
        case 0x2e766cu: goto label_2e766c;
        case 0x2e7670u: goto label_2e7670;
        case 0x2e7674u: goto label_2e7674;
        case 0x2e7678u: goto label_2e7678;
        case 0x2e767cu: goto label_2e767c;
        case 0x2e7680u: goto label_2e7680;
        case 0x2e7684u: goto label_2e7684;
        case 0x2e7688u: goto label_2e7688;
        case 0x2e768cu: goto label_2e768c;
        case 0x2e7690u: goto label_2e7690;
        case 0x2e7694u: goto label_2e7694;
        case 0x2e7698u: goto label_2e7698;
        case 0x2e769cu: goto label_2e769c;
        case 0x2e76a0u: goto label_2e76a0;
        case 0x2e76a4u: goto label_2e76a4;
        case 0x2e76a8u: goto label_2e76a8;
        case 0x2e76acu: goto label_2e76ac;
        case 0x2e76b0u: goto label_2e76b0;
        case 0x2e76b4u: goto label_2e76b4;
        case 0x2e76b8u: goto label_2e76b8;
        case 0x2e76bcu: goto label_2e76bc;
        case 0x2e76c0u: goto label_2e76c0;
        case 0x2e76c4u: goto label_2e76c4;
        case 0x2e76c8u: goto label_2e76c8;
        case 0x2e76ccu: goto label_2e76cc;
        case 0x2e76d0u: goto label_2e76d0;
        case 0x2e76d4u: goto label_2e76d4;
        case 0x2e76d8u: goto label_2e76d8;
        case 0x2e76dcu: goto label_2e76dc;
        case 0x2e76e0u: goto label_2e76e0;
        case 0x2e76e4u: goto label_2e76e4;
        case 0x2e76e8u: goto label_2e76e8;
        case 0x2e76ecu: goto label_2e76ec;
        case 0x2e76f0u: goto label_2e76f0;
        case 0x2e76f4u: goto label_2e76f4;
        case 0x2e76f8u: goto label_2e76f8;
        case 0x2e76fcu: goto label_2e76fc;
        case 0x2e7700u: goto label_2e7700;
        case 0x2e7704u: goto label_2e7704;
        case 0x2e7708u: goto label_2e7708;
        case 0x2e770cu: goto label_2e770c;
        case 0x2e7710u: goto label_2e7710;
        case 0x2e7714u: goto label_2e7714;
        case 0x2e7718u: goto label_2e7718;
        case 0x2e771cu: goto label_2e771c;
        case 0x2e7720u: goto label_2e7720;
        case 0x2e7724u: goto label_2e7724;
        case 0x2e7728u: goto label_2e7728;
        case 0x2e772cu: goto label_2e772c;
        case 0x2e7730u: goto label_2e7730;
        case 0x2e7734u: goto label_2e7734;
        case 0x2e7738u: goto label_2e7738;
        case 0x2e773cu: goto label_2e773c;
        case 0x2e7740u: goto label_2e7740;
        case 0x2e7744u: goto label_2e7744;
        case 0x2e7748u: goto label_2e7748;
        case 0x2e774cu: goto label_2e774c;
        case 0x2e7750u: goto label_2e7750;
        case 0x2e7754u: goto label_2e7754;
        case 0x2e7758u: goto label_2e7758;
        case 0x2e775cu: goto label_2e775c;
        case 0x2e7760u: goto label_2e7760;
        case 0x2e7764u: goto label_2e7764;
        case 0x2e7768u: goto label_2e7768;
        case 0x2e776cu: goto label_2e776c;
        case 0x2e7770u: goto label_2e7770;
        case 0x2e7774u: goto label_2e7774;
        case 0x2e7778u: goto label_2e7778;
        case 0x2e777cu: goto label_2e777c;
        case 0x2e7780u: goto label_2e7780;
        case 0x2e7784u: goto label_2e7784;
        case 0x2e7788u: goto label_2e7788;
        case 0x2e778cu: goto label_2e778c;
        case 0x2e7790u: goto label_2e7790;
        case 0x2e7794u: goto label_2e7794;
        case 0x2e7798u: goto label_2e7798;
        case 0x2e779cu: goto label_2e779c;
        case 0x2e77a0u: goto label_2e77a0;
        case 0x2e77a4u: goto label_2e77a4;
        case 0x2e77a8u: goto label_2e77a8;
        case 0x2e77acu: goto label_2e77ac;
        case 0x2e77b0u: goto label_2e77b0;
        case 0x2e77b4u: goto label_2e77b4;
        case 0x2e77b8u: goto label_2e77b8;
        case 0x2e77bcu: goto label_2e77bc;
        case 0x2e77c0u: goto label_2e77c0;
        case 0x2e77c4u: goto label_2e77c4;
        case 0x2e77c8u: goto label_2e77c8;
        case 0x2e77ccu: goto label_2e77cc;
        case 0x2e77d0u: goto label_2e77d0;
        case 0x2e77d4u: goto label_2e77d4;
        case 0x2e77d8u: goto label_2e77d8;
        case 0x2e77dcu: goto label_2e77dc;
        case 0x2e77e0u: goto label_2e77e0;
        case 0x2e77e4u: goto label_2e77e4;
        case 0x2e77e8u: goto label_2e77e8;
        case 0x2e77ecu: goto label_2e77ec;
        case 0x2e77f0u: goto label_2e77f0;
        case 0x2e77f4u: goto label_2e77f4;
        case 0x2e77f8u: goto label_2e77f8;
        case 0x2e77fcu: goto label_2e77fc;
        case 0x2e7800u: goto label_2e7800;
        case 0x2e7804u: goto label_2e7804;
        case 0x2e7808u: goto label_2e7808;
        case 0x2e780cu: goto label_2e780c;
        case 0x2e7810u: goto label_2e7810;
        case 0x2e7814u: goto label_2e7814;
        case 0x2e7818u: goto label_2e7818;
        case 0x2e781cu: goto label_2e781c;
        case 0x2e7820u: goto label_2e7820;
        case 0x2e7824u: goto label_2e7824;
        case 0x2e7828u: goto label_2e7828;
        case 0x2e782cu: goto label_2e782c;
        case 0x2e7830u: goto label_2e7830;
        case 0x2e7834u: goto label_2e7834;
        case 0x2e7838u: goto label_2e7838;
        case 0x2e783cu: goto label_2e783c;
        case 0x2e7840u: goto label_2e7840;
        case 0x2e7844u: goto label_2e7844;
        case 0x2e7848u: goto label_2e7848;
        case 0x2e784cu: goto label_2e784c;
        case 0x2e7850u: goto label_2e7850;
        case 0x2e7854u: goto label_2e7854;
        case 0x2e7858u: goto label_2e7858;
        case 0x2e785cu: goto label_2e785c;
        case 0x2e7860u: goto label_2e7860;
        case 0x2e7864u: goto label_2e7864;
        case 0x2e7868u: goto label_2e7868;
        case 0x2e786cu: goto label_2e786c;
        case 0x2e7870u: goto label_2e7870;
        case 0x2e7874u: goto label_2e7874;
        case 0x2e7878u: goto label_2e7878;
        case 0x2e787cu: goto label_2e787c;
        case 0x2e7880u: goto label_2e7880;
        case 0x2e7884u: goto label_2e7884;
        case 0x2e7888u: goto label_2e7888;
        case 0x2e788cu: goto label_2e788c;
        case 0x2e7890u: goto label_2e7890;
        case 0x2e7894u: goto label_2e7894;
        case 0x2e7898u: goto label_2e7898;
        case 0x2e789cu: goto label_2e789c;
        case 0x2e78a0u: goto label_2e78a0;
        case 0x2e78a4u: goto label_2e78a4;
        case 0x2e78a8u: goto label_2e78a8;
        case 0x2e78acu: goto label_2e78ac;
        case 0x2e78b0u: goto label_2e78b0;
        case 0x2e78b4u: goto label_2e78b4;
        case 0x2e78b8u: goto label_2e78b8;
        case 0x2e78bcu: goto label_2e78bc;
        case 0x2e78c0u: goto label_2e78c0;
        case 0x2e78c4u: goto label_2e78c4;
        case 0x2e78c8u: goto label_2e78c8;
        case 0x2e78ccu: goto label_2e78cc;
        case 0x2e78d0u: goto label_2e78d0;
        case 0x2e78d4u: goto label_2e78d4;
        case 0x2e78d8u: goto label_2e78d8;
        case 0x2e78dcu: goto label_2e78dc;
        case 0x2e78e0u: goto label_2e78e0;
        case 0x2e78e4u: goto label_2e78e4;
        case 0x2e78e8u: goto label_2e78e8;
        case 0x2e78ecu: goto label_2e78ec;
        default: break;
    }

    ctx->pc = 0x2e7570u;

label_2e7570:
    // 0x2e7570: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2e7570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2e7574:
    // 0x2e7574: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e7574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2e7578:
    // 0x2e7578: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2e7578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2e757c:
    // 0x2e757c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2e757cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2e7580:
    // 0x2e7580: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e7580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2e7584:
    // 0x2e7584: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e7584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2e7588:
    // 0x2e7588: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e7588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2e758c:
    // 0x2e758c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e758cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2e7590:
    // 0x2e7590: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e7590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e7594:
    // 0x2e7594: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e7594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e7598:
    // 0x2e7598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e7598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e759c:
    // 0x2e759c: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x2e759cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
label_2e75a0:
    // 0x2e75a0: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x2e75a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_2e75a4:
    // 0x2e75a4: 0x90630028  lbu         $v1, 0x28($v1)
    ctx->pc = 0x2e75a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
label_2e75a8:
    // 0x2e75a8: 0x146000c2  bnez        $v1, . + 4 + (0xC2 << 2)
label_2e75ac:
    if (ctx->pc == 0x2E75ACu) {
        ctx->pc = 0x2E75B0u;
        goto label_2e75b0;
    }
    ctx->pc = 0x2E75A8u;
    {
        const bool branch_taken_0x2e75a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e75a8) {
            ctx->pc = 0x2E78B4u;
            goto label_2e78b4;
        }
    }
    ctx->pc = 0x2E75B0u;
label_2e75b0:
    // 0x2e75b0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2e75b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2e75b4:
    // 0x2e75b4: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x2e75b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
label_2e75b8:
    // 0x2e75b8: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_2e75bc:
    if (ctx->pc == 0x2E75BCu) {
        ctx->pc = 0x2E75C0u;
        goto label_2e75c0;
    }
    ctx->pc = 0x2E75B8u;
    {
        const bool branch_taken_0x2e75b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e75b8) {
            ctx->pc = 0x2E76F8u;
            goto label_2e76f8;
        }
    }
    ctx->pc = 0x2E75C0u;
label_2e75c0:
    // 0x2e75c0: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x2e75c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_2e75c4:
    // 0x2e75c4: 0xc050ed8  jal         func_143B60
label_2e75c8:
    if (ctx->pc == 0x2E75C8u) {
        ctx->pc = 0x2E75CCu;
        goto label_2e75cc;
    }
    ctx->pc = 0x2E75C4u;
    SET_GPR_U32(ctx, 31, 0x2E75CCu);
    ctx->pc = 0x143B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B60u, 0x2E75C4u, 0x2E75CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E75CCu;
label_2e75cc:
    // 0x2e75cc: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x2e75ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_2e75d0:
    // 0x2e75d0: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x2e75d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2e75d4:
    // 0x2e75d4: 0x2405054d  addiu       $a1, $zero, 0x54D
    ctx->pc = 0x2e75d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1357));
label_2e75d8:
    // 0x2e75d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e75d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e75dc:
    // 0x2e75dc: 0xc040ab0  jal         func_102AC0
label_2e75e0:
    if (ctx->pc == 0x2E75E0u) {
        ctx->pc = 0x2E75E4u;
        goto label_2e75e4;
    }
    ctx->pc = 0x2E75DCu;
    SET_GPR_U32(ctx, 31, 0x2E75E4u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2E75DCu, 0x2E75E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E75E4u;
label_2e75e4:
    // 0x2e75e4: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x2e75e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_2e75e8:
    // 0x2e75e8: 0xc090864  jal         func_242190
label_2e75ec:
    if (ctx->pc == 0x2E75ECu) {
        ctx->pc = 0x2E75F0u;
        goto label_2e75f0;
    }
    ctx->pc = 0x2E75E8u;
    SET_GPR_U32(ctx, 31, 0x2E75F0u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2E75E8u, 0x2E75F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E75F0u;
label_2e75f0:
    // 0x2e75f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e75f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e75f4:
    // 0x2e75f4: 0xc090590  jal         func_241640
label_2e75f8:
    if (ctx->pc == 0x2E75F8u) {
        ctx->pc = 0x2E75FCu;
        goto label_2e75fc;
    }
    ctx->pc = 0x2E75F4u;
    SET_GPR_U32(ctx, 31, 0x2E75FCu);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x2E75F4u, 0x2E75FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E75FCu;
label_2e75fc:
    // 0x2e75fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e75fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e7600:
    // 0x2e7600: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2e7600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e7604:
    // 0x2e7604: 0xc09157c  jal         func_2455F0
label_2e7608:
    if (ctx->pc == 0x2E7608u) {
        ctx->pc = 0x2E760Cu;
        goto label_2e760c;
    }
    ctx->pc = 0x2E7604u;
    SET_GPR_U32(ctx, 31, 0x2E760Cu);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x2E7604u, 0x2E760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E760Cu;
label_2e760c:
    // 0x2e760c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2e760cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e7610:
    // 0x2e7610: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e7610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e7614:
    // 0x2e7614: 0xc040e7c  jal         func_1039F0
label_2e7618:
    if (ctx->pc == 0x2E7618u) {
        ctx->pc = 0x2E761Cu;
        goto label_2e761c;
    }
    ctx->pc = 0x2E7614u;
    SET_GPR_U32(ctx, 31, 0x2E761Cu);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x2E7614u, 0x2E761Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E761Cu;
label_2e761c:
    // 0x2e761c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e761cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e7620:
    // 0x2e7620: 0x1000002e  b           . + 4 + (0x2E << 2)
label_2e7624:
    if (ctx->pc == 0x2E7624u) {
        ctx->pc = 0x2E7628u;
        goto label_2e7628;
    }
    ctx->pc = 0x2E7620u;
    {
        const bool branch_taken_0x2e7620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7620) {
            ctx->pc = 0x2E76DCu;
            goto label_2e76dc;
        }
    }
    ctx->pc = 0x2E7628u;
label_2e7628:
    // 0x2e7628: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2e7628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2e762c:
    // 0x2e762c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2e762cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_2e7630:
    // 0x2e7630: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e7630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e7634:
    // 0x2e7634: 0xc09138c  jal         func_244E30
label_2e7638:
    if (ctx->pc == 0x2E7638u) {
        ctx->pc = 0x2E763Cu;
        goto label_2e763c;
    }
    ctx->pc = 0x2E7634u;
    SET_GPR_U32(ctx, 31, 0x2E763Cu);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x2E7634u, 0x2E763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E763Cu;
label_2e763c:
    // 0x2e763c: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x2e763cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2e7640:
    // 0x2e7640: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
label_2e7644:
    if (ctx->pc == 0x2E7644u) {
        ctx->pc = 0x2E7648u;
        goto label_2e7648;
    }
    ctx->pc = 0x2E7640u;
    {
        const bool branch_taken_0x2e7640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e7640) {
            ctx->pc = 0x2E76D8u;
            goto label_2e76d8;
        }
    }
    ctx->pc = 0x2E7648u;
label_2e7648:
    // 0x2e7648: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2e7648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2e764c:
    // 0x2e764c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2e764cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e7650:
    // 0x2e7650: 0xc0b9e54  jal         func_2E7950
label_2e7654:
    if (ctx->pc == 0x2E7654u) {
        ctx->pc = 0x2E7658u;
        goto label_2e7658;
    }
    ctx->pc = 0x2E7650u;
    SET_GPR_U32(ctx, 31, 0x2E7658u);
    ctx->pc = 0x2E7950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7950u, 0x2E7650u, 0x2E7658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7658u;
label_2e7658:
    // 0x2e7658: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e7658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e765c:
    // 0x2e765c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_2e7660:
    if (ctx->pc == 0x2E7660u) {
        ctx->pc = 0x2E7664u;
        goto label_2e7664;
    }
    ctx->pc = 0x2E765Cu;
    {
        const bool branch_taken_0x2e765c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e765c) {
            ctx->pc = 0x2E76C8u;
            goto label_2e76c8;
        }
    }
    ctx->pc = 0x2E7664u;
label_2e7664:
    // 0x2e7664: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2e7664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2e7668:
    // 0x2e7668: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x2e7668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2e766c:
    // 0x2e766c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2e7670:
    if (ctx->pc == 0x2E7670u) {
        ctx->pc = 0x2E7674u;
        goto label_2e7674;
    }
    ctx->pc = 0x2E766Cu;
    {
        const bool branch_taken_0x2e766c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e766c) {
            ctx->pc = 0x2E76C8u;
            goto label_2e76c8;
        }
    }
    ctx->pc = 0x2E7674u;
label_2e7674:
    // 0x2e7674: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e7674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e7678:
    // 0x2e7678: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2e7678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2e767c:
    // 0x2e767c: 0xc085538  jal         func_2154E0
label_2e7680:
    if (ctx->pc == 0x2E7680u) {
        ctx->pc = 0x2E7684u;
        goto label_2e7684;
    }
    ctx->pc = 0x2E767Cu;
    SET_GPR_U32(ctx, 31, 0x2E7684u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2E767Cu, 0x2E7684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7684u;
label_2e7684:
    // 0x2e7684: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2e7684u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e7688:
    // 0x2e7688: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2e7688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2e768c:
    // 0x2e768c: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x2e768cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2e7690:
    // 0x2e7690: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x2e7690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_2e7694:
    // 0x2e7694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e7694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7698:
    // 0x2e7698: 0xc09d660  jal         func_275980
label_2e769c:
    if (ctx->pc == 0x2E769Cu) {
        ctx->pc = 0x2E76A0u;
        goto label_2e76a0;
    }
    ctx->pc = 0x2E7698u;
    SET_GPR_U32(ctx, 31, 0x2E76A0u);
    ctx->pc = 0x275980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275980u, 0x2E7698u, 0x2E76A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E76A0u;
label_2e76a0:
    // 0x2e76a0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2e76a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2e76a4:
    // 0x2e76a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2e76a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e76a8:
    // 0x2e76a8: 0xc0969b0  jal         func_25A6C0
label_2e76ac:
    if (ctx->pc == 0x2E76ACu) {
        ctx->pc = 0x2E76B0u;
        goto label_2e76b0;
    }
    ctx->pc = 0x2E76A8u;
    SET_GPR_U32(ctx, 31, 0x2E76B0u);
    ctx->pc = 0x25A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6C0u, 0x2E76A8u, 0x2E76B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E76B0u;
label_2e76b0:
    // 0x2e76b0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2e76b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2e76b4:
    // 0x2e76b4: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2e76b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2e76b8:
    // 0x2e76b8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2e76b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e76bc:
    // 0x2e76bc: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x2e76bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_2e76c0:
    // 0x2e76c0: 0xc0b9234  jal         func_2E48D0
label_2e76c4:
    if (ctx->pc == 0x2E76C4u) {
        ctx->pc = 0x2E76C8u;
        goto label_2e76c8;
    }
    ctx->pc = 0x2E76C0u;
    SET_GPR_U32(ctx, 31, 0x2E76C8u);
    ctx->pc = 0x2E48D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E48D0u, 0x2E76C0u, 0x2E76C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E76C8u;
label_2e76c8:
    // 0x2e76c8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2e76c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2e76cc:
    // 0x2e76cc: 0xa0400020  sb          $zero, 0x20($v0)
    ctx->pc = 0x2e76ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 0));
label_2e76d0:
    // 0x2e76d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2e76d4:
    if (ctx->pc == 0x2E76D4u) {
        ctx->pc = 0x2E76D8u;
        goto label_2e76d8;
    }
    ctx->pc = 0x2E76D0u;
    {
        const bool branch_taken_0x2e76d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e76d0) {
            ctx->pc = 0x2E76F0u;
            goto label_2e76f0;
        }
    }
    ctx->pc = 0x2E76D8u;
label_2e76d8:
    // 0x2e76d8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2e76d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2e76dc:
    // 0x2e76dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e76dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e76e0:
    // 0x2e76e0: 0xc04147c  jal         func_1051F0
label_2e76e4:
    if (ctx->pc == 0x2E76E4u) {
        ctx->pc = 0x2E76E8u;
        goto label_2e76e8;
    }
    ctx->pc = 0x2E76E0u;
    SET_GPR_U32(ctx, 31, 0x2E76E8u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x2E76E0u, 0x2E76E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E76E8u;
label_2e76e8:
    // 0x2e76e8: 0x1642ffcf  bne         $s2, $v0, . + 4 + (-0x31 << 2)
label_2e76ec:
    if (ctx->pc == 0x2E76ECu) {
        ctx->pc = 0x2E76F0u;
        goto label_2e76f0;
    }
    ctx->pc = 0x2E76E8u;
    {
        const bool branch_taken_0x2e76e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e76e8) {
            ctx->pc = 0x2E7628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7628;
        }
    }
    ctx->pc = 0x2E76F0u;
label_2e76f0:
    // 0x2e76f0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2e76f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2e76f4:
    // 0x2e76f4: 0xa0400020  sb          $zero, 0x20($v0)
    ctx->pc = 0x2e76f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 0));
label_2e76f8:
    // 0x2e76f8: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2e76f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2e76fc:
    // 0x2e76fc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2e76fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7700:
    // 0x2e7700: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2e7700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2e7704:
    // 0x2e7704: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x2e7704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7708:
    // 0x2e7708: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e7708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2e770c:
    // 0x2e770c: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x2e770cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_2e7710:
    // 0x2e7710: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2e7710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2e7714:
    // 0x2e7714: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e7714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e7718:
    // 0x2e7718: 0xc0b9a4c  jal         func_2E6930
label_2e771c:
    if (ctx->pc == 0x2E771Cu) {
        ctx->pc = 0x2E7720u;
        goto label_2e7720;
    }
    ctx->pc = 0x2E7718u;
    SET_GPR_U32(ctx, 31, 0x2E7720u);
    ctx->pc = 0x2E6930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6930u, 0x2E7718u, 0x2E7720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7720u;
label_2e7720:
    // 0x2e7720: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2e7720u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e7724:
    // 0x2e7724: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2e7724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2e7728:
    // 0x2e7728: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2e7728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2e772c:
    // 0x2e772c: 0xc085a88  jal         func_216A20
label_2e7730:
    if (ctx->pc == 0x2E7730u) {
        ctx->pc = 0x2E7734u;
        goto label_2e7734;
    }
    ctx->pc = 0x2E772Cu;
    SET_GPR_U32(ctx, 31, 0x2E7734u);
    ctx->pc = 0x216A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216A20u, 0x2E772Cu, 0x2E7734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7734u;
label_2e7734:
    // 0x2e7734: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e7734u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e7738:
    // 0x2e7738: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e7738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e773c:
    // 0x2e773c: 0xc085ac8  jal         func_216B20
label_2e7740:
    if (ctx->pc == 0x2E7740u) {
        ctx->pc = 0x2E7744u;
        goto label_2e7744;
    }
    ctx->pc = 0x2E773Cu;
    SET_GPR_U32(ctx, 31, 0x2E7744u);
    ctx->pc = 0x216B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216B20u, 0x2E773Cu, 0x2E7744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7744u;
label_2e7744:
    // 0x2e7744: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e7744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e7748:
    // 0x2e7748: 0x10000043  b           . + 4 + (0x43 << 2)
label_2e774c:
    if (ctx->pc == 0x2E774Cu) {
        ctx->pc = 0x2E7750u;
        goto label_2e7750;
    }
    ctx->pc = 0x2E7748u;
    {
        const bool branch_taken_0x2e7748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7748) {
            ctx->pc = 0x2E7858u;
            goto label_2e7858;
        }
    }
    ctx->pc = 0x2E7750u;
label_2e7750:
    // 0x2e7750: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e7750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e7754:
    // 0x2e7754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7758:
    // 0x2e7758: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
label_2e775c:
    if (ctx->pc == 0x2E775Cu) {
        ctx->pc = 0x2E7760u;
        goto label_2e7760;
    }
    ctx->pc = 0x2E7758u;
    {
        const bool branch_taken_0x2e7758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e7758) {
            ctx->pc = 0x2E77F8u;
            goto label_2e77f8;
        }
    }
    ctx->pc = 0x2E7760u;
label_2e7760:
    // 0x2e7760: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2e7764:
    if (ctx->pc == 0x2E7764u) {
        ctx->pc = 0x2E7768u;
        goto label_2e7768;
    }
    ctx->pc = 0x2E7760u;
    {
        const bool branch_taken_0x2e7760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7760) {
            ctx->pc = 0x2E7770u;
            goto label_2e7770;
        }
    }
    ctx->pc = 0x2E7768u;
label_2e7768:
    // 0x2e7768: 0x1000003a  b           . + 4 + (0x3A << 2)
label_2e776c:
    if (ctx->pc == 0x2E776Cu) {
        ctx->pc = 0x2E7770u;
        goto label_2e7770;
    }
    ctx->pc = 0x2E7768u;
    {
        const bool branch_taken_0x2e7768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7768) {
            ctx->pc = 0x2E7854u;
            goto label_2e7854;
        }
    }
    ctx->pc = 0x2E7770u;
label_2e7770:
    // 0x2e7770: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2e7770u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7774:
    // 0x2e7774: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e7774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7778:
    // 0x2e7778: 0x10000012  b           . + 4 + (0x12 << 2)
label_2e777c:
    if (ctx->pc == 0x2E777Cu) {
        ctx->pc = 0x2E7780u;
        goto label_2e7780;
    }
    ctx->pc = 0x2E7778u;
    {
        const bool branch_taken_0x2e7778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7778) {
            ctx->pc = 0x2E77C4u;
            goto label_2e77c4;
        }
    }
    ctx->pc = 0x2E7780u;
label_2e7780:
    // 0x2e7780: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2e7780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2e7784:
    // 0x2e7784: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e7784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e7788:
    // 0x2e7788: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e7788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e778c:
    // 0x2e778c: 0xc0b9a3c  jal         func_2E68F0
label_2e7790:
    if (ctx->pc == 0x2E7790u) {
        ctx->pc = 0x2E7794u;
        goto label_2e7794;
    }
    ctx->pc = 0x2E778Cu;
    SET_GPR_U32(ctx, 31, 0x2E7794u);
    ctx->pc = 0x2E68F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E68F0u, 0x2E778Cu, 0x2E7794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7794u;
label_2e7794:
    // 0x2e7794: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e7794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e7798:
    // 0x2e7798: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2e7798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2e779c:
    // 0x2e779c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e779cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e77a0:
    // 0x2e77a0: 0xc0b93c4  jal         func_2E4F10
label_2e77a4:
    if (ctx->pc == 0x2E77A4u) {
        ctx->pc = 0x2E77A8u;
        goto label_2e77a8;
    }
    ctx->pc = 0x2E77A0u;
    SET_GPR_U32(ctx, 31, 0x2E77A8u);
    ctx->pc = 0x2E4F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F10u, 0x2E77A0u, 0x2E77A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E77A8u;
label_2e77a8:
    // 0x2e77a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2e77ac:
    if (ctx->pc == 0x2E77ACu) {
        ctx->pc = 0x2E77B0u;
        goto label_2e77b0;
    }
    ctx->pc = 0x2E77A8u;
    {
        const bool branch_taken_0x2e77a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e77a8) {
            ctx->pc = 0x2E77C0u;
            goto label_2e77c0;
        }
    }
    ctx->pc = 0x2E77B0u;
label_2e77b0:
    // 0x2e77b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e77b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e77b4:
    // 0x2e77b4: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x2e77b4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e77b8:
    // 0x2e77b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e77bc:
    if (ctx->pc == 0x2E77BCu) {
        ctx->pc = 0x2E77C0u;
        goto label_2e77c0;
    }
    ctx->pc = 0x2E77B8u;
    {
        const bool branch_taken_0x2e77b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e77b8) {
            ctx->pc = 0x2E77D0u;
            goto label_2e77d0;
        }
    }
    ctx->pc = 0x2E77C0u;
label_2e77c0:
    // 0x2e77c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e77c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2e77c4:
    // 0x2e77c4: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x2e77c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_2e77c8:
    // 0x2e77c8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_2e77cc:
    if (ctx->pc == 0x2E77CCu) {
        ctx->pc = 0x2E77D0u;
        goto label_2e77d0;
    }
    ctx->pc = 0x2E77C8u;
    {
        const bool branch_taken_0x2e77c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e77c8) {
            ctx->pc = 0x2E7780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7780;
        }
    }
    ctx->pc = 0x2E77D0u;
label_2e77d0:
    // 0x2e77d0: 0xc0434e0  jal         func_10D380
label_2e77d4:
    if (ctx->pc == 0x2E77D4u) {
        ctx->pc = 0x2E77D8u;
        goto label_2e77d8;
    }
    ctx->pc = 0x2E77D0u;
    SET_GPR_U32(ctx, 31, 0x2E77D8u);
    ctx->pc = 0x10D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D380u, 0x2E77D0u, 0x2E77D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E77D8u;
label_2e77d8:
    // 0x2e77d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e77d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e77dc:
    // 0x2e77dc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2e77dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2e77e0:
    // 0x2e77e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e77e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e77e4:
    // 0x2e77e4: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2e77e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2e77e8:
    // 0x2e77e8: 0x320f809  jalr        $t9
label_2e77ec:
    if (ctx->pc == 0x2E77ECu) {
        ctx->pc = 0x2E77F0u;
        goto label_2e77f0;
    }
    ctx->pc = 0x2E77E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E77F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E77E8u, 0x2E77F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E77F0u;
label_2e77f0:
    // 0x2e77f0: 0x10000018  b           . + 4 + (0x18 << 2)
label_2e77f4:
    if (ctx->pc == 0x2E77F4u) {
        ctx->pc = 0x2E77F8u;
        goto label_2e77f8;
    }
    ctx->pc = 0x2E77F0u;
    {
        const bool branch_taken_0x2e77f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e77f0) {
            ctx->pc = 0x2E7854u;
            goto label_2e7854;
        }
    }
    ctx->pc = 0x2E77F8u;
label_2e77f8:
    // 0x2e77f8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2e77f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e77fc:
    // 0x2e77fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e77fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7800:
    // 0x2e7800: 0x10000011  b           . + 4 + (0x11 << 2)
label_2e7804:
    if (ctx->pc == 0x2E7804u) {
        ctx->pc = 0x2E7808u;
        goto label_2e7808;
    }
    ctx->pc = 0x2E7800u;
    {
        const bool branch_taken_0x2e7800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7800) {
            ctx->pc = 0x2E7848u;
            goto label_2e7848;
        }
    }
    ctx->pc = 0x2E7808u;
label_2e7808:
    // 0x2e7808: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2e7808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2e780c:
    // 0x2e780c: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e780cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e7810:
    // 0x2e7810: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e7810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e7814:
    // 0x2e7814: 0xc0b9a3c  jal         func_2E68F0
label_2e7818:
    if (ctx->pc == 0x2E7818u) {
        ctx->pc = 0x2E781Cu;
        goto label_2e781c;
    }
    ctx->pc = 0x2E7814u;
    SET_GPR_U32(ctx, 31, 0x2E781Cu);
    ctx->pc = 0x2E68F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E68F0u, 0x2E7814u, 0x2E781Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E781Cu;
label_2e781c:
    // 0x2e781c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e781cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e7820:
    // 0x2e7820: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2e7820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2e7824:
    // 0x2e7824: 0xc0b9454  jal         func_2E5150
label_2e7828:
    if (ctx->pc == 0x2E7828u) {
        ctx->pc = 0x2E782Cu;
        goto label_2e782c;
    }
    ctx->pc = 0x2E7824u;
    SET_GPR_U32(ctx, 31, 0x2E782Cu);
    ctx->pc = 0x2E5150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5150u, 0x2E7824u, 0x2E782Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E782Cu;
label_2e782c:
    // 0x2e782c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2e7830:
    if (ctx->pc == 0x2E7830u) {
        ctx->pc = 0x2E7834u;
        goto label_2e7834;
    }
    ctx->pc = 0x2E782Cu;
    {
        const bool branch_taken_0x2e782c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e782c) {
            ctx->pc = 0x2E7844u;
            goto label_2e7844;
        }
    }
    ctx->pc = 0x2E7834u;
label_2e7834:
    // 0x2e7834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7838:
    // 0x2e7838: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x2e7838u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e783c:
    // 0x2e783c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e7840:
    if (ctx->pc == 0x2E7840u) {
        ctx->pc = 0x2E7844u;
        goto label_2e7844;
    }
    ctx->pc = 0x2E783Cu;
    {
        const bool branch_taken_0x2e783c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e783c) {
            ctx->pc = 0x2E7854u;
            goto label_2e7854;
        }
    }
    ctx->pc = 0x2E7844u;
label_2e7844:
    // 0x2e7844: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e7844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2e7848:
    // 0x2e7848: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x2e7848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_2e784c:
    // 0x2e784c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_2e7850:
    if (ctx->pc == 0x2E7850u) {
        ctx->pc = 0x2E7854u;
        goto label_2e7854;
    }
    ctx->pc = 0x2E784Cu;
    {
        const bool branch_taken_0x2e784c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e784c) {
            ctx->pc = 0x2E7808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7808;
        }
    }
    ctx->pc = 0x2E7854u;
label_2e7854:
    // 0x2e7854: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2e7854u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_2e7858:
    // 0x2e7858: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e7858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e785c:
    // 0x2e785c: 0xc085b88  jal         func_216E20
label_2e7860:
    if (ctx->pc == 0x2E7860u) {
        ctx->pc = 0x2E7864u;
        goto label_2e7864;
    }
    ctx->pc = 0x2E785Cu;
    SET_GPR_U32(ctx, 31, 0x2E7864u);
    ctx->pc = 0x216E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216E20u, 0x2E785Cu, 0x2E7864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7864u;
label_2e7864:
    // 0x2e7864: 0x1622ffba  bne         $s1, $v0, . + 4 + (-0x46 << 2)
label_2e7868:
    if (ctx->pc == 0x2E7868u) {
        ctx->pc = 0x2E786Cu;
        goto label_2e786c;
    }
    ctx->pc = 0x2E7864u;
    {
        const bool branch_taken_0x2e7864 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e7864) {
            ctx->pc = 0x2E7750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7750;
        }
    }
    ctx->pc = 0x2E786Cu;
label_2e786c:
    // 0x2e786c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e786cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e7870:
    // 0x2e7870: 0xc0b9e3c  jal         func_2E78F0
label_2e7874:
    if (ctx->pc == 0x2E7874u) {
        ctx->pc = 0x2E7878u;
        goto label_2e7878;
    }
    ctx->pc = 0x2E7870u;
    SET_GPR_U32(ctx, 31, 0x2E7878u);
    ctx->pc = 0x2E78F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E78F0u, 0x2E7870u, 0x2E7878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7878u;
label_2e7878:
    // 0x2e7878: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e7878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e787c:
    // 0x2e787c: 0x1000000a  b           . + 4 + (0xA << 2)
label_2e7880:
    if (ctx->pc == 0x2E7880u) {
        ctx->pc = 0x2E7884u;
        goto label_2e7884;
    }
    ctx->pc = 0x2E787Cu;
    {
        const bool branch_taken_0x2e787c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e787c) {
            ctx->pc = 0x2E78A8u;
            goto label_2e78a8;
        }
    }
    ctx->pc = 0x2E7884u;
label_2e7884:
    // 0x2e7884: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2e7884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2e7888:
    // 0x2e7888: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e7888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e788c:
    // 0x2e788c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e788cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e7890:
    // 0x2e7890: 0xc0b9a3c  jal         func_2E68F0
label_2e7894:
    if (ctx->pc == 0x2E7894u) {
        ctx->pc = 0x2E7898u;
        goto label_2e7898;
    }
    ctx->pc = 0x2E7890u;
    SET_GPR_U32(ctx, 31, 0x2E7898u);
    ctx->pc = 0x2E68F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E68F0u, 0x2E7890u, 0x2E7898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7898u;
label_2e7898:
    // 0x2e7898: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e7898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e789c:
    // 0x2e789c: 0xc0b901c  jal         func_2E4070
label_2e78a0:
    if (ctx->pc == 0x2E78A0u) {
        ctx->pc = 0x2E78A4u;
        goto label_2e78a4;
    }
    ctx->pc = 0x2E789Cu;
    SET_GPR_U32(ctx, 31, 0x2E78A4u);
    ctx->pc = 0x2E4070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4070u, 0x2E789Cu, 0x2E78A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E78A4u;
label_2e78a4:
    // 0x2e78a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e78a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2e78a8:
    // 0x2e78a8: 0x214182b  sltu        $v1, $s0, $s4
    ctx->pc = 0x2e78a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_2e78ac:
    // 0x2e78ac: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_2e78b0:
    if (ctx->pc == 0x2E78B0u) {
        ctx->pc = 0x2E78B4u;
        goto label_2e78b4;
    }
    ctx->pc = 0x2E78ACu;
    {
        const bool branch_taken_0x2e78ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e78ac) {
            ctx->pc = 0x2E7884u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7884;
        }
    }
    ctx->pc = 0x2E78B4u;
label_2e78b4:
    // 0x2e78b4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e78b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2e78b8:
    // 0x2e78b8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2e78b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2e78bc:
    // 0x2e78bc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2e78bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2e78c0:
    // 0x2e78c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e78c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e78c4:
    // 0x2e78c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e78c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e78c8:
    // 0x2e78c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e78c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e78cc:
    // 0x2e78cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e78ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e78d0:
    // 0x2e78d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e78d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e78d4:
    // 0x2e78d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e78d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e78d8:
    // 0x2e78d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e78d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e78dc:
    // 0x2e78dc: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2e78dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2e78e0:
    // 0x2e78e0: 0x3e00008  jr          $ra
label_2e78e4:
    if (ctx->pc == 0x2E78E4u) {
        ctx->pc = 0x2E78E8u;
        goto label_2e78e8;
    }
    ctx->pc = 0x2E78E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E78E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E78E8u;
label_2e78e8:
    // 0x2e78e8: 0x0  nop
    ctx->pc = 0x2e78e8u;
    // NOP
label_2e78ec:
    // 0x2e78ec: 0x0  nop
    ctx->pc = 0x2e78ecu;
    // NOP
    ctx->pc = 0x2e78f0u;
}
