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

// Function: sub_002BE810
// Address: 0x2be810 - 0x2beae0
void sub_002BE810_0x2be810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE810_0x2be810");
#endif

    switch (ctx->pc) {
        case 0x2be810u: goto label_2be810;
        case 0x2be814u: goto label_2be814;
        case 0x2be818u: goto label_2be818;
        case 0x2be81cu: goto label_2be81c;
        case 0x2be820u: goto label_2be820;
        case 0x2be824u: goto label_2be824;
        case 0x2be828u: goto label_2be828;
        case 0x2be82cu: goto label_2be82c;
        case 0x2be830u: goto label_2be830;
        case 0x2be834u: goto label_2be834;
        case 0x2be838u: goto label_2be838;
        case 0x2be83cu: goto label_2be83c;
        case 0x2be840u: goto label_2be840;
        case 0x2be844u: goto label_2be844;
        case 0x2be848u: goto label_2be848;
        case 0x2be84cu: goto label_2be84c;
        case 0x2be850u: goto label_2be850;
        case 0x2be854u: goto label_2be854;
        case 0x2be858u: goto label_2be858;
        case 0x2be85cu: goto label_2be85c;
        case 0x2be860u: goto label_2be860;
        case 0x2be864u: goto label_2be864;
        case 0x2be868u: goto label_2be868;
        case 0x2be86cu: goto label_2be86c;
        case 0x2be870u: goto label_2be870;
        case 0x2be874u: goto label_2be874;
        case 0x2be878u: goto label_2be878;
        case 0x2be87cu: goto label_2be87c;
        case 0x2be880u: goto label_2be880;
        case 0x2be884u: goto label_2be884;
        case 0x2be888u: goto label_2be888;
        case 0x2be88cu: goto label_2be88c;
        case 0x2be890u: goto label_2be890;
        case 0x2be894u: goto label_2be894;
        case 0x2be898u: goto label_2be898;
        case 0x2be89cu: goto label_2be89c;
        case 0x2be8a0u: goto label_2be8a0;
        case 0x2be8a4u: goto label_2be8a4;
        case 0x2be8a8u: goto label_2be8a8;
        case 0x2be8acu: goto label_2be8ac;
        case 0x2be8b0u: goto label_2be8b0;
        case 0x2be8b4u: goto label_2be8b4;
        case 0x2be8b8u: goto label_2be8b8;
        case 0x2be8bcu: goto label_2be8bc;
        case 0x2be8c0u: goto label_2be8c0;
        case 0x2be8c4u: goto label_2be8c4;
        case 0x2be8c8u: goto label_2be8c8;
        case 0x2be8ccu: goto label_2be8cc;
        case 0x2be8d0u: goto label_2be8d0;
        case 0x2be8d4u: goto label_2be8d4;
        case 0x2be8d8u: goto label_2be8d8;
        case 0x2be8dcu: goto label_2be8dc;
        case 0x2be8e0u: goto label_2be8e0;
        case 0x2be8e4u: goto label_2be8e4;
        case 0x2be8e8u: goto label_2be8e8;
        case 0x2be8ecu: goto label_2be8ec;
        case 0x2be8f0u: goto label_2be8f0;
        case 0x2be8f4u: goto label_2be8f4;
        case 0x2be8f8u: goto label_2be8f8;
        case 0x2be8fcu: goto label_2be8fc;
        case 0x2be900u: goto label_2be900;
        case 0x2be904u: goto label_2be904;
        case 0x2be908u: goto label_2be908;
        case 0x2be90cu: goto label_2be90c;
        case 0x2be910u: goto label_2be910;
        case 0x2be914u: goto label_2be914;
        case 0x2be918u: goto label_2be918;
        case 0x2be91cu: goto label_2be91c;
        case 0x2be920u: goto label_2be920;
        case 0x2be924u: goto label_2be924;
        case 0x2be928u: goto label_2be928;
        case 0x2be92cu: goto label_2be92c;
        case 0x2be930u: goto label_2be930;
        case 0x2be934u: goto label_2be934;
        case 0x2be938u: goto label_2be938;
        case 0x2be93cu: goto label_2be93c;
        case 0x2be940u: goto label_2be940;
        case 0x2be944u: goto label_2be944;
        case 0x2be948u: goto label_2be948;
        case 0x2be94cu: goto label_2be94c;
        case 0x2be950u: goto label_2be950;
        case 0x2be954u: goto label_2be954;
        case 0x2be958u: goto label_2be958;
        case 0x2be95cu: goto label_2be95c;
        case 0x2be960u: goto label_2be960;
        case 0x2be964u: goto label_2be964;
        case 0x2be968u: goto label_2be968;
        case 0x2be96cu: goto label_2be96c;
        case 0x2be970u: goto label_2be970;
        case 0x2be974u: goto label_2be974;
        case 0x2be978u: goto label_2be978;
        case 0x2be97cu: goto label_2be97c;
        case 0x2be980u: goto label_2be980;
        case 0x2be984u: goto label_2be984;
        case 0x2be988u: goto label_2be988;
        case 0x2be98cu: goto label_2be98c;
        case 0x2be990u: goto label_2be990;
        case 0x2be994u: goto label_2be994;
        case 0x2be998u: goto label_2be998;
        case 0x2be99cu: goto label_2be99c;
        case 0x2be9a0u: goto label_2be9a0;
        case 0x2be9a4u: goto label_2be9a4;
        case 0x2be9a8u: goto label_2be9a8;
        case 0x2be9acu: goto label_2be9ac;
        case 0x2be9b0u: goto label_2be9b0;
        case 0x2be9b4u: goto label_2be9b4;
        case 0x2be9b8u: goto label_2be9b8;
        case 0x2be9bcu: goto label_2be9bc;
        case 0x2be9c0u: goto label_2be9c0;
        case 0x2be9c4u: goto label_2be9c4;
        case 0x2be9c8u: goto label_2be9c8;
        case 0x2be9ccu: goto label_2be9cc;
        case 0x2be9d0u: goto label_2be9d0;
        case 0x2be9d4u: goto label_2be9d4;
        case 0x2be9d8u: goto label_2be9d8;
        case 0x2be9dcu: goto label_2be9dc;
        case 0x2be9e0u: goto label_2be9e0;
        case 0x2be9e4u: goto label_2be9e4;
        case 0x2be9e8u: goto label_2be9e8;
        case 0x2be9ecu: goto label_2be9ec;
        case 0x2be9f0u: goto label_2be9f0;
        case 0x2be9f4u: goto label_2be9f4;
        case 0x2be9f8u: goto label_2be9f8;
        case 0x2be9fcu: goto label_2be9fc;
        case 0x2bea00u: goto label_2bea00;
        case 0x2bea04u: goto label_2bea04;
        case 0x2bea08u: goto label_2bea08;
        case 0x2bea0cu: goto label_2bea0c;
        case 0x2bea10u: goto label_2bea10;
        case 0x2bea14u: goto label_2bea14;
        case 0x2bea18u: goto label_2bea18;
        case 0x2bea1cu: goto label_2bea1c;
        case 0x2bea20u: goto label_2bea20;
        case 0x2bea24u: goto label_2bea24;
        case 0x2bea28u: goto label_2bea28;
        case 0x2bea2cu: goto label_2bea2c;
        case 0x2bea30u: goto label_2bea30;
        case 0x2bea34u: goto label_2bea34;
        case 0x2bea38u: goto label_2bea38;
        case 0x2bea3cu: goto label_2bea3c;
        case 0x2bea40u: goto label_2bea40;
        case 0x2bea44u: goto label_2bea44;
        case 0x2bea48u: goto label_2bea48;
        case 0x2bea4cu: goto label_2bea4c;
        case 0x2bea50u: goto label_2bea50;
        case 0x2bea54u: goto label_2bea54;
        case 0x2bea58u: goto label_2bea58;
        case 0x2bea5cu: goto label_2bea5c;
        case 0x2bea60u: goto label_2bea60;
        case 0x2bea64u: goto label_2bea64;
        case 0x2bea68u: goto label_2bea68;
        case 0x2bea6cu: goto label_2bea6c;
        case 0x2bea70u: goto label_2bea70;
        case 0x2bea74u: goto label_2bea74;
        case 0x2bea78u: goto label_2bea78;
        case 0x2bea7cu: goto label_2bea7c;
        case 0x2bea80u: goto label_2bea80;
        case 0x2bea84u: goto label_2bea84;
        case 0x2bea88u: goto label_2bea88;
        case 0x2bea8cu: goto label_2bea8c;
        case 0x2bea90u: goto label_2bea90;
        case 0x2bea94u: goto label_2bea94;
        case 0x2bea98u: goto label_2bea98;
        case 0x2bea9cu: goto label_2bea9c;
        case 0x2beaa0u: goto label_2beaa0;
        case 0x2beaa4u: goto label_2beaa4;
        case 0x2beaa8u: goto label_2beaa8;
        case 0x2beaacu: goto label_2beaac;
        case 0x2beab0u: goto label_2beab0;
        case 0x2beab4u: goto label_2beab4;
        case 0x2beab8u: goto label_2beab8;
        case 0x2beabcu: goto label_2beabc;
        case 0x2beac0u: goto label_2beac0;
        case 0x2beac4u: goto label_2beac4;
        case 0x2beac8u: goto label_2beac8;
        case 0x2beaccu: goto label_2beacc;
        case 0x2bead0u: goto label_2bead0;
        case 0x2bead4u: goto label_2bead4;
        case 0x2bead8u: goto label_2bead8;
        case 0x2beadcu: goto label_2beadc;
        default: break;
    }

    ctx->pc = 0x2be810u;

label_2be810:
    // 0x2be810: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2be810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2be814:
    // 0x2be814: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2be814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2be818:
    // 0x2be818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2be818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2be81c:
    // 0x2be81c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2be81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_2be820:
    // 0x2be820: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2be820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2be824:
    // 0x2be824: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2be824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2be828:
    // 0x2be828: 0x2450000c  addiu       $s0, $v0, 0xC
    ctx->pc = 0x2be828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_2be82c:
    // 0x2be82c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2be82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2be830:
    // 0x2be830: 0xc0525dc  jal         func_149770
label_2be834:
    if (ctx->pc == 0x2BE834u) {
        ctx->pc = 0x2BE838u;
        goto label_2be838;
    }
    ctx->pc = 0x2BE830u;
    SET_GPR_U32(ctx, 31, 0x2BE838u);
    ctx->pc = 0x149770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149770u, 0x2BE830u, 0x2BE838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE838u;
label_2be838:
    // 0x2be838: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
label_2be83c:
    if (ctx->pc == 0x2BE83Cu) {
        ctx->pc = 0x2BE840u;
        goto label_2be840;
    }
    ctx->pc = 0x2BE838u;
    {
        const bool branch_taken_0x2be838 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2be838) {
            ctx->pc = 0x2BE864u;
            goto label_2be864;
        }
    }
    ctx->pc = 0x2BE840u;
label_2be840:
    // 0x2be840: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2be840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2be844:
    // 0x2be844: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2be844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2be848:
    // 0x2be848: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2be848u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
label_2be84c:
    // 0x2be84c: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x2be84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_2be850:
    // 0x2be850: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2be850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2be854:
    // 0x2be854: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2be854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2be858:
    // 0x2be858: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2be858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_2be85c:
    // 0x2be85c: 0xc09d404  jal         func_275010
label_2be860:
    if (ctx->pc == 0x2BE860u) {
        ctx->pc = 0x2BE864u;
        goto label_2be864;
    }
    ctx->pc = 0x2BE85Cu;
    SET_GPR_U32(ctx, 31, 0x2BE864u);
    ctx->pc = 0x275010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275010u, 0x2BE85Cu, 0x2BE864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE864u;
label_2be864:
    // 0x2be864: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2be864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2be868:
    // 0x2be868: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2be868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2be86c:
    // 0x2be86c: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x2be86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_2be870:
    // 0x2be870: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2be870u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2be874:
    // 0x2be874: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2be874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2be878:
    // 0x2be878: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2be878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2be87c:
    // 0x2be87c: 0xc0962ac  jal         func_258AB0
label_2be880:
    if (ctx->pc == 0x2BE880u) {
        ctx->pc = 0x2BE884u;
        goto label_2be884;
    }
    ctx->pc = 0x2BE87Cu;
    SET_GPR_U32(ctx, 31, 0x2BE884u);
    ctx->pc = 0x258AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258AB0u, 0x2BE87Cu, 0x2BE884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE884u;
label_2be884:
    // 0x2be884: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2be884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2be888:
    // 0x2be888: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2be888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2be88c:
    // 0x2be88c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2be88cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2be890:
    // 0x2be890: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2be890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2be894:
    // 0x2be894: 0x3e00008  jr          $ra
label_2be898:
    if (ctx->pc == 0x2BE898u) {
        ctx->pc = 0x2BE89Cu;
        goto label_2be89c;
    }
    ctx->pc = 0x2BE894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE89Cu;
label_2be89c:
    // 0x2be89c: 0x0  nop
    ctx->pc = 0x2be89cu;
    // NOP
label_2be8a0:
    // 0x2be8a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2be8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2be8a4:
    // 0x2be8a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2be8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2be8a8:
    // 0x2be8a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2be8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2be8ac:
    // 0x2be8ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2be8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2be8b0:
    // 0x2be8b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2be8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2be8b4:
    // 0x2be8b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2be8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2be8b8:
    // 0x2be8b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2be8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2be8bc:
    // 0x2be8bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2be8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2be8c0:
    // 0x2be8c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2be8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2be8c4:
    // 0x2be8c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2be8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2be8c8:
    // 0x2be8c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2be8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2be8cc:
    // 0x2be8cc: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x2be8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
label_2be8d0:
    // 0x2be8d0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2be8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2be8d4:
    // 0x2be8d4: 0xc119b68  jal         func_466DA0
label_2be8d8:
    if (ctx->pc == 0x2BE8D8u) {
        ctx->pc = 0x2BE8DCu;
        goto label_2be8dc;
    }
    ctx->pc = 0x2BE8D4u;
    SET_GPR_U32(ctx, 31, 0x2BE8DCu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BE8D4u, 0x2BE8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE8DCu;
label_2be8dc:
    // 0x2be8dc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2be8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2be8e0:
    // 0x2be8e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2be8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be8e4:
    // 0x2be8e4: 0xc0400e0  jal         func_100380
label_2be8e8:
    if (ctx->pc == 0x2BE8E8u) {
        ctx->pc = 0x2BE8ECu;
        goto label_2be8ec;
    }
    ctx->pc = 0x2BE8E4u;
    SET_GPR_U32(ctx, 31, 0x2BE8ECu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BE8E4u, 0x2BE8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE8ECu;
label_2be8ec:
    // 0x2be8ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2be8ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be8f0:
    // 0x2be8f0: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_2be8f4:
    if (ctx->pc == 0x2BE8F4u) {
        ctx->pc = 0x2BE8F8u;
        goto label_2be8f8;
    }
    ctx->pc = 0x2BE8F0u;
    {
        const bool branch_taken_0x2be8f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be8f0) {
            ctx->pc = 0x2BE908u;
            goto label_2be908;
        }
    }
    ctx->pc = 0x2BE8F8u;
label_2be8f8:
    // 0x2be8f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2be8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2be8fc:
    // 0x2be8fc: 0xc0afab8  jal         func_2BEAE0
label_2be900:
    if (ctx->pc == 0x2BE900u) {
        ctx->pc = 0x2BE904u;
        goto label_2be904;
    }
    ctx->pc = 0x2BE8FCu;
    SET_GPR_U32(ctx, 31, 0x2BE904u);
    ctx->pc = 0x2BEAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEAE0u, 0x2BE8FCu, 0x2BE904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE904u;
label_2be904:
    // 0x2be904: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2be904u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be908:
    // 0x2be908: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2be908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2be90c:
    // 0x2be90c: 0xac53009c  sw          $s3, 0x9C($v0)
    ctx->pc = 0x2be90cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 19));
label_2be910:
    // 0x2be910: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2be910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2be914:
    // 0x2be914: 0xc119b68  jal         func_466DA0
label_2be918:
    if (ctx->pc == 0x2BE918u) {
        ctx->pc = 0x2BE91Cu;
        goto label_2be91c;
    }
    ctx->pc = 0x2BE914u;
    SET_GPR_U32(ctx, 31, 0x2BE91Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BE914u, 0x2BE91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE91Cu;
label_2be91c:
    // 0x2be91c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2be91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2be920:
    // 0x2be920: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2be920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be924:
    // 0x2be924: 0xc0400e0  jal         func_100380
label_2be928:
    if (ctx->pc == 0x2BE928u) {
        ctx->pc = 0x2BE92Cu;
        goto label_2be92c;
    }
    ctx->pc = 0x2BE924u;
    SET_GPR_U32(ctx, 31, 0x2BE92Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BE924u, 0x2BE92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE92Cu;
label_2be92c:
    // 0x2be92c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2be92cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be930:
    // 0x2be930: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_2be934:
    if (ctx->pc == 0x2BE934u) {
        ctx->pc = 0x2BE938u;
        goto label_2be938;
    }
    ctx->pc = 0x2BE930u;
    {
        const bool branch_taken_0x2be930 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be930) {
            ctx->pc = 0x2BE948u;
            goto label_2be948;
        }
    }
    ctx->pc = 0x2BE938u;
label_2be938:
    // 0x2be938: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2be938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2be93c:
    // 0x2be93c: 0xc0b4024  jal         func_2D0090
label_2be940:
    if (ctx->pc == 0x2BE940u) {
        ctx->pc = 0x2BE944u;
        goto label_2be944;
    }
    ctx->pc = 0x2BE93Cu;
    SET_GPR_U32(ctx, 31, 0x2BE944u);
    ctx->pc = 0x2D0090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0090u, 0x2BE93Cu, 0x2BE944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE944u;
label_2be944:
    // 0x2be944: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2be944u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be948:
    // 0x2be948: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2be948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2be94c:
    // 0x2be94c: 0xac520094  sw          $s2, 0x94($v0)
    ctx->pc = 0x2be94cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 18));
label_2be950:
    // 0x2be950: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2be950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2be954:
    // 0x2be954: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x2be954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_2be958:
    // 0x2be958: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2be958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2be95c:
    // 0x2be95c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2be95cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2be960:
    // 0x2be960: 0x320f809  jalr        $t9
label_2be964:
    if (ctx->pc == 0x2BE964u) {
        ctx->pc = 0x2BE968u;
        goto label_2be968;
    }
    ctx->pc = 0x2BE960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BE968u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE960u, 0x2BE968u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BE968u;
label_2be968:
    // 0x2be968: 0xa3a200af  sb          $v0, 0xAF($sp)
    ctx->pc = 0x2be968u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 2));
label_2be96c:
    // 0x2be96c: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x2be96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_2be970:
    // 0x2be970: 0xc119b68  jal         func_466DA0
label_2be974:
    if (ctx->pc == 0x2BE974u) {
        ctx->pc = 0x2BE978u;
        goto label_2be978;
    }
    ctx->pc = 0x2BE970u;
    SET_GPR_U32(ctx, 31, 0x2BE978u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BE970u, 0x2BE978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE978u;
label_2be978:
    // 0x2be978: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x2be978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_2be97c:
    // 0x2be97c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2be97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be980:
    // 0x2be980: 0xc0400e0  jal         func_100380
label_2be984:
    if (ctx->pc == 0x2BE984u) {
        ctx->pc = 0x2BE988u;
        goto label_2be988;
    }
    ctx->pc = 0x2BE980u;
    SET_GPR_U32(ctx, 31, 0x2BE988u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BE980u, 0x2BE988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE988u;
label_2be988:
    // 0x2be988: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2be988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be98c:
    // 0x2be98c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_2be990:
    if (ctx->pc == 0x2BE990u) {
        ctx->pc = 0x2BE994u;
        goto label_2be994;
    }
    ctx->pc = 0x2BE98Cu;
    {
        const bool branch_taken_0x2be98c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be98c) {
            ctx->pc = 0x2BE9A4u;
            goto label_2be9a4;
        }
    }
    ctx->pc = 0x2BE994u;
label_2be994:
    // 0x2be994: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2be998:
    // 0x2be998: 0xc0b2bdc  jal         func_2CAF70
label_2be99c:
    if (ctx->pc == 0x2BE99Cu) {
        ctx->pc = 0x2BE9A0u;
        goto label_2be9a0;
    }
    ctx->pc = 0x2BE998u;
    SET_GPR_U32(ctx, 31, 0x2BE9A0u);
    ctx->pc = 0x2CAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF70u, 0x2BE998u, 0x2BE9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE9A0u;
label_2be9a0:
    // 0x2be9a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2be9a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be9a4:
    // 0x2be9a4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2be9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2be9a8:
    // 0x2be9a8: 0xac510044  sw          $s1, 0x44($v0)
    ctx->pc = 0x2be9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 17));
label_2be9ac:
    // 0x2be9ac: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2be9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2be9b0:
    // 0x2be9b0: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x2be9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2be9b4:
    // 0x2be9b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2be9b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2be9b8:
    // 0x2be9b8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2be9b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2be9bc:
    // 0x2be9bc: 0x320f809  jalr        $t9
label_2be9c0:
    if (ctx->pc == 0x2BE9C0u) {
        ctx->pc = 0x2BE9C4u;
        goto label_2be9c4;
    }
    ctx->pc = 0x2BE9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BE9C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE9BCu, 0x2BE9C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BE9C4u;
label_2be9c4:
    // 0x2be9c4: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x2be9c4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2be9c8:
    // 0x2be9c8: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
label_2be9cc:
    if (ctx->pc == 0x2BE9CCu) {
        ctx->pc = 0x2BE9D0u;
        goto label_2be9d0;
    }
    ctx->pc = 0x2BE9C8u;
    {
        const bool branch_taken_0x2be9c8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be9c8) {
            ctx->pc = 0x2BE9E4u;
            goto label_2be9e4;
        }
    }
    ctx->pc = 0x2BE9D0u;
label_2be9d0:
    // 0x2be9d0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2be9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2be9d4:
    // 0x2be9d4: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x2be9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2be9d8:
    // 0x2be9d8: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2be9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2be9dc:
    // 0x2be9dc: 0xc0b3c64  jal         func_2CF190
label_2be9e0:
    if (ctx->pc == 0x2BE9E0u) {
        ctx->pc = 0x2BE9E4u;
        goto label_2be9e4;
    }
    ctx->pc = 0x2BE9DCu;
    SET_GPR_U32(ctx, 31, 0x2BE9E4u);
    ctx->pc = 0x2CF190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF190u, 0x2BE9DCu, 0x2BE9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE9E4u;
label_2be9e4:
    // 0x2be9e4: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x2be9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2be9e8:
    // 0x2be9e8: 0xc119b68  jal         func_466DA0
label_2be9ec:
    if (ctx->pc == 0x2BE9ECu) {
        ctx->pc = 0x2BE9F0u;
        goto label_2be9f0;
    }
    ctx->pc = 0x2BE9E8u;
    SET_GPR_U32(ctx, 31, 0x2BE9F0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BE9E8u, 0x2BE9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE9F0u;
label_2be9f0:
    // 0x2be9f0: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x2be9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2be9f4:
    // 0x2be9f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2be9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be9f8:
    // 0x2be9f8: 0xc0400e0  jal         func_100380
label_2be9fc:
    if (ctx->pc == 0x2BE9FCu) {
        ctx->pc = 0x2BEA00u;
        goto label_2bea00;
    }
    ctx->pc = 0x2BE9F8u;
    SET_GPR_U32(ctx, 31, 0x2BEA00u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BE9F8u, 0x2BEA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA00u;
label_2bea00:
    // 0x2bea00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bea00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bea04:
    // 0x2bea04: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2bea08:
    if (ctx->pc == 0x2BEA08u) {
        ctx->pc = 0x2BEA0Cu;
        goto label_2bea0c;
    }
    ctx->pc = 0x2BEA04u;
    {
        const bool branch_taken_0x2bea04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bea04) {
            ctx->pc = 0x2BEA1Cu;
            goto label_2bea1c;
        }
    }
    ctx->pc = 0x2BEA0Cu;
label_2bea0c:
    // 0x2bea0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bea0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bea10:
    // 0x2bea10: 0xc08fcc4  jal         func_23F310
label_2bea14:
    if (ctx->pc == 0x2BEA14u) {
        ctx->pc = 0x2BEA18u;
        goto label_2bea18;
    }
    ctx->pc = 0x2BEA10u;
    SET_GPR_U32(ctx, 31, 0x2BEA18u);
    ctx->pc = 0x23F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F310u, 0x2BEA10u, 0x2BEA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA18u;
label_2bea18:
    // 0x2bea18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bea18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bea1c:
    // 0x2bea1c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2bea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2bea20:
    // 0x2bea20: 0xac500098  sw          $s0, 0x98($v0)
    ctx->pc = 0x2bea20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 16));
label_2bea24:
    // 0x2bea24: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2bea24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2bea28:
    // 0x2bea28: 0x8c440098  lw          $a0, 0x98($v0)
    ctx->pc = 0x2bea28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_2bea2c:
    // 0x2bea2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bea2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bea30:
    // 0x2bea30: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bea30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bea34:
    // 0x2bea34: 0x320f809  jalr        $t9
label_2bea38:
    if (ctx->pc == 0x2BEA38u) {
        ctx->pc = 0x2BEA3Cu;
        goto label_2bea3c;
    }
    ctx->pc = 0x2BEA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BEA3Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEA34u, 0x2BEA3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BEA3Cu;
label_2bea3c:
    // 0x2bea3c: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x2bea3cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2bea40:
    // 0x2bea40: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2bea40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bea44:
    // 0x2bea44: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2bea44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bea48:
    // 0x2bea48: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2bea48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bea4c:
    // 0x2bea4c: 0x93a200af  lbu         $v0, 0xAF($sp)
    ctx->pc = 0x2bea4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 175)));
label_2bea50:
    // 0x2bea50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2bea54:
    if (ctx->pc == 0x2BEA54u) {
        ctx->pc = 0x2BEA58u;
        goto label_2bea58;
    }
    ctx->pc = 0x2BEA50u;
    {
        const bool branch_taken_0x2bea50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bea50) {
            ctx->pc = 0x2BEA68u;
            goto label_2bea68;
        }
    }
    ctx->pc = 0x2BEA58u;
label_2bea58:
    // 0x2bea58: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_2bea5c:
    if (ctx->pc == 0x2BEA5Cu) {
        ctx->pc = 0x2BEA60u;
        goto label_2bea60;
    }
    ctx->pc = 0x2BEA58u;
    {
        const bool branch_taken_0x2bea58 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bea58) {
            ctx->pc = 0x2BEA68u;
            goto label_2bea68;
        }
    }
    ctx->pc = 0x2BEA60u;
label_2bea60:
    // 0x2bea60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bea60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bea64:
    // 0x2bea64: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x2bea64u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2bea68:
    // 0x2bea68: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_2bea6c:
    if (ctx->pc == 0x2BEA6Cu) {
        ctx->pc = 0x2BEA70u;
        goto label_2bea70;
    }
    ctx->pc = 0x2BEA68u;
    {
        const bool branch_taken_0x2bea68 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bea68) {
            ctx->pc = 0x2BEA80u;
            goto label_2bea80;
        }
    }
    ctx->pc = 0x2BEA70u;
label_2bea70:
    // 0x2bea70: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
label_2bea74:
    if (ctx->pc == 0x2BEA74u) {
        ctx->pc = 0x2BEA78u;
        goto label_2bea78;
    }
    ctx->pc = 0x2BEA70u;
    {
        const bool branch_taken_0x2bea70 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bea70) {
            ctx->pc = 0x2BEA80u;
            goto label_2bea80;
        }
    }
    ctx->pc = 0x2BEA78u;
label_2bea78:
    // 0x2bea78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bea78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bea7c:
    // 0x2bea7c: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x2bea7cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2bea80:
    // 0x2bea80: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
label_2bea84:
    if (ctx->pc == 0x2BEA84u) {
        ctx->pc = 0x2BEA88u;
        goto label_2bea88;
    }
    ctx->pc = 0x2BEA80u;
    {
        const bool branch_taken_0x2bea80 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bea80) {
            ctx->pc = 0x2BEAA4u;
            goto label_2beaa4;
        }
    }
    ctx->pc = 0x2BEA88u;
label_2bea88:
    // 0x2bea88: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2bea88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2bea8c:
    // 0x2bea8c: 0xc08ec3c  jal         func_23B0F0
label_2bea90:
    if (ctx->pc == 0x2BEA90u) {
        ctx->pc = 0x2BEA94u;
        goto label_2bea94;
    }
    ctx->pc = 0x2BEA8Cu;
    SET_GPR_U32(ctx, 31, 0x2BEA94u);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x2BEA8Cu, 0x2BEA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA94u;
label_2bea94:
    // 0x2bea94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2bea98:
    if (ctx->pc == 0x2BEA98u) {
        ctx->pc = 0x2BEA9Cu;
        goto label_2bea9c;
    }
    ctx->pc = 0x2BEA94u;
    {
        const bool branch_taken_0x2bea94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bea94) {
            ctx->pc = 0x2BEAA4u;
            goto label_2beaa4;
        }
    }
    ctx->pc = 0x2BEA9Cu;
label_2bea9c:
    // 0x2bea9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2beaa0:
    // 0x2beaa0: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x2beaa0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2beaa4:
    // 0x2beaa4: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2beaa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2beaa8:
    // 0x2beaa8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2beaa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2beaac:
    // 0x2beaac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2beaacu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2beab0:
    // 0x2beab0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2beab0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2beab4:
    // 0x2beab4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2beab4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2beab8:
    // 0x2beab8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2beab8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2beabc:
    // 0x2beabc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2beabcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2beac0:
    // 0x2beac0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2beac0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2beac4:
    // 0x2beac4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2beac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2beac8:
    // 0x2beac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2beac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2beacc:
    // 0x2beacc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2beaccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bead0:
    // 0x2bead0: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2bead0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2bead4:
    // 0x2bead4: 0x3e00008  jr          $ra
label_2bead8:
    if (ctx->pc == 0x2BEAD8u) {
        ctx->pc = 0x2BEADCu;
        goto label_2beadc;
    }
    ctx->pc = 0x2BEAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEADCu;
label_2beadc:
    // 0x2beadc: 0x0  nop
    ctx->pc = 0x2beadcu;
    // NOP
    ctx->pc = 0x2beae0u;
}
