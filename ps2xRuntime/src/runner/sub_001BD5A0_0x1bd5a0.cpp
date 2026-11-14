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

// Function: sub_001BD5A0
// Address: 0x1bd5a0 - 0x1be3c0
void sub_001BD5A0_0x1bd5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD5A0_0x1bd5a0");
#endif

    switch (ctx->pc) {
        case 0x1bd5e8u: goto label_1bd5e8;
        case 0x1bd5f8u: goto label_1bd5f8;
        case 0x1bd604u: goto label_1bd604;
        case 0x1bd610u: goto label_1bd610;
        case 0x1bd620u: goto label_1bd620;
        case 0x1bd640u: goto label_1bd640;
        case 0x1bd65cu: goto label_1bd65c;
        case 0x1bd67cu: goto label_1bd67c;
        case 0x1bd69cu: goto label_1bd69c;
        case 0x1bd6b0u: goto label_1bd6b0;
        case 0x1bd6c8u: goto label_1bd6c8;
        case 0x1bd6ecu: goto label_1bd6ec;
        case 0x1bd700u: goto label_1bd700;
        case 0x1bd710u: goto label_1bd710;
        case 0x1bd76cu: goto label_1bd76c;
        case 0x1bd788u: goto label_1bd788;
        case 0x1bd7dcu: goto label_1bd7dc;
        case 0x1bd7fcu: goto label_1bd7fc;
        case 0x1bd83cu: goto label_1bd83c;
        case 0x1bd848u: goto label_1bd848;
        case 0x1bd858u: goto label_1bd858;
        case 0x1bd88cu: goto label_1bd88c;
        case 0x1bd898u: goto label_1bd898;
        case 0x1bd8acu: goto label_1bd8ac;
        case 0x1bd8c4u: goto label_1bd8c4;
        case 0x1bd8d8u: goto label_1bd8d8;
        case 0x1bd8ecu: goto label_1bd8ec;
        case 0x1bd904u: goto label_1bd904;
        case 0x1bd928u: goto label_1bd928;
        case 0x1bd938u: goto label_1bd938;
        case 0x1bd950u: goto label_1bd950;
        case 0x1bd974u: goto label_1bd974;
        case 0x1bd9acu: goto label_1bd9ac;
        case 0x1bd9c8u: goto label_1bd9c8;
        case 0x1bda00u: goto label_1bda00;
        case 0x1bda14u: goto label_1bda14;
        case 0x1bda64u: goto label_1bda64;
        case 0x1bda9cu: goto label_1bda9c;
        case 0x1bdac8u: goto label_1bdac8;
        case 0x1bdaf0u: goto label_1bdaf0;
        case 0x1bdb08u: goto label_1bdb08;
        case 0x1bdb38u: goto label_1bdb38;
        case 0x1bdb44u: goto label_1bdb44;
        case 0x1bdb58u: goto label_1bdb58;
        case 0x1bdb78u: goto label_1bdb78;
        case 0x1bdb88u: goto label_1bdb88;
        case 0x1bdb98u: goto label_1bdb98;
        case 0x1bdbacu: goto label_1bdbac;
        case 0x1bdbc8u: goto label_1bdbc8;
        case 0x1bdbd8u: goto label_1bdbd8;
        case 0x1bdbf0u: goto label_1bdbf0;
        case 0x1bdc04u: goto label_1bdc04;
        case 0x1bdc54u: goto label_1bdc54;
        case 0x1bdc8cu: goto label_1bdc8c;
        case 0x1bdcb8u: goto label_1bdcb8;
        case 0x1bdcd4u: goto label_1bdcd4;
        case 0x1bdcecu: goto label_1bdcec;
        case 0x1bdd38u: goto label_1bdd38;
        case 0x1bdd54u: goto label_1bdd54;
        case 0x1bdd78u: goto label_1bdd78;
        case 0x1bdd98u: goto label_1bdd98;
        case 0x1bddb8u: goto label_1bddb8;
        case 0x1bde04u: goto label_1bde04;
        case 0x1bde20u: goto label_1bde20;
        case 0x1bde40u: goto label_1bde40;
        case 0x1bde4cu: goto label_1bde4c;
        case 0x1bde60u: goto label_1bde60;
        case 0x1bde7cu: goto label_1bde7c;
        case 0x1bde90u: goto label_1bde90;
        case 0x1bdea0u: goto label_1bdea0;
        case 0x1bdeb8u: goto label_1bdeb8;
        case 0x1bdeccu: goto label_1bdecc;
        case 0x1bdee8u: goto label_1bdee8;
        case 0x1bdf10u: goto label_1bdf10;
        case 0x1bdf20u: goto label_1bdf20;
        case 0x1bdf44u: goto label_1bdf44;
        case 0x1bdf64u: goto label_1bdf64;
        case 0x1bdf7cu: goto label_1bdf7c;
        case 0x1bdfc0u: goto label_1bdfc0;
        case 0x1bdfe0u: goto label_1bdfe0;
        case 0x1bdffcu: goto label_1bdffc;
        case 0x1be008u: goto label_1be008;
        case 0x1be01cu: goto label_1be01c;
        case 0x1be038u: goto label_1be038;
        case 0x1be048u: goto label_1be048;
        case 0x1be058u: goto label_1be058;
        case 0x1be074u: goto label_1be074;
        case 0x1be084u: goto label_1be084;
        case 0x1be0a4u: goto label_1be0a4;
        case 0x1be0b8u: goto label_1be0b8;
        case 0x1be0d0u: goto label_1be0d0;
        case 0x1be0f4u: goto label_1be0f4;
        case 0x1be104u: goto label_1be104;
        case 0x1be118u: goto label_1be118;
        case 0x1be12cu: goto label_1be12c;
        case 0x1be140u: goto label_1be140;
        case 0x1be150u: goto label_1be150;
        case 0x1be160u: goto label_1be160;
        case 0x1be170u: goto label_1be170;
        case 0x1be18cu: goto label_1be18c;
        case 0x1be1acu: goto label_1be1ac;
        case 0x1be1dcu: goto label_1be1dc;
        case 0x1be1ecu: goto label_1be1ec;
        case 0x1be1f4u: goto label_1be1f4;
        case 0x1be264u: goto label_1be264;
        case 0x1be284u: goto label_1be284;
        case 0x1be2c8u: goto label_1be2c8;
        case 0x1be2f0u: goto label_1be2f0;
        case 0x1be310u: goto label_1be310;
        case 0x1be338u: goto label_1be338;
        case 0x1be350u: goto label_1be350;
        case 0x1be368u: goto label_1be368;
        case 0x1be37cu: goto label_1be37c;
        default: break;
    }

    ctx->pc = 0x1bd5a0u;

    // 0x1bd5a0: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x1bd5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x1bd5a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1bd5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1bd5a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1bd5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1bd5ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1bd5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1bd5b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bd5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1bd5b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bd5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bd5b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bd5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bd5bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bd5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bd5c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bd5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bd5c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bd5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bd5c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bd5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bd5cc: 0xafa402a0  sw          $a0, 0x2A0($sp)
    ctx->pc = 0x1bd5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 4));
    // 0x1bd5d0: 0xafa502b0  sw          $a1, 0x2B0($sp)
    ctx->pc = 0x1bd5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 5));
    // 0x1bd5d4: 0xa3a0029f  sb          $zero, 0x29F($sp)
    ctx->pc = 0x1bd5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 671), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd5d8: 0xafa00298  sw          $zero, 0x298($sp)
    ctx->pc = 0x1bd5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 0));
    // 0x1bd5dc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1bd5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1bd5e0: 0xc06e5a4  jal         func_1B9690
    ctx->pc = 0x1BD5E0u;
    SET_GPR_U32(ctx, 31, 0x1BD5E8u);
    ctx->pc = 0x1B9690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9690u, 0x1BD5E0u, 0x1BD5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD5E8u;
label_1bd5e8:
    // 0x1bd5e8: 0xafa00294  sw          $zero, 0x294($sp)
    ctx->pc = 0x1bd5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 0));
    // 0x1bd5ec: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x1bd5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x1bd5f0: 0xc056254  jal         func_158950
    ctx->pc = 0x1BD5F0u;
    SET_GPR_U32(ctx, 31, 0x1BD5F8u);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1BD5F0u, 0x1BD5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD5F8u;
label_1bd5f8:
    // 0x1bd5f8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1bd5f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd5fc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1BD5FCu;
    {
        const bool branch_taken_0x1bd5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd5fc) {
            ctx->pc = 0x1BD6A0u;
            goto label_1bd6a0;
        }
    }
    ctx->pc = 0x1BD604u;
label_1bd604:
    // 0x1bd604: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x1bd604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x1bd608: 0xc056144  jal         func_158510
    ctx->pc = 0x1BD608u;
    SET_GPR_U32(ctx, 31, 0x1BD610u);
    ctx->pc = 0x158510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158510u, 0x1BD608u, 0x1BD610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD610u;
label_1bd610:
    // 0x1bd610: 0xafa20290  sw          $v0, 0x290($sp)
    ctx->pc = 0x1bd610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 2));
    // 0x1bd614: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x1bd614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x1bd618: 0xc05613c  jal         func_1584F0
    ctx->pc = 0x1BD618u;
    SET_GPR_U32(ctx, 31, 0x1BD620u);
    ctx->pc = 0x1584F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584F0u, 0x1BD618u, 0x1BD620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD620u;
label_1bd620:
    // 0x1bd620: 0xafa2028c  sw          $v0, 0x28C($sp)
    ctx->pc = 0x1bd620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 2));
    // 0x1bd624: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x1bd624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1bd628: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x1bd628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x1bd62c: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x1bd62cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1bd630: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1bd630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1bd634: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1bd634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd638: 0xc06ef08  jal         func_1BBC20
    ctx->pc = 0x1BD638u;
    SET_GPR_U32(ctx, 31, 0x1BD640u);
    ctx->pc = 0x1BBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC20u, 0x1BD638u, 0x1BD640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD640u;
label_1bd640:
    // 0x1bd640: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x1bd640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1bd644: 0x8fa5028c  lw          $a1, 0x28C($sp)
    ctx->pc = 0x1bd644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x1bd648: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1bd648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1bd64c: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1bd64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x1bd650: 0x7ba60120  lq          $a2, 0x120($sp)
    ctx->pc = 0x1bd650u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1bd654: 0xc070e58  jal         func_1C3960
    ctx->pc = 0x1BD654u;
    SET_GPR_U32(ctx, 31, 0x1BD65Cu);
    ctx->pc = 0x1C3960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3960u, 0x1BD654u, 0x1BD65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD65Cu;
label_1bd65c:
    // 0x1bd65c: 0x8fa3028c  lw          $v1, 0x28C($sp)
    ctx->pc = 0x1bd65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x1bd660: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1BD660u;
    {
        const bool branch_taken_0x1bd660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bd660) {
            ctx->pc = 0x1BD69Cu;
            goto label_1bd69c;
        }
    }
    ctx->pc = 0x1BD668u;
    // 0x1bd668: 0x8fb002b0  lw          $s0, 0x2B0($sp)
    ctx->pc = 0x1bd668u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1bd66c: 0x260400e8  addiu       $a0, $s0, 0xE8
    ctx->pc = 0x1bd66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
    // 0x1bd670: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1bd670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd674: 0xc06ef08  jal         func_1BBC20
    ctx->pc = 0x1BD674u;
    SET_GPR_U32(ctx, 31, 0x1BD67Cu);
    ctx->pc = 0x1BBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC20u, 0x1BD674u, 0x1BD67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD67Cu;
label_1bd67c:
    // 0x1bd67c: 0x80510003  lb          $s1, 0x3($v0)
    ctx->pc = 0x1bd67cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1bd680: 0x11163c  dsll32      $v0, $s1, 24
    ctx->pc = 0x1bd680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 24));
    // 0x1bd684: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1bd684u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1bd688: 0xafa20288  sw          $v0, 0x288($sp)
    ctx->pc = 0x1bd688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 2));
    // 0x1bd68c: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x1bd68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x1bd690: 0x27a50288  addiu       $a1, $sp, 0x288
    ctx->pc = 0x1bd690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
    // 0x1bd694: 0xc05614c  jal         func_158530
    ctx->pc = 0x1BD694u;
    SET_GPR_U32(ctx, 31, 0x1BD69Cu);
    ctx->pc = 0x158530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158530u, 0x1BD694u, 0x1BD69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD69Cu;
label_1bd69c:
    // 0x1bd69c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1bd69cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1bd6a0:
    // 0x1bd6a0: 0x8fa402b0  lw          $a0, 0x2B0($sp)
    ctx->pc = 0x1bd6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1bd6a4: 0x248400e8  addiu       $a0, $a0, 0xE8
    ctx->pc = 0x1bd6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x1bd6a8: 0xc06ef24  jal         func_1BBC90
    ctx->pc = 0x1BD6A8u;
    SET_GPR_U32(ctx, 31, 0x1BD6B0u);
    ctx->pc = 0x1BBC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC90u, 0x1BD6A8u, 0x1BD6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD6B0u;
label_1bd6b0:
    // 0x1bd6b0: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x1bd6b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bd6b4: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1BD6B4u;
    {
        const bool branch_taken_0x1bd6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd6b4) {
            ctx->pc = 0x1BD604u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd604;
        }
    }
    ctx->pc = 0x1BD6BCu;
    // 0x1bd6bc: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x1bd6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x1bd6c0: 0xc05611c  jal         func_158470
    ctx->pc = 0x1BD6C0u;
    SET_GPR_U32(ctx, 31, 0x1BD6C8u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1BD6C0u, 0x1BD6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD6C8u;
label_1bd6c8:
    // 0x1bd6c8: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x1bd6c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bd6cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bd6ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd6d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bd6d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd6d4: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x1bd6d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bd6d8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1bd6d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd6dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bd6dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd6e0: 0x27a4027c  addiu       $a0, $sp, 0x27C
    ctx->pc = 0x1bd6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
    // 0x1bd6e4: 0xc06faa8  jal         func_1BEAA0
    ctx->pc = 0x1BD6E4u;
    SET_GPR_U32(ctx, 31, 0x1BD6ECu);
    ctx->pc = 0x1BEAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAA0u, 0x1BD6E4u, 0x1BD6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD6ECu;
label_1bd6ec:
    // 0x1bd6ec: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x1bd6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1bd6f0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1bd6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd6f4: 0x27a5027c  addiu       $a1, $sp, 0x27C
    ctx->pc = 0x1bd6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
    // 0x1bd6f8: 0xc06fa68  jal         func_1BE9A0
    ctx->pc = 0x1BD6F8u;
    SET_GPR_U32(ctx, 31, 0x1BD700u);
    ctx->pc = 0x1BE9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE9A0u, 0x1BD6F8u, 0x1BD700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD700u;
label_1bd700:
    // 0x1bd700: 0x27a4027c  addiu       $a0, $sp, 0x27C
    ctx->pc = 0x1bd700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
    // 0x1bd704: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1bd704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bd708: 0xc06fa54  jal         func_1BE950
    ctx->pc = 0x1BD708u;
    SET_GPR_U32(ctx, 31, 0x1BD710u);
    ctx->pc = 0x1BE950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE950u, 0x1BD708u, 0x1BD710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD710u;
label_1bd710:
    // 0x1bd710: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bd710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bd714: 0x8c45bef0  lw          $a1, -0x4110($v0)
    ctx->pc = 0x1bd714u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x60BEF0u));
    // 0x1bd718: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bd718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bd71c: 0x10a20263  beq         $a1, $v0, . + 4 + (0x263 << 2)
    ctx->pc = 0x1BD71Cu;
    {
        const bool branch_taken_0x1bd71c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd71c) {
            ctx->pc = 0x1BE0ACu;
            goto label_1be0ac;
        }
    }
    ctx->pc = 0x1BD724u;
    // 0x1bd724: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd728: 0x10a201f1  beq         $a1, $v0, . + 4 + (0x1F1 << 2)
    ctx->pc = 0x1BD728u;
    {
        const bool branch_taken_0x1bd728 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd728) {
            ctx->pc = 0x1BDEF0u;
            goto label_1bdef0;
        }
    }
    ctx->pc = 0x1BD730u;
    // 0x1bd730: 0x10a00178  beqz        $a1, . + 4 + (0x178 << 2)
    ctx->pc = 0x1BD730u;
    {
        const bool branch_taken_0x1bd730 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd730) {
            ctx->pc = 0x1BDD14u;
            goto label_1bdd14;
        }
    }
    ctx->pc = 0x1BD738u;
    // 0x1bd738: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1bd738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bd73c: 0x10a4002b  beq         $a1, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1BD73Cu;
    {
        const bool branch_taken_0x1bd73c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bd73c) {
            ctx->pc = 0x1BD7ECu;
            goto label_1bd7ec;
        }
    }
    ctx->pc = 0x1BD744u;
    // 0x1bd744: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bd744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bd748: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD748u;
    {
        const bool branch_taken_0x1bd748 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd748) {
            ctx->pc = 0x1BD758u;
            goto label_1bd758;
        }
    }
    ctx->pc = 0x1BD750u;
    // 0x1bd750: 0x1000028e  b           . + 4 + (0x28E << 2)
    ctx->pc = 0x1BD750u;
    {
        const bool branch_taken_0x1bd750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd750) {
            ctx->pc = 0x1BE18Cu;
            goto label_1be18c;
        }
    }
    ctx->pc = 0x1BD758u;
label_1bd758:
    // 0x1bd758: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bd758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bd75c: 0xa3a20143  sb          $v0, 0x143($sp)
    ctx->pc = 0x1bd75cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 323), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bd760: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x1bd760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x1bd764: 0xc05611c  jal         func_158470
    ctx->pc = 0x1BD764u;
    SET_GPR_U32(ctx, 31, 0x1BD76Cu);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1BD764u, 0x1BD76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD76Cu;
label_1bd76c:
    // 0x1bd76c: 0x10400287  beqz        $v0, . + 4 + (0x287 << 2)
    ctx->pc = 0x1BD76Cu;
    {
        const bool branch_taken_0x1bd76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd76c) {
            ctx->pc = 0x1BE18Cu;
            goto label_1be18c;
        }
    }
    ctx->pc = 0x1BD774u;
    // 0x1bd774: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x1bd774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1bd778: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1bd778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1bd77c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bd77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd780: 0xc06ef08  jal         func_1BBC20
    ctx->pc = 0x1BD780u;
    SET_GPR_U32(ctx, 31, 0x1BD788u);
    ctx->pc = 0x1BBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC20u, 0x1BD780u, 0x1BD788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD788u;
label_1bd788:
    // 0x1bd788: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1bd788u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bd78c: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x1bd78cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bd790: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x1bd790u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x1bd794: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x1bd794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1bd798: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1bd798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1bd79c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1bd79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x1bd7a0: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x1bd7a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1bd7a4: 0x552023  subu        $a0, $v0, $s5
    ctx->pc = 0x1bd7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1bd7a8: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x1bd7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1bd7ac: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bd7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bd7b0: 0x8c64bef8  lw          $a0, -0x4108($v1)
    ctx->pc = 0x1bd7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x60BEF8u));
    // 0x1bd7b4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1bd7b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1bd7b8: 0x14400274  bnez        $v0, . + 4 + (0x274 << 2)
    ctx->pc = 0x1BD7B8u;
    {
        const bool branch_taken_0x1bd7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd7b8) {
            ctx->pc = 0x1BE18Cu;
            goto label_1be18c;
        }
    }
    ctx->pc = 0x1BD7C0u;
    // 0x1bd7c0: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x1bd7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1bd7c4: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1bd7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x1bd7c8: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x1bd7c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1bd7cc: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1bd7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1bd7d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bd7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd7d4: 0xc06ef08  jal         func_1BBC20
    ctx->pc = 0x1BD7D4u;
    SET_GPR_U32(ctx, 31, 0x1BD7DCu);
    ctx->pc = 0x1BBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC20u, 0x1BD7D4u, 0x1BD7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD7DCu;
label_1bd7dc:
    // 0x1bd7dc: 0x80500003  lb          $s0, 0x3($v0)
    ctx->pc = 0x1bd7dcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1bd7e0: 0xa3b00143  sb          $s0, 0x143($sp)
    ctx->pc = 0x1bd7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 323), (uint8_t)GPR_U32(ctx, 16));
    // 0x1bd7e4: 0x10000269  b           . + 4 + (0x269 << 2)
    ctx->pc = 0x1BD7E4u;
    {
        const bool branch_taken_0x1bd7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd7e4) {
            ctx->pc = 0x1BE18Cu;
            goto label_1be18c;
        }
    }
    ctx->pc = 0x1BD7ECu;
label_1bd7ec:
    // 0x1bd7ec: 0x8fb302b0  lw          $s3, 0x2B0($sp)
    ctx->pc = 0x1bd7ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1bd7f0: 0x266400e8  addiu       $a0, $s3, 0xE8
    ctx->pc = 0x1bd7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 232));
    // 0x1bd7f4: 0xc06ef24  jal         func_1BBC90
    ctx->pc = 0x1BD7F4u;
    SET_GPR_U32(ctx, 31, 0x1BD7FCu);
    ctx->pc = 0x1BBC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC90u, 0x1BD7F4u, 0x1BD7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD7FCu;
label_1bd7fc:
    // 0x1bd7fc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1bd7fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd800: 0x16c00005  bnez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD800u;
    {
        const bool branch_taken_0x1bd800 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd800) {
            ctx->pc = 0x1BD818u;
            goto label_1bd818;
        }
    }
    ctx->pc = 0x1BD808u;
    // 0x1bd808: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bd808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bd80c: 0xa3a20143  sb          $v0, 0x143($sp)
    ctx->pc = 0x1bd80cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 323), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bd810: 0x1000025e  b           . + 4 + (0x25E << 2)
    ctx->pc = 0x1BD810u;
    {
        const bool branch_taken_0x1bd810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd810) {
            ctx->pc = 0x1BE18Cu;
            goto label_1be18c;
        }
    }
    ctx->pc = 0x1BD818u;
label_1bd818:
    // 0x1bd818: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bd818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bd81c: 0x8c55bef4  lw          $s5, -0x410C($v0)
    ctx->pc = 0x1bd81cu;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x60BEF4u));
    // 0x1bd820: 0x2b6082b  sltu        $at, $s5, $s6
    ctx->pc = 0x1bd820u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1bd824: 0x14200055  bnez        $at, . + 4 + (0x55 << 2)
    ctx->pc = 0x1BD824u;
    {
        const bool branch_taken_0x1bd824 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd824) {
            ctx->pc = 0x1BD97Cu;
            goto label_1bd97c;
        }
    }
    ctx->pc = 0x1BD82Cu;
    // 0x1bd82c: 0xafa00298  sw          $zero, 0x298($sp)
    ctx->pc = 0x1bd82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 0));
    // 0x1bd830: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x1bd830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1bd834: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x1BD834u;
    SET_GPR_U32(ctx, 31, 0x1BD83Cu);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x1BD834u, 0x1BD83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD83Cu;
label_1bd83c:
    // 0x1bd83c: 0xafa00298  sw          $zero, 0x298($sp)
    ctx->pc = 0x1bd83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 0));
    // 0x1bd840: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BD840u;
    {
        const bool branch_taken_0x1bd840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd840) {
            ctx->pc = 0x1BD864u;
            goto label_1bd864;
        }
    }
    ctx->pc = 0x1BD848u;
label_1bd848:
    // 0x1bd848: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x1bd848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1bd84c: 0x27a50298  addiu       $a1, $sp, 0x298
    ctx->pc = 0x1bd84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
    // 0x1bd850: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1BD850u;
    SET_GPR_U32(ctx, 31, 0x1BD858u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1BD850u, 0x1BD858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD858u;
label_1bd858:
    // 0x1bd858: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x1bd858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x1bd85c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bd85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bd860: 0xafa20298  sw          $v0, 0x298($sp)
    ctx->pc = 0x1bd860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
label_1bd864:
    // 0x1bd864: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x1bd864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x1bd868: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bd868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bd86c: 0x8c42be74  lw          $v0, -0x418C($v0)
    ctx->pc = 0x1bd86cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BE74u));
    // 0x1bd870: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bd870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bd874: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1bd874u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bd878: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1BD878u;
    {
        const bool branch_taken_0x1bd878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd878) {
            ctx->pc = 0x1BD848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd848;
        }
    }
    ctx->pc = 0x1BD880u;
    // 0x1bd880: 0xafa00298  sw          $zero, 0x298($sp)
    ctx->pc = 0x1bd880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 0));
    // 0x1bd884: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1BD884u;
    {
        const bool branch_taken_0x1bd884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd884) {
            ctx->pc = 0x1BD910u;
            goto label_1bd910;
        }
    }
    ctx->pc = 0x1BD88Cu;
label_1bd88c:
    // 0x1bd88c: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x1bd88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1bd890: 0xc041010  jal         func_104040
    ctx->pc = 0x1BD890u;
    SET_GPR_U32(ctx, 31, 0x1BD898u);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x1BD890u, 0x1BD898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD898u;
label_1bd898:
    // 0x1bd898: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1bd898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x1bd89c: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x1bd89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1bd8a0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1bd8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd8a4: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x1BD8A4u;
    SET_GPR_U32(ctx, 31, 0x1BD8ACu);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x1BD8A4u, 0x1BD8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD8ACu;
label_1bd8ac:
    // 0x1bd8ac: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1bd8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x1bd8b0: 0x8fa402b0  lw          $a0, 0x2B0($sp)
    ctx->pc = 0x1bd8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1bd8b4: 0x248400e8  addiu       $a0, $a0, 0xE8
    ctx->pc = 0x1bd8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x1bd8b8: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x1bd8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x1bd8bc: 0xc06ef08  jal         func_1BBC20
    ctx->pc = 0x1BD8BCu;
    SET_GPR_U32(ctx, 31, 0x1BD8C4u);
    ctx->pc = 0x1BBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC20u, 0x1BD8BCu, 0x1BD8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD8C4u;
label_1bd8c4:
    // 0x1bd8c4: 0x7ba400f0  lq          $a0, 0xF0($sp)
    ctx->pc = 0x1bd8c4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1bd8c8: 0x7ba500e0  lq          $a1, 0xE0($sp)
    ctx->pc = 0x1bd8c8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1bd8cc: 0x24460003  addiu       $a2, $v0, 0x3
    ctx->pc = 0x1bd8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1bd8d0: 0xc070efc  jal         func_1C3BF0
    ctx->pc = 0x1BD8D0u;
    SET_GPR_U32(ctx, 31, 0x1BD8D8u);
    ctx->pc = 0x1C3BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BF0u, 0x1BD8D0u, 0x1BD8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD8D8u;
label_1bd8d8:
    // 0x1bd8d8: 0xafa20284  sw          $v0, 0x284($sp)
    ctx->pc = 0x1bd8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 2));
    // 0x1bd8dc: 0x8fb00284  lw          $s0, 0x284($sp)
    ctx->pc = 0x1bd8dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x1bd8e0: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x1bd8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1bd8e4: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x1BD8E4u;
    SET_GPR_U32(ctx, 31, 0x1BD8ECu);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x1BD8E4u, 0x1BD8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD8ECu;
label_1bd8ec:
    // 0x1bd8ec: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD8ECu;
    {
        const bool branch_taken_0x1bd8ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd8ec) {
            ctx->pc = 0x1BD904u;
            goto label_1bd904;
        }
    }
    ctx->pc = 0x1BD8F4u;
    // 0x1bd8f4: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x1bd8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1bd8f8: 0x8fa50284  lw          $a1, 0x284($sp)
    ctx->pc = 0x1bd8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x1bd8fc: 0xc06fa28  jal         func_1BE8A0
    ctx->pc = 0x1BD8FCu;
    SET_GPR_U32(ctx, 31, 0x1BD904u);
    ctx->pc = 0x1BE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE8A0u, 0x1BD8FCu, 0x1BD904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD904u;
label_1bd904:
    // 0x1bd904: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x1bd904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x1bd908: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x1bd908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bd90c: 0xafb00298  sw          $s0, 0x298($sp)
    ctx->pc = 0x1bd90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 16));
label_1bd910:
    // 0x1bd910: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x1bd910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x1bd914: 0x96102b  sltu        $v0, $a0, $s6
    ctx->pc = 0x1bd914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1bd918: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1BD918u;
    {
        const bool branch_taken_0x1bd918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd918) {
            ctx->pc = 0x1BD88Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd88c;
        }
    }
    ctx->pc = 0x1BD920u;
    // 0x1bd920: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1BD920u;
    SET_GPR_U32(ctx, 31, 0x1BD928u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1BD920u, 0x1BD928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD928u;
label_1bd928:
    // 0x1bd928: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1bd928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x1bd92c: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x1bd92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1bd930: 0xc044598  jal         func_111660
    ctx->pc = 0x1BD930u;
    SET_GPR_U32(ctx, 31, 0x1BD938u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x1BD930u, 0x1BD938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD938u;
label_1bd938:
    // 0x1bd938: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x1bd938u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1bd93c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1bd93cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1bd940: 0x2810  mfhi        $a1
    ctx->pc = 0x1bd940u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1bd944: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x1bd944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1bd948: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1BD948u;
    SET_GPR_U32(ctx, 31, 0x1BD950u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1BD948u, 0x1BD950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD950u;
label_1bd950:
    // 0x1bd950: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bd950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd954: 0x42e3c  dsll32      $a1, $a0, 24
    ctx->pc = 0x1bd954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 24));
    // 0x1bd958: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1bd958u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x1bd95c: 0xa3a50143  sb          $a1, 0x143($sp)
    ctx->pc = 0x1bd95cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 323), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bd960: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x1bd960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1bd964: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1bd964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd968: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1bd968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bd96c: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x1BD96Cu;
    SET_GPR_U32(ctx, 31, 0x1BD974u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x1BD96Cu, 0x1BD974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD974u;
label_1bd974:
    // 0x1bd974: 0x10000205  b           . + 4 + (0x205 << 2)
    ctx->pc = 0x1BD974u;
    {
        const bool branch_taken_0x1bd974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd974) {
            ctx->pc = 0x1BE18Cu;
            goto label_1be18c;
        }
    }
    ctx->pc = 0x1BD97Cu;
label_1bd97c:
    // 0x1bd97c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bd97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bd980: 0x8c42bef8  lw          $v0, -0x4108($v0)
    ctx->pc = 0x1bd980u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BEF8u));
    // 0x1bd984: 0x56082b  sltu        $at, $v0, $s6
    ctx->pc = 0x1bd984u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1bd988: 0x14200095  bnez        $at, . + 4 + (0x95 << 2)
    ctx->pc = 0x1BD988u;
    {
        const bool branch_taken_0x1bd988 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd988) {
            ctx->pc = 0x1BDBE0u;
            goto label_1bdbe0;
        }
    }
    ctx->pc = 0x1BD990u;
    // 0x1bd990: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bd990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bd994: 0x8c42bef4  lw          $v0, -0x410C($v0)
    ctx->pc = 0x1bd994u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BEF4u));
    // 0x1bd998: 0x2c22023  subu        $a0, $s6, $v0
    ctx->pc = 0x1bd998u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1bd99c: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x1bd99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1bd9a0: 0xafa50280  sw          $a1, 0x280($sp)
    ctx->pc = 0x1bd9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 5));
    // 0x1bd9a4: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1BD9A4u;
    SET_GPR_U32(ctx, 31, 0x1BD9ACu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1BD9A4u, 0x1BD9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD9ACu;
label_1bd9ac:
    // 0x1bd9ac: 0x8fb00280  lw          $s0, 0x280($sp)
    ctx->pc = 0x1bd9acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1bd9b0: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x1bd9b0u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1bd9b4: 0x2010  mfhi        $a0
    ctx->pc = 0x1bd9b4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1bd9b8: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BD9B8u;
    {
        const bool branch_taken_0x1bd9b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd9b8) {
            ctx->pc = 0x1BD9F0u;
            goto label_1bd9f0;
        }
    }
    ctx->pc = 0x1BD9C0u;
    // 0x1bd9c0: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1BD9C0u;
    SET_GPR_U32(ctx, 31, 0x1BD9C8u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1BD9C0u, 0x1BD9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD9C8u;
label_1bd9c8:
    // 0x1bd9c8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bd9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bd9cc: 0x8c63be74  lw          $v1, -0x418C($v1)
    ctx->pc = 0x1bd9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BE74u));
    // 0x1bd9d0: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x1bd9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bd9d4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1bd9d4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1bd9d8: 0x1010  mfhi        $v0
    ctx->pc = 0x1bd9d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bd9dc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1bd9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1bd9e0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1bd9e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1bd9e4: 0xa3a20143  sb          $v0, 0x143($sp)
    ctx->pc = 0x1bd9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 323), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bd9e8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1BD9E8u;
    {
        const bool branch_taken_0x1bd9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd9e8) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BD9F0u;
label_1bd9f0:
    // 0x1bd9f0: 0xafa00298  sw          $zero, 0x298($sp)
    ctx->pc = 0x1bd9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 0));
    // 0x1bd9f4: 0xa3a0029e  sb          $zero, 0x29E($sp)
    ctx->pc = 0x1bd9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 670), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd9f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1BD9F8u;
    {
        const bool branch_taken_0x1bd9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd9f8) {
            ctx->pc = 0x1BDA40u;
            goto label_1bda40;
        }
    }
    ctx->pc = 0x1BDA00u;
label_1bda00:
    // 0x1bda00: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x1bda00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1bda04: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1bda04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1bda08: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x1bda08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x1bda0c: 0xc06ef08  jal         func_1BBC20
    ctx->pc = 0x1BDA0Cu;
    SET_GPR_U32(ctx, 31, 0x1BDA14u);
    ctx->pc = 0x1BBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC20u, 0x1BDA0Cu, 0x1BDA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDA14u;
label_1bda14:
    // 0x1bda14: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1bda14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1bda18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1bda18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bda1c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BDA1Cu;
    {
        const bool branch_taken_0x1bda1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bda1c) {
            ctx->pc = 0x1BDA34u;
            goto label_1bda34;
        }
    }
    ctx->pc = 0x1BDA24u;
    // 0x1bda24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bda24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bda28: 0xa3a2029e  sb          $v0, 0x29E($sp)
    ctx->pc = 0x1bda28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 670), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bda2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDA2Cu;
    {
        const bool branch_taken_0x1bda2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bda2c) {
            ctx->pc = 0x1BDA40u;
            goto label_1bda40;
        }
    }
    ctx->pc = 0x1BDA34u;
label_1bda34:
    // 0x1bda34: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x1bda34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x1bda38: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1bda38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1bda3c: 0xafa20298  sw          $v0, 0x298($sp)
    ctx->pc = 0x1bda3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
label_1bda40:
    // 0x1bda40: 0x93a2029e  lbu         $v0, 0x29E($sp)
    ctx->pc = 0x1bda40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 670)));
    // 0x1bda44: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BDA44u;
    {
        const bool branch_taken_0x1bda44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bda44) {
            ctx->pc = 0x1BDA74u;
            goto label_1bda74;
        }
    }
    ctx->pc = 0x1BDA4Cu;
    // 0x1bda4c: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x1bda4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x1bda50: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1bda50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1bda54: 0x8fa302b0  lw          $v1, 0x2B0($sp)
    ctx->pc = 0x1bda54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1bda58: 0x246400e8  addiu       $a0, $v1, 0xE8
    ctx->pc = 0x1bda58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 232));
    // 0x1bda5c: 0xc06ef24  jal         func_1BBC90
    ctx->pc = 0x1BDA5Cu;
    SET_GPR_U32(ctx, 31, 0x1BDA64u);
    ctx->pc = 0x1BBC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC90u, 0x1BDA5Cu, 0x1BDA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDA64u;
label_1bda64:
    // 0x1bda64: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x1bda64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1bda68: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1bda68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bda6c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1BDA6Cu;
    {
        const bool branch_taken_0x1bda6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bda6c) {
            ctx->pc = 0x1BDA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bda00;
        }
    }
    ctx->pc = 0x1BDA74u;
label_1bda74:
    // 0x1bda74: 0x93a2029e  lbu         $v0, 0x29E($sp)
    ctx->pc = 0x1bda74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 670)));
    // 0x1bda78: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1bda78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bda7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bda7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bda80: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1BDA80u;
    {
        const bool branch_taken_0x1bda80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bda80) {
            ctx->pc = 0x1BDB00u;
            goto label_1bdb00;
        }
    }
    ctx->pc = 0x1BDA88u;
    // 0x1bda88: 0x8fa302b0  lw          $v1, 0x2B0($sp)
    ctx->pc = 0x1bda88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1bda8c: 0x246400e8  addiu       $a0, $v1, 0xE8
    ctx->pc = 0x1bda8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 232));
    // 0x1bda90: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x1bda90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x1bda94: 0xc06ef08  jal         func_1BBC20
    ctx->pc = 0x1BDA94u;
    SET_GPR_U32(ctx, 31, 0x1BDA9Cu);
    ctx->pc = 0x1BBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC20u, 0x1BDA94u, 0x1BDA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDA9Cu;
label_1bda9c:
    // 0x1bda9c: 0x80420003  lb          $v0, 0x3($v0)
    ctx->pc = 0x1bda9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1bdaa0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1bdaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1bdaa4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1bdaa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1bdaa8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1bdaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bdaac: 0x10440014  beq         $v0, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BDAACu;
    {
        const bool branch_taken_0x1bdaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bdaac) {
            ctx->pc = 0x1BDB00u;
            goto label_1bdb00;
        }
    }
    ctx->pc = 0x1BDAB4u;
    // 0x1bdab4: 0x8fa502b0  lw          $a1, 0x2B0($sp)
    ctx->pc = 0x1bdab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1bdab8: 0x24a400e8  addiu       $a0, $a1, 0xE8
    ctx->pc = 0x1bdab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 232));
    // 0x1bdabc: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x1bdabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x1bdac0: 0xc06ef08  jal         func_1BBC20
    ctx->pc = 0x1BDAC0u;
    SET_GPR_U32(ctx, 31, 0x1BDAC8u);
    ctx->pc = 0x1BBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC20u, 0x1BDAC0u, 0x1BDAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDAC8u;
label_1bdac8:
    // 0x1bdac8: 0x80430003  lb          $v1, 0x3($v0)
    ctx->pc = 0x1bdac8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1bdacc: 0xa3a30143  sb          $v1, 0x143($sp)
    ctx->pc = 0x1bdaccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 323), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bdad0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bdad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdad4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1bdad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x1bdad8: 0x8fa402b0  lw          $a0, 0x2B0($sp)
    ctx->pc = 0x1bdad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1bdadc: 0x248500e8  addiu       $a1, $a0, 0xE8
    ctx->pc = 0x1bdadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x1bdae0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1bdae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdae4: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x1bdae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x1bdae8: 0xc06ef08  jal         func_1BBC20
    ctx->pc = 0x1BDAE8u;
    SET_GPR_U32(ctx, 31, 0x1BDAF0u);
    ctx->pc = 0x1BBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC20u, 0x1BDAE8u, 0x1BDAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDAF0u;
label_1bdaf0:
    // 0x1bdaf0: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x1bdaf0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bdaf4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1bdaf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bdaf8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BDAF8u;
    {
        const bool branch_taken_0x1bdaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdaf8) {
            ctx->pc = 0x1BDB28u;
            goto label_1bdb28;
        }
    }
    ctx->pc = 0x1BDB00u;
label_1bdb00:
    // 0x1bdb00: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1BDB00u;
    SET_GPR_U32(ctx, 31, 0x1BDB08u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1BDB00u, 0x1BDB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB08u;
label_1bdb08:
    // 0x1bdb08: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bdb08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bdb0c: 0x8c65be74  lw          $a1, -0x418C($v1)
    ctx->pc = 0x1bdb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x60BE74u));
    // 0x1bdb10: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x1bdb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1bdb14: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1bdb14u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1bdb18: 0x1010  mfhi        $v0
    ctx->pc = 0x1bdb18u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bdb1c: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x1bdb1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1bdb20: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1bdb20u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1bdb24: 0xa3a40143  sb          $a0, 0x143($sp)
    ctx->pc = 0x1bdb24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 323), (uint8_t)GPR_U32(ctx, 4));
label_1bdb28:
    // 0x1bdb28: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x1bdb28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1bdb2c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1bdb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb30: 0xc041b48  jal         func_106D20
    ctx->pc = 0x1BDB30u;
    SET_GPR_U32(ctx, 31, 0x1BDB38u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x1BDB30u, 0x1BDB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB38u;
label_1bdb38:
    // 0x1bdb38: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1bdb38u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb3c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1BDB3Cu;
    {
        const bool branch_taken_0x1bdb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdb3c) {
            ctx->pc = 0x1BDB9Cu;
            goto label_1bdb9c;
        }
    }
    ctx->pc = 0x1BDB44u;
label_1bdb44:
    // 0x1bdb44: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x1bdb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1bdb48: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1bdb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1bdb4c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1bdb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb50: 0xc06ef08  jal         func_1BBC20
    ctx->pc = 0x1BDB50u;
    SET_GPR_U32(ctx, 31, 0x1BDB58u);
    ctx->pc = 0x1BBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC20u, 0x1BDB50u, 0x1BDB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB58u;
label_1bdb58:
    // 0x1bdb58: 0x80420003  lb          $v0, 0x3($v0)
    ctx->pc = 0x1bdb58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1bdb5c: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x1bdb5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1bdb60: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x1bdb60u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x1bdb64: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x1bdb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1bdb68: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1bdb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb6c: 0x278595cc  addiu       $a1, $gp, -0x6A34
    ctx->pc = 0x1bdb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940108));
    // 0x1bdb70: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x1BDB70u;
    SET_GPR_U32(ctx, 31, 0x1BDB78u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x1BDB70u, 0x1BDB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB78u;
label_1bdb78:
    // 0x1bdb78: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x1bdb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1bdb7c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1bdb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb80: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1BDB80u;
    SET_GPR_U32(ctx, 31, 0x1BDB88u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1BDB80u, 0x1BDB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB88u;
label_1bdb88:
    // 0x1bdb88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bdb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bdb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb90: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x1BDB90u;
    SET_GPR_U32(ctx, 31, 0x1BDB98u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x1BDB90u, 0x1BDB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB98u;
label_1bdb98:
    // 0x1bdb98: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1bdb98u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_1bdb9c:
    // 0x1bdb9c: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x1bdb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1bdba0: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1bdba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1bdba4: 0xc06ef24  jal         func_1BBC90
    ctx->pc = 0x1BDBA4u;
    SET_GPR_U32(ctx, 31, 0x1BDBACu);
    ctx->pc = 0x1BBC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC90u, 0x1BDBA4u, 0x1BDBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDBACu;
label_1bdbac:
    // 0x1bdbac: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x1bdbacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bdbb0: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1BDBB0u;
    {
        const bool branch_taken_0x1bdbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdbb0) {
            ctx->pc = 0x1BDB44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bdb44;
        }
    }
    ctx->pc = 0x1BDBB8u;
    // 0x1bdbb8: 0x278495d0  addiu       $a0, $gp, -0x6A30
    ctx->pc = 0x1bdbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940112));
    // 0x1bdbbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bdbbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdbc0: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x1BDBC0u;
    SET_GPR_U32(ctx, 31, 0x1BDBC8u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x1BDBC0u, 0x1BDBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDBC8u;
label_1bdbc8:
    // 0x1bdbc8: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x1bdbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1bdbcc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1bdbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bdbd0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1BDBD0u;
    SET_GPR_U32(ctx, 31, 0x1BDBD8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1BDBD0u, 0x1BDBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDBD8u;
label_1bdbd8:
    // 0x1bdbd8: 0x1000016c  b           . + 4 + (0x16C << 2)
    ctx->pc = 0x1BDBD8u;
    {
        const bool branch_taken_0x1bdbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdbd8) {
            ctx->pc = 0x1BE18Cu;
            goto label_1be18c;
        }
    }
    ctx->pc = 0x1BDBE0u;
label_1bdbe0:
    // 0x1bdbe0: 0xafa00298  sw          $zero, 0x298($sp)
    ctx->pc = 0x1bdbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 0));
    // 0x1bdbe4: 0xa3a0029d  sb          $zero, 0x29D($sp)
    ctx->pc = 0x1bdbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 669), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bdbe8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1BDBE8u;
    {
        const bool branch_taken_0x1bdbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdbe8) {
            ctx->pc = 0x1BDC30u;
            goto label_1bdc30;
        }
    }
    ctx->pc = 0x1BDBF0u;
label_1bdbf0:
    // 0x1bdbf0: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x1bdbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1bdbf4: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1bdbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1bdbf8: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x1bdbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x1bdbfc: 0xc06ef08  jal         func_1BBC20
    ctx->pc = 0x1BDBFCu;
    SET_GPR_U32(ctx, 31, 0x1BDC04u);
    ctx->pc = 0x1BBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC20u, 0x1BDBFCu, 0x1BDC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDC04u;
label_1bdc04:
    // 0x1bdc04: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1bdc04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1bdc08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1bdc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bdc0c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BDC0Cu;
    {
        const bool branch_taken_0x1bdc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdc0c) {
            ctx->pc = 0x1BDC24u;
            goto label_1bdc24;
        }
    }
    ctx->pc = 0x1BDC14u;
    // 0x1bdc14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bdc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdc18: 0xa3a2029d  sb          $v0, 0x29D($sp)
    ctx->pc = 0x1bdc18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 669), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bdc1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDC1Cu;
    {
        const bool branch_taken_0x1bdc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdc1c) {
            ctx->pc = 0x1BDC30u;
            goto label_1bdc30;
        }
    }
    ctx->pc = 0x1BDC24u;
label_1bdc24:
    // 0x1bdc24: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x1bdc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x1bdc28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bdc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bdc2c: 0xafa20298  sw          $v0, 0x298($sp)
    ctx->pc = 0x1bdc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
label_1bdc30:
    // 0x1bdc30: 0x93a2029d  lbu         $v0, 0x29D($sp)
    ctx->pc = 0x1bdc30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 669)));
    // 0x1bdc34: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BDC34u;
    {
        const bool branch_taken_0x1bdc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdc34) {
            ctx->pc = 0x1BDC64u;
            goto label_1bdc64;
        }
    }
    ctx->pc = 0x1BDC3Cu;
    // 0x1bdc3c: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x1bdc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x1bdc40: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1bdc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x1bdc44: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x1bdc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1bdc48: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1bdc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1bdc4c: 0xc06ef24  jal         func_1BBC90
    ctx->pc = 0x1BDC4Cu;
    SET_GPR_U32(ctx, 31, 0x1BDC54u);
    ctx->pc = 0x1BBC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC90u, 0x1BDC4Cu, 0x1BDC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDC54u;
label_1bdc54:
    // 0x1bdc54: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x1bdc54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bdc58: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1bdc58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bdc5c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1BDC5Cu;
    {
        const bool branch_taken_0x1bdc5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdc5c) {
            ctx->pc = 0x1BDBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bdbf0;
        }
    }
    ctx->pc = 0x1BDC64u;
label_1bdc64:
    // 0x1bdc64: 0x93a2029d  lbu         $v0, 0x29D($sp)
    ctx->pc = 0x1bdc64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 669)));
    // 0x1bdc68: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1bdc68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bdc6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bdc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdc70: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1BDC70u;
    {
        const bool branch_taken_0x1bdc70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bdc70) {
            ctx->pc = 0x1BDCE4u;
            goto label_1bdce4;
        }
    }
    ctx->pc = 0x1BDC78u;
    // 0x1bdc78: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x1bdc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1bdc7c: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1bdc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1bdc80: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x1bdc80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x1bdc84: 0xc06ef08  jal         func_1BBC20
    ctx->pc = 0x1BDC84u;
    SET_GPR_U32(ctx, 31, 0x1BDC8Cu);
    ctx->pc = 0x1BBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC20u, 0x1BDC84u, 0x1BDC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDC8Cu;
label_1bdc8c:
    // 0x1bdc8c: 0x80420003  lb          $v0, 0x3($v0)
    ctx->pc = 0x1bdc8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1bdc90: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1bdc90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1bdc94: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1bdc94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1bdc98: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1bdc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bdc9c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BDC9Cu;
    {
        const bool branch_taken_0x1bdc9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bdc9c) {
            ctx->pc = 0x1BDCE4u;
            goto label_1bdce4;
        }
    }
    ctx->pc = 0x1BDCA4u;
    // 0x1bdca4: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x1bdca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1bdca8: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1bdca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1bdcac: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x1bdcacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x1bdcb0: 0xc06ef08  jal         func_1BBC20
    ctx->pc = 0x1BDCB0u;
    SET_GPR_U32(ctx, 31, 0x1BDCB8u);
    ctx->pc = 0x1BBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC20u, 0x1BDCB0u, 0x1BDCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDCB8u;
label_1bdcb8:
    // 0x1bdcb8: 0x80420003  lb          $v0, 0x3($v0)
    ctx->pc = 0x1bdcb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1bdcbc: 0xa3a20143  sb          $v0, 0x143($sp)
    ctx->pc = 0x1bdcbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 323), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bdcc0: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x1bdcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1bdcc4: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1bdcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1bdcc8: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x1bdcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x1bdccc: 0xc06ef08  jal         func_1BBC20
    ctx->pc = 0x1BDCCCu;
    SET_GPR_U32(ctx, 31, 0x1BDCD4u);
    ctx->pc = 0x1BBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC20u, 0x1BDCCCu, 0x1BDCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDCD4u;
label_1bdcd4:
    // 0x1bdcd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bdcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdcd8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1bdcd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bdcdc: 0x1000012b  b           . + 4 + (0x12B << 2)
    ctx->pc = 0x1BDCDCu;
    {
        const bool branch_taken_0x1bdcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdcdc) {
            ctx->pc = 0x1BE18Cu;
            goto label_1be18c;
        }
    }
    ctx->pc = 0x1BDCE4u;
label_1bdce4:
    // 0x1bdce4: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1BDCE4u;
    SET_GPR_U32(ctx, 31, 0x1BDCECu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1BDCE4u, 0x1BDCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDCECu;
label_1bdcec:
    // 0x1bdcec: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bdcecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bdcf0: 0x8c63be74  lw          $v1, -0x418C($v1)
    ctx->pc = 0x1bdcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BE74u));
    // 0x1bdcf4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bdcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bdcf8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1bdcf8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1bdcfc: 0x1010  mfhi        $v0
    ctx->pc = 0x1bdcfcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bdd00: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1bdd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1bdd04: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1bdd04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1bdd08: 0xa3a20143  sb          $v0, 0x143($sp)
    ctx->pc = 0x1bdd08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 323), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bdd0c: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x1BDD0Cu;
    {
        const bool branch_taken_0x1bdd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdd0c) {
            ctx->pc = 0x1BE18Cu;
            goto label_1be18c;
        }
    }
    ctx->pc = 0x1BDD14u;
label_1bdd14:
    // 0x1bdd14: 0x2942018  mult        $a0, $s4, $s4
    ctx->pc = 0x1bdd14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bdd18: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x1bdd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1bdd1c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1bdd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bdd20: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1bdd20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1bdd24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bdd24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd28: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1bdd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1bdd2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bdd2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd30: 0xc06f9b4  jal         func_1BE6D0
    ctx->pc = 0x1BDD30u;
    SET_GPR_U32(ctx, 31, 0x1BDD38u);
    ctx->pc = 0x1BE6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE6D0u, 0x1BDD30u, 0x1BDD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDD38u;
label_1bdd38:
    // 0x1bdd38: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1bdd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bdd3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bdd3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bdd40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd44: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x1bdd44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd48: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bdd48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd4c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1BDD4Cu;
    {
        const bool branch_taken_0x1bdd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdd4c) {
            ctx->pc = 0x1BDDF0u;
            goto label_1bddf0;
        }
    }
    ctx->pc = 0x1BDD54u;
label_1bdd54:
    // 0x1bdd54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bdd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bdd58: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BDD58u;
    {
        const bool branch_taken_0x1bdd58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bdd58) {
            ctx->pc = 0x1BDD88u;
            goto label_1bdd88;
        }
    }
    ctx->pc = 0x1BDD60u;
    // 0x1bdd60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bdd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bdd64: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x1bdd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x1bdd68: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1bdd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1bdd6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bdd6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd70: 0xc06f99c  jal         func_1BE670
    ctx->pc = 0x1BDD70u;
    SET_GPR_U32(ctx, 31, 0x1BDD78u);
    ctx->pc = 0x1BE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE670u, 0x1BDD70u, 0x1BDD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDD78u;
label_1bdd78:
    // 0x1bdd78: 0x7ba30130  lq          $v1, 0x130($sp)
    ctx->pc = 0x1bdd78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1bdd7c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1bdd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1bdd80: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1BDD80u;
    {
        const bool branch_taken_0x1bdd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdd80) {
            ctx->pc = 0x1BDDC4u;
            goto label_1bddc4;
        }
    }
    ctx->pc = 0x1BDD88u;
label_1bdd88:
    // 0x1bdd88: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x1bdd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x1bdd8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bdd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd90: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1BDD90u;
    SET_GPR_U32(ctx, 31, 0x1BDD98u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1BDD90u, 0x1BDD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDD98u;
label_1bdd98:
    // 0x1bdd98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bdd98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd9c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bdd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bdda0: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1bdda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x1bdda4: 0x27a20260  addiu       $v0, $sp, 0x260
    ctx->pc = 0x1bdda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1bdda8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bdda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bddac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bddacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bddb0: 0xc06f99c  jal         func_1BE670
    ctx->pc = 0x1BDDB0u;
    SET_GPR_U32(ctx, 31, 0x1BDDB8u);
    ctx->pc = 0x1BE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE670u, 0x1BDDB0u, 0x1BDDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDB8u;
label_1bddb8:
    // 0x1bddb8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bddb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bddbc: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x1bddbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1bddc0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1bddc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1bddc4:
    // 0x1bddc4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bddc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1bddc8: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x1bddc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1bddcc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1bddccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bddd0: 0x275102b  sltu        $v0, $s3, $s5
    ctx->pc = 0x1bddd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1bddd4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BDDD4u;
    {
        const bool branch_taken_0x1bddd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bddd4) {
            ctx->pc = 0x1BDDF0u;
            goto label_1bddf0;
        }
    }
    ctx->pc = 0x1BDDDCu;
    // 0x1bdddc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bdddcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1bdde0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1bdde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1bdde4: 0x2822023  subu        $a0, $s4, $v0
    ctx->pc = 0x1bdde4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1bdde8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1bdde8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bddec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bddecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bddf0:
    // 0x1bddf0: 0x212282b  sltu        $a1, $s0, $s2
    ctx->pc = 0x1bddf0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1bddf4: 0x14a0ffd7  bnez        $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1BDDF4u;
    {
        const bool branch_taken_0x1bddf4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bddf4) {
            ctx->pc = 0x1BDD54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bdd54;
        }
    }
    ctx->pc = 0x1BDDFCu;
    // 0x1bddfc: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1BDDFCu;
    SET_GPR_U32(ctx, 31, 0x1BDE04u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1BDDFCu, 0x1BDE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE04u;
label_1bde04:
    // 0x1bde04: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x1bde04u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1bde08: 0xb810  mfhi        $s7
    ctx->pc = 0x1bde08u;
    SET_GPR_U64(ctx, 23, ctx->hi);
    // 0x1bde0c: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x1bde0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde10: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1bde10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1bde14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bde14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde18: 0xc06f99c  jal         func_1BE670
    ctx->pc = 0x1BDE18u;
    SET_GPR_U32(ctx, 31, 0x1BDE20u);
    ctx->pc = 0x1BE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE670u, 0x1BDE18u, 0x1BDE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE20u;
label_1bde20:
    // 0x1bde20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bde20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde24: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bde24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bde28: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1bde28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1bde2c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1bde2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1bde30: 0xa3a20143  sb          $v0, 0x143($sp)
    ctx->pc = 0x1bde30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 323), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bde34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bde34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde38: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1BDE38u;
    {
        const bool branch_taken_0x1bde38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bde38) {
            ctx->pc = 0x1BDEC0u;
            goto label_1bdec0;
        }
    }
    ctx->pc = 0x1BDE40u;
label_1bde40:
    // 0x1bde40: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x1bde40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1bde44: 0xc041b48  jal         func_106D20
    ctx->pc = 0x1BDE44u;
    SET_GPR_U32(ctx, 31, 0x1BDE4Cu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x1BDE44u, 0x1BDE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE4Cu;
label_1bde4c:
    // 0x1bde4c: 0x27b40260  addiu       $s4, $sp, 0x260
    ctx->pc = 0x1bde4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1bde50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bde50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bde54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde58: 0xc06f99c  jal         func_1BE670
    ctx->pc = 0x1BDE58u;
    SET_GPR_U32(ctx, 31, 0x1BDE60u);
    ctx->pc = 0x1BE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE670u, 0x1BDE58u, 0x1BDE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE60u;
label_1bde60:
    // 0x1bde60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bde60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde64: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x1bde64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1bde68: 0x278295d4  addiu       $v0, $gp, -0x6A2C
    ctx->pc = 0x1bde68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940116));
    // 0x1bde6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bde6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde70: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1bde70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bde74: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x1BDE74u;
    SET_GPR_U32(ctx, 31, 0x1BDE7Cu);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x1BDE74u, 0x1BDE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE7Cu;
label_1bde7c:
    // 0x1bde7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bde7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde80: 0x27a20230  addiu       $v0, $sp, 0x230
    ctx->pc = 0x1bde80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1bde84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bde84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde88: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1BDE88u;
    SET_GPR_U32(ctx, 31, 0x1BDE90u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1BDE88u, 0x1BDE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE90u;
label_1bde90:
    // 0x1bde90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bde90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bde94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde98: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x1BDE98u;
    SET_GPR_U32(ctx, 31, 0x1BDEA0u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x1BDE98u, 0x1BDEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDEA0u;
label_1bdea0:
    // 0x1bdea0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bdea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdea4: 0x27a20230  addiu       $v0, $sp, 0x230
    ctx->pc = 0x1bdea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1bdea8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bdea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdeac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1bdeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bdeb0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1BDEB0u;
    SET_GPR_U32(ctx, 31, 0x1BDEB8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1BDEB0u, 0x1BDEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDEB8u;
label_1bdeb8:
    // 0x1bdeb8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1bdeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1bdebc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bdebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bdec0:
    // 0x1bdec0: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1bdec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1bdec4: 0xc06f98c  jal         func_1BE630
    ctx->pc = 0x1BDEC4u;
    SET_GPR_U32(ctx, 31, 0x1BDECCu);
    ctx->pc = 0x1BE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE630u, 0x1BDEC4u, 0x1BDECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDECCu;
label_1bdecc:
    // 0x1bdecc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1bdeccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bded0: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1BDED0u;
    {
        const bool branch_taken_0x1bded0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bded0) {
            ctx->pc = 0x1BDE40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bde40;
        }
    }
    ctx->pc = 0x1BDED8u;
    // 0x1bded8: 0x278495d0  addiu       $a0, $gp, -0x6A30
    ctx->pc = 0x1bded8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940112));
    // 0x1bdedc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bdedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdee0: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x1BDEE0u;
    SET_GPR_U32(ctx, 31, 0x1BDEE8u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x1BDEE0u, 0x1BDEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDEE8u;
label_1bdee8:
    // 0x1bdee8: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x1BDEE8u;
    {
        const bool branch_taken_0x1bdee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdee8) {
            ctx->pc = 0x1BE18Cu;
            goto label_1be18c;
        }
    }
    ctx->pc = 0x1BDEF0u;
label_1bdef0:
    // 0x1bdef0: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x1bdef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1bdef4: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1bdef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bdef8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bdef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdefc: 0x27a20260  addiu       $v0, $sp, 0x260
    ctx->pc = 0x1bdefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1bdf00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bdf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bdf04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf08: 0xc06f9b4  jal         func_1BE6D0
    ctx->pc = 0x1BDF08u;
    SET_GPR_U32(ctx, 31, 0x1BDF10u);
    ctx->pc = 0x1BE6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE6D0u, 0x1BDF08u, 0x1BDF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF10u;
label_1bdf10:
    // 0x1bdf10: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x1bdf10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bdf14: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bdf14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf18: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1BDF18u;
    {
        const bool branch_taken_0x1bdf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdf18) {
            ctx->pc = 0x1BDFACu;
            goto label_1bdfac;
        }
    }
    ctx->pc = 0x1BDF20u;
label_1bdf20:
    // 0x1bdf20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bdf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bdf24: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BDF24u;
    {
        const bool branch_taken_0x1bdf24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bdf24) {
            ctx->pc = 0x1BDF54u;
            goto label_1bdf54;
        }
    }
    ctx->pc = 0x1BDF2Cu;
    // 0x1bdf2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bdf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bdf30: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1bdf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x1bdf34: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1bdf34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1bdf38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bdf38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf3c: 0xc06f99c  jal         func_1BE670
    ctx->pc = 0x1BDF3Cu;
    SET_GPR_U32(ctx, 31, 0x1BDF44u);
    ctx->pc = 0x1BE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE670u, 0x1BDF3Cu, 0x1BDF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF44u;
label_1bdf44:
    // 0x1bdf44: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x1bdf44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1bdf48: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1bdf48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1bdf4c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1BDF4Cu;
    {
        const bool branch_taken_0x1bdf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdf4c) {
            ctx->pc = 0x1BDF84u;
            goto label_1bdf84;
        }
    }
    ctx->pc = 0x1BDF54u;
label_1bdf54:
    // 0x1bdf54: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x1bdf54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x1bdf58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bdf58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf5c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1BDF5Cu;
    SET_GPR_U32(ctx, 31, 0x1BDF64u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1BDF5Cu, 0x1BDF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF64u;
label_1bdf64:
    // 0x1bdf64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bdf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bdf68: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1bdf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x1bdf6c: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1bdf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1bdf70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bdf70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf74: 0xc06f99c  jal         func_1BE670
    ctx->pc = 0x1BDF74u;
    SET_GPR_U32(ctx, 31, 0x1BDF7Cu);
    ctx->pc = 0x1BE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE670u, 0x1BDF74u, 0x1BDF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF7Cu;
label_1bdf7c:
    // 0x1bdf7c: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x1bdf7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1bdf80: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1bdf80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1bdf84:
    // 0x1bdf84: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bdf84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1bdf88: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1bdf88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1bdf8c: 0x275202b  sltu        $a0, $s3, $s5
    ctx->pc = 0x1bdf8cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1bdf90: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BDF90u;
    {
        const bool branch_taken_0x1bdf90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdf90) {
            ctx->pc = 0x1BDFACu;
            goto label_1bdfac;
        }
    }
    ctx->pc = 0x1BDF98u;
    // 0x1bdf98: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1bdf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1bdf9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bdf9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdfa0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1bdfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1bdfa4: 0x282a823  subu        $s5, $s4, $v0
    ctx->pc = 0x1bdfa4u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1bdfa8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bdfa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bdfac:
    // 0x1bdfac: 0x212202b  sltu        $a0, $s0, $s2
    ctx->pc = 0x1bdfacu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1bdfb0: 0x1480ffdb  bnez        $a0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1BDFB0u;
    {
        const bool branch_taken_0x1bdfb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdfb0) {
            ctx->pc = 0x1BDF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bdf20;
        }
    }
    ctx->pc = 0x1BDFB8u;
    // 0x1bdfb8: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1BDFB8u;
    SET_GPR_U32(ctx, 31, 0x1BDFC0u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1BDFB8u, 0x1BDFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFC0u;
label_1bdfc0:
    // 0x1bdfc0: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x1bdfc0u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1bdfc4: 0x2010  mfhi        $a0
    ctx->pc = 0x1bdfc4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1bdfc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bdfc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdfcc: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x1bdfccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1bdfd0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1bdfd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdfd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bdfd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdfd8: 0xc06f99c  jal         func_1BE670
    ctx->pc = 0x1BDFD8u;
    SET_GPR_U32(ctx, 31, 0x1BDFE0u);
    ctx->pc = 0x1BE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE670u, 0x1BDFD8u, 0x1BDFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFE0u;
label_1bdfe0:
    // 0x1bdfe0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bdfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bdfe4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1bdfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1bdfe8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1bdfe8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1bdfec: 0xa3a20143  sb          $v0, 0x143($sp)
    ctx->pc = 0x1bdfecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 323), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bdff0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bdff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdff4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1BDFF4u;
    {
        const bool branch_taken_0x1bdff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdff4) {
            ctx->pc = 0x1BE078u;
            goto label_1be078;
        }
    }
    ctx->pc = 0x1BDFFCu;
label_1bdffc:
    // 0x1bdffc: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x1bdffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1be000: 0xc041b48  jal         func_106D20
    ctx->pc = 0x1BE000u;
    SET_GPR_U32(ctx, 31, 0x1BE008u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x1BE000u, 0x1BE008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE008u;
label_1be008:
    // 0x1be008: 0x27a20260  addiu       $v0, $sp, 0x260
    ctx->pc = 0x1be008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1be00c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1be00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be010: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1be010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be014: 0xc06f99c  jal         func_1BE670
    ctx->pc = 0x1BE014u;
    SET_GPR_U32(ctx, 31, 0x1BE01Cu);
    ctx->pc = 0x1BE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE670u, 0x1BE014u, 0x1BE01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE01Cu;
label_1be01c:
    // 0x1be01c: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x1be01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1be020: 0x278395d4  addiu       $v1, $gp, -0x6A2C
    ctx->pc = 0x1be020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940116));
    // 0x1be024: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x1be024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
    // 0x1be028: 0x7ba500f0  lq          $a1, 0xF0($sp)
    ctx->pc = 0x1be028u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1be02c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1be02cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be030: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x1BE030u;
    SET_GPR_U32(ctx, 31, 0x1BE038u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x1BE030u, 0x1BE038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE038u;
label_1be038:
    // 0x1be038: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1be038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x1be03c: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x1be03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1be040: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1BE040u;
    SET_GPR_U32(ctx, 31, 0x1BE048u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1BE040u, 0x1BE048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE048u;
label_1be048:
    // 0x1be048: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1be048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be04c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be050: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x1BE050u;
    SET_GPR_U32(ctx, 31, 0x1BE058u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x1BE050u, 0x1BE058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE058u;
label_1be058:
    // 0x1be058: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1be058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be05c: 0x27a20220  addiu       $v0, $sp, 0x220
    ctx->pc = 0x1be05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1be060: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1be060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be064: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1be064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1be068: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1be068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be06c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1BE06Cu;
    SET_GPR_U32(ctx, 31, 0x1BE074u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1BE06Cu, 0x1BE074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE074u;
label_1be074:
    // 0x1be074: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1be074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1be078:
    // 0x1be078: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1be078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1be07c: 0xc06f98c  jal         func_1BE630
    ctx->pc = 0x1BE07Cu;
    SET_GPR_U32(ctx, 31, 0x1BE084u);
    ctx->pc = 0x1BE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE630u, 0x1BE07Cu, 0x1BE084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE084u;
label_1be084:
    // 0x1be084: 0x202202b  sltu        $a0, $s0, $v0
    ctx->pc = 0x1be084u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1be088: 0x1480ffdc  bnez        $a0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1BE088u;
    {
        const bool branch_taken_0x1be088 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be088) {
            ctx->pc = 0x1BDFFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bdffc;
        }
    }
    ctx->pc = 0x1BE090u;
    // 0x1be090: 0x278595d0  addiu       $a1, $gp, -0x6A30
    ctx->pc = 0x1be090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940112));
    // 0x1be094: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1be094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be098: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be09c: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x1BE09Cu;
    SET_GPR_U32(ctx, 31, 0x1BE0A4u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x1BE09Cu, 0x1BE0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE0A4u;
label_1be0a4:
    // 0x1be0a4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1BE0A4u;
    {
        const bool branch_taken_0x1be0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be0a4) {
            ctx->pc = 0x1BE18Cu;
            goto label_1be18c;
        }
    }
    ctx->pc = 0x1BE0ACu;
label_1be0ac:
    // 0x1be0ac: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x1be0acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be0b0: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1BE0B0u;
    SET_GPR_U32(ctx, 31, 0x1BE0B8u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1BE0B0u, 0x1BE0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE0B8u;
label_1be0b8:
    // 0x1be0b8: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x1be0b8u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1be0bc: 0x8010  mfhi        $s0
    ctx->pc = 0x1be0bcu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x1be0c0: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1be0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1be0c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1be0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be0c8: 0xc06f99c  jal         func_1BE670
    ctx->pc = 0x1BE0C8u;
    SET_GPR_U32(ctx, 31, 0x1BE0D0u);
    ctx->pc = 0x1BE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE670u, 0x1BE0C8u, 0x1BE0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE0D0u;
label_1be0d0:
    // 0x1be0d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1be0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be0d4: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1be0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x1be0d8: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x1be0d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1be0dc: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x1be0dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1be0e0: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1be0e0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1be0e4: 0xa3a40143  sb          $a0, 0x143($sp)
    ctx->pc = 0x1be0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 323), (uint8_t)GPR_U32(ctx, 4));
    // 0x1be0e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1be0e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be0ec: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1BE0ECu;
    {
        const bool branch_taken_0x1be0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be0ec) {
            ctx->pc = 0x1BE164u;
            goto label_1be164;
        }
    }
    ctx->pc = 0x1BE0F4u;
label_1be0f4:
    // 0x1be0f4: 0x27a20210  addiu       $v0, $sp, 0x210
    ctx->pc = 0x1be0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1be0f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1be0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be0fc: 0xc041b48  jal         func_106D20
    ctx->pc = 0x1BE0FCu;
    SET_GPR_U32(ctx, 31, 0x1BE104u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x1BE0FCu, 0x1BE104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE104u;
label_1be104:
    // 0x1be104: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1be104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be108: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1be108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1be10c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1be10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be110: 0xc06f99c  jal         func_1BE670
    ctx->pc = 0x1BE110u;
    SET_GPR_U32(ctx, 31, 0x1BE118u);
    ctx->pc = 0x1BE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE670u, 0x1BE110u, 0x1BE118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE118u;
label_1be118:
    // 0x1be118: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x1be118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1be11c: 0x278595d4  addiu       $a1, $gp, -0x6A2C
    ctx->pc = 0x1be11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940116));
    // 0x1be120: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1be120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be124: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x1BE124u;
    SET_GPR_U32(ctx, 31, 0x1BE12Cu);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x1BE124u, 0x1BE12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE12Cu;
label_1be12c:
    // 0x1be12c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1be12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be130: 0x27a20210  addiu       $v0, $sp, 0x210
    ctx->pc = 0x1be130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1be134: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1be134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be138: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1BE138u;
    SET_GPR_U32(ctx, 31, 0x1BE140u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1BE138u, 0x1BE140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE140u;
label_1be140:
    // 0x1be140: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1be140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be144: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be148: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x1BE148u;
    SET_GPR_U32(ctx, 31, 0x1BE150u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x1BE148u, 0x1BE150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE150u;
label_1be150:
    // 0x1be150: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x1be150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1be154: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1be154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1be158: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1BE158u;
    SET_GPR_U32(ctx, 31, 0x1BE160u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1BE158u, 0x1BE160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE160u;
label_1be160:
    // 0x1be160: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1be160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1be164:
    // 0x1be164: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1be164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1be168: 0xc06f98c  jal         func_1BE630
    ctx->pc = 0x1BE168u;
    SET_GPR_U32(ctx, 31, 0x1BE170u);
    ctx->pc = 0x1BE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE630u, 0x1BE168u, 0x1BE170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE170u;
label_1be170:
    // 0x1be170: 0x202182b  sltu        $v1, $s0, $v0
    ctx->pc = 0x1be170u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1be174: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1BE174u;
    {
        const bool branch_taken_0x1be174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be174) {
            ctx->pc = 0x1BE0F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be0f4;
        }
    }
    ctx->pc = 0x1BE17Cu;
    // 0x1be17c: 0x278495d0  addiu       $a0, $gp, -0x6A30
    ctx->pc = 0x1be17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940112));
    // 0x1be180: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be184: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x1BE184u;
    SET_GPR_U32(ctx, 31, 0x1BE18Cu);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x1BE184u, 0x1BE18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE18Cu;
label_1be18c:
    // 0x1be18c: 0x83a20143  lb          $v0, 0x143($sp)
    ctx->pc = 0x1be18cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 323)));
    // 0x1be190: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1be190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1be194: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1be194u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1be198: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1be198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1be19c: 0x14440025  bne         $v0, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1BE19Cu;
    {
        const bool branch_taken_0x1be19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1be19c) {
            ctx->pc = 0x1BE234u;
            goto label_1be234;
        }
    }
    ctx->pc = 0x1BE1A4u;
    // 0x1be1a4: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1BE1A4u;
    SET_GPR_U32(ctx, 31, 0x1BE1ACu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1BE1A4u, 0x1BE1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE1ACu;
label_1be1ac:
    // 0x1be1ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1be1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be1b0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1be1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1be1b4: 0x8c42be74  lw          $v0, -0x418C($v0)
    ctx->pc = 0x1be1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BE74u));
    // 0x1be1b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1be1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1be1bc: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x1be1bcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x1be1c0: 0x1010  mfhi        $v0
    ctx->pc = 0x1be1c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1be1c4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1be1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1be1c8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1be1c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1be1cc: 0xa3a20143  sb          $v0, 0x143($sp)
    ctx->pc = 0x1be1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 323), (uint8_t)GPR_U32(ctx, 2));
    // 0x1be1d0: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x1be1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x1be1d4: 0xc05611c  jal         func_158470
    ctx->pc = 0x1BE1D4u;
    SET_GPR_U32(ctx, 31, 0x1BE1DCu);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1BE1D4u, 0x1BE1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE1DCu;
label_1be1dc:
    // 0x1be1dc: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BE1DCu;
    {
        const bool branch_taken_0x1be1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be1dc) {
            ctx->pc = 0x1BE234u;
            goto label_1be234;
        }
    }
    ctx->pc = 0x1BE1E4u;
    // 0x1be1e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1BE1E4u;
    {
        const bool branch_taken_0x1be1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be1e4) {
            ctx->pc = 0x1BE21Cu;
            goto label_1be21c;
        }
    }
    ctx->pc = 0x1BE1ECu;
label_1be1ec:
    // 0x1be1ec: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1BE1ECu;
    SET_GPR_U32(ctx, 31, 0x1BE1F4u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1BE1ECu, 0x1BE1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE1F4u;
label_1be1f4:
    // 0x1be1f4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1be1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1be1f8: 0x8c63be74  lw          $v1, -0x418C($v1)
    ctx->pc = 0x1be1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BE74u));
    // 0x1be1fc: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x1be1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x1be200: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x1be200u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1be204: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1be204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1be208: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1be208u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1be20c: 0x2010  mfhi        $a0
    ctx->pc = 0x1be20cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1be210: 0x4163c  dsll32      $v0, $a0, 24
    ctx->pc = 0x1be210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 24));
    // 0x1be214: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1be214u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1be218: 0xa3a20143  sb          $v0, 0x143($sp)
    ctx->pc = 0x1be218u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 323), (uint8_t)GPR_U32(ctx, 2));
label_1be21c:
    // 0x1be21c: 0x83a20143  lb          $v0, 0x143($sp)
    ctx->pc = 0x1be21cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 323)));
    // 0x1be220: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1be220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1be224: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1be224u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1be228: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1be228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1be22c: 0x1043ffef  beq         $v0, $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1BE22Cu;
    {
        const bool branch_taken_0x1be22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1be22c) {
            ctx->pc = 0x1BE1ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be1ec;
        }
    }
    ctx->pc = 0x1BE234u;
label_1be234:
    // 0x1be234: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x1be234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1be238: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x1be238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1be23c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1be23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1be240: 0x8c44befc  lw          $a0, -0x4104($v0)
    ctx->pc = 0x1be240u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x60BEFCu));
    // 0x1be244: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x1be244u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1be248: 0x2810  mfhi        $a1
    ctx->pc = 0x1be248u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1be24c: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BE24Cu;
    {
        const bool branch_taken_0x1be24c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be24c) {
            ctx->pc = 0x1BE274u;
            goto label_1be274;
        }
    }
    ctx->pc = 0x1BE254u;
    // 0x1be254: 0x27a20270  addiu       $v0, $sp, 0x270
    ctx->pc = 0x1be254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x1be258: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1be258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be25c: 0xc05611c  jal         func_158470
    ctx->pc = 0x1BE25Cu;
    SET_GPR_U32(ctx, 31, 0x1BE264u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1BE25Cu, 0x1BE264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE264u;
label_1be264:
    // 0x1be264: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE264u;
    {
        const bool branch_taken_0x1be264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be264) {
            ctx->pc = 0x1BE274u;
            goto label_1be274;
        }
    }
    ctx->pc = 0x1BE26Cu;
    // 0x1be26c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1be26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1be270: 0xa3a20143  sb          $v0, 0x143($sp)
    ctx->pc = 0x1be270u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 323), (uint8_t)GPR_U32(ctx, 2));
label_1be274:
    // 0x1be274: 0x8fa402b0  lw          $a0, 0x2B0($sp)
    ctx->pc = 0x1be274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1be278: 0x83a50143  lb          $a1, 0x143($sp)
    ctx->pc = 0x1be278u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 323)));
    // 0x1be27c: 0xc06f330  jal         func_1BCCC0
    ctx->pc = 0x1BE27Cu;
    SET_GPR_U32(ctx, 31, 0x1BE284u);
    ctx->pc = 0x1BCCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCCC0u, 0x1BE27Cu, 0x1BE284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE284u;
label_1be284:
    // 0x1be284: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1be284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be288: 0xafa40294  sw          $a0, 0x294($sp)
    ctx->pc = 0x1be288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 4));
    // 0x1be28c: 0x8fa50294  lw          $a1, 0x294($sp)
    ctx->pc = 0x1be28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
    // 0x1be290: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BE290u;
    {
        const bool branch_taken_0x1be290 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be290) {
            ctx->pc = 0x1BE2D4u;
            goto label_1be2d4;
        }
    }
    ctx->pc = 0x1BE298u;
    // 0x1be298: 0x83a20143  lb          $v0, 0x143($sp)
    ctx->pc = 0x1be298u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 323)));
    // 0x1be29c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1be29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1be2a0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1be2a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1be2a4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1be2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1be2a8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1be2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x1be2ac: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x1be2acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1be2b0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE2B0u;
    {
        const bool branch_taken_0x1be2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1be2b0) {
            ctx->pc = 0x1BE2D4u;
            goto label_1be2d4;
        }
    }
    ctx->pc = 0x1BE2B8u;
    // 0x1be2b8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1be2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1be2bc: 0x8fa50294  lw          $a1, 0x294($sp)
    ctx->pc = 0x1be2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
    // 0x1be2c0: 0xc06e7c8  jal         func_1B9F20
    ctx->pc = 0x1BE2C0u;
    SET_GPR_U32(ctx, 31, 0x1BE2C8u);
    ctx->pc = 0x1B9F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9F20u, 0x1BE2C0u, 0x1BE2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE2C8u;
label_1be2c8:
    // 0x1be2c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1be2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be2cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE2CCu;
    {
        const bool branch_taken_0x1be2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be2cc) {
            ctx->pc = 0x1BE2DCu;
            goto label_1be2dc;
        }
    }
    ctx->pc = 0x1BE2D4u;
label_1be2d4:
    // 0x1be2d4: 0x2402fc18  addiu       $v0, $zero, -0x3E8
    ctx->pc = 0x1be2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    // 0x1be2d8: 0xa7a20146  sh          $v0, 0x146($sp)
    ctx->pc = 0x1be2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 326), (uint16_t)GPR_U32(ctx, 2));
label_1be2dc:
    // 0x1be2dc: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x1be2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1be2e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1be2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be2e4: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1be2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1be2e8: 0xc06fc74  jal         func_1BF1D0
    ctx->pc = 0x1BE2E8u;
    SET_GPR_U32(ctx, 31, 0x1BE2F0u);
    ctx->pc = 0x1BF1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF1D0u, 0x1BE2E8u, 0x1BE2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE2F0u;
label_1be2f0:
    // 0x1be2f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1be2f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be2f4: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x1be2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1be2f8: 0x8fa402b0  lw          $a0, 0x2B0($sp)
    ctx->pc = 0x1be2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1be2fc: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1be2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1be300: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1be300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1be304: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1be304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be308: 0xc070010  jal         func_1C0040
    ctx->pc = 0x1BE308u;
    SET_GPR_U32(ctx, 31, 0x1BE310u);
    ctx->pc = 0x1C0040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0040u, 0x1BE308u, 0x1BE310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE310u;
label_1be310:
    // 0x1be310: 0xa3a00142  sb          $zero, 0x142($sp)
    ctx->pc = 0x1be310u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 322), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be314: 0x8fa402b0  lw          $a0, 0x2B0($sp)
    ctx->pc = 0x1be314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1be318: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1be318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1be31c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1be31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1be320: 0xac8200a4  sw          $v0, 0xA4($a0)
    ctx->pc = 0x1be320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 2));
    // 0x1be324: 0x8fa602b0  lw          $a2, 0x2B0($sp)
    ctx->pc = 0x1be324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1be328: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1be328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be32c: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1be32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1be330: 0xc070498  jal         func_1C1260
    ctx->pc = 0x1BE330u;
    SET_GPR_U32(ctx, 31, 0x1BE338u);
    ctx->pc = 0x1C1260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1260u, 0x1BE330u, 0x1BE338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE338u;
label_1be338:
    // 0x1be338: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1be338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be33c: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1be33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1be340: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1be340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be344: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1be344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1be348: 0xc06eea8  jal         func_1BBAA0
    ctx->pc = 0x1BE348u;
    SET_GPR_U32(ctx, 31, 0x1BE350u);
    ctx->pc = 0x1BBAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAA0u, 0x1BE348u, 0x1BE350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE350u;
label_1be350:
    // 0x1be350: 0x27a20260  addiu       $v0, $sp, 0x260
    ctx->pc = 0x1be350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1be354: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1be354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be358: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x1be358u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1be35c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1be35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be360: 0xc06f8f0  jal         func_1BE3C0
    ctx->pc = 0x1BE360u;
    SET_GPR_U32(ctx, 31, 0x1BE368u);
    ctx->pc = 0x1BE3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3C0u, 0x1BE360u, 0x1BE368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE368u;
label_1be368:
    // 0x1be368: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x1be368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x1be36c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1be36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1be370: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1be370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be374: 0xc056094  jal         func_158250
    ctx->pc = 0x1BE374u;
    SET_GPR_U32(ctx, 31, 0x1BE37Cu);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1BE374u, 0x1BE37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE37Cu;
label_1be37c:
    // 0x1be37c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1be37cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be380: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1be380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1be384: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1be384u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1be388: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1be388u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1be38c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1be38cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1be390: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1be390u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1be394: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1be394u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be398: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1be398u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be39c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1be39cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be3a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1be3a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be3a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1be3a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be3a8: 0x27bd02c0  addiu       $sp, $sp, 0x2C0
    ctx->pc = 0x1be3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x1be3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE3B4u;
    // 0x1be3b4: 0x0  nop
    ctx->pc = 0x1be3b4u;
    // NOP
    // 0x1be3b8: 0x0  nop
    ctx->pc = 0x1be3b8u;
    // NOP
    // 0x1be3bc: 0x0  nop
    ctx->pc = 0x1be3bcu;
    // NOP
    ctx->pc = 0x1be3c0u;
}
