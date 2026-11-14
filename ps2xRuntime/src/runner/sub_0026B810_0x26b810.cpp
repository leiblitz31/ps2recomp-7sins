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

// Function: sub_0026B810
// Address: 0x26b810 - 0x26bc90
void sub_0026B810_0x26b810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B810_0x26b810");
#endif

    switch (ctx->pc) {
        case 0x26b844u: goto label_26b844;
        case 0x26b864u: goto label_26b864;
        case 0x26b878u: goto label_26b878;
        case 0x26b888u: goto label_26b888;
        case 0x26b894u: goto label_26b894;
        case 0x26b8a0u: goto label_26b8a0;
        case 0x26b8b4u: goto label_26b8b4;
        case 0x26b8c4u: goto label_26b8c4;
        case 0x26b8d0u: goto label_26b8d0;
        case 0x26b8e4u: goto label_26b8e4;
        case 0x26b8f8u: goto label_26b8f8;
        case 0x26b908u: goto label_26b908;
        case 0x26b92cu: goto label_26b92c;
        case 0x26b944u: goto label_26b944;
        case 0x26b958u: goto label_26b958;
        case 0x26b970u: goto label_26b970;
        case 0x26b97cu: goto label_26b97c;
        case 0x26b988u: goto label_26b988;
        case 0x26b99cu: goto label_26b99c;
        case 0x26b9acu: goto label_26b9ac;
        case 0x26b9b8u: goto label_26b9b8;
        case 0x26b9ccu: goto label_26b9cc;
        case 0x26b9e0u: goto label_26b9e0;
        case 0x26b9f0u: goto label_26b9f0;
        case 0x26ba14u: goto label_26ba14;
        case 0x26ba2cu: goto label_26ba2c;
        case 0x26ba40u: goto label_26ba40;
        case 0x26ba58u: goto label_26ba58;
        case 0x26ba64u: goto label_26ba64;
        case 0x26ba70u: goto label_26ba70;
        case 0x26ba84u: goto label_26ba84;
        case 0x26ba94u: goto label_26ba94;
        case 0x26baa0u: goto label_26baa0;
        case 0x26bab4u: goto label_26bab4;
        case 0x26bac8u: goto label_26bac8;
        case 0x26bad8u: goto label_26bad8;
        case 0x26bafcu: goto label_26bafc;
        case 0x26bb14u: goto label_26bb14;
        case 0x26bb24u: goto label_26bb24;
        case 0x26bb38u: goto label_26bb38;
        case 0x26bb50u: goto label_26bb50;
        case 0x26bb5cu: goto label_26bb5c;
        case 0x26bb68u: goto label_26bb68;
        case 0x26bb7cu: goto label_26bb7c;
        case 0x26bb8cu: goto label_26bb8c;
        case 0x26bb98u: goto label_26bb98;
        case 0x26bbacu: goto label_26bbac;
        case 0x26bbc0u: goto label_26bbc0;
        case 0x26bbd0u: goto label_26bbd0;
        case 0x26bbf4u: goto label_26bbf4;
        case 0x26bc0cu: goto label_26bc0c;
        case 0x26bc1cu: goto label_26bc1c;
        case 0x26bc30u: goto label_26bc30;
        case 0x26bc58u: goto label_26bc58;
        case 0x26bc68u: goto label_26bc68;
        default: break;
    }

    ctx->pc = 0x26b810u;

    // 0x26b810: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x26b810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x26b814: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26b814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26b818: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26b818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26b81c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26b81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26b820: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26b820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26b824: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26b824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26b828: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x26b828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x26b82c: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x26b82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x26b830: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x26b830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x26b834: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x26b834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
    // 0x26b838: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x26b838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26b83c: 0xc09ac08  jal         func_26B020
    ctx->pc = 0x26B83Cu;
    SET_GPR_U32(ctx, 31, 0x26B844u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x26B83Cu, 0x26B844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B844u;
label_26b844:
    // 0x26b844: 0x8f82c034  lw          $v0, -0x3FCC($gp)
    ctx->pc = 0x26b844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
    // 0x26b848: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x26b848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x26b84c: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x26b84cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
    // 0x26b850: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x26b850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x26b854: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26b854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26b858: 0x24a5cf20  addiu       $a1, $a1, -0x30E0
    ctx->pc = 0x26b858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954784));
    // 0x26b85c: 0xc040304  jal         func_100C10
    ctx->pc = 0x26B85Cu;
    SET_GPR_U32(ctx, 31, 0x26B864u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x26B85Cu, 0x26B864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B864u;
label_26b864:
    // 0x26b864: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x26b864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26b868: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26b868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26b86c: 0x24a5cf20  addiu       $a1, $a1, -0x30E0
    ctx->pc = 0x26b86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954784));
    // 0x26b870: 0xc040304  jal         func_100C10
    ctx->pc = 0x26B870u;
    SET_GPR_U32(ctx, 31, 0x26B878u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x26B870u, 0x26B878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B878u;
label_26b878:
    // 0x26b878: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x26b878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26b87c: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x26b87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x26b880: 0xc04809c  jal         func_120270
    ctx->pc = 0x26B880u;
    SET_GPR_U32(ctx, 31, 0x26B888u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26B880u, 0x26B888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B888u;
label_26b888:
    // 0x26b888: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26b888u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b88c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x26B88Cu;
    {
        const bool branch_taken_0x26b88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b88c) {
            ctx->pc = 0x26B948u;
            goto label_26b948;
        }
    }
    ctx->pc = 0x26B894u;
label_26b894:
    // 0x26b894: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x26b894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26b898: 0xc048094  jal         func_120250
    ctx->pc = 0x26B898u;
    SET_GPR_U32(ctx, 31, 0x26B8A0u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26B898u, 0x26B8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B8A0u;
label_26b8a0:
    // 0x26b8a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26b8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b8a4: 0x24050479  addiu       $a1, $zero, 0x479
    ctx->pc = 0x26b8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1145));
    // 0x26b8a8: 0x2786a0f4  addiu       $a2, $gp, -0x5F0C
    ctx->pc = 0x26b8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942964));
    // 0x26b8ac: 0xc041a50  jal         func_106940
    ctx->pc = 0x26B8ACu;
    SET_GPR_U32(ctx, 31, 0x26B8B4u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x26B8ACu, 0x26B8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B8B4u;
label_26b8b4:
    // 0x26b8b4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x26b8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x26b8b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26b8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b8bc: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x26B8BCu;
    SET_GPR_U32(ctx, 31, 0x26B8C4u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x26B8BCu, 0x26B8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B8C4u;
label_26b8c4:
    // 0x26b8c4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x26b8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26b8c8: 0xc048094  jal         func_120250
    ctx->pc = 0x26B8C8u;
    SET_GPR_U32(ctx, 31, 0x26B8D0u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26B8C8u, 0x26B8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B8D0u;
label_26b8d0:
    // 0x26b8d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26b8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b8d4: 0x24050477  addiu       $a1, $zero, 0x477
    ctx->pc = 0x26b8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1143));
    // 0x26b8d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26b8d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b8dc: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x26B8DCu;
    SET_GPR_U32(ctx, 31, 0x26B8E4u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x26B8DCu, 0x26B8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B8E4u;
label_26b8e4:
    // 0x26b8e4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x26B8E4u;
    {
        const bool branch_taken_0x26b8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b8e4) {
            ctx->pc = 0x26B944u;
            goto label_26b944;
        }
    }
    ctx->pc = 0x26B8ECu;
    // 0x26b8ec: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x26b8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x26b8f0: 0xc041874  jal         func_1061D0
    ctx->pc = 0x26B8F0u;
    SET_GPR_U32(ctx, 31, 0x26B8F8u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x26B8F0u, 0x26B8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B8F8u;
label_26b8f8:
    // 0x26b8f8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x26b8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x26b8fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26b8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b900: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x26B900u;
    SET_GPR_U32(ctx, 31, 0x26B908u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x26B900u, 0x26B908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B908u;
label_26b908:
    // 0x26b908: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26B908u;
    {
        const bool branch_taken_0x26b908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b908) {
            ctx->pc = 0x26B944u;
            goto label_26b944;
        }
    }
    ctx->pc = 0x26B910u;
    // 0x26b910: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x26b910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26b914: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x26b914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26b918: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x26b918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26b91c: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x26b91cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x26b920: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26b920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b924: 0xc09b364  jal         func_26CD90
    ctx->pc = 0x26B924u;
    SET_GPR_U32(ctx, 31, 0x26B92Cu);
    ctx->pc = 0x26CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CD90u, 0x26B924u, 0x26B92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B92Cu;
label_26b92c:
    // 0x26b92c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26B92Cu;
    {
        const bool branch_taken_0x26b92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b92c) {
            ctx->pc = 0x26B944u;
            goto label_26b944;
        }
    }
    ctx->pc = 0x26B934u;
    // 0x26b934: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x26b934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26b938: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x26b938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26b93c: 0xc09af24  jal         func_26BC90
    ctx->pc = 0x26B93Cu;
    SET_GPR_U32(ctx, 31, 0x26B944u);
    ctx->pc = 0x26BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BC90u, 0x26B93Cu, 0x26B944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B944u;
label_26b944:
    // 0x26b944: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x26b944u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_26b948:
    // 0x26b948: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x26b948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26b94c: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x26b94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x26b950: 0xc04808c  jal         func_120230
    ctx->pc = 0x26B950u;
    SET_GPR_U32(ctx, 31, 0x26B958u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26B950u, 0x26B958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B958u;
label_26b958:
    // 0x26b958: 0x1662ffce  bne         $s3, $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x26B958u;
    {
        const bool branch_taken_0x26b958 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x26b958) {
            ctx->pc = 0x26B894u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26b894;
        }
    }
    ctx->pc = 0x26B960u;
    // 0x26b960: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x26b960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26b964: 0x24440088  addiu       $a0, $v0, 0x88
    ctx->pc = 0x26b964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x26b968: 0xc04809c  jal         func_120270
    ctx->pc = 0x26B968u;
    SET_GPR_U32(ctx, 31, 0x26B970u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26B968u, 0x26B970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B970u;
label_26b970:
    // 0x26b970: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26b970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b974: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x26B974u;
    {
        const bool branch_taken_0x26b974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b974) {
            ctx->pc = 0x26BA30u;
            goto label_26ba30;
        }
    }
    ctx->pc = 0x26B97Cu;
label_26b97c:
    // 0x26b97c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x26b97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26b980: 0xc048094  jal         func_120250
    ctx->pc = 0x26B980u;
    SET_GPR_U32(ctx, 31, 0x26B988u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26B980u, 0x26B988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B988u;
label_26b988:
    // 0x26b988: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26b988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b98c: 0x24050479  addiu       $a1, $zero, 0x479
    ctx->pc = 0x26b98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1145));
    // 0x26b990: 0x2786a0f4  addiu       $a2, $gp, -0x5F0C
    ctx->pc = 0x26b990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942964));
    // 0x26b994: 0xc041a50  jal         func_106940
    ctx->pc = 0x26B994u;
    SET_GPR_U32(ctx, 31, 0x26B99Cu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x26B994u, 0x26B99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B99Cu;
label_26b99c:
    // 0x26b99c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x26b99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26b9a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26b9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b9a4: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x26B9A4u;
    SET_GPR_U32(ctx, 31, 0x26B9ACu);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x26B9A4u, 0x26B9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B9ACu;
label_26b9ac:
    // 0x26b9ac: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x26b9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26b9b0: 0xc048094  jal         func_120250
    ctx->pc = 0x26B9B0u;
    SET_GPR_U32(ctx, 31, 0x26B9B8u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26B9B0u, 0x26B9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B9B8u;
label_26b9b8:
    // 0x26b9b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26b9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b9bc: 0x24050477  addiu       $a1, $zero, 0x477
    ctx->pc = 0x26b9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1143));
    // 0x26b9c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26b9c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b9c4: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x26B9C4u;
    SET_GPR_U32(ctx, 31, 0x26B9CCu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x26B9C4u, 0x26B9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B9CCu;
label_26b9cc:
    // 0x26b9cc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x26B9CCu;
    {
        const bool branch_taken_0x26b9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b9cc) {
            ctx->pc = 0x26BA2Cu;
            goto label_26ba2c;
        }
    }
    ctx->pc = 0x26B9D4u;
    // 0x26b9d4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x26b9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x26b9d8: 0xc041874  jal         func_1061D0
    ctx->pc = 0x26B9D8u;
    SET_GPR_U32(ctx, 31, 0x26B9E0u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x26B9D8u, 0x26B9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B9E0u;
label_26b9e0:
    // 0x26b9e0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x26b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26b9e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26b9e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b9e8: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x26B9E8u;
    SET_GPR_U32(ctx, 31, 0x26B9F0u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x26B9E8u, 0x26B9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B9F0u;
label_26b9f0:
    // 0x26b9f0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26B9F0u;
    {
        const bool branch_taken_0x26b9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b9f0) {
            ctx->pc = 0x26BA2Cu;
            goto label_26ba2c;
        }
    }
    ctx->pc = 0x26B9F8u;
    // 0x26b9f8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x26b9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26b9fc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x26b9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26ba00: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x26ba00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26ba04: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x26ba04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x26ba08: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26ba08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ba0c: 0xc09b364  jal         func_26CD90
    ctx->pc = 0x26BA0Cu;
    SET_GPR_U32(ctx, 31, 0x26BA14u);
    ctx->pc = 0x26CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CD90u, 0x26BA0Cu, 0x26BA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BA14u;
label_26ba14:
    // 0x26ba14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26BA14u;
    {
        const bool branch_taken_0x26ba14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ba14) {
            ctx->pc = 0x26BA2Cu;
            goto label_26ba2c;
        }
    }
    ctx->pc = 0x26BA1Cu;
    // 0x26ba1c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x26ba1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26ba20: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x26ba20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26ba24: 0xc09af24  jal         func_26BC90
    ctx->pc = 0x26BA24u;
    SET_GPR_U32(ctx, 31, 0x26BA2Cu);
    ctx->pc = 0x26BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BC90u, 0x26BA24u, 0x26BA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BA2Cu;
label_26ba2c:
    // 0x26ba2c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x26ba2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_26ba30:
    // 0x26ba30: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x26ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26ba34: 0x24440088  addiu       $a0, $v0, 0x88
    ctx->pc = 0x26ba34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x26ba38: 0xc04808c  jal         func_120230
    ctx->pc = 0x26BA38u;
    SET_GPR_U32(ctx, 31, 0x26BA40u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26BA38u, 0x26BA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BA40u;
label_26ba40:
    // 0x26ba40: 0x1642ffce  bne         $s2, $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x26BA40u;
    {
        const bool branch_taken_0x26ba40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x26ba40) {
            ctx->pc = 0x26B97Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26b97c;
        }
    }
    ctx->pc = 0x26BA48u;
    // 0x26ba48: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x26ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26ba4c: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x26ba4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x26ba50: 0xc04809c  jal         func_120270
    ctx->pc = 0x26BA50u;
    SET_GPR_U32(ctx, 31, 0x26BA58u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26BA50u, 0x26BA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BA58u;
label_26ba58:
    // 0x26ba58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26ba58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ba5c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x26BA5Cu;
    {
        const bool branch_taken_0x26ba5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ba5c) {
            ctx->pc = 0x26BB28u;
            goto label_26bb28;
        }
    }
    ctx->pc = 0x26BA64u;
label_26ba64:
    // 0x26ba64: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x26ba64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26ba68: 0xc048094  jal         func_120250
    ctx->pc = 0x26BA68u;
    SET_GPR_U32(ctx, 31, 0x26BA70u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26BA68u, 0x26BA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BA70u;
label_26ba70:
    // 0x26ba70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26ba70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ba74: 0x24050479  addiu       $a1, $zero, 0x479
    ctx->pc = 0x26ba74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1145));
    // 0x26ba78: 0x2786a0f4  addiu       $a2, $gp, -0x5F0C
    ctx->pc = 0x26ba78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942964));
    // 0x26ba7c: 0xc041a50  jal         func_106940
    ctx->pc = 0x26BA7Cu;
    SET_GPR_U32(ctx, 31, 0x26BA84u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x26BA7Cu, 0x26BA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BA84u;
label_26ba84:
    // 0x26ba84: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x26ba84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26ba88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26ba88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ba8c: 0xc040304  jal         func_100C10
    ctx->pc = 0x26BA8Cu;
    SET_GPR_U32(ctx, 31, 0x26BA94u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x26BA8Cu, 0x26BA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BA94u;
label_26ba94:
    // 0x26ba94: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x26ba94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26ba98: 0xc048094  jal         func_120250
    ctx->pc = 0x26BA98u;
    SET_GPR_U32(ctx, 31, 0x26BAA0u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26BA98u, 0x26BAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BAA0u;
label_26baa0:
    // 0x26baa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26baa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26baa4: 0x24050477  addiu       $a1, $zero, 0x477
    ctx->pc = 0x26baa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1143));
    // 0x26baa8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26baa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26baac: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x26BAACu;
    SET_GPR_U32(ctx, 31, 0x26BAB4u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x26BAACu, 0x26BAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BAB4u;
label_26bab4:
    // 0x26bab4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x26BAB4u;
    {
        const bool branch_taken_0x26bab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bab4) {
            ctx->pc = 0x26BB14u;
            goto label_26bb14;
        }
    }
    ctx->pc = 0x26BABCu;
    // 0x26babc: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x26babcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x26bac0: 0xc041874  jal         func_1061D0
    ctx->pc = 0x26BAC0u;
    SET_GPR_U32(ctx, 31, 0x26BAC8u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x26BAC0u, 0x26BAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BAC8u;
label_26bac8:
    // 0x26bac8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x26bac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26bacc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26baccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bad0: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x26BAD0u;
    SET_GPR_U32(ctx, 31, 0x26BAD8u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x26BAD0u, 0x26BAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BAD8u;
label_26bad8:
    // 0x26bad8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26BAD8u;
    {
        const bool branch_taken_0x26bad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bad8) {
            ctx->pc = 0x26BB14u;
            goto label_26bb14;
        }
    }
    ctx->pc = 0x26BAE0u;
    // 0x26bae0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x26bae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26bae4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x26bae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26bae8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x26bae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26baec: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x26baecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x26baf0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26baf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26baf4: 0xc09b364  jal         func_26CD90
    ctx->pc = 0x26BAF4u;
    SET_GPR_U32(ctx, 31, 0x26BAFCu);
    ctx->pc = 0x26CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CD90u, 0x26BAF4u, 0x26BAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BAFCu;
label_26bafc:
    // 0x26bafc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26BAFCu;
    {
        const bool branch_taken_0x26bafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bafc) {
            ctx->pc = 0x26BB14u;
            goto label_26bb14;
        }
    }
    ctx->pc = 0x26BB04u;
    // 0x26bb04: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x26bb04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26bb08: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x26bb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26bb0c: 0xc09af24  jal         func_26BC90
    ctx->pc = 0x26BB0Cu;
    SET_GPR_U32(ctx, 31, 0x26BB14u);
    ctx->pc = 0x26BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BC90u, 0x26BB0Cu, 0x26BB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB14u;
label_26bb14:
    // 0x26bb14: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x26bb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26bb18: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26bb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26bb1c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x26BB1Cu;
    SET_GPR_U32(ctx, 31, 0x26BB24u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x26BB1Cu, 0x26BB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB24u;
label_26bb24:
    // 0x26bb24: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x26bb24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_26bb28:
    // 0x26bb28: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x26bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26bb2c: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x26bb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x26bb30: 0xc04808c  jal         func_120230
    ctx->pc = 0x26BB30u;
    SET_GPR_U32(ctx, 31, 0x26BB38u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26BB30u, 0x26BB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB38u;
label_26bb38:
    // 0x26bb38: 0x1622ffca  bne         $s1, $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x26BB38u;
    {
        const bool branch_taken_0x26bb38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x26bb38) {
            ctx->pc = 0x26BA64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26ba64;
        }
    }
    ctx->pc = 0x26BB40u;
    // 0x26bb40: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x26bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26bb44: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x26bb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x26bb48: 0xc04809c  jal         func_120270
    ctx->pc = 0x26BB48u;
    SET_GPR_U32(ctx, 31, 0x26BB50u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26BB48u, 0x26BB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB50u;
label_26bb50:
    // 0x26bb50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26bb50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bb54: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x26BB54u;
    {
        const bool branch_taken_0x26bb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bb54) {
            ctx->pc = 0x26BC20u;
            goto label_26bc20;
        }
    }
    ctx->pc = 0x26BB5Cu;
label_26bb5c:
    // 0x26bb5c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26bb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26bb60: 0xc048094  jal         func_120250
    ctx->pc = 0x26BB60u;
    SET_GPR_U32(ctx, 31, 0x26BB68u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26BB60u, 0x26BB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB68u;
label_26bb68:
    // 0x26bb68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26bb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bb6c: 0x24050479  addiu       $a1, $zero, 0x479
    ctx->pc = 0x26bb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1145));
    // 0x26bb70: 0x2786a0f4  addiu       $a2, $gp, -0x5F0C
    ctx->pc = 0x26bb70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942964));
    // 0x26bb74: 0xc041a50  jal         func_106940
    ctx->pc = 0x26BB74u;
    SET_GPR_U32(ctx, 31, 0x26BB7Cu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x26BB74u, 0x26BB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB7Cu;
label_26bb7c:
    // 0x26bb7c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26bb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26bb80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26bb80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bb84: 0xc040304  jal         func_100C10
    ctx->pc = 0x26BB84u;
    SET_GPR_U32(ctx, 31, 0x26BB8Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x26BB84u, 0x26BB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB8Cu;
label_26bb8c:
    // 0x26bb8c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26bb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26bb90: 0xc048094  jal         func_120250
    ctx->pc = 0x26BB90u;
    SET_GPR_U32(ctx, 31, 0x26BB98u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26BB90u, 0x26BB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB98u;
label_26bb98:
    // 0x26bb98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26bb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bb9c: 0x24050477  addiu       $a1, $zero, 0x477
    ctx->pc = 0x26bb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1143));
    // 0x26bba0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26bba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bba4: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x26BBA4u;
    SET_GPR_U32(ctx, 31, 0x26BBACu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x26BBA4u, 0x26BBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BBACu;
label_26bbac:
    // 0x26bbac: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x26BBACu;
    {
        const bool branch_taken_0x26bbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bbac) {
            ctx->pc = 0x26BC0Cu;
            goto label_26bc0c;
        }
    }
    ctx->pc = 0x26BBB4u;
    // 0x26bbb4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x26bbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x26bbb8: 0xc041874  jal         func_1061D0
    ctx->pc = 0x26BBB8u;
    SET_GPR_U32(ctx, 31, 0x26BBC0u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x26BBB8u, 0x26BBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BBC0u;
label_26bbc0:
    // 0x26bbc0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26bbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26bbc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26bbc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bbc8: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x26BBC8u;
    SET_GPR_U32(ctx, 31, 0x26BBD0u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x26BBC8u, 0x26BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BBD0u;
label_26bbd0:
    // 0x26bbd0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26BBD0u;
    {
        const bool branch_taken_0x26bbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bbd0) {
            ctx->pc = 0x26BC0Cu;
            goto label_26bc0c;
        }
    }
    ctx->pc = 0x26BBD8u;
    // 0x26bbd8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x26bbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26bbdc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x26bbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26bbe0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x26bbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26bbe4: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x26bbe4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x26bbe8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26bbe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bbec: 0xc09b364  jal         func_26CD90
    ctx->pc = 0x26BBECu;
    SET_GPR_U32(ctx, 31, 0x26BBF4u);
    ctx->pc = 0x26CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CD90u, 0x26BBECu, 0x26BBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BBF4u;
label_26bbf4:
    // 0x26bbf4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26BBF4u;
    {
        const bool branch_taken_0x26bbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bbf4) {
            ctx->pc = 0x26BC0Cu;
            goto label_26bc0c;
        }
    }
    ctx->pc = 0x26BBFCu;
    // 0x26bbfc: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x26bbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26bc00: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x26bc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26bc04: 0xc09af24  jal         func_26BC90
    ctx->pc = 0x26BC04u;
    SET_GPR_U32(ctx, 31, 0x26BC0Cu);
    ctx->pc = 0x26BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BC90u, 0x26BC04u, 0x26BC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BC0Cu;
label_26bc0c:
    // 0x26bc0c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26bc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26bc10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26bc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26bc14: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x26BC14u;
    SET_GPR_U32(ctx, 31, 0x26BC1Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x26BC14u, 0x26BC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BC1Cu;
label_26bc1c:
    // 0x26bc1c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x26bc1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_26bc20:
    // 0x26bc20: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x26bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26bc24: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x26bc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x26bc28: 0xc04808c  jal         func_120230
    ctx->pc = 0x26BC28u;
    SET_GPR_U32(ctx, 31, 0x26BC30u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26BC28u, 0x26BC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BC30u;
label_26bc30:
    // 0x26bc30: 0x1602ffca  bne         $s0, $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x26BC30u;
    {
        const bool branch_taken_0x26bc30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x26bc30) {
            ctx->pc = 0x26BB5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26bb5c;
        }
    }
    ctx->pc = 0x26BC38u;
    // 0x26bc38: 0x8f83c034  lw          $v1, -0x3FCC($gp)
    ctx->pc = 0x26bc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
    // 0x26bc3c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x26bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x26bc40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26bc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26bc44: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x26bc44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
    // 0x26bc48: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x26bc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26bc4c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26bc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26bc50: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x26BC50u;
    SET_GPR_U32(ctx, 31, 0x26BC58u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x26BC50u, 0x26BC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BC58u;
label_26bc58:
    // 0x26bc58: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x26bc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x26bc5c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26bc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26bc60: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x26BC60u;
    SET_GPR_U32(ctx, 31, 0x26BC68u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x26BC60u, 0x26BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BC68u;
label_26bc68:
    // 0x26bc68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26bc68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26bc6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26bc6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26bc70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26bc70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26bc74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26bc74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bc78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26bc78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bc7c: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x26bc7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26bc80: 0x3e00008  jr          $ra
    ctx->pc = 0x26BC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BC88u;
    // 0x26bc88: 0x0  nop
    ctx->pc = 0x26bc88u;
    // NOP
    // 0x26bc8c: 0x0  nop
    ctx->pc = 0x26bc8cu;
    // NOP
    ctx->pc = 0x26bc90u;
}
