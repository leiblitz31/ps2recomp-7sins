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

// Function: sub_00486650
// Address: 0x486650 - 0x486a40
void sub_00486650_0x486650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00486650_0x486650");
#endif

    switch (ctx->pc) {
        case 0x486650u: goto label_486650;
        case 0x486654u: goto label_486654;
        case 0x486658u: goto label_486658;
        case 0x48665cu: goto label_48665c;
        case 0x486660u: goto label_486660;
        case 0x486664u: goto label_486664;
        case 0x486668u: goto label_486668;
        case 0x48666cu: goto label_48666c;
        case 0x486670u: goto label_486670;
        case 0x486674u: goto label_486674;
        case 0x486678u: goto label_486678;
        case 0x48667cu: goto label_48667c;
        case 0x486680u: goto label_486680;
        case 0x486684u: goto label_486684;
        case 0x486688u: goto label_486688;
        case 0x48668cu: goto label_48668c;
        case 0x486690u: goto label_486690;
        case 0x486694u: goto label_486694;
        case 0x486698u: goto label_486698;
        case 0x48669cu: goto label_48669c;
        case 0x4866a0u: goto label_4866a0;
        case 0x4866a4u: goto label_4866a4;
        case 0x4866a8u: goto label_4866a8;
        case 0x4866acu: goto label_4866ac;
        case 0x4866b0u: goto label_4866b0;
        case 0x4866b4u: goto label_4866b4;
        case 0x4866b8u: goto label_4866b8;
        case 0x4866bcu: goto label_4866bc;
        case 0x4866c0u: goto label_4866c0;
        case 0x4866c4u: goto label_4866c4;
        case 0x4866c8u: goto label_4866c8;
        case 0x4866ccu: goto label_4866cc;
        case 0x4866d0u: goto label_4866d0;
        case 0x4866d4u: goto label_4866d4;
        case 0x4866d8u: goto label_4866d8;
        case 0x4866dcu: goto label_4866dc;
        case 0x4866e0u: goto label_4866e0;
        case 0x4866e4u: goto label_4866e4;
        case 0x4866e8u: goto label_4866e8;
        case 0x4866ecu: goto label_4866ec;
        case 0x4866f0u: goto label_4866f0;
        case 0x4866f4u: goto label_4866f4;
        case 0x4866f8u: goto label_4866f8;
        case 0x4866fcu: goto label_4866fc;
        case 0x486700u: goto label_486700;
        case 0x486704u: goto label_486704;
        case 0x486708u: goto label_486708;
        case 0x48670cu: goto label_48670c;
        case 0x486710u: goto label_486710;
        case 0x486714u: goto label_486714;
        case 0x486718u: goto label_486718;
        case 0x48671cu: goto label_48671c;
        case 0x486720u: goto label_486720;
        case 0x486724u: goto label_486724;
        case 0x486728u: goto label_486728;
        case 0x48672cu: goto label_48672c;
        case 0x486730u: goto label_486730;
        case 0x486734u: goto label_486734;
        case 0x486738u: goto label_486738;
        case 0x48673cu: goto label_48673c;
        case 0x486740u: goto label_486740;
        case 0x486744u: goto label_486744;
        case 0x486748u: goto label_486748;
        case 0x48674cu: goto label_48674c;
        case 0x486750u: goto label_486750;
        case 0x486754u: goto label_486754;
        case 0x486758u: goto label_486758;
        case 0x48675cu: goto label_48675c;
        case 0x486760u: goto label_486760;
        case 0x486764u: goto label_486764;
        case 0x486768u: goto label_486768;
        case 0x48676cu: goto label_48676c;
        case 0x486770u: goto label_486770;
        case 0x486774u: goto label_486774;
        case 0x486778u: goto label_486778;
        case 0x48677cu: goto label_48677c;
        case 0x486780u: goto label_486780;
        case 0x486784u: goto label_486784;
        case 0x486788u: goto label_486788;
        case 0x48678cu: goto label_48678c;
        case 0x486790u: goto label_486790;
        case 0x486794u: goto label_486794;
        case 0x486798u: goto label_486798;
        case 0x48679cu: goto label_48679c;
        case 0x4867a0u: goto label_4867a0;
        case 0x4867a4u: goto label_4867a4;
        case 0x4867a8u: goto label_4867a8;
        case 0x4867acu: goto label_4867ac;
        case 0x4867b0u: goto label_4867b0;
        case 0x4867b4u: goto label_4867b4;
        case 0x4867b8u: goto label_4867b8;
        case 0x4867bcu: goto label_4867bc;
        case 0x4867c0u: goto label_4867c0;
        case 0x4867c4u: goto label_4867c4;
        case 0x4867c8u: goto label_4867c8;
        case 0x4867ccu: goto label_4867cc;
        case 0x4867d0u: goto label_4867d0;
        case 0x4867d4u: goto label_4867d4;
        case 0x4867d8u: goto label_4867d8;
        case 0x4867dcu: goto label_4867dc;
        case 0x4867e0u: goto label_4867e0;
        case 0x4867e4u: goto label_4867e4;
        case 0x4867e8u: goto label_4867e8;
        case 0x4867ecu: goto label_4867ec;
        case 0x4867f0u: goto label_4867f0;
        case 0x4867f4u: goto label_4867f4;
        case 0x4867f8u: goto label_4867f8;
        case 0x4867fcu: goto label_4867fc;
        case 0x486800u: goto label_486800;
        case 0x486804u: goto label_486804;
        case 0x486808u: goto label_486808;
        case 0x48680cu: goto label_48680c;
        case 0x486810u: goto label_486810;
        case 0x486814u: goto label_486814;
        case 0x486818u: goto label_486818;
        case 0x48681cu: goto label_48681c;
        case 0x486820u: goto label_486820;
        case 0x486824u: goto label_486824;
        case 0x486828u: goto label_486828;
        case 0x48682cu: goto label_48682c;
        case 0x486830u: goto label_486830;
        case 0x486834u: goto label_486834;
        case 0x486838u: goto label_486838;
        case 0x48683cu: goto label_48683c;
        case 0x486840u: goto label_486840;
        case 0x486844u: goto label_486844;
        case 0x486848u: goto label_486848;
        case 0x48684cu: goto label_48684c;
        case 0x486850u: goto label_486850;
        case 0x486854u: goto label_486854;
        case 0x486858u: goto label_486858;
        case 0x48685cu: goto label_48685c;
        case 0x486860u: goto label_486860;
        case 0x486864u: goto label_486864;
        case 0x486868u: goto label_486868;
        case 0x48686cu: goto label_48686c;
        case 0x486870u: goto label_486870;
        case 0x486874u: goto label_486874;
        case 0x486878u: goto label_486878;
        case 0x48687cu: goto label_48687c;
        case 0x486880u: goto label_486880;
        case 0x486884u: goto label_486884;
        case 0x486888u: goto label_486888;
        case 0x48688cu: goto label_48688c;
        case 0x486890u: goto label_486890;
        case 0x486894u: goto label_486894;
        case 0x486898u: goto label_486898;
        case 0x48689cu: goto label_48689c;
        case 0x4868a0u: goto label_4868a0;
        case 0x4868a4u: goto label_4868a4;
        case 0x4868a8u: goto label_4868a8;
        case 0x4868acu: goto label_4868ac;
        case 0x4868b0u: goto label_4868b0;
        case 0x4868b4u: goto label_4868b4;
        case 0x4868b8u: goto label_4868b8;
        case 0x4868bcu: goto label_4868bc;
        case 0x4868c0u: goto label_4868c0;
        case 0x4868c4u: goto label_4868c4;
        case 0x4868c8u: goto label_4868c8;
        case 0x4868ccu: goto label_4868cc;
        case 0x4868d0u: goto label_4868d0;
        case 0x4868d4u: goto label_4868d4;
        case 0x4868d8u: goto label_4868d8;
        case 0x4868dcu: goto label_4868dc;
        case 0x4868e0u: goto label_4868e0;
        case 0x4868e4u: goto label_4868e4;
        case 0x4868e8u: goto label_4868e8;
        case 0x4868ecu: goto label_4868ec;
        case 0x4868f0u: goto label_4868f0;
        case 0x4868f4u: goto label_4868f4;
        case 0x4868f8u: goto label_4868f8;
        case 0x4868fcu: goto label_4868fc;
        case 0x486900u: goto label_486900;
        case 0x486904u: goto label_486904;
        case 0x486908u: goto label_486908;
        case 0x48690cu: goto label_48690c;
        case 0x486910u: goto label_486910;
        case 0x486914u: goto label_486914;
        case 0x486918u: goto label_486918;
        case 0x48691cu: goto label_48691c;
        case 0x486920u: goto label_486920;
        case 0x486924u: goto label_486924;
        case 0x486928u: goto label_486928;
        case 0x48692cu: goto label_48692c;
        case 0x486930u: goto label_486930;
        case 0x486934u: goto label_486934;
        case 0x486938u: goto label_486938;
        case 0x48693cu: goto label_48693c;
        case 0x486940u: goto label_486940;
        case 0x486944u: goto label_486944;
        case 0x486948u: goto label_486948;
        case 0x48694cu: goto label_48694c;
        case 0x486950u: goto label_486950;
        case 0x486954u: goto label_486954;
        case 0x486958u: goto label_486958;
        case 0x48695cu: goto label_48695c;
        case 0x486960u: goto label_486960;
        case 0x486964u: goto label_486964;
        case 0x486968u: goto label_486968;
        case 0x48696cu: goto label_48696c;
        case 0x486970u: goto label_486970;
        case 0x486974u: goto label_486974;
        case 0x486978u: goto label_486978;
        case 0x48697cu: goto label_48697c;
        case 0x486980u: goto label_486980;
        case 0x486984u: goto label_486984;
        case 0x486988u: goto label_486988;
        case 0x48698cu: goto label_48698c;
        case 0x486990u: goto label_486990;
        case 0x486994u: goto label_486994;
        case 0x486998u: goto label_486998;
        case 0x48699cu: goto label_48699c;
        case 0x4869a0u: goto label_4869a0;
        case 0x4869a4u: goto label_4869a4;
        case 0x4869a8u: goto label_4869a8;
        case 0x4869acu: goto label_4869ac;
        case 0x4869b0u: goto label_4869b0;
        case 0x4869b4u: goto label_4869b4;
        case 0x4869b8u: goto label_4869b8;
        case 0x4869bcu: goto label_4869bc;
        case 0x4869c0u: goto label_4869c0;
        case 0x4869c4u: goto label_4869c4;
        case 0x4869c8u: goto label_4869c8;
        case 0x4869ccu: goto label_4869cc;
        case 0x4869d0u: goto label_4869d0;
        case 0x4869d4u: goto label_4869d4;
        case 0x4869d8u: goto label_4869d8;
        case 0x4869dcu: goto label_4869dc;
        case 0x4869e0u: goto label_4869e0;
        case 0x4869e4u: goto label_4869e4;
        case 0x4869e8u: goto label_4869e8;
        case 0x4869ecu: goto label_4869ec;
        case 0x4869f0u: goto label_4869f0;
        case 0x4869f4u: goto label_4869f4;
        case 0x4869f8u: goto label_4869f8;
        case 0x4869fcu: goto label_4869fc;
        case 0x486a00u: goto label_486a00;
        case 0x486a04u: goto label_486a04;
        case 0x486a08u: goto label_486a08;
        case 0x486a0cu: goto label_486a0c;
        case 0x486a10u: goto label_486a10;
        case 0x486a14u: goto label_486a14;
        case 0x486a18u: goto label_486a18;
        case 0x486a1cu: goto label_486a1c;
        case 0x486a20u: goto label_486a20;
        case 0x486a24u: goto label_486a24;
        case 0x486a28u: goto label_486a28;
        case 0x486a2cu: goto label_486a2c;
        case 0x486a30u: goto label_486a30;
        case 0x486a34u: goto label_486a34;
        case 0x486a38u: goto label_486a38;
        case 0x486a3cu: goto label_486a3c;
        default: break;
    }

    ctx->pc = 0x486650u;

label_486650:
    // 0x486650: 0x27bdfd10  addiu       $sp, $sp, -0x2F0
    ctx->pc = 0x486650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966544));
label_486654:
    // 0x486654: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x486654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_486658:
    // 0x486658: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x486658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48665c:
    // 0x48665c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48665cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_486660:
    // 0x486660: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x486660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_486664:
    // 0x486664: 0xafa402c0  sw          $a0, 0x2C0($sp)
    ctx->pc = 0x486664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 4));
label_486668:
    // 0x486668: 0xe7ac02d0  swc1        $f12, 0x2D0($sp)
    ctx->pc = 0x486668u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
label_48666c:
    // 0x48666c: 0xafa502e0  sw          $a1, 0x2E0($sp)
    ctx->pc = 0x48666cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 5));
label_486670:
    // 0x486670: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x486670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486674:
    // 0x486674: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x486674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_486678:
    // 0x486678: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x486678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_48667c:
    // 0x48667c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_486680:
    if (ctx->pc == 0x486680u) {
        ctx->pc = 0x486684u;
        goto label_486684;
    }
    ctx->pc = 0x48667Cu;
    {
        const bool branch_taken_0x48667c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48667c) {
            ctx->pc = 0x48672Cu;
            goto label_48672c;
        }
    }
    ctx->pc = 0x486684u;
label_486684:
    // 0x486684: 0x8f82b5c0  lw          $v0, -0x4A40($gp)
    ctx->pc = 0x486684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948288)));
label_486688:
    // 0x486688: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_48668c:
    if (ctx->pc == 0x48668Cu) {
        ctx->pc = 0x486690u;
        goto label_486690;
    }
    ctx->pc = 0x486688u;
    {
        const bool branch_taken_0x486688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486688) {
            ctx->pc = 0x48672Cu;
            goto label_48672c;
        }
    }
    ctx->pc = 0x486690u;
label_486690:
    // 0x486690: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x486690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_486694:
    // 0x486694: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x486694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_486698:
    // 0x486698: 0x27a602a8  addiu       $a2, $sp, 0x2A8
    ctx->pc = 0x486698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 680));
label_48669c:
    // 0x48669c: 0xc115ee8  jal         func_457BA0
label_4866a0:
    if (ctx->pc == 0x4866A0u) {
        ctx->pc = 0x4866A4u;
        goto label_4866a4;
    }
    ctx->pc = 0x48669Cu;
    SET_GPR_U32(ctx, 31, 0x4866A4u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48669Cu, 0x4866A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4866A4u;
label_4866a4:
    // 0x4866a4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4866a8:
    if (ctx->pc == 0x4866A8u) {
        ctx->pc = 0x4866ACu;
        goto label_4866ac;
    }
    ctx->pc = 0x4866A4u;
    {
        const bool branch_taken_0x4866a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4866a4) {
            ctx->pc = 0x48672Cu;
            goto label_48672c;
        }
    }
    ctx->pc = 0x4866ACu;
label_4866ac:
    // 0x4866ac: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x4866acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_4866b0:
    // 0x4866b0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4866b4:
    if (ctx->pc == 0x4866B4u) {
        ctx->pc = 0x4866B8u;
        goto label_4866b8;
    }
    ctx->pc = 0x4866B0u;
    {
        const bool branch_taken_0x4866b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4866b0) {
            ctx->pc = 0x48672Cu;
            goto label_48672c;
        }
    }
    ctx->pc = 0x4866B8u;
label_4866b8:
    // 0x4866b8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x4866b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4866bc:
    // 0x4866bc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4866bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4866c0:
    // 0x4866c0: 0x8fa602ac  lw          $a2, 0x2AC($sp)
    ctx->pc = 0x4866c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
label_4866c4:
    // 0x4866c4: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x4866c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_4866c8:
    // 0x4866c8: 0x24e73d50  addiu       $a3, $a3, 0x3D50
    ctx->pc = 0x4866c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15696));
label_4866cc:
    // 0x4866cc: 0x24080178  addiu       $t0, $zero, 0x178
    ctx->pc = 0x4866ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
label_4866d0:
    // 0x4866d0: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x4866d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_4866d4:
    // 0x4866d4: 0x25293dd0  addiu       $t1, $t1, 0x3DD0
    ctx->pc = 0x4866d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15824));
label_4866d8:
    // 0x4866d8: 0xc113940  jal         func_44E500
label_4866dc:
    if (ctx->pc == 0x4866DCu) {
        ctx->pc = 0x4866E0u;
        goto label_4866e0;
    }
    ctx->pc = 0x4866D8u;
    SET_GPR_U32(ctx, 31, 0x4866E0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4866D8u, 0x4866E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4866E0u;
label_4866e0:
    // 0x4866e0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x4866e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4866e4:
    // 0x4866e4: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4866e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_4866e8:
    // 0x4866e8: 0x24a53df0  addiu       $a1, $a1, 0x3DF0
    ctx->pc = 0x4866e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15856));
label_4866ec:
    // 0x4866ec: 0xc115c24  jal         func_457090
label_4866f0:
    if (ctx->pc == 0x4866F0u) {
        ctx->pc = 0x4866F4u;
        goto label_4866f4;
    }
    ctx->pc = 0x4866ECu;
    SET_GPR_U32(ctx, 31, 0x4866F4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4866ECu, 0x4866F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4866F4u;
label_4866f4:
    // 0x4866f4: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x4866f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4866f8:
    // 0x4866f8: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x4866f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_4866fc:
    // 0x4866fc: 0x40f809  jalr        $v0
label_486700:
    if (ctx->pc == 0x486700u) {
        ctx->pc = 0x486704u;
        goto label_486704;
    }
    ctx->pc = 0x4866FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x486704u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4866FCu, 0x486704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x486704u;
label_486704:
    // 0x486704: 0xaf82b5c0  sw          $v0, -0x4A40($gp)
    ctx->pc = 0x486704u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948288), GPR_U32(ctx, 2));
label_486708:
    // 0x486708: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x486708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_48670c:
    // 0x48670c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_486710:
    if (ctx->pc == 0x486710u) {
        ctx->pc = 0x486714u;
        goto label_486714;
    }
    ctx->pc = 0x48670Cu;
    {
        const bool branch_taken_0x48670c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48670c) {
            ctx->pc = 0x48671Cu;
            goto label_48671c;
        }
    }
    ctx->pc = 0x486714u;
label_486714:
    // 0x486714: 0xd  break       0
    ctx->pc = 0x486714u;
    runtime->handleBreak(rdram, ctx);
label_486718:
    // 0x486718: 0x0  nop
    ctx->pc = 0x486718u;
    // NOP
label_48671c:
    // 0x48671c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x48671cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_486720:
    // 0x486720: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x486720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_486724:
    // 0x486724: 0xc11392c  jal         func_44E4B0
label_486728:
    if (ctx->pc == 0x486728u) {
        ctx->pc = 0x48672Cu;
        goto label_48672c;
    }
    ctx->pc = 0x486724u;
    SET_GPR_U32(ctx, 31, 0x48672Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x486724u, 0x48672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48672Cu;
label_48672c:
    // 0x48672c: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x48672cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486730:
    // 0x486730: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x486730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_486734:
    // 0x486734: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x486734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_486738:
    // 0x486738: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x486738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48673c:
    // 0x48673c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_486740:
    if (ctx->pc == 0x486740u) {
        ctx->pc = 0x486744u;
        goto label_486744;
    }
    ctx->pc = 0x48673Cu;
    {
        const bool branch_taken_0x48673c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48673c) {
            ctx->pc = 0x4867ECu;
            goto label_4867ec;
        }
    }
    ctx->pc = 0x486744u;
label_486744:
    // 0x486744: 0x8f82b5c4  lw          $v0, -0x4A3C($gp)
    ctx->pc = 0x486744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948292)));
label_486748:
    // 0x486748: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_48674c:
    if (ctx->pc == 0x48674Cu) {
        ctx->pc = 0x486750u;
        goto label_486750;
    }
    ctx->pc = 0x486748u;
    {
        const bool branch_taken_0x486748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486748) {
            ctx->pc = 0x4867ECu;
            goto label_4867ec;
        }
    }
    ctx->pc = 0x486750u;
label_486750:
    // 0x486750: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x486750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_486754:
    // 0x486754: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x486754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_486758:
    // 0x486758: 0x27a60298  addiu       $a2, $sp, 0x298
    ctx->pc = 0x486758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
label_48675c:
    // 0x48675c: 0xc115ee8  jal         func_457BA0
label_486760:
    if (ctx->pc == 0x486760u) {
        ctx->pc = 0x486764u;
        goto label_486764;
    }
    ctx->pc = 0x48675Cu;
    SET_GPR_U32(ctx, 31, 0x486764u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48675Cu, 0x486764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486764u;
label_486764:
    // 0x486764: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_486768:
    if (ctx->pc == 0x486768u) {
        ctx->pc = 0x48676Cu;
        goto label_48676c;
    }
    ctx->pc = 0x486764u;
    {
        const bool branch_taken_0x486764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486764) {
            ctx->pc = 0x4867ECu;
            goto label_4867ec;
        }
    }
    ctx->pc = 0x48676Cu;
label_48676c:
    // 0x48676c: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x48676cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_486770:
    // 0x486770: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_486774:
    if (ctx->pc == 0x486774u) {
        ctx->pc = 0x486778u;
        goto label_486778;
    }
    ctx->pc = 0x486770u;
    {
        const bool branch_taken_0x486770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486770) {
            ctx->pc = 0x4867ECu;
            goto label_4867ec;
        }
    }
    ctx->pc = 0x486778u;
label_486778:
    // 0x486778: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x486778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_48677c:
    // 0x48677c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48677cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_486780:
    // 0x486780: 0x8fa6029c  lw          $a2, 0x29C($sp)
    ctx->pc = 0x486780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_486784:
    // 0x486784: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x486784u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_486788:
    // 0x486788: 0x24e73d50  addiu       $a3, $a3, 0x3D50
    ctx->pc = 0x486788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15696));
label_48678c:
    // 0x48678c: 0x24080179  addiu       $t0, $zero, 0x179
    ctx->pc = 0x48678cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 377));
label_486790:
    // 0x486790: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x486790u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_486794:
    // 0x486794: 0x25293e40  addiu       $t1, $t1, 0x3E40
    ctx->pc = 0x486794u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15936));
label_486798:
    // 0x486798: 0xc113940  jal         func_44E500
label_48679c:
    if (ctx->pc == 0x48679Cu) {
        ctx->pc = 0x4867A0u;
        goto label_4867a0;
    }
    ctx->pc = 0x486798u;
    SET_GPR_U32(ctx, 31, 0x4867A0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x486798u, 0x4867A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4867A0u;
label_4867a0:
    // 0x4867a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4867a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4867a4:
    // 0x4867a4: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4867a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_4867a8:
    // 0x4867a8: 0x24a53e70  addiu       $a1, $a1, 0x3E70
    ctx->pc = 0x4867a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15984));
label_4867ac:
    // 0x4867ac: 0xc115c24  jal         func_457090
label_4867b0:
    if (ctx->pc == 0x4867B0u) {
        ctx->pc = 0x4867B4u;
        goto label_4867b4;
    }
    ctx->pc = 0x4867ACu;
    SET_GPR_U32(ctx, 31, 0x4867B4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4867ACu, 0x4867B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4867B4u;
label_4867b4:
    // 0x4867b4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4867b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4867b8:
    // 0x4867b8: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x4867b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_4867bc:
    // 0x4867bc: 0x40f809  jalr        $v0
label_4867c0:
    if (ctx->pc == 0x4867C0u) {
        ctx->pc = 0x4867C4u;
        goto label_4867c4;
    }
    ctx->pc = 0x4867BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4867C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4867BCu, 0x4867C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4867C4u;
label_4867c4:
    // 0x4867c4: 0xaf82b5c4  sw          $v0, -0x4A3C($gp)
    ctx->pc = 0x4867c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948292), GPR_U32(ctx, 2));
label_4867c8:
    // 0x4867c8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x4867c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4867cc:
    // 0x4867cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4867d0:
    if (ctx->pc == 0x4867D0u) {
        ctx->pc = 0x4867D4u;
        goto label_4867d4;
    }
    ctx->pc = 0x4867CCu;
    {
        const bool branch_taken_0x4867cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4867cc) {
            ctx->pc = 0x4867DCu;
            goto label_4867dc;
        }
    }
    ctx->pc = 0x4867D4u;
label_4867d4:
    // 0x4867d4: 0xd  break       0
    ctx->pc = 0x4867d4u;
    runtime->handleBreak(rdram, ctx);
label_4867d8:
    // 0x4867d8: 0x0  nop
    ctx->pc = 0x4867d8u;
    // NOP
label_4867dc:
    // 0x4867dc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4867dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4867e0:
    // 0x4867e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4867e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4867e4:
    // 0x4867e4: 0xc11392c  jal         func_44E4B0
label_4867e8:
    if (ctx->pc == 0x4867E8u) {
        ctx->pc = 0x4867ECu;
        goto label_4867ec;
    }
    ctx->pc = 0x4867E4u;
    SET_GPR_U32(ctx, 31, 0x4867ECu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4867E4u, 0x4867ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4867ECu;
label_4867ec:
    // 0x4867ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4867ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4867f0:
    // 0x4867f0: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x4867f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_4867f4:
    // 0x4867f4: 0x90420072  lbu         $v0, 0x72($v0)
    ctx->pc = 0x4867f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 114)));
label_4867f8:
    // 0x4867f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4867fc:
    if (ctx->pc == 0x4867FCu) {
        ctx->pc = 0x486800u;
        goto label_486800;
    }
    ctx->pc = 0x4867F8u;
    {
        const bool branch_taken_0x4867f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4867f8) {
            ctx->pc = 0x486810u;
            goto label_486810;
        }
    }
    ctx->pc = 0x486800u;
label_486800:
    // 0x486800: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x486800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486804:
    // 0x486804: 0x8c51007c  lw          $s1, 0x7C($v0)
    ctx->pc = 0x486804u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_486808:
    // 0x486808: 0x10000003  b           . + 4 + (0x3 << 2)
label_48680c:
    if (ctx->pc == 0x48680Cu) {
        ctx->pc = 0x486810u;
        goto label_486810;
    }
    ctx->pc = 0x486808u;
    {
        const bool branch_taken_0x486808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x486808) {
            ctx->pc = 0x486818u;
            goto label_486818;
        }
    }
    ctx->pc = 0x486810u;
label_486810:
    // 0x486810: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x486810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486814:
    // 0x486814: 0x8c510078  lw          $s1, 0x78($v0)
    ctx->pc = 0x486814u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_486818:
    // 0x486818: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x486818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48681c:
    // 0x48681c: 0xc7a002d0  lwc1        $f0, 0x2D0($sp)
    ctx->pc = 0x48681cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_486820:
    // 0x486820: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x486820u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_486824:
    // 0x486824: 0xe7a002bc  swc1        $f0, 0x2BC($sp)
    ctx->pc = 0x486824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 700), bits); }
label_486828:
    // 0x486828: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x486828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48682c:
    // 0x48682c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_486830:
    if (ctx->pc == 0x486830u) {
        ctx->pc = 0x486834u;
        goto label_486834;
    }
    ctx->pc = 0x48682Cu;
    {
        const bool branch_taken_0x48682c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48682c) {
            ctx->pc = 0x4868D8u;
            goto label_4868d8;
        }
    }
    ctx->pc = 0x486834u;
label_486834:
    // 0x486834: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x486834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_486838:
    // 0x486838: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x486838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_48683c:
    // 0x48683c: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x48683cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_486840:
    // 0x486840: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x486840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_486844:
    // 0x486844: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x486844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_486848:
    // 0x486848: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x486848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_48684c:
    // 0x48684c: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x48684cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486850:
    // 0x486850: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x486850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_486854:
    // 0x486854: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x486854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_486858:
    // 0x486858: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_48685c:
    if (ctx->pc == 0x48685Cu) {
        ctx->pc = 0x486860u;
        goto label_486860;
    }
    ctx->pc = 0x486858u;
    {
        const bool branch_taken_0x486858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486858) {
            ctx->pc = 0x4868D4u;
            goto label_4868d4;
        }
    }
    ctx->pc = 0x486860u;
label_486860:
    // 0x486860: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x486860u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_486864:
    // 0x486864: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x486864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_486868:
    // 0x486868: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x486868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_48686c:
    // 0x48686c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x48686cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_486870:
    // 0x486870: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x486870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486874:
    // 0x486874: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x486874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_486878:
    // 0x486878: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x486878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48687c:
    // 0x48687c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x48687cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_486880:
    // 0x486880: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x486880u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_486884:
    // 0x486884: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_486888:
    if (ctx->pc == 0x486888u) {
        ctx->pc = 0x48688Cu;
        goto label_48688c;
    }
    ctx->pc = 0x486884u;
    {
        const bool branch_taken_0x486884 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x486884) {
            ctx->pc = 0x4868BCu;
            goto label_4868bc;
        }
    }
    ctx->pc = 0x48688Cu;
label_48688c:
    // 0x48688c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x48688cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_486890:
    // 0x486890: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x486890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_486894:
    // 0x486894: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x486894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_486898:
    // 0x486898: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x486898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_48689c:
    // 0x48689c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48689cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4868a0:
    // 0x4868a0: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x4868a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4868a4:
    // 0x4868a4: 0xc7a002bc  lwc1        $f0, 0x2BC($sp)
    ctx->pc = 0x4868a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4868a8:
    // 0x4868a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4868a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4868ac:
    // 0x4868ac: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_4868b0:
    if (ctx->pc == 0x4868B0u) {
        ctx->pc = 0x4868B4u;
        goto label_4868b4;
    }
    ctx->pc = 0x4868ACu;
    {
        const bool branch_taken_0x4868ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4868ac) {
            ctx->pc = 0x4868BCu;
            goto label_4868bc;
        }
    }
    ctx->pc = 0x4868B4u;
label_4868b4:
    // 0x4868b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4868b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4868b8:
    // 0x4868b8: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x4868b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4868bc:
    // 0x4868bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4868bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4868c0:
    // 0x4868c0: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x4868c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_4868c4:
    // 0x4868c4: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x4868c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_4868c8:
    // 0x4868c8: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x4868c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_4868cc:
    // 0x4868cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4868ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4868d0:
    // 0x4868d0: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x4868d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_4868d4:
    // 0x4868d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4868d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4868d8:
    // 0x4868d8: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x4868d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_4868dc:
    // 0x4868dc: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_4868e0:
    if (ctx->pc == 0x4868E0u) {
        ctx->pc = 0x4868E4u;
        goto label_4868e4;
    }
    ctx->pc = 0x4868DCu;
    {
        const bool branch_taken_0x4868dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4868dc) {
            ctx->pc = 0x486834u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_486834;
        }
    }
    ctx->pc = 0x4868E4u;
label_4868e4:
    // 0x4868e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4868e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4868e8:
    // 0x4868e8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x4868e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4868ec:
    // 0x4868ec: 0xe7a002b8  swc1        $f0, 0x2B8($sp)
    ctx->pc = 0x4868ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
label_4868f0:
    // 0x4868f0: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x4868f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_4868f4:
    // 0x4868f4: 0xc1218fc  jal         func_4863F0
label_4868f8:
    if (ctx->pc == 0x4868F8u) {
        ctx->pc = 0x4868FCu;
        goto label_4868fc;
    }
    ctx->pc = 0x4868F4u;
    SET_GPR_U32(ctx, 31, 0x4868FCu);
    ctx->pc = 0x4863F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4863F0u, 0x4868F4u, 0x4868FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4868FCu;
label_4868fc:
    // 0x4868fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_486900:
    if (ctx->pc == 0x486900u) {
        ctx->pc = 0x486904u;
        goto label_486904;
    }
    ctx->pc = 0x4868FCu;
    {
        const bool branch_taken_0x4868fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4868fc) {
            ctx->pc = 0x486910u;
            goto label_486910;
        }
    }
    ctx->pc = 0x486904u;
label_486904:
    // 0x486904: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x486904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_486908:
    // 0x486908: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_48690c:
    if (ctx->pc == 0x48690Cu) {
        ctx->pc = 0x486910u;
        goto label_486910;
    }
    ctx->pc = 0x486908u;
    {
        const bool branch_taken_0x486908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x486908) {
            ctx->pc = 0x486920u;
            goto label_486920;
        }
    }
    ctx->pc = 0x486910u;
label_486910:
    // 0x486910: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x486910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_486914:
    // 0x486914: 0xc7ac02d0  lwc1        $f12, 0x2D0($sp)
    ctx->pc = 0x486914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_486918:
    // 0x486918: 0xc0eef7c  jal         func_3BBDF0
label_48691c:
    if (ctx->pc == 0x48691Cu) {
        ctx->pc = 0x486920u;
        goto label_486920;
    }
    ctx->pc = 0x486918u;
    SET_GPR_U32(ctx, 31, 0x486920u);
    ctx->pc = 0x3BBDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBDF0u, 0x486918u, 0x486920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486920u;
label_486920:
    // 0x486920: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x486920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_486924:
    // 0x486924: 0x10000028  b           . + 4 + (0x28 << 2)
label_486928:
    if (ctx->pc == 0x486928u) {
        ctx->pc = 0x48692Cu;
        goto label_48692c;
    }
    ctx->pc = 0x486924u;
    {
        const bool branch_taken_0x486924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x486924) {
            ctx->pc = 0x4869C8u;
            goto label_4869c8;
        }
    }
    ctx->pc = 0x48692Cu;
label_48692c:
    // 0x48692c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x48692cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_486930:
    // 0x486930: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x486930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_486934:
    // 0x486934: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x486934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_486938:
    // 0x486938: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_48693c:
    if (ctx->pc == 0x48693Cu) {
        ctx->pc = 0x486940u;
        goto label_486940;
    }
    ctx->pc = 0x486938u;
    {
        const bool branch_taken_0x486938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x486938) {
            ctx->pc = 0x4869C4u;
            goto label_4869c4;
        }
    }
    ctx->pc = 0x486940u;
label_486940:
    // 0x486940: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x486940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_486944:
    // 0x486944: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x486944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_486948:
    // 0x486948: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x486948u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48694c:
    // 0x48694c: 0x8fa302c0  lw          $v1, 0x2C0($sp)
    ctx->pc = 0x48694cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486950:
    // 0x486950: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x486950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_486954:
    // 0x486954: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x486954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_486958:
    // 0x486958: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_48695c:
    if (ctx->pc == 0x48695Cu) {
        ctx->pc = 0x486960u;
        goto label_486960;
    }
    ctx->pc = 0x486958u;
    {
        const bool branch_taken_0x486958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x486958) {
            ctx->pc = 0x4869C4u;
            goto label_4869c4;
        }
    }
    ctx->pc = 0x486960u;
label_486960:
    // 0x486960: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x486960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486964:
    // 0x486964: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x486964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_486968:
    // 0x486968: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x486968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_48696c:
    // 0x48696c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x48696cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_486970:
    // 0x486970: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x486970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_486974:
    // 0x486974: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x486974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486978:
    // 0x486978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x486978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48697c:
    // 0x48697c: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x48697cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_486980:
    // 0x486980: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x486980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_486984:
    // 0x486984: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x486984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_486988:
    // 0x486988: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x486988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_48698c:
    // 0x48698c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x48698cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_486990:
    // 0x486990: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x486990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486994:
    // 0x486994: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x486994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_486998:
    // 0x486998: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x486998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_48699c:
    // 0x48699c: 0x40f809  jalr        $v0
label_4869a0:
    if (ctx->pc == 0x4869A0u) {
        ctx->pc = 0x4869A4u;
        goto label_4869a4;
    }
    ctx->pc = 0x48699Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4869A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48699Cu, 0x4869A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4869A4u;
label_4869a4:
    // 0x4869a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_4869a8:
    if (ctx->pc == 0x4869A8u) {
        ctx->pc = 0x4869ACu;
        goto label_4869ac;
    }
    ctx->pc = 0x4869A4u;
    {
        const bool branch_taken_0x4869a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4869a4) {
            ctx->pc = 0x4869C4u;
            goto label_4869c4;
        }
    }
    ctx->pc = 0x4869ACu;
label_4869ac:
    // 0x4869ac: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x4869acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_4869b0:
    // 0x4869b0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4869b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4869b4:
    // 0x4869b4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x4869b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4869b8:
    // 0x4869b8: 0x8fa302c0  lw          $v1, 0x2C0($sp)
    ctx->pc = 0x4869b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_4869bc:
    // 0x4869bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4869bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4869c0:
    // 0x4869c0: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x4869c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_4869c4:
    // 0x4869c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4869c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4869c8:
    // 0x4869c8: 0x2e030005  sltiu       $v1, $s0, 0x5
    ctx->pc = 0x4869c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_4869cc:
    // 0x4869cc: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
label_4869d0:
    if (ctx->pc == 0x4869D0u) {
        ctx->pc = 0x4869D4u;
        goto label_4869d4;
    }
    ctx->pc = 0x4869CCu;
    {
        const bool branch_taken_0x4869cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4869cc) {
            ctx->pc = 0x48692Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48692c;
        }
    }
    ctx->pc = 0x4869D4u;
label_4869d4:
    // 0x4869d4: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x4869d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_4869d8:
    // 0x4869d8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4869dc:
    if (ctx->pc == 0x4869DCu) {
        ctx->pc = 0x4869E0u;
        goto label_4869e0;
    }
    ctx->pc = 0x4869D8u;
    {
        const bool branch_taken_0x4869d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4869d8) {
            ctx->pc = 0x4869F4u;
            goto label_4869f4;
        }
    }
    ctx->pc = 0x4869E0u;
label_4869e0:
    // 0x4869e0: 0x8fa302c0  lw          $v1, 0x2C0($sp)
    ctx->pc = 0x4869e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_4869e4:
    // 0x4869e4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x4869e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4869e8:
    // 0x4869e8: 0xc7a002d0  lwc1        $f0, 0x2D0($sp)
    ctx->pc = 0x4869e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4869ec:
    // 0x4869ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4869ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4869f0:
    // 0x4869f0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x4869f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_4869f4:
    // 0x4869f4: 0x8fa302c0  lw          $v1, 0x2C0($sp)
    ctx->pc = 0x4869f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_4869f8:
    // 0x4869f8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x4869f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4869fc:
    // 0x4869fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4869fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_486a00:
    // 0x486a00: 0x0  nop
    ctx->pc = 0x486a00u;
    // NOP
label_486a04:
    // 0x486a04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x486a04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_486a08:
    // 0x486a08: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_486a0c:
    if (ctx->pc == 0x486A0Cu) {
        ctx->pc = 0x486A10u;
        goto label_486a10;
    }
    ctx->pc = 0x486A08u;
    {
        const bool branch_taken_0x486a08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x486a08) {
            ctx->pc = 0x486A1Cu;
            goto label_486a1c;
        }
    }
    ctx->pc = 0x486A10u;
label_486a10:
    // 0x486a10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x486a10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_486a14:
    // 0x486a14: 0x8fa302c0  lw          $v1, 0x2C0($sp)
    ctx->pc = 0x486a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_486a18:
    // 0x486a18: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x486a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_486a1c:
    // 0x486a1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x486a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_486a20:
    // 0x486a20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x486a20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_486a24:
    // 0x486a24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x486a24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_486a28:
    // 0x486a28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x486a28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_486a2c:
    // 0x486a2c: 0x27bd02f0  addiu       $sp, $sp, 0x2F0
    ctx->pc = 0x486a2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_486a30:
    // 0x486a30: 0x3e00008  jr          $ra
label_486a34:
    if (ctx->pc == 0x486A34u) {
        ctx->pc = 0x486A38u;
        goto label_486a38;
    }
    ctx->pc = 0x486A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x486A38u;
label_486a38:
    // 0x486a38: 0x0  nop
    ctx->pc = 0x486a38u;
    // NOP
label_486a3c:
    // 0x486a3c: 0x0  nop
    ctx->pc = 0x486a3cu;
    // NOP
    ctx->pc = 0x486a40u;
}
