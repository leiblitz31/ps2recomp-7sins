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

// Function: sub_003B9148
// Address: 0x3b9148 - 0x3b9480
void sub_003B9148_0x3b9148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9148_0x3b9148");
#endif

    switch (ctx->pc) {
        case 0x3b9148u: goto label_3b9148;
        case 0x3b914cu: goto label_3b914c;
        case 0x3b9150u: goto label_3b9150;
        case 0x3b9154u: goto label_3b9154;
        case 0x3b9158u: goto label_3b9158;
        case 0x3b915cu: goto label_3b915c;
        case 0x3b9160u: goto label_3b9160;
        case 0x3b9164u: goto label_3b9164;
        case 0x3b9168u: goto label_3b9168;
        case 0x3b916cu: goto label_3b916c;
        case 0x3b9170u: goto label_3b9170;
        case 0x3b9174u: goto label_3b9174;
        case 0x3b9178u: goto label_3b9178;
        case 0x3b917cu: goto label_3b917c;
        case 0x3b9180u: goto label_3b9180;
        case 0x3b9184u: goto label_3b9184;
        case 0x3b9188u: goto label_3b9188;
        case 0x3b918cu: goto label_3b918c;
        case 0x3b9190u: goto label_3b9190;
        case 0x3b9194u: goto label_3b9194;
        case 0x3b9198u: goto label_3b9198;
        case 0x3b919cu: goto label_3b919c;
        case 0x3b91a0u: goto label_3b91a0;
        case 0x3b91a4u: goto label_3b91a4;
        case 0x3b91a8u: goto label_3b91a8;
        case 0x3b91acu: goto label_3b91ac;
        case 0x3b91b0u: goto label_3b91b0;
        case 0x3b91b4u: goto label_3b91b4;
        case 0x3b91b8u: goto label_3b91b8;
        case 0x3b91bcu: goto label_3b91bc;
        case 0x3b91c0u: goto label_3b91c0;
        case 0x3b91c4u: goto label_3b91c4;
        case 0x3b91c8u: goto label_3b91c8;
        case 0x3b91ccu: goto label_3b91cc;
        case 0x3b91d0u: goto label_3b91d0;
        case 0x3b91d4u: goto label_3b91d4;
        case 0x3b91d8u: goto label_3b91d8;
        case 0x3b91dcu: goto label_3b91dc;
        case 0x3b91e0u: goto label_3b91e0;
        case 0x3b91e4u: goto label_3b91e4;
        case 0x3b91e8u: goto label_3b91e8;
        case 0x3b91ecu: goto label_3b91ec;
        case 0x3b91f0u: goto label_3b91f0;
        case 0x3b91f4u: goto label_3b91f4;
        case 0x3b91f8u: goto label_3b91f8;
        case 0x3b91fcu: goto label_3b91fc;
        case 0x3b9200u: goto label_3b9200;
        case 0x3b9204u: goto label_3b9204;
        case 0x3b9208u: goto label_3b9208;
        case 0x3b920cu: goto label_3b920c;
        case 0x3b9210u: goto label_3b9210;
        case 0x3b9214u: goto label_3b9214;
        case 0x3b9218u: goto label_3b9218;
        case 0x3b921cu: goto label_3b921c;
        case 0x3b9220u: goto label_3b9220;
        case 0x3b9224u: goto label_3b9224;
        case 0x3b9228u: goto label_3b9228;
        case 0x3b922cu: goto label_3b922c;
        case 0x3b9230u: goto label_3b9230;
        case 0x3b9234u: goto label_3b9234;
        case 0x3b9238u: goto label_3b9238;
        case 0x3b923cu: goto label_3b923c;
        case 0x3b9240u: goto label_3b9240;
        case 0x3b9244u: goto label_3b9244;
        case 0x3b9248u: goto label_3b9248;
        case 0x3b924cu: goto label_3b924c;
        case 0x3b9250u: goto label_3b9250;
        case 0x3b9254u: goto label_3b9254;
        case 0x3b9258u: goto label_3b9258;
        case 0x3b925cu: goto label_3b925c;
        case 0x3b9260u: goto label_3b9260;
        case 0x3b9264u: goto label_3b9264;
        case 0x3b9268u: goto label_3b9268;
        case 0x3b926cu: goto label_3b926c;
        case 0x3b9270u: goto label_3b9270;
        case 0x3b9274u: goto label_3b9274;
        case 0x3b9278u: goto label_3b9278;
        case 0x3b927cu: goto label_3b927c;
        case 0x3b9280u: goto label_3b9280;
        case 0x3b9284u: goto label_3b9284;
        case 0x3b9288u: goto label_3b9288;
        case 0x3b928cu: goto label_3b928c;
        case 0x3b9290u: goto label_3b9290;
        case 0x3b9294u: goto label_3b9294;
        case 0x3b9298u: goto label_3b9298;
        case 0x3b929cu: goto label_3b929c;
        case 0x3b92a0u: goto label_3b92a0;
        case 0x3b92a4u: goto label_3b92a4;
        case 0x3b92a8u: goto label_3b92a8;
        case 0x3b92acu: goto label_3b92ac;
        case 0x3b92b0u: goto label_3b92b0;
        case 0x3b92b4u: goto label_3b92b4;
        case 0x3b92b8u: goto label_3b92b8;
        case 0x3b92bcu: goto label_3b92bc;
        case 0x3b92c0u: goto label_3b92c0;
        case 0x3b92c4u: goto label_3b92c4;
        case 0x3b92c8u: goto label_3b92c8;
        case 0x3b92ccu: goto label_3b92cc;
        case 0x3b92d0u: goto label_3b92d0;
        case 0x3b92d4u: goto label_3b92d4;
        case 0x3b92d8u: goto label_3b92d8;
        case 0x3b92dcu: goto label_3b92dc;
        case 0x3b92e0u: goto label_3b92e0;
        case 0x3b92e4u: goto label_3b92e4;
        case 0x3b92e8u: goto label_3b92e8;
        case 0x3b92ecu: goto label_3b92ec;
        case 0x3b92f0u: goto label_3b92f0;
        case 0x3b92f4u: goto label_3b92f4;
        case 0x3b92f8u: goto label_3b92f8;
        case 0x3b92fcu: goto label_3b92fc;
        case 0x3b9300u: goto label_3b9300;
        case 0x3b9304u: goto label_3b9304;
        case 0x3b9308u: goto label_3b9308;
        case 0x3b930cu: goto label_3b930c;
        case 0x3b9310u: goto label_3b9310;
        case 0x3b9314u: goto label_3b9314;
        case 0x3b9318u: goto label_3b9318;
        case 0x3b931cu: goto label_3b931c;
        case 0x3b9320u: goto label_3b9320;
        case 0x3b9324u: goto label_3b9324;
        case 0x3b9328u: goto label_3b9328;
        case 0x3b932cu: goto label_3b932c;
        case 0x3b9330u: goto label_3b9330;
        case 0x3b9334u: goto label_3b9334;
        case 0x3b9338u: goto label_3b9338;
        case 0x3b933cu: goto label_3b933c;
        case 0x3b9340u: goto label_3b9340;
        case 0x3b9344u: goto label_3b9344;
        case 0x3b9348u: goto label_3b9348;
        case 0x3b934cu: goto label_3b934c;
        case 0x3b9350u: goto label_3b9350;
        case 0x3b9354u: goto label_3b9354;
        case 0x3b9358u: goto label_3b9358;
        case 0x3b935cu: goto label_3b935c;
        case 0x3b9360u: goto label_3b9360;
        case 0x3b9364u: goto label_3b9364;
        case 0x3b9368u: goto label_3b9368;
        case 0x3b936cu: goto label_3b936c;
        case 0x3b9370u: goto label_3b9370;
        case 0x3b9374u: goto label_3b9374;
        case 0x3b9378u: goto label_3b9378;
        case 0x3b937cu: goto label_3b937c;
        case 0x3b9380u: goto label_3b9380;
        case 0x3b9384u: goto label_3b9384;
        case 0x3b9388u: goto label_3b9388;
        case 0x3b938cu: goto label_3b938c;
        case 0x3b9390u: goto label_3b9390;
        case 0x3b9394u: goto label_3b9394;
        case 0x3b9398u: goto label_3b9398;
        case 0x3b939cu: goto label_3b939c;
        case 0x3b93a0u: goto label_3b93a0;
        case 0x3b93a4u: goto label_3b93a4;
        case 0x3b93a8u: goto label_3b93a8;
        case 0x3b93acu: goto label_3b93ac;
        case 0x3b93b0u: goto label_3b93b0;
        case 0x3b93b4u: goto label_3b93b4;
        case 0x3b93b8u: goto label_3b93b8;
        case 0x3b93bcu: goto label_3b93bc;
        case 0x3b93c0u: goto label_3b93c0;
        case 0x3b93c4u: goto label_3b93c4;
        case 0x3b93c8u: goto label_3b93c8;
        case 0x3b93ccu: goto label_3b93cc;
        case 0x3b93d0u: goto label_3b93d0;
        case 0x3b93d4u: goto label_3b93d4;
        case 0x3b93d8u: goto label_3b93d8;
        case 0x3b93dcu: goto label_3b93dc;
        case 0x3b93e0u: goto label_3b93e0;
        case 0x3b93e4u: goto label_3b93e4;
        case 0x3b93e8u: goto label_3b93e8;
        case 0x3b93ecu: goto label_3b93ec;
        case 0x3b93f0u: goto label_3b93f0;
        case 0x3b93f4u: goto label_3b93f4;
        case 0x3b93f8u: goto label_3b93f8;
        case 0x3b93fcu: goto label_3b93fc;
        case 0x3b9400u: goto label_3b9400;
        case 0x3b9404u: goto label_3b9404;
        case 0x3b9408u: goto label_3b9408;
        case 0x3b940cu: goto label_3b940c;
        case 0x3b9410u: goto label_3b9410;
        case 0x3b9414u: goto label_3b9414;
        case 0x3b9418u: goto label_3b9418;
        case 0x3b941cu: goto label_3b941c;
        case 0x3b9420u: goto label_3b9420;
        case 0x3b9424u: goto label_3b9424;
        case 0x3b9428u: goto label_3b9428;
        case 0x3b942cu: goto label_3b942c;
        case 0x3b9430u: goto label_3b9430;
        case 0x3b9434u: goto label_3b9434;
        case 0x3b9438u: goto label_3b9438;
        case 0x3b943cu: goto label_3b943c;
        case 0x3b9440u: goto label_3b9440;
        case 0x3b9444u: goto label_3b9444;
        case 0x3b9448u: goto label_3b9448;
        case 0x3b944cu: goto label_3b944c;
        case 0x3b9450u: goto label_3b9450;
        case 0x3b9454u: goto label_3b9454;
        case 0x3b9458u: goto label_3b9458;
        case 0x3b945cu: goto label_3b945c;
        case 0x3b9460u: goto label_3b9460;
        case 0x3b9464u: goto label_3b9464;
        case 0x3b9468u: goto label_3b9468;
        case 0x3b946cu: goto label_3b946c;
        case 0x3b9470u: goto label_3b9470;
        case 0x3b9474u: goto label_3b9474;
        case 0x3b9478u: goto label_3b9478;
        case 0x3b947cu: goto label_3b947c;
        default: break;
    }

    ctx->pc = 0x3b9148u;

label_3b9148:
    // 0x3b9148: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b9148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3b914c:
    // 0x3b914c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3b914cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3b9150:
    // 0x3b9150: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3b9150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3b9154:
    // 0x3b9154: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b9154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b9158:
    // 0x3b9158: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3b9158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3b915c:
    // 0x3b915c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3b915cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b9160:
    // 0x3b9160: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3b9160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3b9164:
    // 0x3b9164: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b9164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3b9168:
    // 0x3b9168: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_3b916c:
    if (ctx->pc == 0x3B916Cu) {
        ctx->pc = 0x3B916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9168u;
        // 0x3b916c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9170u;
        goto label_3b9170;
    }
    ctx->pc = 0x3B9168u;
    {
        const bool branch_taken_0x3b9168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9168u;
        // 0x3b916c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9168) {
            ctx->pc = 0x3B91A0u;
            goto label_3b91a0;
        }
    }
    ctx->pc = 0x3B9170u;
label_3b9170:
    // 0x3b9170: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b9170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b9174:
    // 0x3b9174: 0xc10480a  jal         func_412028
label_3b9178:
    if (ctx->pc == 0x3B9178u) {
        ctx->pc = 0x3B9178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9174u;
        // 0x3b9178: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B917Cu;
        goto label_3b917c;
    }
    ctx->pc = 0x3B9174u;
    SET_GPR_U32(ctx, 31, 0x3B917Cu);
    ctx->pc = 0x3B9178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9174u;
    // 0x3b9178: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3B9174u, 0x3B917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B917Cu;
label_3b917c:
    // 0x3b917c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3b917cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b9180:
    // 0x3b9180: 0x14430097  bne         $v0, $v1, . + 4 + (0x97 << 2)
label_3b9184:
    if (ctx->pc == 0x3B9184u) {
        ctx->pc = 0x3B9184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9180u;
        // 0x3b9184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9188u;
        goto label_3b9188;
    }
    ctx->pc = 0x3B9180u;
    {
        const bool branch_taken_0x3b9180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B9184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9180u;
        // 0x3b9184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9180) {
            ctx->pc = 0x3B93E0u;
            goto label_3b93e0;
        }
    }
    ctx->pc = 0x3B9188u;
label_3b9188:
    // 0x3b9188: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3b9188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3b918c:
    // 0x3b918c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b918cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b9190:
    // 0x3b9190: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b9190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3b9194:
    // 0x3b9194: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b9194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3b9198:
    // 0x3b9198: 0x10000004  b           . + 4 + (0x4 << 2)
label_3b919c:
    if (ctx->pc == 0x3B919Cu) {
        ctx->pc = 0x3B919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9198u;
        // 0x3b919c: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B91A0u;
        goto label_3b91a0;
    }
    ctx->pc = 0x3B9198u;
    {
        const bool branch_taken_0x3b9198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9198u;
        // 0x3b919c: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9198) {
            ctx->pc = 0x3B91ACu;
            goto label_3b91ac;
        }
    }
    ctx->pc = 0x3B91A0u;
label_3b91a0:
    // 0x3b91a0: 0xc0ee1f6  jal         func_3B87D8
label_3b91a4:
    if (ctx->pc == 0x3B91A4u) {
        ctx->pc = 0x3B91A8u;
        goto label_3b91a8;
    }
    ctx->pc = 0x3B91A0u;
    SET_GPR_U32(ctx, 31, 0x3B91A8u);
    ctx->pc = 0x3B87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B87D8u, 0x3B91A0u, 0x3B91A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B91A8u;
label_3b91a8:
    // 0x3b91a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b91a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b91ac:
    // 0x3b91ac: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3b91acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3b91b0:
    // 0x3b91b0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3b91b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3b91b4:
    // 0x3b91b4: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x3b91b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3b91b8:
    // 0x3b91b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3b91b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3b91bc:
    // 0x3b91bc: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3b91bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_3b91c0:
    // 0x3b91c0: 0x8e110024  lw          $s1, 0x24($s0)
    ctx->pc = 0x3b91c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3b91c4:
    // 0x3b91c4: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_3b91c8:
    if (ctx->pc == 0x3B91C8u) {
        ctx->pc = 0x3B91C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B91C4u;
        // 0x3b91c8: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B91CCu;
        goto label_3b91cc;
    }
    ctx->pc = 0x3B91C4u;
    {
        const bool branch_taken_0x3b91c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B91C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B91C4u;
        // 0x3b91c8: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b91c4) {
            ctx->pc = 0x3B91D4u;
            goto label_3b91d4;
        }
    }
    ctx->pc = 0x3B91CCu;
label_3b91cc:
    // 0x3b91cc: 0x10000056  b           . + 4 + (0x56 << 2)
label_3b91d0:
    if (ctx->pc == 0x3B91D0u) {
        ctx->pc = 0x3B91D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B91CCu;
        // 0x3b91d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B91D4u;
        goto label_3b91d4;
    }
    ctx->pc = 0x3B91CCu;
    {
        const bool branch_taken_0x3b91cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B91D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B91CCu;
        // 0x3b91d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b91cc) {
            ctx->pc = 0x3B9328u;
            goto label_3b9328;
        }
    }
    ctx->pc = 0x3B91D4u;
label_3b91d4:
    // 0x3b91d4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b91d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b91d8:
    // 0x3b91d8: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3b91d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3b91dc:
    // 0x3b91dc: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3b91dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3b91e0:
    // 0x3b91e0: 0x40f809  jalr        $v0
label_3b91e4:
    if (ctx->pc == 0x3B91E4u) {
        ctx->pc = 0x3B91E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B91E0u;
        // 0x3b91e4: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B91E8u;
        goto label_3b91e8;
    }
    ctx->pc = 0x3B91E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B91E8u);
        ctx->pc = 0x3B91E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B91E0u;
        // 0x3b91e4: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B91E0u, 0x3B91E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B91E8u;
label_3b91e8:
    // 0x3b91e8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3b91e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b91ec:
    // 0x3b91ec: 0x1220004d  beqz        $s1, . + 4 + (0x4D << 2)
label_3b91f0:
    if (ctx->pc == 0x3B91F0u) {
        ctx->pc = 0x3B91F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B91ECu;
        // 0x3b91f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B91F4u;
        goto label_3b91f4;
    }
    ctx->pc = 0x3B91ECu;
    {
        const bool branch_taken_0x3b91ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B91F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B91ECu;
        // 0x3b91f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b91ec) {
            ctx->pc = 0x3B9324u;
            goto label_3b9324;
        }
    }
    ctx->pc = 0x3B91F4u;
label_3b91f4:
    // 0x3b91f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b91f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b91f8:
    // 0x3b91f8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x3b91f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3b91fc:
    // 0x3b91fc: 0x1a20001c  blez        $s1, . + 4 + (0x1C << 2)
label_3b9200:
    if (ctx->pc == 0x3B9200u) {
        ctx->pc = 0x3B9200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B91FCu;
        // 0x3b9200: 0x32230003  andi        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9204u;
        goto label_3b9204;
    }
    ctx->pc = 0x3B91FCu;
    {
        const bool branch_taken_0x3b91fc = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3B9200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B91FCu;
        // 0x3b9200: 0x32230003  andi        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b91fc) {
            ctx->pc = 0x3B9270u;
            goto label_3b9270;
        }
    }
    ctx->pc = 0x3B9204u;
label_3b9204:
    // 0x3b9204: 0x50600027  beql        $v1, $zero, . + 4 + (0x27 << 2)
label_3b9208:
    if (ctx->pc == 0x3B9208u) {
        ctx->pc = 0x3B9208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9204u;
        // 0x3b9208: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B920Cu;
        goto label_3b920c;
    }
    ctx->pc = 0x3B9204u;
    {
        const bool branch_taken_0x3b9204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9204) {
            ctx->pc = 0x3B9208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9204u;
            // 0x3b9208: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B92A4u;
            goto label_3b92a4;
        }
    }
    ctx->pc = 0x3B920Cu;
label_3b920c:
    // 0x3b920c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3b920cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3b9210:
    // 0x3b9210: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_3b9214:
    if (ctx->pc == 0x3B9214u) {
        ctx->pc = 0x3B9214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9210u;
        // 0x3b9214: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9218u;
        goto label_3b9218;
    }
    ctx->pc = 0x3B9210u;
    {
        const bool branch_taken_0x3b9210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b9210) {
            ctx->pc = 0x3B9214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9210u;
            // 0x3b9214: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9274u;
            goto label_3b9274;
        }
    }
    ctx->pc = 0x3B9218u;
label_3b9218:
    // 0x3b9218: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3b9218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3b921c:
    // 0x3b921c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_3b9220:
    if (ctx->pc == 0x3B9220u) {
        ctx->pc = 0x3B9220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B921Cu;
        // 0x3b9220: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9224u;
        goto label_3b9224;
    }
    ctx->pc = 0x3B921Cu;
    {
        const bool branch_taken_0x3b921c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b921c) {
            ctx->pc = 0x3B9220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B921Cu;
            // 0x3b9220: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B924Cu;
            goto label_3b924c;
        }
    }
    ctx->pc = 0x3B9224u;
label_3b9224:
    // 0x3b9224: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x3b9224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3b9228:
    // 0x3b9228: 0x25040004  addiu       $a0, $t0, 0x4
    ctx->pc = 0x3b9228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_3b922c:
    // 0x3b922c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3b922cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b9230:
    // 0x3b9230: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3b9230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b9234:
    // 0x3b9234: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3b9234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b9238:
    // 0x3b9238: 0x88430007  lwl         $v1, 0x7($v0)
    ctx->pc = 0x3b9238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_3b923c:
    // 0x3b923c: 0x98430004  lwr         $v1, 0x4($v0)
    ctx->pc = 0x3b923cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_3b9240:
    // 0x3b9240: 0xa9030003  swl         $v1, 0x3($t0)
    ctx->pc = 0x3b9240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b9244:
    // 0x3b9244: 0xb9030000  swr         $v1, 0x0($t0)
    ctx->pc = 0x3b9244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b9248:
    // 0x3b9248: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3b9248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3b924c:
    // 0x3b924c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3b924cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3b9250:
    // 0x3b9250: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3b9250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3b9254:
    // 0x3b9254: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3b9254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b9258:
    // 0x3b9258: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3b9258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3b925c:
    // 0x3b925c: 0x886b0007  lwl         $t3, 0x7($v1)
    ctx->pc = 0x3b925cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 11) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 11, (int32_t)merged); }
label_3b9260:
    // 0x3b9260: 0x986b0004  lwr         $t3, 0x4($v1)
    ctx->pc = 0x3b9260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
label_3b9264:
    // 0x3b9264: 0xa88b0003  swl         $t3, 0x3($a0)
    ctx->pc = 0x3b9264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b9268:
    // 0x3b9268: 0xb88b0000  swr         $t3, 0x0($a0)
    ctx->pc = 0x3b9268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b926c:
    // 0x3b926c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3b926cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3b9270:
    // 0x3b9270: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3b9270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3b9274:
    // 0x3b9274: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3b9274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3b9278:
    // 0x3b9278: 0xd1382b  sltu        $a3, $a2, $s1
    ctx->pc = 0x3b9278u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3b927c:
    // 0x3b927c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3b927cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3b9280:
    // 0x3b9280: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3b9280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b9284:
    // 0x3b9284: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3b9284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3b9288:
    // 0x3b9288: 0x886a0007  lwl         $t2, 0x7($v1)
    ctx->pc = 0x3b9288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
label_3b928c:
    // 0x3b928c: 0x986a0004  lwr         $t2, 0x4($v1)
    ctx->pc = 0x3b928cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
label_3b9290:
    // 0x3b9290: 0xa88a0003  swl         $t2, 0x3($a0)
    ctx->pc = 0x3b9290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b9294:
    // 0x3b9294: 0xb88a0000  swr         $t2, 0x0($a0)
    ctx->pc = 0x3b9294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b9298:
    // 0x3b9298: 0x10e00022  beqz        $a3, . + 4 + (0x22 << 2)
label_3b929c:
    if (ctx->pc == 0x3B929Cu) {
        ctx->pc = 0x3B929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9298u;
        // 0x3b929c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B92A0u;
        goto label_3b92a0;
    }
    ctx->pc = 0x3B9298u;
    {
        const bool branch_taken_0x3b9298 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9298u;
        // 0x3b929c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9298) {
            ctx->pc = 0x3B9324u;
            goto label_3b9324;
        }
    }
    ctx->pc = 0x3B92A0u;
label_3b92a0:
    // 0x3b92a0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3b92a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3b92a4:
    // 0x3b92a4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3b92a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_3b92a8:
    // 0x3b92a8: 0xd1382b  sltu        $a3, $a2, $s1
    ctx->pc = 0x3b92a8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3b92ac:
    // 0x3b92ac: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3b92acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3b92b0:
    // 0x3b92b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3b92b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b92b4:
    // 0x3b92b4: 0x886a0007  lwl         $t2, 0x7($v1)
    ctx->pc = 0x3b92b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
label_3b92b8:
    // 0x3b92b8: 0x986a0004  lwr         $t2, 0x4($v1)
    ctx->pc = 0x3b92b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
label_3b92bc:
    // 0x3b92bc: 0xa88a0003  swl         $t2, 0x3($a0)
    ctx->pc = 0x3b92bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b92c0:
    // 0x3b92c0: 0xb88a0000  swr         $t2, 0x0($a0)
    ctx->pc = 0x3b92c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b92c4:
    // 0x3b92c4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3b92c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3b92c8:
    // 0x3b92c8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3b92c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3b92cc:
    // 0x3b92cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3b92ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3b92d0:
    // 0x3b92d0: 0x886a0007  lwl         $t2, 0x7($v1)
    ctx->pc = 0x3b92d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
label_3b92d4:
    // 0x3b92d4: 0x986a0004  lwr         $t2, 0x4($v1)
    ctx->pc = 0x3b92d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
label_3b92d8:
    // 0x3b92d8: 0xa88a0007  swl         $t2, 0x7($a0)
    ctx->pc = 0x3b92d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b92dc:
    // 0x3b92dc: 0xb88a0004  swr         $t2, 0x4($a0)
    ctx->pc = 0x3b92dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b92e0:
    // 0x3b92e0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3b92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3b92e4:
    // 0x3b92e4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3b92e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3b92e8:
    // 0x3b92e8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3b92e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3b92ec:
    // 0x3b92ec: 0x886a0007  lwl         $t2, 0x7($v1)
    ctx->pc = 0x3b92ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
label_3b92f0:
    // 0x3b92f0: 0x986a0004  lwr         $t2, 0x4($v1)
    ctx->pc = 0x3b92f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
label_3b92f4:
    // 0x3b92f4: 0xa88a000b  swl         $t2, 0xB($a0)
    ctx->pc = 0x3b92f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b92f8:
    // 0x3b92f8: 0xb88a0008  swr         $t2, 0x8($a0)
    ctx->pc = 0x3b92f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b92fc:
    // 0x3b92fc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3b92fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3b9300:
    // 0x3b9300: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3b9300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3b9304:
    // 0x3b9304: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3b9304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3b9308:
    // 0x3b9308: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3b9308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_3b930c:
    // 0x3b930c: 0x886a0007  lwl         $t2, 0x7($v1)
    ctx->pc = 0x3b930cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
label_3b9310:
    // 0x3b9310: 0x986a0004  lwr         $t2, 0x4($v1)
    ctx->pc = 0x3b9310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
label_3b9314:
    // 0x3b9314: 0xa88a000f  swl         $t2, 0xF($a0)
    ctx->pc = 0x3b9314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b9318:
    // 0x3b9318: 0xb88a000c  swr         $t2, 0xC($a0)
    ctx->pc = 0x3b9318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b931c:
    // 0x3b931c: 0x14e0ffe0  bnez        $a3, . + 4 + (-0x20 << 2)
label_3b9320:
    if (ctx->pc == 0x3B9320u) {
        ctx->pc = 0x3B9320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B931Cu;
        // 0x3b9320: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9324u;
        goto label_3b9324;
    }
    ctx->pc = 0x3B931Cu;
    {
        const bool branch_taken_0x3b931c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B931Cu;
        // 0x3b9320: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b931c) {
            ctx->pc = 0x3B92A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b92a0;
        }
    }
    ctx->pc = 0x3B9324u;
label_3b9324:
    // 0x3b9324: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x3b9324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3b9328:
    // 0x3b9328: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_3b932c:
    if (ctx->pc == 0x3B932Cu) {
        ctx->pc = 0x3B932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9328u;
        // 0x3b932c: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9330u;
        goto label_3b9330;
    }
    ctx->pc = 0x3B9328u;
    {
        const bool branch_taken_0x3b9328 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9328u;
        // 0x3b932c: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9328) {
            ctx->pc = 0x3B9344u;
            goto label_3b9344;
        }
    }
    ctx->pc = 0x3B9330u;
label_3b9330:
    // 0x3b9330: 0xae5300b0  sw          $s3, 0xB0($s2)
    ctx->pc = 0x3b9330u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 19));
label_3b9334:
    // 0x3b9334: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3b9334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3b9338:
    // 0x3b9338: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b9338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3b933c:
    // 0x3b933c: 0x10000012  b           . + 4 + (0x12 << 2)
label_3b9340:
    if (ctx->pc == 0x3B9340u) {
        ctx->pc = 0x3B9340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B933Cu;
        // 0x3b9340: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9344u;
        goto label_3b9344;
    }
    ctx->pc = 0x3B933Cu;
    {
        const bool branch_taken_0x3b933c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B933Cu;
        // 0x3b9340: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b933c) {
            ctx->pc = 0x3B9388u;
            goto label_3b9388;
        }
    }
    ctx->pc = 0x3B9344u;
label_3b9344:
    // 0x3b9344: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b9344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3b9348:
    // 0x3b9348: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b9348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b934c:
    // 0x3b934c: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3b934cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3b9350:
    // 0x3b9350: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3b9350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3b9354:
    // 0x3b9354: 0x40f809  jalr        $v0
label_3b9358:
    if (ctx->pc == 0x3B9358u) {
        ctx->pc = 0x3B9358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9354u;
        // 0x3b9358: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B935Cu;
        goto label_3b935c;
    }
    ctx->pc = 0x3B9354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B935Cu);
        ctx->pc = 0x3B9358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9354u;
        // 0x3b9358: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9354u, 0x3B935Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B935Cu;
label_3b935c:
    // 0x3b935c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b935cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b9360:
    // 0x3b9360: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b9360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b9364:
    // 0x3b9364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b9364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b9368:
    // 0x3b9368: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3b9368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3b936c:
    // 0x3b936c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3b936cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3b9370:
    // 0x3b9370: 0xc103642  jal         func_40D908
label_3b9374:
    if (ctx->pc == 0x3B9374u) {
        ctx->pc = 0x3B9374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9370u;
        // 0x3b9374: 0x34a501a4  ori         $a1, $a1, 0x1A4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)420);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9378u;
        goto label_3b9378;
    }
    ctx->pc = 0x3B9370u;
    SET_GPR_U32(ctx, 31, 0x3B9378u);
    ctx->pc = 0x3B9374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9370u;
    // 0x3b9374: 0x34a501a4  ori         $a1, $a1, 0x1A4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)420);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3B9370u, 0x3B9378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9378u;
label_3b9378:
    // 0x3b9378: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3b9378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3b937c:
    // 0x3b937c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3b937cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3b9380:
    // 0x3b9380: 0xae5000b0  sw          $s0, 0xB0($s2)
    ctx->pc = 0x3b9380u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 16));
label_3b9384:
    // 0x3b9384: 0xae4000b4  sw          $zero, 0xB4($s2)
    ctx->pc = 0x3b9384u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
label_3b9388:
    // 0x3b9388: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3b9388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3b938c:
    // 0x3b938c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3b938cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3b9390:
    // 0x3b9390: 0xc1067b0  jal         func_419EC0
label_3b9394:
    if (ctx->pc == 0x3B9394u) {
        ctx->pc = 0x3B9394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9390u;
        // 0x3b9394: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9398u;
        goto label_3b9398;
    }
    ctx->pc = 0x3B9390u;
    SET_GPR_U32(ctx, 31, 0x3B9398u);
    ctx->pc = 0x3B9394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9390u;
    // 0x3b9394: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EC0u, 0x3B9390u, 0x3B9398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9398u;
label_3b9398:
    // 0x3b9398: 0xc0eb85a  jal         func_3AE168
label_3b939c:
    if (ctx->pc == 0x3B939Cu) {
        ctx->pc = 0x3B939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9398u;
        // 0x3b939c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B93A0u;
        goto label_3b93a0;
    }
    ctx->pc = 0x3B9398u;
    SET_GPR_U32(ctx, 31, 0x3B93A0u);
    ctx->pc = 0x3B939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9398u;
    // 0x3b939c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE168u, 0x3B9398u, 0x3B93A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B93A0u;
label_3b93a0:
    // 0x3b93a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b93a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b93a4:
    // 0x3b93a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b93a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b93a8:
    // 0x3b93a8: 0xc1065f8  jal         func_4197E0
label_3b93ac:
    if (ctx->pc == 0x3B93ACu) {
        ctx->pc = 0x3B93ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B93A8u;
        // 0x3b93ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B93B0u;
        goto label_3b93b0;
    }
    ctx->pc = 0x3B93A8u;
    SET_GPR_U32(ctx, 31, 0x3B93B0u);
    ctx->pc = 0x3B93ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B93A8u;
    // 0x3b93ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4197E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4197E0u, 0x3B93A8u, 0x3B93B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B93B0u;
label_3b93b0:
    // 0x3b93b0: 0xc0e2094  jal         func_388250
label_3b93b4:
    if (ctx->pc == 0x3B93B4u) {
        ctx->pc = 0x3B93B8u;
        goto label_3b93b8;
    }
    ctx->pc = 0x3B93B0u;
    SET_GPR_U32(ctx, 31, 0x3B93B8u);
    ctx->pc = 0x388250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388250u, 0x3B93B0u, 0x3B93B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B93B8u;
label_3b93b8:
    // 0x3b93b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b93b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b93bc:
    // 0x3b93bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b93bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b93c0:
    // 0x3b93c0: 0xc0e2686  jal         func_389A18
label_3b93c4:
    if (ctx->pc == 0x3B93C4u) {
        ctx->pc = 0x3B93C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B93C0u;
        // 0x3b93c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B93C8u;
        goto label_3b93c8;
    }
    ctx->pc = 0x3B93C0u;
    SET_GPR_U32(ctx, 31, 0x3B93C8u);
    ctx->pc = 0x3B93C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B93C0u;
    // 0x3b93c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x3B93C0u, 0x3B93C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B93C8u;
label_3b93c8:
    // 0x3b93c8: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x3b93c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3b93cc:
    // 0x3b93cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b93ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b93d0:
    // 0x3b93d0: 0xc0e2836  jal         func_38A0D8
label_3b93d4:
    if (ctx->pc == 0x3B93D4u) {
        ctx->pc = 0x3B93D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B93D0u;
        // 0x3b93d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B93D8u;
        goto label_3b93d8;
    }
    ctx->pc = 0x3B93D0u;
    SET_GPR_U32(ctx, 31, 0x3B93D8u);
    ctx->pc = 0x3B93D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B93D0u;
    // 0x3b93d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A0D8u, 0x3B93D0u, 0x3B93D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B93D8u;
label_3b93d8:
    // 0x3b93d8: 0xae5000b8  sw          $s0, 0xB8($s2)
    ctx->pc = 0x3b93d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 16));
label_3b93dc:
    // 0x3b93dc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3b93dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b93e0:
    // 0x3b93e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3b93e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b93e4:
    // 0x3b93e4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3b93e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b93e8:
    // 0x3b93e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3b93e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b93ec:
    // 0x3b93ec: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3b93ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b93f0:
    // 0x3b93f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b93f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b93f4:
    // 0x3b93f4: 0x3e00008  jr          $ra
label_3b93f8:
    if (ctx->pc == 0x3B93F8u) {
        ctx->pc = 0x3B93F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B93F4u;
        // 0x3b93f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B93FCu;
        goto label_3b93fc;
    }
    ctx->pc = 0x3B93F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B93F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B93F4u;
        // 0x3b93f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B93F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B93FCu;
label_3b93fc:
    // 0x3b93fc: 0x0  nop
    ctx->pc = 0x3b93fcu;
    // NOP
label_3b9400:
    // 0x3b9400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b9400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3b9404:
    // 0x3b9404: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b9404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3b9408:
    // 0x3b9408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b9408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b940c:
    // 0x3b940c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b940cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b9410:
    // 0x3b9410: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3b9410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3b9414:
    // 0x3b9414: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b9414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b9418:
    // 0x3b9418: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b9418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3b941c:
    // 0x3b941c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3b941cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3b9420:
    // 0x3b9420: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b9420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b9424:
    // 0x3b9424: 0x40f809  jalr        $v0
label_3b9428:
    if (ctx->pc == 0x3B9428u) {
        ctx->pc = 0x3B9428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9424u;
        // 0x3b9428: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B942Cu;
        goto label_3b942c;
    }
    ctx->pc = 0x3B9424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B942Cu);
        ctx->pc = 0x3B9428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9424u;
        // 0x3b9428: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9424u, 0x3B942Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B942Cu;
label_3b942c:
    // 0x3b942c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b942cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b9430:
    // 0x3b9430: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b9430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b9434:
    // 0x3b9434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b9434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b9438:
    // 0x3b9438: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3b9438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3b943c:
    // 0x3b943c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3b943cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3b9440:
    // 0x3b9440: 0xc103642  jal         func_40D908
label_3b9444:
    if (ctx->pc == 0x3B9444u) {
        ctx->pc = 0x3B9444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9440u;
        // 0x3b9444: 0x34a501a4  ori         $a1, $a1, 0x1A4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)420);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9448u;
        goto label_3b9448;
    }
    ctx->pc = 0x3B9440u;
    SET_GPR_U32(ctx, 31, 0x3B9448u);
    ctx->pc = 0x3B9444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9440u;
    // 0x3b9444: 0x34a501a4  ori         $a1, $a1, 0x1A4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)420);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3B9440u, 0x3B9448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9448u;
label_3b9448:
    // 0x3b9448: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3b9448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3b944c:
    // 0x3b944c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_3b9450:
    if (ctx->pc == 0x3B9450u) {
        ctx->pc = 0x3B9450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B944Cu;
        // 0x3b9450: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9454u;
        goto label_3b9454;
    }
    ctx->pc = 0x3B944Cu;
    {
        const bool branch_taken_0x3b944c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B944Cu;
        // 0x3b9450: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b944c) {
            ctx->pc = 0x3B9468u;
            goto label_3b9468;
        }
    }
    ctx->pc = 0x3B9454u;
label_3b9454:
    // 0x3b9454: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x3b9454u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
label_3b9458:
    // 0x3b9458: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b9458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b945c:
    // 0x3b945c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b945cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b9460:
    // 0x3b9460: 0xc103722  jal         func_40DC88
label_3b9464:
    if (ctx->pc == 0x3B9464u) {
        ctx->pc = 0x3B9464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9460u;
        // 0x3b9464: 0x34c601a4  ori         $a2, $a2, 0x1A4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)420);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9468u;
        goto label_3b9468;
    }
    ctx->pc = 0x3B9460u;
    SET_GPR_U32(ctx, 31, 0x3B9468u);
    ctx->pc = 0x3B9464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9460u;
    // 0x3b9464: 0x34c601a4  ori         $a2, $a2, 0x1A4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)420);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DC88u, 0x3B9460u, 0x3B9468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9468u;
label_3b9468:
    // 0x3b9468: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b9468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b946c:
    // 0x3b946c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b946cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b9470:
    // 0x3b9470: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b9470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b9474:
    // 0x3b9474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b9474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b9478:
    // 0x3b9478: 0x3e00008  jr          $ra
label_3b947c:
    if (ctx->pc == 0x3B947Cu) {
        ctx->pc = 0x3B947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9478u;
        // 0x3b947c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9480u;
        goto label_fallthrough_0x3b9478;
    }
    ctx->pc = 0x3B9478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9478u;
        // 0x3b947c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b9478:
    ctx->pc = 0x3B9480u;
}
