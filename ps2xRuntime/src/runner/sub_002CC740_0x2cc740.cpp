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

// Function: sub_002CC740
// Address: 0x2cc740 - 0x2ccd10
void sub_002CC740_0x2cc740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC740_0x2cc740");
#endif

    switch (ctx->pc) {
        case 0x2cc788u: goto label_2cc788;
        case 0x2cc794u: goto label_2cc794;
        case 0x2cc7a0u: goto label_2cc7a0;
        case 0x2cc7b4u: goto label_2cc7b4;
        case 0x2cc7dcu: goto label_2cc7dc;
        case 0x2cc7ecu: goto label_2cc7ec;
        case 0x2cc818u: goto label_2cc818;
        case 0x2cc824u: goto label_2cc824;
        case 0x2cc840u: goto label_2cc840;
        case 0x2cc850u: goto label_2cc850;
        case 0x2cc868u: goto label_2cc868;
        case 0x2cc874u: goto label_2cc874;
        case 0x2cc894u: goto label_2cc894;
        case 0x2cc8a0u: goto label_2cc8a0;
        case 0x2cc8b4u: goto label_2cc8b4;
        case 0x2cc8d0u: goto label_2cc8d0;
        case 0x2cc8dcu: goto label_2cc8dc;
        case 0x2cc8f0u: goto label_2cc8f0;
        case 0x2cc914u: goto label_2cc914;
        case 0x2cc924u: goto label_2cc924;
        case 0x2cc93cu: goto label_2cc93c;
        case 0x2cc964u: goto label_2cc964;
        case 0x2cc970u: goto label_2cc970;
        case 0x2cc984u: goto label_2cc984;
        case 0x2cc9a0u: goto label_2cc9a0;
        case 0x2cc9acu: goto label_2cc9ac;
        case 0x2cc9c0u: goto label_2cc9c0;
        case 0x2cc9e0u: goto label_2cc9e0;
        case 0x2cca04u: goto label_2cca04;
        case 0x2cca14u: goto label_2cca14;
        case 0x2cca30u: goto label_2cca30;
        case 0x2cca44u: goto label_2cca44;
        case 0x2cca64u: goto label_2cca64;
        case 0x2cca78u: goto label_2cca78;
        case 0x2cca88u: goto label_2cca88;
        case 0x2ccaa0u: goto label_2ccaa0;
        case 0x2ccaacu: goto label_2ccaac;
        case 0x2ccabcu: goto label_2ccabc;
        case 0x2ccac8u: goto label_2ccac8;
        case 0x2ccae0u: goto label_2ccae0;
        case 0x2ccb08u: goto label_2ccb08;
        case 0x2ccb18u: goto label_2ccb18;
        case 0x2ccb30u: goto label_2ccb30;
        case 0x2ccb40u: goto label_2ccb40;
        case 0x2ccb68u: goto label_2ccb68;
        case 0x2ccb88u: goto label_2ccb88;
        case 0x2ccb9cu: goto label_2ccb9c;
        case 0x2ccbb8u: goto label_2ccbb8;
        case 0x2ccbc4u: goto label_2ccbc4;
        case 0x2ccbd4u: goto label_2ccbd4;
        case 0x2ccbe0u: goto label_2ccbe0;
        case 0x2ccbf0u: goto label_2ccbf0;
        case 0x2ccc04u: goto label_2ccc04;
        case 0x2ccc1cu: goto label_2ccc1c;
        case 0x2ccc2cu: goto label_2ccc2c;
        case 0x2ccc38u: goto label_2ccc38;
        case 0x2ccc4cu: goto label_2ccc4c;
        case 0x2ccc5cu: goto label_2ccc5c;
        case 0x2ccc68u: goto label_2ccc68;
        case 0x2ccc78u: goto label_2ccc78;
        case 0x2ccc84u: goto label_2ccc84;
        case 0x2ccc98u: goto label_2ccc98;
        case 0x2ccca8u: goto label_2ccca8;
        case 0x2cccbcu: goto label_2cccbc;
        case 0x2cccccu: goto label_2ccccc;
        default: break;
    }

    ctx->pc = 0x2cc740u;

    // 0x2cc740: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x2cc740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x2cc744: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2cc744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2cc748: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2cc748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2cc74c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2cc74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2cc750: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2cc750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2cc754: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2cc754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2cc758: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2cc758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2cc75c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cc75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cc760: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cc760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cc764: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cc764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cc768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cc768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cc76c: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x2cc76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x2cc770: 0xafa50150  sw          $a1, 0x150($sp)
    ctx->pc = 0x2cc770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 5));
    // 0x2cc774: 0xafa60160  sw          $a2, 0x160($sp)
    ctx->pc = 0x2cc774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 6));
    // 0x2cc778: 0xafa70170  sw          $a3, 0x170($sp)
    ctx->pc = 0x2cc778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 7));
    // 0x2cc77c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2cc77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2cc780: 0xc042230  jal         func_1088C0
    ctx->pc = 0x2CC780u;
    SET_GPR_U32(ctx, 31, 0x2CC788u);
    ctx->pc = 0x1088C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1088C0u, 0x2CC780u, 0x2CC788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC788u;
label_2cc788:
    // 0x2cc788: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2cc788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2cc78c: 0xc0480a4  jal         func_120290
    ctx->pc = 0x2CC78Cu;
    SET_GPR_U32(ctx, 31, 0x2CC794u);
    ctx->pc = 0x120290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120290u, 0x2CC78Cu, 0x2CC794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC794u;
label_2cc794:
    // 0x2cc794: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x2cc794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2cc798: 0xc042514  jal         func_109450
    ctx->pc = 0x2CC798u;
    SET_GPR_U32(ctx, 31, 0x2CC7A0u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x2CC798u, 0x2CC7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC7A0u;
label_2cc7a0:
    // 0x2cc7a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CC7A0u;
    {
        const bool branch_taken_0x2cc7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc7a0) {
            ctx->pc = 0x2CC7C8u;
            goto label_2cc7c8;
        }
    }
    ctx->pc = 0x2CC7A8u;
    // 0x2cc7a8: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x2cc7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2cc7ac: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2CC7ACu;
    SET_GPR_U32(ctx, 31, 0x2CC7B4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2CC7ACu, 0x2CC7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC7B4u;
label_2cc7b4:
    // 0x2cc7b4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2cc7b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc7b8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2cc7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2cc7bc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2cc7bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2cc7c0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CC7C0u;
    {
        const bool branch_taken_0x2cc7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc7c0) {
            ctx->pc = 0x2CC7F8u;
            goto label_2cc7f8;
        }
    }
    ctx->pc = 0x2CC7C8u;
label_2cc7c8:
    // 0x2cc7c8: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x2cc7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x2cc7cc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2cc7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2cc7d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cc7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc7d4: 0xc048004  jal         func_120010
    ctx->pc = 0x2CC7D4u;
    SET_GPR_U32(ctx, 31, 0x2CC7DCu);
    ctx->pc = 0x120010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120010u, 0x2CC7D4u, 0x2CC7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC7DCu;
label_2cc7dc:
    // 0x2cc7dc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2cc7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2cc7e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cc7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc7e4: 0xc0420a0  jal         func_108280
    ctx->pc = 0x2CC7E4u;
    SET_GPR_U32(ctx, 31, 0x2CC7ECu);
    ctx->pc = 0x108280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108280u, 0x2CC7E4u, 0x2CC7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC7ECu;
label_2cc7ec:
    // 0x2cc7ec: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2cc7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2cc7f0: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x2CC7F0u;
    {
        const bool branch_taken_0x2cc7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc7f0) {
            ctx->pc = 0x2CCCD0u;
            goto label_2cccd0;
        }
    }
    ctx->pc = 0x2CC7F8u;
label_2cc7f8:
    // 0x2cc7f8: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x2cc7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2cc7fc: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2cc7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2cc800: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2cc800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2cc804: 0x8fa70150  lw          $a3, 0x150($sp)
    ctx->pc = 0x2cc804u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2cc808: 0x8fa80170  lw          $t0, 0x170($sp)
    ctx->pc = 0x2cc808u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2cc80c: 0x8fa90160  lw          $t1, 0x160($sp)
    ctx->pc = 0x2cc80cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2cc810: 0xc0b316c  jal         func_2CC5B0
    ctx->pc = 0x2CC810u;
    SET_GPR_U32(ctx, 31, 0x2CC818u);
    ctx->pc = 0x2CC5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC5B0u, 0x2CC810u, 0x2CC818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC818u;
label_2cc818:
    // 0x2cc818: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2cc818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2cc81c: 0xc040e70  jal         func_1039C0
    ctx->pc = 0x2CC81Cu;
    SET_GPR_U32(ctx, 31, 0x2CC824u);
    ctx->pc = 0x1039C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039C0u, 0x2CC81Cu, 0x2CC824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC824u;
label_2cc824:
    // 0x2cc824: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CC824u;
    {
        const bool branch_taken_0x2cc824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc824) {
            ctx->pc = 0x2CC85Cu;
            goto label_2cc85c;
        }
    }
    ctx->pc = 0x2CC82Cu;
    // 0x2cc82c: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x2cc82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
    // 0x2cc830: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2cc830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2cc834: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cc834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc838: 0xc048004  jal         func_120010
    ctx->pc = 0x2CC838u;
    SET_GPR_U32(ctx, 31, 0x2CC840u);
    ctx->pc = 0x120010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120010u, 0x2CC838u, 0x2CC840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC840u;
label_2cc840:
    // 0x2cc840: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2cc840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2cc844: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cc844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc848: 0xc0420a0  jal         func_108280
    ctx->pc = 0x2CC848u;
    SET_GPR_U32(ctx, 31, 0x2CC850u);
    ctx->pc = 0x108280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108280u, 0x2CC848u, 0x2CC850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC850u;
label_2cc850:
    // 0x2cc850: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x2cc850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x2cc854: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x2CC854u;
    {
        const bool branch_taken_0x2cc854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc854) {
            ctx->pc = 0x2CCCD0u;
            goto label_2cccd0;
        }
    }
    ctx->pc = 0x2CC85Cu;
label_2cc85c:
    // 0x2cc85c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2cc85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2cc860: 0xc0411f0  jal         func_1047C0
    ctx->pc = 0x2CC860u;
    SET_GPR_U32(ctx, 31, 0x2CC868u);
    ctx->pc = 0x1047C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047C0u, 0x2CC860u, 0x2CC868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC868u;
label_2cc868:
    // 0x2cc868: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2cc868u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc86c: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x2CC86Cu;
    SET_GPR_U32(ctx, 31, 0x2CC874u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2CC86Cu, 0x2CC874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC874u;
label_2cc874:
    // 0x2cc874: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x2cc874u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2cc878: 0x8010  mfhi        $s0
    ctx->pc = 0x2cc878u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x2cc87c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cc87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc880: 0x1662002b  bne         $s3, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2CC880u;
    {
        const bool branch_taken_0x2cc880 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cc880) {
            ctx->pc = 0x2CC930u;
            goto label_2cc930;
        }
    }
    ctx->pc = 0x2CC888u;
    // 0x2cc888: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2cc888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2cc88c: 0xc096a18  jal         func_25A860
    ctx->pc = 0x2CC88Cu;
    SET_GPR_U32(ctx, 31, 0x2CC894u);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2CC88Cu, 0x2CC894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC894u;
label_2cc894:
    // 0x2cc894: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cc894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc898: 0xc0970c0  jal         func_25C300
    ctx->pc = 0x2CC898u;
    SET_GPR_U32(ctx, 31, 0x2CC8A0u);
    ctx->pc = 0x25C300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C300u, 0x2CC898u, 0x2CC8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC8A0u;
label_2cc8a0:
    // 0x2cc8a0: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x2cc8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x2cc8a4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2cc8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2cc8a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cc8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc8ac: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x2CC8ACu;
    SET_GPR_U32(ctx, 31, 0x2CC8B4u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x2CC8ACu, 0x2CC8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC8B4u;
label_2cc8b4:
    // 0x2cc8b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cc8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc8b8: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x2cc8b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2cc8bc: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CC8BCu;
    {
        const bool branch_taken_0x2cc8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cc8bc) {
            ctx->pc = 0x2CC900u;
            goto label_2cc900;
        }
    }
    ctx->pc = 0x2CC8C4u;
    // 0x2cc8c4: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2cc8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2cc8c8: 0xc096a18  jal         func_25A860
    ctx->pc = 0x2CC8C8u;
    SET_GPR_U32(ctx, 31, 0x2CC8D0u);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2CC8C8u, 0x2CC8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC8D0u;
label_2cc8d0:
    // 0x2cc8d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cc8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc8d4: 0xc0970c8  jal         func_25C320
    ctx->pc = 0x2CC8D4u;
    SET_GPR_U32(ctx, 31, 0x2CC8DCu);
    ctx->pc = 0x25C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C320u, 0x2CC8D4u, 0x2CC8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC8DCu;
label_2cc8dc:
    // 0x2cc8dc: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2cc8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x2cc8e0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2cc8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2cc8e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cc8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc8e8: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x2CC8E8u;
    SET_GPR_U32(ctx, 31, 0x2CC8F0u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x2CC8E8u, 0x2CC8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC8F0u;
label_2cc8f0:
    // 0x2cc8f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cc8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc8f4: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x2cc8f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2cc8f8: 0x14430035  bne         $v0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2CC8F8u;
    {
        const bool branch_taken_0x2cc8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cc8f8) {
            ctx->pc = 0x2CC9D0u;
            goto label_2cc9d0;
        }
    }
    ctx->pc = 0x2CC900u;
label_2cc900:
    // 0x2cc900: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x2cc900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
    // 0x2cc904: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2cc904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2cc908: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cc908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc90c: 0xc048004  jal         func_120010
    ctx->pc = 0x2CC90Cu;
    SET_GPR_U32(ctx, 31, 0x2CC914u);
    ctx->pc = 0x120010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120010u, 0x2CC90Cu, 0x2CC914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC914u;
label_2cc914:
    // 0x2cc914: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2cc914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2cc918: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cc918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc91c: 0xc0420a0  jal         func_108280
    ctx->pc = 0x2CC91Cu;
    SET_GPR_U32(ctx, 31, 0x2CC924u);
    ctx->pc = 0x108280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108280u, 0x2CC91Cu, 0x2CC924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC924u;
label_2cc924:
    // 0x2cc924: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2cc924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2cc928: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x2CC928u;
    {
        const bool branch_taken_0x2cc928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc928) {
            ctx->pc = 0x2CCCD0u;
            goto label_2cccd0;
        }
    }
    ctx->pc = 0x2CC930u;
label_2cc930:
    // 0x2cc930: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2cc930u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc934: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CC934u;
    {
        const bool branch_taken_0x2cc934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc934) {
            ctx->pc = 0x2CC94Cu;
            goto label_2cc94c;
        }
    }
    ctx->pc = 0x2CC93Cu;
label_2cc93c:
    // 0x2cc93c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2cc93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2cc940: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x2cc940u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2cc944: 0x8010  mfhi        $s0
    ctx->pc = 0x2cc944u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x2cc948: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2cc948u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_2cc94c:
    // 0x2cc94c: 0x2f3082b  sltu        $at, $s7, $s3
    ctx->pc = 0x2cc94cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2cc950: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x2CC950u;
    {
        const bool branch_taken_0x2cc950 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc950) {
            ctx->pc = 0x2CC9D0u;
            goto label_2cc9d0;
        }
    }
    ctx->pc = 0x2CC958u;
    // 0x2cc958: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2cc958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2cc95c: 0xc096a18  jal         func_25A860
    ctx->pc = 0x2CC95Cu;
    SET_GPR_U32(ctx, 31, 0x2CC964u);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2CC95Cu, 0x2CC964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC964u;
label_2cc964:
    // 0x2cc964: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cc964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc968: 0xc0970c0  jal         func_25C300
    ctx->pc = 0x2CC968u;
    SET_GPR_U32(ctx, 31, 0x2CC970u);
    ctx->pc = 0x25C300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C300u, 0x2CC968u, 0x2CC970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC970u;
label_2cc970:
    // 0x2cc970: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2cc970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x2cc974: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2cc974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2cc978: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cc978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc97c: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x2CC97Cu;
    SET_GPR_U32(ctx, 31, 0x2CC984u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x2CC97Cu, 0x2CC984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC984u;
label_2cc984:
    // 0x2cc984: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cc984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc988: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x2cc988u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2cc98c: 0x1043ffeb  beq         $v0, $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2CC98Cu;
    {
        const bool branch_taken_0x2cc98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cc98c) {
            ctx->pc = 0x2CC93Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cc93c;
        }
    }
    ctx->pc = 0x2CC994u;
    // 0x2cc994: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2cc994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2cc998: 0xc096a18  jal         func_25A860
    ctx->pc = 0x2CC998u;
    SET_GPR_U32(ctx, 31, 0x2CC9A0u);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2CC998u, 0x2CC9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC9A0u;
label_2cc9a0:
    // 0x2cc9a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cc9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc9a4: 0xc0970c8  jal         func_25C320
    ctx->pc = 0x2CC9A4u;
    SET_GPR_U32(ctx, 31, 0x2CC9ACu);
    ctx->pc = 0x25C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C320u, 0x2CC9A4u, 0x2CC9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC9ACu;
label_2cc9ac:
    // 0x2cc9ac: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2cc9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2cc9b0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2cc9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2cc9b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cc9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc9b8: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x2CC9B8u;
    SET_GPR_U32(ctx, 31, 0x2CC9C0u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x2CC9B8u, 0x2CC9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC9C0u;
label_2cc9c0:
    // 0x2cc9c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cc9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc9c4: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x2cc9c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2cc9c8: 0x1043ffdc  beq         $v0, $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2CC9C8u;
    {
        const bool branch_taken_0x2cc9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cc9c8) {
            ctx->pc = 0x2CC93Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cc93c;
        }
    }
    ctx->pc = 0x2CC9D0u;
label_2cc9d0:
    // 0x2cc9d0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2cc9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2cc9d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cc9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc9d8: 0xc09748c  jal         func_25D230
    ctx->pc = 0x2CC9D8u;
    SET_GPR_U32(ctx, 31, 0x2CC9E0u);
    ctx->pc = 0x25D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D230u, 0x2CC9D8u, 0x2CC9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC9E0u;
label_2cc9e0:
    // 0x2cc9e0: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2cc9e0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc9e4: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x2cc9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2cc9e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cc9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cc9ec: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2CC9ECu;
    {
        const bool branch_taken_0x2cc9ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cc9ec) {
            ctx->pc = 0x2CCA6Cu;
            goto label_2cca6c;
        }
    }
    ctx->pc = 0x2CC9F4u;
    // 0x2cc9f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cc9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc9f8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2cc9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2cc9fc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2CC9FCu;
    SET_GPR_U32(ctx, 31, 0x2CCA04u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CC9FCu, 0x2CCA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA04u;
label_2cca04:
    // 0x2cca04: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x2cca04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x2cca08: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2cca08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca0c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2CCA0Cu;
    {
        const bool branch_taken_0x2cca0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cca0c) {
            ctx->pc = 0x2CCA4Cu;
            goto label_2cca4c;
        }
    }
    ctx->pc = 0x2CCA14u;
label_2cca14:
    // 0x2cca14: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2cca14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2cca18: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x2cca18u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2cca1c: 0x8010  mfhi        $s0
    ctx->pc = 0x2cca1cu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x2cca20: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2cca20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2cca24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cca24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca28: 0xc09748c  jal         func_25D230
    ctx->pc = 0x2CCA28u;
    SET_GPR_U32(ctx, 31, 0x2CCA30u);
    ctx->pc = 0x25D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D230u, 0x2CCA28u, 0x2CCA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA30u;
label_2cca30:
    // 0x2cca30: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2cca30u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cca34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cca34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca38: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2cca38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2cca3c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2CCA3Cu;
    SET_GPR_U32(ctx, 31, 0x2CCA44u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CCA3Cu, 0x2CCA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA44u;
label_2cca44:
    // 0x2cca44: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x2cca44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x2cca48: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2cca48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2cca4c:
    // 0x2cca4c: 0x2d3082b  sltu        $at, $s6, $s3
    ctx->pc = 0x2cca4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2cca50: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CCA50u;
    {
        const bool branch_taken_0x2cca50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cca50) {
            ctx->pc = 0x2CCA6Cu;
            goto label_2cca6c;
        }
    }
    ctx->pc = 0x2CCA58u;
    // 0x2cca58: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2cca58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2cca5c: 0xc0976e4  jal         func_25DB90
    ctx->pc = 0x2CCA5Cu;
    SET_GPR_U32(ctx, 31, 0x2CCA64u);
    ctx->pc = 0x25DB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DB90u, 0x2CCA5Cu, 0x2CCA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA64u;
label_2cca64:
    // 0x2cca64: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2CCA64u;
    {
        const bool branch_taken_0x2cca64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cca64) {
            ctx->pc = 0x2CCA14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cca14;
        }
    }
    ctx->pc = 0x2CCA6Cu;
label_2cca6c:
    // 0x2cca6c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2cca6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2cca70: 0xc096d7c  jal         func_25B5F0
    ctx->pc = 0x2CCA70u;
    SET_GPR_U32(ctx, 31, 0x2CCA78u);
    ctx->pc = 0x25B5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B5F0u, 0x2CCA70u, 0x2CCA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA78u;
label_2cca78:
    // 0x2cca78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cca78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cca7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca80: 0xc096d94  jal         func_25B650
    ctx->pc = 0x2CCA80u;
    SET_GPR_U32(ctx, 31, 0x2CCA88u);
    ctx->pc = 0x25B650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B650u, 0x2CCA80u, 0x2CCA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA88u;
label_2cca88:
    // 0x2cca88: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x2CCA88u;
    {
        const bool branch_taken_0x2cca88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cca88) {
            ctx->pc = 0x2CCC2Cu;
            goto label_2ccc2c;
        }
    }
    ctx->pc = 0x2CCA90u;
    // 0x2cca90: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2cca90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2cca94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cca94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca98: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x2CCA98u;
    SET_GPR_U32(ctx, 31, 0x2CCAA0u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x2CCA98u, 0x2CCAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCAA0u;
label_2ccaa0:
    // 0x2ccaa0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ccaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ccaa4: 0xc096e08  jal         func_25B820
    ctx->pc = 0x2CCAA4u;
    SET_GPR_U32(ctx, 31, 0x2CCAACu);
    ctx->pc = 0x25B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B820u, 0x2CCAA4u, 0x2CCAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCAACu;
label_2ccaac:
    // 0x2ccaac: 0xa3a2013f  sb          $v0, 0x13F($sp)
    ctx->pc = 0x2ccaacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 319), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ccab0: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2ccab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2ccab4: 0xc096a18  jal         func_25A860
    ctx->pc = 0x2CCAB4u;
    SET_GPR_U32(ctx, 31, 0x2CCABCu);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2CCAB4u, 0x2CCABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCABCu;
label_2ccabc:
    // 0x2ccabc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ccabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccac0: 0xc0970c0  jal         func_25C300
    ctx->pc = 0x2CCAC0u;
    SET_GPR_U32(ctx, 31, 0x2CCAC8u);
    ctx->pc = 0x25C300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C300u, 0x2CCAC0u, 0x2CCAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCAC8u;
label_2ccac8:
    // 0x2ccac8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2ccac8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccacc: 0x13c00015  beqz        $fp, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CCACCu;
    {
        const bool branch_taken_0x2ccacc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccacc) {
            ctx->pc = 0x2CCB24u;
            goto label_2ccb24;
        }
    }
    ctx->pc = 0x2CCAD4u;
    // 0x2ccad4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2ccad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccad8: 0xc096e08  jal         func_25B820
    ctx->pc = 0x2CCAD8u;
    SET_GPR_U32(ctx, 31, 0x2CCAE0u);
    ctx->pc = 0x25B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B820u, 0x2CCAD8u, 0x2CCAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCAE0u;
label_2ccae0:
    // 0x2ccae0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CCAE0u;
    {
        const bool branch_taken_0x2ccae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccae0) {
            ctx->pc = 0x2CCB24u;
            goto label_2ccb24;
        }
    }
    ctx->pc = 0x2CCAE8u;
    // 0x2ccae8: 0x93a2013f  lbu         $v0, 0x13F($sp)
    ctx->pc = 0x2ccae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 319)));
    // 0x2ccaec: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CCAECu;
    {
        const bool branch_taken_0x2ccaec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ccaec) {
            ctx->pc = 0x2CCB24u;
            goto label_2ccb24;
        }
    }
    ctx->pc = 0x2CCAF4u;
    // 0x2ccaf4: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x2ccaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
    // 0x2ccaf8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2ccaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2ccafc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2ccafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ccb00: 0xc048004  jal         func_120010
    ctx->pc = 0x2CCB00u;
    SET_GPR_U32(ctx, 31, 0x2CCB08u);
    ctx->pc = 0x120010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120010u, 0x2CCB00u, 0x2CCB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB08u;
label_2ccb08:
    // 0x2ccb08: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2ccb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2ccb0c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2ccb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ccb10: 0xc0420a0  jal         func_108280
    ctx->pc = 0x2CCB10u;
    SET_GPR_U32(ctx, 31, 0x2CCB18u);
    ctx->pc = 0x108280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108280u, 0x2CCB10u, 0x2CCB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB18u;
label_2ccb18:
    // 0x2ccb18: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x2ccb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2ccb1c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2CCB1Cu;
    {
        const bool branch_taken_0x2ccb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccb1c) {
            ctx->pc = 0x2CCCD0u;
            goto label_2cccd0;
        }
    }
    ctx->pc = 0x2CCB24u;
label_2ccb24:
    // 0x2ccb24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ccb24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccb28: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2CCB28u;
    {
        const bool branch_taken_0x2ccb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccb28) {
            ctx->pc = 0x2CCBF8u;
            goto label_2ccbf8;
        }
    }
    ctx->pc = 0x2CCB30u;
label_2ccb30:
    // 0x2ccb30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ccb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccb34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ccb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccb38: 0xc0966fc  jal         func_259BF0
    ctx->pc = 0x2CCB38u;
    SET_GPR_U32(ctx, 31, 0x2CCB40u);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x2CCB38u, 0x2CCB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB40u;
label_2ccb40:
    // 0x2ccb40: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x2ccb40u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ccb44: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2ccb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2ccb48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ccb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ccb4c: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2CCB4Cu;
    {
        const bool branch_taken_0x2ccb4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ccb4c) {
            ctx->pc = 0x2CCB8Cu;
            goto label_2ccb8c;
        }
    }
    ctx->pc = 0x2CCB54u;
    // 0x2ccb54: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2ccb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ccb58: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x2ccb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x2ccb5c: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x2ccb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x2ccb60: 0xc096e08  jal         func_25B820
    ctx->pc = 0x2CCB60u;
    SET_GPR_U32(ctx, 31, 0x2CCB68u);
    ctx->pc = 0x25B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B820u, 0x2CCB60u, 0x2CCB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB68u;
label_2ccb68:
    // 0x2ccb68: 0xa3a2013e  sb          $v0, 0x13E($sp)
    ctx->pc = 0x2ccb68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 318), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ccb6c: 0x93a2013e  lbu         $v0, 0x13E($sp)
    ctx->pc = 0x2ccb6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 318)));
    // 0x2ccb70: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CCB70u;
    {
        const bool branch_taken_0x2ccb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccb70) {
            ctx->pc = 0x2CCB8Cu;
            goto label_2ccb8c;
        }
    }
    ctx->pc = 0x2CCB78u;
    // 0x2ccb78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ccb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccb7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ccb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccb80: 0xc0966fc  jal         func_259BF0
    ctx->pc = 0x2CCB80u;
    SET_GPR_U32(ctx, 31, 0x2CCB88u);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x2CCB80u, 0x2CCB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB88u;
label_2ccb88:
    // 0x2ccb88: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x2ccb88u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ccb8c:
    // 0x2ccb8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ccb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccb90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ccb90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccb94: 0xc0966fc  jal         func_259BF0
    ctx->pc = 0x2CCB94u;
    SET_GPR_U32(ctx, 31, 0x2CCB9Cu);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x2CCB94u, 0x2CCB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB9Cu;
label_2ccb9c:
    // 0x2ccb9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ccb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ccba0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2CCBA0u;
    {
        const bool branch_taken_0x2ccba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccba0) {
            ctx->pc = 0x2CCBF4u;
            goto label_2ccbf4;
        }
    }
    ctx->pc = 0x2CCBA8u;
    // 0x2ccba8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ccba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccbac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ccbacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccbb0: 0xc0966fc  jal         func_259BF0
    ctx->pc = 0x2CCBB0u;
    SET_GPR_U32(ctx, 31, 0x2CCBB8u);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x2CCBB0u, 0x2CCBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCBB8u;
label_2ccbb8:
    // 0x2ccbb8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ccbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ccbbc: 0xc0966f4  jal         func_259BD0
    ctx->pc = 0x2CCBBCu;
    SET_GPR_U32(ctx, 31, 0x2CCBC4u);
    ctx->pc = 0x259BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BD0u, 0x2CCBBCu, 0x2CCBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCBC4u;
label_2ccbc4:
    // 0x2ccbc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ccbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccbc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ccbc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccbcc: 0xc0966fc  jal         func_259BF0
    ctx->pc = 0x2CCBCCu;
    SET_GPR_U32(ctx, 31, 0x2CCBD4u);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x2CCBCCu, 0x2CCBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCBD4u;
label_2ccbd4:
    // 0x2ccbd4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ccbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ccbd8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2CCBD8u;
    SET_GPR_U32(ctx, 31, 0x2CCBE0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2CCBD8u, 0x2CCBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCBE0u;
label_2ccbe0:
    // 0x2ccbe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ccbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccbe4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ccbe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccbe8: 0xc0966fc  jal         func_259BF0
    ctx->pc = 0x2CCBE8u;
    SET_GPR_U32(ctx, 31, 0x2CCBF0u);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x2CCBE8u, 0x2CCBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCBF0u;
label_2ccbf0:
    // 0x2ccbf0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2ccbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2ccbf4:
    // 0x2ccbf4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ccbf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2ccbf8:
    // 0x2ccbf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ccbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccbfc: 0xc0966e4  jal         func_259B90
    ctx->pc = 0x2CCBFCu;
    SET_GPR_U32(ctx, 31, 0x2CCC04u);
    ctx->pc = 0x259B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259B90u, 0x2CCBFCu, 0x2CCC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCC04u;
label_2ccc04:
    // 0x2ccc04: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2ccc04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ccc08: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x2CCC08u;
    {
        const bool branch_taken_0x2ccc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ccc08) {
            ctx->pc = 0x2CCB30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ccb30;
        }
    }
    ctx->pc = 0x2CCC10u;
    // 0x2ccc10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ccc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccc14: 0xc096384  jal         func_258E10
    ctx->pc = 0x2CCC14u;
    SET_GPR_U32(ctx, 31, 0x2CCC1Cu);
    ctx->pc = 0x258E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E10u, 0x2CCC14u, 0x2CCC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCC1Cu;
label_2ccc1c:
    // 0x2ccc1c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2ccc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2ccc20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ccc20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccc24: 0xc096f9c  jal         func_25BE70
    ctx->pc = 0x2CCC24u;
    SET_GPR_U32(ctx, 31, 0x2CCC2Cu);
    ctx->pc = 0x25BE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BE70u, 0x2CCC24u, 0x2CCC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCC2Cu;
label_2ccc2c:
    // 0x2ccc2c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2ccc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2ccc30: 0xc096a18  jal         func_25A860
    ctx->pc = 0x2CCC30u;
    SET_GPR_U32(ctx, 31, 0x2CCC38u);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2CCC30u, 0x2CCC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCC38u;
label_2ccc38:
    // 0x2ccc38: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2ccc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2ccc3c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2ccc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2ccc40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ccc40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccc44: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x2CCC44u;
    SET_GPR_U32(ctx, 31, 0x2CCC4Cu);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x2CCC44u, 0x2CCC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCC4Cu;
label_2ccc4c:
    // 0x2ccc4c: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x2ccc4cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ccc50: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2ccc50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ccc54: 0xc0970b4  jal         func_25C2D0
    ctx->pc = 0x2CCC54u;
    SET_GPR_U32(ctx, 31, 0x2CCC5Cu);
    ctx->pc = 0x25C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C2D0u, 0x2CCC54u, 0x2CCC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCC5Cu;
label_2ccc5c:
    // 0x2ccc5c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2ccc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2ccc60: 0xc096a18  jal         func_25A860
    ctx->pc = 0x2CCC60u;
    SET_GPR_U32(ctx, 31, 0x2CCC68u);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2CCC60u, 0x2CCC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCC68u;
label_2ccc68:
    // 0x2ccc68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ccc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccc6c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ccc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccc70: 0xc097064  jal         func_25C190
    ctx->pc = 0x2CCC70u;
    SET_GPR_U32(ctx, 31, 0x2CCC78u);
    ctx->pc = 0x25C190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C190u, 0x2CCC70u, 0x2CCC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCC78u;
label_2ccc78:
    // 0x2ccc78: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2ccc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2ccc7c: 0xc096a18  jal         func_25A860
    ctx->pc = 0x2CCC7Cu;
    SET_GPR_U32(ctx, 31, 0x2CCC84u);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2CCC7Cu, 0x2CCC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCC84u;
label_2ccc84:
    // 0x2ccc84: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2ccc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2ccc88: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2ccc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2ccc8c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2ccc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2ccc90: 0xc0858ac  jal         func_2162B0
    ctx->pc = 0x2CCC90u;
    SET_GPR_U32(ctx, 31, 0x2CCC98u);
    ctx->pc = 0x2162B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2162B0u, 0x2CCC90u, 0x2CCC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCC98u;
label_2ccc98:
    // 0x2ccc98: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x2ccc98u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ccc9c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ccc9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ccca0: 0xc09708c  jal         func_25C230
    ctx->pc = 0x2CCCA0u;
    SET_GPR_U32(ctx, 31, 0x2CCCA8u);
    ctx->pc = 0x25C230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C230u, 0x2CCCA0u, 0x2CCCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCCA8u;
label_2ccca8:
    // 0x2ccca8: 0xafb40120  sw          $s4, 0x120($sp)
    ctx->pc = 0x2ccca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 20));
    // 0x2cccac: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2cccacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2cccb0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cccb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cccb4: 0xc048004  jal         func_120010
    ctx->pc = 0x2CCCB4u;
    SET_GPR_U32(ctx, 31, 0x2CCCBCu);
    ctx->pc = 0x120010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120010u, 0x2CCCB4u, 0x2CCCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCCBCu;
label_2cccbc:
    // 0x2cccbc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2cccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2cccc0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cccc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cccc4: 0xc0420a0  jal         func_108280
    ctx->pc = 0x2CCCC4u;
    SET_GPR_U32(ctx, 31, 0x2CCCCCu);
    ctx->pc = 0x108280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108280u, 0x2CCCC4u, 0x2CCCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCCCCu;
label_2ccccc:
    // 0x2ccccc: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x2cccccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_2cccd0:
    // 0x2cccd0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2cccd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2cccd4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2cccd4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2cccd8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2cccd8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cccdc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2cccdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ccce0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ccce0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ccce4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ccce4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ccce8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ccce8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cccec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cccecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cccf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cccf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cccf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cccf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cccf8: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x2cccf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2cccfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CCD04u;
    // 0x2ccd04: 0x0  nop
    ctx->pc = 0x2ccd04u;
    // NOP
    // 0x2ccd08: 0x0  nop
    ctx->pc = 0x2ccd08u;
    // NOP
    // 0x2ccd0c: 0x0  nop
    ctx->pc = 0x2ccd0cu;
    // NOP
    ctx->pc = 0x2ccd10u;
}
