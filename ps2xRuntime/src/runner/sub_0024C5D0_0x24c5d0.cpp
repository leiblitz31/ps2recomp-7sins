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

// Function: sub_0024C5D0
// Address: 0x24c5d0 - 0x24d3e0
void sub_0024C5D0_0x24c5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C5D0_0x24c5d0");
#endif

    switch (ctx->pc) {
        case 0x24c610u: goto label_24c610;
        case 0x24c61cu: goto label_24c61c;
        case 0x24c634u: goto label_24c634;
        case 0x24c648u: goto label_24c648;
        case 0x24c650u: goto label_24c650;
        case 0x24c65cu: goto label_24c65c;
        case 0x24c6a8u: goto label_24c6a8;
        case 0x24c6d0u: goto label_24c6d0;
        case 0x24c708u: goto label_24c708;
        case 0x24c730u: goto label_24c730;
        case 0x24c76cu: goto label_24c76c;
        case 0x24c7acu: goto label_24c7ac;
        case 0x24c7d4u: goto label_24c7d4;
        case 0x24c814u: goto label_24c814;
        case 0x24c88cu: goto label_24c88c;
        case 0x24c8b0u: goto label_24c8b0;
        case 0x24c8dcu: goto label_24c8dc;
        case 0x24c8fcu: goto label_24c8fc;
        case 0x24c934u: goto label_24c934;
        case 0x24c968u: goto label_24c968;
        case 0x24c98cu: goto label_24c98c;
        case 0x24c9c4u: goto label_24c9c4;
        case 0x24ce34u: goto label_24ce34;
        case 0x24ce5cu: goto label_24ce5c;
        case 0x24ce68u: goto label_24ce68;
        case 0x24cec8u: goto label_24cec8;
        case 0x24ced8u: goto label_24ced8;
        case 0x24cefcu: goto label_24cefc;
        case 0x24cf10u: goto label_24cf10;
        case 0x24cf3cu: goto label_24cf3c;
        case 0x24cf54u: goto label_24cf54;
        case 0x24cf78u: goto label_24cf78;
        case 0x24cf84u: goto label_24cf84;
        case 0x24cfd4u: goto label_24cfd4;
        case 0x24cfe4u: goto label_24cfe4;
        case 0x24d014u: goto label_24d014;
        case 0x24d028u: goto label_24d028;
        case 0x24d058u: goto label_24d058;
        case 0x24d070u: goto label_24d070;
        case 0x24d094u: goto label_24d094;
        case 0x24d0a0u: goto label_24d0a0;
        case 0x24d0b4u: goto label_24d0b4;
        case 0x24d114u: goto label_24d114;
        case 0x24d150u: goto label_24d150;
        case 0x24d15cu: goto label_24d15c;
        case 0x24d170u: goto label_24d170;
        case 0x24d184u: goto label_24d184;
        case 0x24d19cu: goto label_24d19c;
        case 0x24d1a4u: goto label_24d1a4;
        case 0x24d1b0u: goto label_24d1b0;
        case 0x24d1ccu: goto label_24d1cc;
        case 0x24d1e8u: goto label_24d1e8;
        case 0x24d200u: goto label_24d200;
        case 0x24d20cu: goto label_24d20c;
        case 0x24d21cu: goto label_24d21c;
        case 0x24d230u: goto label_24d230;
        case 0x24d258u: goto label_24d258;
        case 0x24d264u: goto label_24d264;
        case 0x24d270u: goto label_24d270;
        case 0x24d288u: goto label_24d288;
        case 0x24d2c0u: goto label_24d2c0;
        case 0x24d2f0u: goto label_24d2f0;
        case 0x24d320u: goto label_24d320;
        case 0x24d350u: goto label_24d350;
        case 0x24d364u: goto label_24d364;
        case 0x24d384u: goto label_24d384;
        case 0x24d3a0u: goto label_24d3a0;
        default: break;
    }

    ctx->pc = 0x24c5d0u;

    // 0x24c5d0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x24c5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x24c5d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x24c5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x24c5d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x24c5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x24c5dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x24c5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x24c5e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x24c5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x24c5e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x24c5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x24c5e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24c5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x24c5ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24c5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24c5f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24c5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24c5f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24c5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24c5f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24c5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24c5fc: 0xafa40190  sw          $a0, 0x190($sp)
    ctx->pc = 0x24c5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 4));
    // 0x24c600: 0xa3a501a0  sb          $a1, 0x1A0($sp)
    ctx->pc = 0x24c600u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 416), (uint8_t)GPR_U32(ctx, 5));
    // 0x24c604: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x24c604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x24c608: 0xc064238  jal         func_1908E0
    ctx->pc = 0x24C608u;
    SET_GPR_U32(ctx, 31, 0x24C610u);
    ctx->pc = 0x1908E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1908E0u, 0x24C608u, 0x24C610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C610u;
label_24c610:
    // 0x24c610: 0x27a40188  addiu       $a0, $sp, 0x188
    ctx->pc = 0x24c610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x24c614: 0xc064754  jal         func_191D50
    ctx->pc = 0x24C614u;
    SET_GPR_U32(ctx, 31, 0x24C61Cu);
    ctx->pc = 0x191D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191D50u, 0x24C614u, 0x24C61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C61Cu;
label_24c61c:
    // 0x24c61c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24c61cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c620: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x24c620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24c624: 0x27a40144  addiu       $a0, $sp, 0x144
    ctx->pc = 0x24c624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x24c628: 0x2465004c  addiu       $a1, $v1, 0x4C
    ctx->pc = 0x24c628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
    // 0x24c62c: 0xc064064  jal         func_190190
    ctx->pc = 0x24C62Cu;
    SET_GPR_U32(ctx, 31, 0x24C634u);
    ctx->pc = 0x190190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190190u, 0x24C62Cu, 0x24C634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C634u;
label_24c634:
    // 0x24c634: 0x27a40188  addiu       $a0, $sp, 0x188
    ctx->pc = 0x24c634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x24c638: 0x27a20144  addiu       $v0, $sp, 0x144
    ctx->pc = 0x24c638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x24c63c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24c63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c640: 0xc064744  jal         func_191D10
    ctx->pc = 0x24C640u;
    SET_GPR_U32(ctx, 31, 0x24C648u);
    ctx->pc = 0x191D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191D10u, 0x24C640u, 0x24C648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C648u;
label_24c648:
    // 0x24c648: 0x100002c4  b           . + 4 + (0x2C4 << 2)
    ctx->pc = 0x24C648u;
    {
        const bool branch_taken_0x24c648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c648) {
            ctx->pc = 0x24D15Cu;
            goto label_24d15c;
        }
    }
    ctx->pc = 0x24C650u;
label_24c650:
    // 0x24c650: 0x27a40188  addiu       $a0, $sp, 0x188
    ctx->pc = 0x24c650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x24c654: 0xc053b9c  jal         func_14EE70
    ctx->pc = 0x24C654u;
    SET_GPR_U32(ctx, 31, 0x24C65Cu);
    ctx->pc = 0x14EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE70u, 0x24C654u, 0x24C65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C65Cu;
label_24c65c:
    // 0x24c65c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24c65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c660: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24c660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24c664: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24c664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c668: 0x93a201a0  lbu         $v0, 0x1A0($sp)
    ctx->pc = 0x24c668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x24c66c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x24c66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24c670: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C670u;
    {
        const bool branch_taken_0x24c670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c670) {
            ctx->pc = 0x24C688u;
            goto label_24c688;
        }
    }
    ctx->pc = 0x24C678u;
    // 0x24c678: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x24c678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24c67c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24c67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24c680: 0x104000e8  beqz        $v0, . + 4 + (0xE8 << 2)
    ctx->pc = 0x24C680u;
    {
        const bool branch_taken_0x24c680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c680) {
            ctx->pc = 0x24CA24u;
            goto label_24ca24;
        }
    }
    ctx->pc = 0x24C688u;
label_24c688:
    // 0x24c688: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x24c688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x24c68c: 0x2251824  and         $v1, $s1, $a1
    ctx->pc = 0x24c68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 5));
    // 0x24c690: 0x1060007a  beqz        $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x24C690u;
    {
        const bool branch_taken_0x24c690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c690) {
            ctx->pc = 0x24C87Cu;
            goto label_24c87c;
        }
    }
    ctx->pc = 0x24C698u;
    // 0x24c698: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x24c698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24c69c: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24c69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24c6a0: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x24C6A0u;
    SET_GPR_U32(ctx, 31, 0x24C6A8u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x24C6A0u, 0x24C6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C6A8u;
label_24c6a8:
    // 0x24c6a8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x24c6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24c6ac: 0x11187c  dsll32      $v1, $s1, 1
    ctx->pc = 0x24c6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 1));
    // 0x24c6b0: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x24c6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x24c6b4: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x24c6b4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x24c6b8: 0x1012  mflo        $v0
    ctx->pc = 0x24c6b8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x24c6bc: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x24c6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
    // 0x24c6c0: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x24c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24c6c4: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24c6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24c6c8: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x24C6C8u;
    SET_GPR_U32(ctx, 31, 0x24C6D0u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x24C6C8u, 0x24C6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C6D0u;
label_24c6d0:
    // 0x24c6d0: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x24c6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24c6d4: 0x11187c  dsll32      $v1, $s1, 1
    ctx->pc = 0x24c6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 1));
    // 0x24c6d8: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x24c6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x24c6dc: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x24c6dcu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x24c6e0: 0x1810  mfhi        $v1
    ctx->pc = 0x24c6e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x24c6e4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x24c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x24c6e8: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x24c6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x24c6ec: 0xa3a0018f  sb          $zero, 0x18F($sp)
    ctx->pc = 0x24c6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 399), (uint8_t)GPR_U32(ctx, 0));
    // 0x24c6f0: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x24c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x24c6f4: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x24c6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x24c6f8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x24c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24c6fc: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24c6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24c700: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x24C700u;
    SET_GPR_U32(ctx, 31, 0x24C708u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x24C700u, 0x24C708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C708u;
label_24c708:
    // 0x24c708: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x24c708u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x24c70c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x24c70cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24c710: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x24C710u;
    {
        const bool branch_taken_0x24c710 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c710) {
            ctx->pc = 0x24C748u;
            goto label_24c748;
        }
    }
    ctx->pc = 0x24C718u;
    // 0x24c718: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x24c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x24c71c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x24c71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x24c720: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x24c720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24c724: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x24c724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x24c728: 0xc0477d8  jal         func_11DF60
    ctx->pc = 0x24C728u;
    SET_GPR_U32(ctx, 31, 0x24C730u);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x24C728u, 0x24C730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C730u;
label_24c730:
    // 0x24c730: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x24c730u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x24c734: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x24c734u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24c738: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C738u;
    {
        const bool branch_taken_0x24c738 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c738) {
            ctx->pc = 0x24C748u;
            goto label_24c748;
        }
    }
    ctx->pc = 0x24C740u;
    // 0x24c740: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24c740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c744: 0xa3a4018f  sb          $a0, 0x18F($sp)
    ctx->pc = 0x24c744u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 399), (uint8_t)GPR_U32(ctx, 4));
label_24c748:
    // 0x24c748: 0x93a5018f  lbu         $a1, 0x18F($sp)
    ctx->pc = 0x24c748u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 399)));
    // 0x24c74c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x24C74Cu;
    {
        const bool branch_taken_0x24c74c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c74c) {
            ctx->pc = 0x24C778u;
            goto label_24c778;
        }
    }
    ctx->pc = 0x24C754u;
    // 0x24c754: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x24c754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24c758: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24c758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24c75c: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x24c75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x24c760: 0x8fa60184  lw          $a2, 0x184($sp)
    ctx->pc = 0x24c760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x24c764: 0xc092158  jal         func_248560
    ctx->pc = 0x24C764u;
    SET_GPR_U32(ctx, 31, 0x24C76Cu);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x24C764u, 0x24C76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C76Cu;
label_24c76c:
    // 0x24c76c: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x24c76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x24c770: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24C770u;
    {
        const bool branch_taken_0x24c770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c770) {
            ctx->pc = 0x24C77Cu;
            goto label_24c77c;
        }
    }
    ctx->pc = 0x24C778u;
label_24c778:
    // 0x24c778: 0xafa00138  sw          $zero, 0x138($sp)
    ctx->pc = 0x24c778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
label_24c77c:
    // 0x24c77c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x24c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x24c780: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x24c780u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c784: 0xa3a0018e  sb          $zero, 0x18E($sp)
    ctx->pc = 0x24c784u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 398), (uint8_t)GPR_U32(ctx, 0));
    // 0x24c788: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x24c788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x24c78c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24c790: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x24c790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x24c794: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x24c794u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24c798: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x24c798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x24c79c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x24c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24c7a0: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24c7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24c7a4: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x24C7A4u;
    SET_GPR_U32(ctx, 31, 0x24C7ACu);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x24C7A4u, 0x24C7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C7ACu;
label_24c7ac:
    // 0x24c7ac: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x24c7acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24c7b0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x24c7b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24c7b4: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x24C7B4u;
    {
        const bool branch_taken_0x24c7b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c7b4) {
            ctx->pc = 0x24C7ECu;
            goto label_24c7ec;
        }
    }
    ctx->pc = 0x24C7BCu;
    // 0x24c7bc: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x24c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x24c7c0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x24c7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x24c7c4: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x24c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24c7c8: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24c7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24c7cc: 0xc0477d8  jal         func_11DF60
    ctx->pc = 0x24C7CCu;
    SET_GPR_U32(ctx, 31, 0x24C7D4u);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x24C7CCu, 0x24C7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C7D4u;
label_24c7d4:
    // 0x24c7d4: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x24c7d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x24c7d8: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x24c7d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24c7dc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C7DCu;
    {
        const bool branch_taken_0x24c7dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c7dc) {
            ctx->pc = 0x24C7ECu;
            goto label_24c7ec;
        }
    }
    ctx->pc = 0x24C7E4u;
    // 0x24c7e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24c7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c7e8: 0xa3a3018e  sb          $v1, 0x18E($sp)
    ctx->pc = 0x24c7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 398), (uint8_t)GPR_U32(ctx, 3));
label_24c7ec:
    // 0x24c7ec: 0x93a2018e  lbu         $v0, 0x18E($sp)
    ctx->pc = 0x24c7ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 398)));
    // 0x24c7f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24C7F0u;
    {
        const bool branch_taken_0x24c7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c7f0) {
            ctx->pc = 0x24C820u;
            goto label_24c820;
        }
    }
    ctx->pc = 0x24C7F8u;
    // 0x24c7f8: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x24c7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24c7fc: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x24c7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x24c800: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x24c800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c804: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x24c804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x24c808: 0x8fa60184  lw          $a2, 0x184($sp)
    ctx->pc = 0x24c808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x24c80c: 0xc092158  jal         func_248560
    ctx->pc = 0x24C80Cu;
    SET_GPR_U32(ctx, 31, 0x24C814u);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x24C80Cu, 0x24C814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C814u;
label_24c814:
    // 0x24c814: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x24c814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x24c818: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24C818u;
    {
        const bool branch_taken_0x24c818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c818) {
            ctx->pc = 0x24C824u;
            goto label_24c824;
        }
    }
    ctx->pc = 0x24C820u;
label_24c820:
    // 0x24c820: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x24c820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
label_24c824:
    // 0x24c824: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x24c824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x24c828: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x24c828u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c82c: 0x10150005  beq         $zero, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C82Cu;
    {
        const bool branch_taken_0x24c82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 21));
        if (branch_taken_0x24c82c) {
            ctx->pc = 0x24C844u;
            goto label_24c844;
        }
    }
    ctx->pc = 0x24C834u;
    // 0x24c834: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x24c834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24c838: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x24c838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x24c83c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24C83Cu;
    {
        const bool branch_taken_0x24c83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c83c) {
            ctx->pc = 0x24C848u;
            goto label_24c848;
        }
    }
    ctx->pc = 0x24C844u;
label_24c844:
    // 0x24c844: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x24c844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
label_24c848:
    // 0x24c848: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x24c848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x24c84c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x24c84cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c850: 0x10140005  beq         $zero, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C850u;
    {
        const bool branch_taken_0x24c850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 20));
        if (branch_taken_0x24c850) {
            ctx->pc = 0x24C868u;
            goto label_24c868;
        }
    }
    ctx->pc = 0x24C858u;
    // 0x24c858: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x24c858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24c85c: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x24c85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x24c860: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24C860u;
    {
        const bool branch_taken_0x24c860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c860) {
            ctx->pc = 0x24C86Cu;
            goto label_24c86c;
        }
    }
    ctx->pc = 0x24C868u;
label_24c868:
    // 0x24c868: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x24c868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
label_24c86c:
    // 0x24c86c: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x24c86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x24c870: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x24c870u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c874: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x24C874u;
    {
        const bool branch_taken_0x24c874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c874) {
            ctx->pc = 0x24CA24u;
            goto label_24ca24;
        }
    }
    ctx->pc = 0x24C87Cu;
label_24c87c:
    // 0x24c87c: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x24c87cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24c880: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x24c880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x24c884: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x24C884u;
    SET_GPR_U32(ctx, 31, 0x24C88Cu);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x24C884u, 0x24C88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C88Cu;
label_24c88c:
    // 0x24c88c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24c890: 0x222001b  divu        $zero, $s1, $v0
    ctx->pc = 0x24c890u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x24c894: 0x1012  mflo        $v0
    ctx->pc = 0x24c894u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x24c898: 0x245effff  addiu       $fp, $v0, -0x1
    ctx->pc = 0x24c898u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24c89c: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x24c89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24c8a0: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x24c8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x24c8a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x24c8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c8a8: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x24C8A8u;
    SET_GPR_U32(ctx, 31, 0x24C8B0u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x24C8A8u, 0x24C8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C8B0u;
label_24c8b0:
    // 0x24c8b0: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x24c8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24c8b4: 0x224001b  divu        $zero, $s1, $a0
    ctx->pc = 0x24c8b4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x24c8b8: 0x1010  mfhi        $v0
    ctx->pc = 0x24c8b8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x24c8bc: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x24c8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
    // 0x24c8c0: 0xa3a0018d  sb          $zero, 0x18D($sp)
    ctx->pc = 0x24c8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 397), (uint8_t)GPR_U32(ctx, 0));
    // 0x24c8c4: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x24c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x24c8c8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x24c8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x24c8cc: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x24c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24c8d0: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24c8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24c8d4: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x24C8D4u;
    SET_GPR_U32(ctx, 31, 0x24C8DCu);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x24C8D4u, 0x24C8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C8DCu;
label_24c8dc:
    // 0x24c8dc: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x24c8dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24c8e0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x24c8e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24c8e4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x24C8E4u;
    {
        const bool branch_taken_0x24c8e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c8e4) {
            ctx->pc = 0x24C910u;
            goto label_24c910;
        }
    }
    ctx->pc = 0x24C8ECu;
    // 0x24c8ec: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x24c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24c8f0: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24c8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24c8f4: 0xc0477d8  jal         func_11DF60
    ctx->pc = 0x24C8F4u;
    SET_GPR_U32(ctx, 31, 0x24C8FCu);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x24C8F4u, 0x24C8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C8FCu;
label_24c8fc:
    // 0x24c8fc: 0x3c2082b  sltu        $at, $fp, $v0
    ctx->pc = 0x24c8fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24c900: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C900u;
    {
        const bool branch_taken_0x24c900 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c900) {
            ctx->pc = 0x24C910u;
            goto label_24c910;
        }
    }
    ctx->pc = 0x24C908u;
    // 0x24c908: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24c908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c90c: 0xa3a4018d  sb          $a0, 0x18D($sp)
    ctx->pc = 0x24c90cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 397), (uint8_t)GPR_U32(ctx, 4));
label_24c910:
    // 0x24c910: 0x93a5018d  lbu         $a1, 0x18D($sp)
    ctx->pc = 0x24c910u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 397)));
    // 0x24c914: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x24C914u;
    {
        const bool branch_taken_0x24c914 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c914) {
            ctx->pc = 0x24C940u;
            goto label_24c940;
        }
    }
    ctx->pc = 0x24C91Cu;
    // 0x24c91c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x24c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24c920: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24c920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24c924: 0x8fa5017c  lw          $a1, 0x17C($sp)
    ctx->pc = 0x24c924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x24c928: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x24c928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c92c: 0xc092158  jal         func_248560
    ctx->pc = 0x24C92Cu;
    SET_GPR_U32(ctx, 31, 0x24C934u);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x24C92Cu, 0x24C934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C934u;
label_24c934:
    // 0x24c934: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x24c934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x24c938: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24C938u;
    {
        const bool branch_taken_0x24c938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c938) {
            ctx->pc = 0x24C944u;
            goto label_24c944;
        }
    }
    ctx->pc = 0x24C940u;
label_24c940:
    // 0x24c940: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x24c940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
label_24c944:
    // 0x24c944: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x24c944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x24c948: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x24c948u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c94c: 0xa3a0018c  sb          $zero, 0x18C($sp)
    ctx->pc = 0x24c94cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 396), (uint8_t)GPR_U32(ctx, 0));
    // 0x24c950: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x24c950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x24c954: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x24c954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x24c958: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x24c958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24c95c: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x24c95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x24c960: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x24C960u;
    SET_GPR_U32(ctx, 31, 0x24C968u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x24C960u, 0x24C968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C968u;
label_24c968:
    // 0x24c968: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x24c968u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24c96c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x24c96cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24c970: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x24C970u;
    {
        const bool branch_taken_0x24c970 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c970) {
            ctx->pc = 0x24C9A0u;
            goto label_24c9a0;
        }
    }
    ctx->pc = 0x24C978u;
    // 0x24c978: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x24c978u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x24c97c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x24c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24c980: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24c980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24c984: 0xc0477d8  jal         func_11DF60
    ctx->pc = 0x24C984u;
    SET_GPR_U32(ctx, 31, 0x24C98Cu);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x24C984u, 0x24C98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C98Cu;
label_24c98c:
    // 0x24c98c: 0x3c2082b  sltu        $at, $fp, $v0
    ctx->pc = 0x24c98cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24c990: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C990u;
    {
        const bool branch_taken_0x24c990 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c990) {
            ctx->pc = 0x24C9A0u;
            goto label_24c9a0;
        }
    }
    ctx->pc = 0x24C998u;
    // 0x24c998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24c998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c99c: 0xa3a2018c  sb          $v0, 0x18C($sp)
    ctx->pc = 0x24c99cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 396), (uint8_t)GPR_U32(ctx, 2));
label_24c9a0:
    // 0x24c9a0: 0x93a4018c  lbu         $a0, 0x18C($sp)
    ctx->pc = 0x24c9a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x24c9a4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x24C9A4u;
    {
        const bool branch_taken_0x24c9a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c9a4) {
            ctx->pc = 0x24C9D0u;
            goto label_24c9d0;
        }
    }
    ctx->pc = 0x24C9ACu;
    // 0x24c9ac: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x24c9acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24c9b0: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x24c9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x24c9b4: 0x8fa5017c  lw          $a1, 0x17C($sp)
    ctx->pc = 0x24c9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x24c9b8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x24c9b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c9bc: 0xc092158  jal         func_248560
    ctx->pc = 0x24C9BCu;
    SET_GPR_U32(ctx, 31, 0x24C9C4u);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x24C9BCu, 0x24C9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C9C4u;
label_24c9c4:
    // 0x24c9c4: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x24c9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x24c9c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24C9C8u;
    {
        const bool branch_taken_0x24c9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c9c8) {
            ctx->pc = 0x24C9D4u;
            goto label_24c9d4;
        }
    }
    ctx->pc = 0x24C9D0u;
label_24c9d0:
    // 0x24c9d0: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x24c9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
label_24c9d4:
    // 0x24c9d4: 0x8fa30124  lw          $v1, 0x124($sp)
    ctx->pc = 0x24c9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x24c9d8: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x24c9d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c9dc: 0x10140005  beq         $zero, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C9DCu;
    {
        const bool branch_taken_0x24c9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 20));
        if (branch_taken_0x24c9dc) {
            ctx->pc = 0x24C9F4u;
            goto label_24c9f4;
        }
    }
    ctx->pc = 0x24C9E4u;
    // 0x24c9e4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x24c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24c9e8: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x24c9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x24c9ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24C9ECu;
    {
        const bool branch_taken_0x24c9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c9ec) {
            ctx->pc = 0x24C9F8u;
            goto label_24c9f8;
        }
    }
    ctx->pc = 0x24C9F4u;
label_24c9f4:
    // 0x24c9f4: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x24c9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_24c9f8:
    // 0x24c9f8: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x24c9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x24c9fc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x24c9fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ca00: 0x10150005  beq         $zero, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x24CA00u;
    {
        const bool branch_taken_0x24ca00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 21));
        if (branch_taken_0x24ca00) {
            ctx->pc = 0x24CA18u;
            goto label_24ca18;
        }
    }
    ctx->pc = 0x24CA08u;
    // 0x24ca08: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x24ca08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24ca0c: 0xafa5011c  sw          $a1, 0x11C($sp)
    ctx->pc = 0x24ca0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 5));
    // 0x24ca10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24CA10u;
    {
        const bool branch_taken_0x24ca10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ca10) {
            ctx->pc = 0x24CA1Cu;
            goto label_24ca1c;
        }
    }
    ctx->pc = 0x24CA18u;
label_24ca18:
    // 0x24ca18: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x24ca18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
label_24ca1c:
    // 0x24ca1c: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x24ca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x24ca20: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x24ca20u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24ca24:
    // 0x24ca24: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x24ca24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24ca28: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x24ca28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x24ca2c: 0x104000c7  beqz        $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x24CA2Cu;
    {
        const bool branch_taken_0x24ca2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ca2c) {
            ctx->pc = 0x24CD4Cu;
            goto label_24cd4c;
        }
    }
    ctx->pc = 0x24CA34u;
    // 0x24ca34: 0xae150010  sw          $s5, 0x10($s0)
    ctx->pc = 0x24ca34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
    // 0x24ca38: 0xae140014  sw          $s4, 0x14($s0)
    ctx->pc = 0x24ca38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 20));
    // 0x24ca3c: 0x10170003  beq         $zero, $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x24CA3Cu;
    {
        const bool branch_taken_0x24ca3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 23));
        if (branch_taken_0x24ca3c) {
            ctx->pc = 0x24CA4Cu;
            goto label_24ca4c;
        }
    }
    ctx->pc = 0x24CA44u;
    // 0x24ca44: 0x14160007  bne         $zero, $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x24CA44u;
    {
        const bool branch_taken_0x24ca44 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 22));
        if (branch_taken_0x24ca44) {
            ctx->pc = 0x24CA64u;
            goto label_24ca64;
        }
    }
    ctx->pc = 0x24CA4Cu;
label_24ca4c:
    // 0x24ca4c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x24ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24ca50: 0x34440004  ori         $a0, $v0, 0x4
    ctx->pc = 0x24ca50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x24ca54: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x24ca54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x24ca58: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x24ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24ca5c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x24ca5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x24ca60: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x24ca60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_24ca64:
    // 0x24ca64: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24ca68: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x24ca68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x24ca6c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x24CA6Cu;
    {
        const bool branch_taken_0x24ca6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ca6c) {
            ctx->pc = 0x24CB90u;
            goto label_24cb90;
        }
    }
    ctx->pc = 0x24CA74u;
    // 0x24ca74: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24ca74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24ca78: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x24CA78u;
    {
        const bool branch_taken_0x24ca78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ca78) {
            ctx->pc = 0x24CAD0u;
            goto label_24cad0;
        }
    }
    ctx->pc = 0x24CA80u;
    // 0x24ca80: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x24ca80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24ca84: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x24ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x24ca88: 0x34440080  ori         $a0, $v0, 0x80
    ctx->pc = 0x24ca88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x24ca8c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x24ca8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x24ca90: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x24ca90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24ca94: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x24ca94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x24ca98: 0x2402f7ff  addiu       $v0, $zero, -0x801
    ctx->pc = 0x24ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x24ca9c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x24ca9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x24caa0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x24caa0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x24caa4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x24caa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24caa8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x24caa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x24caac: 0x2207c  dsll32      $a0, $v0, 1
    ctx->pc = 0x24caacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 1));
    // 0x24cab0: 0x4207e  dsrl32      $a0, $a0, 1
    ctx->pc = 0x24cab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 1));
    // 0x24cab4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x24cab4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x24cab8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x24cab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24cabc: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x24cabcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x24cac0: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x24cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x24cac4: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x24cac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24cac8: 0xc41024  and         $v0, $a2, $a0
    ctx->pc = 0x24cac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x24cacc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x24caccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_24cad0:
    // 0x24cad0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x24cad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24cad4: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x24CAD4u;
    {
        const bool branch_taken_0x24cad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cad4) {
            ctx->pc = 0x24CB30u;
            goto label_24cb30;
        }
    }
    ctx->pc = 0x24CADCu;
    // 0x24cadc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x24cadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24cae0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x24cae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x24cae4: 0x34820040  ori         $v0, $a0, 0x40
    ctx->pc = 0x24cae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x24cae8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x24cae8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x24caec: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x24caecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24caf0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x24caf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24caf4: 0x2405fbff  addiu       $a1, $zero, -0x401
    ctx->pc = 0x24caf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x24caf8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x24caf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x24cafc: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x24cafcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x24cb00: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x24cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24cb04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x24cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24cb08: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x24cb08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
    // 0x24cb0c: 0x34a4ffff  ori         $a0, $a1, 0xFFFF
    ctx->pc = 0x24cb0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x24cb10: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x24cb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x24cb14: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x24cb14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x24cb18: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x24cb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24cb1c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x24cb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24cb20: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x24cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x24cb24: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x24cb24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24cb28: 0xa61024  and         $v0, $a1, $a2
    ctx->pc = 0x24cb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x24cb2c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x24cb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_24cb30:
    // 0x24cb30: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x24cb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24cb34: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x24cb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x24cb38: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x24CB38u;
    {
        const bool branch_taken_0x24cb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cb38) {
            ctx->pc = 0x24CCA8u;
            goto label_24cca8;
        }
    }
    ctx->pc = 0x24CB40u;
    // 0x24cb40: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x24cb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24cb44: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x24cb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x24cb48: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x24CB48u;
    {
        const bool branch_taken_0x24cb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24cb48) {
            ctx->pc = 0x24CCA8u;
            goto label_24cca8;
        }
    }
    ctx->pc = 0x24CB50u;
    // 0x24cb50: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x24cb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24cb54: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24CB54u;
    {
        const bool branch_taken_0x24cb54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cb54) {
            ctx->pc = 0x24CB6Cu;
            goto label_24cb6c;
        }
    }
    ctx->pc = 0x24CB5Cu;
    // 0x24cb5c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x24cb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24cb60: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x24cb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x24cb64: 0x34820800  ori         $v0, $a0, 0x800
    ctx->pc = 0x24cb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
    // 0x24cb68: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x24cb68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_24cb6c:
    // 0x24cb6c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x24cb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24cb70: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x24CB70u;
    {
        const bool branch_taken_0x24cb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cb70) {
            ctx->pc = 0x24CCA8u;
            goto label_24cca8;
        }
    }
    ctx->pc = 0x24CB78u;
    // 0x24cb78: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x24cb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24cb7c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x24cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x24cb80: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x24cb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x24cb84: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x24cb84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x24cb88: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x24CB88u;
    {
        const bool branch_taken_0x24cb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cb88) {
            ctx->pc = 0x24CCA8u;
            goto label_24cca8;
        }
    }
    ctx->pc = 0x24CB90u;
label_24cb90:
    // 0x24cb90: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x24cb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24cb94: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x24CB94u;
    {
        const bool branch_taken_0x24cb94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cb94) {
            ctx->pc = 0x24CBF0u;
            goto label_24cbf0;
        }
    }
    ctx->pc = 0x24CB9Cu;
    // 0x24cb9c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24cba0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x24cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24cba4: 0x34640010  ori         $a0, $v1, 0x10
    ctx->pc = 0x24cba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24cba8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x24cba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x24cbac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24cbb0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x24cbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24cbb4: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x24cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x24cbb8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x24cbb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24cbbc: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x24cbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x24cbc0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x24cbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24cbc4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x24cbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x24cbc8: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x24cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x24cbcc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24cbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24cbd0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x24cbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24cbd4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x24cbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x24cbd8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x24cbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24cbdc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x24cbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x24cbe0: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x24cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x24cbe4: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x24cbe4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24cbe8: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x24cbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x24cbec: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x24cbecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_24cbf0:
    // 0x24cbf0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x24cbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24cbf4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x24CBF4u;
    {
        const bool branch_taken_0x24cbf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cbf4) {
            ctx->pc = 0x24CC50u;
            goto label_24cc50;
        }
    }
    ctx->pc = 0x24CBFCu;
    // 0x24cbfc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x24cbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24cc00: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x24cc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24cc04: 0x34880020  ori         $t0, $a0, 0x20
    ctx->pc = 0x24cc04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x24cc08: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x24cc08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x24cc0c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x24cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24cc10: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x24cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24cc14: 0x2404fdff  addiu       $a0, $zero, -0x201
    ctx->pc = 0x24cc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x24cc18: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x24cc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x24cc1c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x24cc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x24cc20: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x24cc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24cc24: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x24cc24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24cc28: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x24cc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x24cc2c: 0x3448ffff  ori         $t0, $v0, 0xFFFF
    ctx->pc = 0x24cc2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24cc30: 0xe89024  and         $s2, $a3, $t0
    ctx->pc = 0x24cc30u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x24cc34: 0xac920004  sw          $s2, 0x4($a0)
    ctx->pc = 0x24cc34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 18));
    // 0x24cc38: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x24cc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24cc3c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x24cc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x24cc40: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x24cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x24cc44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24cc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24cc48: 0x829824  and         $s3, $a0, $v0
    ctx->pc = 0x24cc48u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24cc4c: 0xac730004  sw          $s3, 0x4($v1)
    ctx->pc = 0x24cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
label_24cc50:
    // 0x24cc50: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x24cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24cc54: 0x30440002  andi        $a0, $v0, 0x2
    ctx->pc = 0x24cc54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x24cc58: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24CC58u;
    {
        const bool branch_taken_0x24cc58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cc58) {
            ctx->pc = 0x24CCA8u;
            goto label_24cca8;
        }
    }
    ctx->pc = 0x24CC60u;
    // 0x24cc60: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x24cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24cc64: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x24cc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x24cc68: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24CC68u;
    {
        const bool branch_taken_0x24cc68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24cc68) {
            ctx->pc = 0x24CCA8u;
            goto label_24cca8;
        }
    }
    ctx->pc = 0x24CC70u;
    // 0x24cc70: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x24cc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24cc74: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24CC74u;
    {
        const bool branch_taken_0x24cc74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cc74) {
            ctx->pc = 0x24CC8Cu;
            goto label_24cc8c;
        }
    }
    ctx->pc = 0x24CC7Cu;
    // 0x24cc7c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x24cc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24cc80: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x24cc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x24cc84: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x24cc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x24cc88: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x24cc88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_24cc8c:
    // 0x24cc8c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x24cc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24cc90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24CC90u;
    {
        const bool branch_taken_0x24cc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cc90) {
            ctx->pc = 0x24CCA8u;
            goto label_24cca8;
        }
    }
    ctx->pc = 0x24CC98u;
    // 0x24cc98: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x24cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24cc9c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x24cc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x24cca0: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x24cca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x24cca4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x24cca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_24cca8:
    // 0x24cca8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x24cca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x24ccac: 0x10020027  beq         $zero, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x24CCACu;
    {
        const bool branch_taken_0x24ccac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x24ccac) {
            ctx->pc = 0x24CD4Cu;
            goto label_24cd4c;
        }
    }
    ctx->pc = 0x24CCB4u;
    // 0x24ccb4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24ccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24ccb8: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x24ccb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x24ccbc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24CCBCu;
    {
        const bool branch_taken_0x24ccbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ccbc) {
            ctx->pc = 0x24CD0Cu;
            goto label_24cd0c;
        }
    }
    ctx->pc = 0x24CCC4u;
    // 0x24ccc4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24ccc8: 0x10020006  beq         $zero, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24CCC8u;
    {
        const bool branch_taken_0x24ccc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x24ccc8) {
            ctx->pc = 0x24CCE4u;
            goto label_24cce4;
        }
    }
    ctx->pc = 0x24CCD0u;
    // 0x24ccd0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x24ccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24ccd4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x24ccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24ccd8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24ccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24ccdc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x24ccdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24cce0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x24cce0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_24cce4:
    // 0x24cce4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x24cce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24cce8: 0x10020018  beq         $zero, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x24CCE8u;
    {
        const bool branch_taken_0x24cce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x24cce8) {
            ctx->pc = 0x24CD4Cu;
            goto label_24cd4c;
        }
    }
    ctx->pc = 0x24CCF0u;
    // 0x24ccf0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x24ccf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24ccf4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x24ccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24ccf8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x24ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x24ccfc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x24ccfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24cd00: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x24cd00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x24cd04: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x24CD04u;
    {
        const bool branch_taken_0x24cd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cd04) {
            ctx->pc = 0x24CD4Cu;
            goto label_24cd4c;
        }
    }
    ctx->pc = 0x24CD0Cu;
label_24cd0c:
    // 0x24cd0c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x24cd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24cd10: 0x10040006  beq         $zero, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24CD10u;
    {
        const bool branch_taken_0x24cd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x24cd10) {
            ctx->pc = 0x24CD2Cu;
            goto label_24cd2c;
        }
    }
    ctx->pc = 0x24CD18u;
    // 0x24cd18: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24cd1c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x24cd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24cd20: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x24cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x24cd24: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x24cd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x24cd28: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x24cd28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_24cd2c:
    // 0x24cd2c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x24cd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24cd30: 0x10040006  beq         $zero, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24CD30u;
    {
        const bool branch_taken_0x24cd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x24cd30) {
            ctx->pc = 0x24CD4Cu;
            goto label_24cd4c;
        }
    }
    ctx->pc = 0x24CD38u;
    // 0x24cd38: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x24cd38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24cd3c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x24cd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x24cd40: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x24cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x24cd44: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x24cd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24cd48: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x24cd48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_24cd4c:
    // 0x24cd4c: 0x93a401a0  lbu         $a0, 0x1A0($sp)
    ctx->pc = 0x24cd4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x24cd50: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x24cd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x24cd54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24CD54u;
    {
        const bool branch_taken_0x24cd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cd54) {
            ctx->pc = 0x24CD6Cu;
            goto label_24cd6c;
        }
    }
    ctx->pc = 0x24CD5Cu;
    // 0x24cd5c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x24cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24cd60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24cd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24cd64: 0x104000fa  beqz        $v0, . + 4 + (0xFA << 2)
    ctx->pc = 0x24CD64u;
    {
        const bool branch_taken_0x24cd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cd64) {
            ctx->pc = 0x24D150u;
            goto label_24d150;
        }
    }
    ctx->pc = 0x24CD6Cu;
label_24cd6c:
    // 0x24cd6c: 0x16f600d3  bne         $s7, $s6, . + 4 + (0xD3 << 2)
    ctx->pc = 0x24CD6Cu;
    {
        const bool branch_taken_0x24cd6c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 22));
        if (branch_taken_0x24cd6c) {
            ctx->pc = 0x24D0BCu;
            goto label_24d0bc;
        }
    }
    ctx->pc = 0x24CD74u;
    // 0x24cd74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24cd78: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x24cd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x24cd7c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24CD7Cu;
    {
        const bool branch_taken_0x24cd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cd7c) {
            ctx->pc = 0x24CDCCu;
            goto label_24cdcc;
        }
    }
    ctx->pc = 0x24CD84u;
    // 0x24cd84: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24cd88: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24CD88u;
    {
        const bool branch_taken_0x24cd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cd88) {
            ctx->pc = 0x24CDA4u;
            goto label_24cda4;
        }
    }
    ctx->pc = 0x24CD90u;
    // 0x24cd90: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x24cd90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24cd94: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x24cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x24cd98: 0x2402f77f  addiu       $v0, $zero, -0x881
    ctx->pc = 0x24cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965119));
    // 0x24cd9c: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x24cd9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24cda0: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x24cda0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_24cda4:
    // 0x24cda4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x24cda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24cda8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x24CDA8u;
    {
        const bool branch_taken_0x24cda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cda8) {
            ctx->pc = 0x24CE18u;
            goto label_24ce18;
        }
    }
    ctx->pc = 0x24CDB0u;
    // 0x24cdb0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x24cdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24cdb4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x24cdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24cdb8: 0x2402fbbf  addiu       $v0, $zero, -0x441
    ctx->pc = 0x24cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966207));
    // 0x24cdbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24cdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24cdc0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x24cdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x24cdc4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x24CDC4u;
    {
        const bool branch_taken_0x24cdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cdc4) {
            ctx->pc = 0x24CE18u;
            goto label_24ce18;
        }
    }
    ctx->pc = 0x24CDCCu;
label_24cdcc:
    // 0x24cdcc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x24cdccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24cdd0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24CDD0u;
    {
        const bool branch_taken_0x24cdd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cdd0) {
            ctx->pc = 0x24CDECu;
            goto label_24cdec;
        }
    }
    ctx->pc = 0x24CDD8u;
    // 0x24cdd8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24cddc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x24cddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24cde0: 0x2403feef  addiu       $v1, $zero, -0x111
    ctx->pc = 0x24cde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967023));
    // 0x24cde4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x24cde4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24cde8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x24cde8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_24cdec:
    // 0x24cdec: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x24cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24cdf0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24CDF0u;
    {
        const bool branch_taken_0x24cdf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cdf0) {
            ctx->pc = 0x24CE18u;
            goto label_24ce18;
        }
    }
    ctx->pc = 0x24CDF8u;
    // 0x24cdf8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x24cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24cdfc: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x24cdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x24ce00: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x24ce00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x24ce04: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x24ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24ce08: 0x2404fddf  addiu       $a0, $zero, -0x221
    ctx->pc = 0x24ce08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966751));
    // 0x24ce0c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x24ce0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x24ce10: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x24ce10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x24ce14: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x24ce14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_24ce18:
    // 0x24ce18: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x24ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x24ce1c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x24ce1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x24ce20: 0x7ba400e0  lq          $a0, 0xE0($sp)
    ctx->pc = 0x24ce20u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x24ce24: 0x27a50188  addiu       $a1, $sp, 0x188
    ctx->pc = 0x24ce24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x24ce28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24ce28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ce2c: 0xc093544  jal         func_24D510
    ctx->pc = 0x24CE2Cu;
    SET_GPR_U32(ctx, 31, 0x24CE34u);
    ctx->pc = 0x24D510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D510u, 0x24CE2Cu, 0x24CE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CE34u;
label_24ce34:
    // 0x24ce34: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x24ce34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x24ce38: 0x1004000c  beq         $zero, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x24CE38u;
    {
        const bool branch_taken_0x24ce38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x24ce38) {
            ctx->pc = 0x24CE6Cu;
            goto label_24ce6c;
        }
    }
    ctx->pc = 0x24CE40u;
    // 0x24ce40: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x24ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x24ce44: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x24ce44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
    // 0x24ce48: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x24ce48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24ce4c: 0x8fa50174  lw          $a1, 0x174($sp)
    ctx->pc = 0x24ce4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x24ce50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24ce50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ce54: 0xc092cd4  jal         func_24B350
    ctx->pc = 0x24CE54u;
    SET_GPR_U32(ctx, 31, 0x24CE5Cu);
    ctx->pc = 0x24B350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B350u, 0x24CE54u, 0x24CE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CE5Cu;
label_24ce5c:
    // 0x24ce5c: 0x8fa40174  lw          $a0, 0x174($sp)
    ctx->pc = 0x24ce5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x24ce60: 0xc0941d8  jal         func_250760
    ctx->pc = 0x24CE60u;
    SET_GPR_U32(ctx, 31, 0x24CE68u);
    ctx->pc = 0x250760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250760u, 0x24CE60u, 0x24CE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CE68u;
label_24ce68:
    // 0x24ce68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24ce68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24ce6c:
    // 0x24ce6c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x24ce6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24ce70: 0x10060044  beq         $zero, $a2, . + 4 + (0x44 << 2)
    ctx->pc = 0x24CE70u;
    {
        const bool branch_taken_0x24ce70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        if (branch_taken_0x24ce70) {
            ctx->pc = 0x24CF84u;
            goto label_24cf84;
        }
    }
    ctx->pc = 0x24CE78u;
    // 0x24ce78: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24ce78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24ce7c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x24ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x24ce80: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x24CE80u;
    {
        const bool branch_taken_0x24ce80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ce80) {
            ctx->pc = 0x24CF84u;
            goto label_24cf84;
        }
    }
    ctx->pc = 0x24CE88u;
    // 0x24ce88: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24ce8c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x24ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x24ce90: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x24ce90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x24ce94: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x24ce94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24ce98: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x24CE98u;
    {
        const bool branch_taken_0x24ce98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ce98) {
            ctx->pc = 0x24CF10u;
            goto label_24cf10;
        }
    }
    ctx->pc = 0x24CEA0u;
    // 0x24cea0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24cea4: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x24cea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x24cea8: 0xafa40170  sw          $a0, 0x170($sp)
    ctx->pc = 0x24cea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 4));
    // 0x24ceac: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x24ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x24ceb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24ceb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ceb4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x24ceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24ceb8: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x24ceb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x24cebc: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x24cebcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x24cec0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x24CEC0u;
    SET_GPR_U32(ctx, 31, 0x24CEC8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x24CEC0u, 0x24CEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CEC8u;
label_24cec8:
    // 0x24cec8: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x24cec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
    // 0x24cecc: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x24ceccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x24ced0: 0xc091048  jal         func_244120
    ctx->pc = 0x24CED0u;
    SET_GPR_U32(ctx, 31, 0x24CED8u);
    ctx->pc = 0x244120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244120u, 0x24CED0u, 0x24CED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CED8u;
label_24ced8:
    // 0x24ced8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x24ced8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24cedc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24cee0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24CEE0u;
    {
        const bool branch_taken_0x24cee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24cee0) {
            ctx->pc = 0x24CF10u;
            goto label_24cf10;
        }
    }
    ctx->pc = 0x24CEE8u;
    // 0x24cee8: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x24cee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24ceec: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x24ceecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x24cef0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24cef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cef4: 0xc092cd4  jal         func_24B350
    ctx->pc = 0x24CEF4u;
    SET_GPR_U32(ctx, 31, 0x24CEFCu);
    ctx->pc = 0x24B350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B350u, 0x24CEF4u, 0x24CEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CEFCu;
label_24cefc:
    // 0x24cefc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24cefcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cf00: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x24cf00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x24cf04: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x24cf04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cf08: 0xc0941d8  jal         func_250760
    ctx->pc = 0x24CF08u;
    SET_GPR_U32(ctx, 31, 0x24CF10u);
    ctx->pc = 0x250760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250760u, 0x24CF08u, 0x24CF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CF10u;
label_24cf10:
    // 0x24cf10: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24cf14: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x24cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x24cf18: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x24CF18u;
    {
        const bool branch_taken_0x24cf18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cf18) {
            ctx->pc = 0x24CF84u;
            goto label_24cf84;
        }
    }
    ctx->pc = 0x24CF20u;
    // 0x24cf20: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24cf24: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x24cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x24cf28: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x24cf28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x24cf2c: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x24cf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x24cf30: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x24cf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24cf34: 0xc085538  jal         func_2154E0
    ctx->pc = 0x24CF34u;
    SET_GPR_U32(ctx, 31, 0x24CF3Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x24CF34u, 0x24CF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CF3Cu;
label_24cf3c:
    // 0x24cf3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24cf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cf40: 0xafa40164  sw          $a0, 0x164($sp)
    ctx->pc = 0x24cf40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 4));
    // 0x24cf44: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x24cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x24cf48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24cf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cf4c: 0xc091048  jal         func_244120
    ctx->pc = 0x24CF4Cu;
    SET_GPR_U32(ctx, 31, 0x24CF54u);
    ctx->pc = 0x244120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244120u, 0x24CF4Cu, 0x24CF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CF54u;
label_24cf54:
    // 0x24cf54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x24cf54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24cf58: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x24cf58u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24cf5c: 0x145e0009  bne         $v0, $fp, . + 4 + (0x9 << 2)
    ctx->pc = 0x24CF5Cu;
    {
        const bool branch_taken_0x24cf5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x24cf5c) {
            ctx->pc = 0x24CF84u;
            goto label_24cf84;
        }
    }
    ctx->pc = 0x24CF64u;
    // 0x24cf64: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x24cf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24cf68: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x24cf68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x24cf6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24cf6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cf70: 0xc092cd4  jal         func_24B350
    ctx->pc = 0x24CF70u;
    SET_GPR_U32(ctx, 31, 0x24CF78u);
    ctx->pc = 0x24B350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B350u, 0x24CF70u, 0x24CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CF78u;
label_24cf78:
    // 0x24cf78: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x24cf78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x24cf7c: 0xc0941d8  jal         func_250760
    ctx->pc = 0x24CF7Cu;
    SET_GPR_U32(ctx, 31, 0x24CF84u);
    ctx->pc = 0x250760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250760u, 0x24CF7Cu, 0x24CF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CF84u;
label_24cf84:
    // 0x24cf84: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x24cf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24cf88: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x24cf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x24cf8c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x24cf8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24cf90: 0x10020043  beq         $zero, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x24CF90u;
    {
        const bool branch_taken_0x24cf90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x24cf90) {
            ctx->pc = 0x24D0A0u;
            goto label_24d0a0;
        }
    }
    ctx->pc = 0x24CF98u;
    // 0x24cf98: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x24cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24cf9c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x24cf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x24cfa0: 0x1080003f  beqz        $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x24CFA0u;
    {
        const bool branch_taken_0x24cfa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cfa0) {
            ctx->pc = 0x24D0A0u;
            goto label_24d0a0;
        }
    }
    ctx->pc = 0x24CFA8u;
    // 0x24cfa8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x24cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24cfac: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x24cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x24cfb0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x24CFB0u;
    {
        const bool branch_taken_0x24cfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cfb0) {
            ctx->pc = 0x24D02Cu;
            goto label_24d02c;
        }
    }
    ctx->pc = 0x24CFB8u;
    // 0x24cfb8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x24cfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24cfbc: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x24cfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x24cfc0: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x24cfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x24cfc4: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x24cfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x24cfc8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x24cfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24cfcc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x24CFCCu;
    SET_GPR_U32(ctx, 31, 0x24CFD4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x24CFCCu, 0x24CFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CFD4u;
label_24cfd4:
    // 0x24cfd4: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x24cfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x24cfd8: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x24cfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x24cfdc: 0xc091048  jal         func_244120
    ctx->pc = 0x24CFDCu;
    SET_GPR_U32(ctx, 31, 0x24CFE4u);
    ctx->pc = 0x244120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244120u, 0x24CFDCu, 0x24CFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CFE4u;
label_24cfe4:
    // 0x24cfe4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24cfe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cfe8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x24cfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x24cfec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24cfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24cff0: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x24CFF0u;
    {
        const bool branch_taken_0x24cff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24cff0) {
            ctx->pc = 0x24D02Cu;
            goto label_24d02c;
        }
    }
    ctx->pc = 0x24CFF8u;
    // 0x24cff8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x24cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24cffc: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x24cffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x24d000: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x24d000u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24d004: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x24d004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x24d008: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24d008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d00c: 0xc092cd4  jal         func_24B350
    ctx->pc = 0x24D00Cu;
    SET_GPR_U32(ctx, 31, 0x24D014u);
    ctx->pc = 0x24B350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B350u, 0x24D00Cu, 0x24D014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D014u;
label_24d014:
    // 0x24d014: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24d014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d018: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x24d018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x24d01c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24d01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d020: 0xc0941d8  jal         func_250760
    ctx->pc = 0x24D020u;
    SET_GPR_U32(ctx, 31, 0x24D028u);
    ctx->pc = 0x250760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250760u, 0x24D020u, 0x24D028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D028u;
label_24d028:
    // 0x24d028: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x24d028u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24d02c:
    // 0x24d02c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x24d02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24d030: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x24d030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x24d034: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x24D034u;
    {
        const bool branch_taken_0x24d034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d034) {
            ctx->pc = 0x24D0A0u;
            goto label_24d0a0;
        }
    }
    ctx->pc = 0x24D03Cu;
    // 0x24d03c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x24d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24d040: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x24d040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x24d044: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x24d044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x24d048: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x24d048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x24d04c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x24d04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24d050: 0xc085538  jal         func_2154E0
    ctx->pc = 0x24D050u;
    SET_GPR_U32(ctx, 31, 0x24D058u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x24D050u, 0x24D058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D058u;
label_24d058:
    // 0x24d058: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24d058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d05c: 0xafa40154  sw          $a0, 0x154($sp)
    ctx->pc = 0x24d05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 4));
    // 0x24d060: 0x8fa50154  lw          $a1, 0x154($sp)
    ctx->pc = 0x24d060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x24d064: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x24d064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d068: 0xc091048  jal         func_244120
    ctx->pc = 0x24D068u;
    SET_GPR_U32(ctx, 31, 0x24D070u);
    ctx->pc = 0x244120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244120u, 0x24D068u, 0x24D070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D070u;
label_24d070:
    // 0x24d070: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x24d070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24d074: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d078: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24D078u;
    {
        const bool branch_taken_0x24d078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24d078) {
            ctx->pc = 0x24D0A0u;
            goto label_24d0a0;
        }
    }
    ctx->pc = 0x24D080u;
    // 0x24d080: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x24d080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24d084: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x24d084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x24d088: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24d088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d08c: 0xc092cd4  jal         func_24B350
    ctx->pc = 0x24D08Cu;
    SET_GPR_U32(ctx, 31, 0x24D094u);
    ctx->pc = 0x24B350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B350u, 0x24D08Cu, 0x24D094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D094u;
label_24d094:
    // 0x24d094: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x24d094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x24d098: 0xc0941d8  jal         func_250760
    ctx->pc = 0x24D098u;
    SET_GPR_U32(ctx, 31, 0x24D0A0u);
    ctx->pc = 0x250760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250760u, 0x24D098u, 0x24D0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D0A0u;
label_24d0a0:
    // 0x24d0a0: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x24d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24d0a4: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x24d0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x24d0a8: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x24d0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x24d0ac: 0xc0934f8  jal         func_24D3E0
    ctx->pc = 0x24D0ACu;
    SET_GPR_U32(ctx, 31, 0x24D0B4u);
    ctx->pc = 0x24D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D3E0u, 0x24D0ACu, 0x24D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D0B4u;
label_24d0b4:
    // 0x24d0b4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x24D0B4u;
    {
        const bool branch_taken_0x24d0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d0b4) {
            ctx->pc = 0x24D15Cu;
            goto label_24d15c;
        }
    }
    ctx->pc = 0x24D0BCu;
label_24d0bc:
    // 0x24d0bc: 0x10170003  beq         $zero, $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x24D0BCu;
    {
        const bool branch_taken_0x24d0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 23));
        if (branch_taken_0x24d0bc) {
            ctx->pc = 0x24D0CCu;
            goto label_24d0cc;
        }
    }
    ctx->pc = 0x24D0C4u;
    // 0x24d0c4: 0x14160004  bne         $zero, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x24D0C4u;
    {
        const bool branch_taken_0x24d0c4 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 22));
        if (branch_taken_0x24d0c4) {
            ctx->pc = 0x24D0D8u;
            goto label_24d0d8;
        }
    }
    ctx->pc = 0x24D0CCu;
label_24d0cc:
    // 0x24d0cc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x24d0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24d0d0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x24d0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x24d0d4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x24d0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_24d0d8:
    // 0x24d0d8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x24d0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24d0dc: 0x12e2000d  beq         $s7, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24D0DCu;
    {
        const bool branch_taken_0x24d0dc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x24d0dc) {
            ctx->pc = 0x24D114u;
            goto label_24d114;
        }
    }
    ctx->pc = 0x24D0E4u;
    // 0x24d0e4: 0xae170004  sw          $s7, 0x4($s0)
    ctx->pc = 0x24d0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 23));
    // 0x24d0e8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x24d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24d0ec: 0x34430001  ori         $v1, $v0, 0x1
    ctx->pc = 0x24d0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x24d0f0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x24d0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x24d0f4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x24d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x24d0f8: 0x10020006  beq         $zero, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24D0F8u;
    {
        const bool branch_taken_0x24d0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x24d0f8) {
            ctx->pc = 0x24D114u;
            goto label_24d114;
        }
    }
    ctx->pc = 0x24D100u;
    // 0x24d100: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x24d100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x24d104: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x24d104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x24d108: 0x26060018  addiu       $a2, $s0, 0x18
    ctx->pc = 0x24d108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x24d10c: 0xc064204  jal         func_190810
    ctx->pc = 0x24D10Cu;
    SET_GPR_U32(ctx, 31, 0x24D114u);
    ctx->pc = 0x190810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190810u, 0x24D10Cu, 0x24D114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D114u;
label_24d114:
    // 0x24d114: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x24d114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x24d118: 0x12c2000d  beq         $s6, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24D118u;
    {
        const bool branch_taken_0x24d118 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x24d118) {
            ctx->pc = 0x24D150u;
            goto label_24d150;
        }
    }
    ctx->pc = 0x24D120u;
    // 0x24d120: 0xae160008  sw          $s6, 0x8($s0)
    ctx->pc = 0x24d120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 22));
    // 0x24d124: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x24d124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24d128: 0x34430001  ori         $v1, $v0, 0x1
    ctx->pc = 0x24d128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x24d12c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x24d12cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x24d130: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x24d130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x24d134: 0x10020006  beq         $zero, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24D134u;
    {
        const bool branch_taken_0x24d134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x24d134) {
            ctx->pc = 0x24D150u;
            goto label_24d150;
        }
    }
    ctx->pc = 0x24D13Cu;
    // 0x24d13c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x24d13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x24d140: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x24d140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x24d144: 0x26060018  addiu       $a2, $s0, 0x18
    ctx->pc = 0x24d144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x24d148: 0xc064204  jal         func_190810
    ctx->pc = 0x24D148u;
    SET_GPR_U32(ctx, 31, 0x24D150u);
    ctx->pc = 0x190810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190810u, 0x24D148u, 0x24D150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D150u;
label_24d150:
    // 0x24d150: 0x27a40188  addiu       $a0, $sp, 0x188
    ctx->pc = 0x24d150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x24d154: 0xc064054  jal         func_190150
    ctx->pc = 0x24D154u;
    SET_GPR_U32(ctx, 31, 0x24D15Cu);
    ctx->pc = 0x190150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190150u, 0x24D154u, 0x24D15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D15Cu;
label_24d15c:
    // 0x24d15c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x24d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24d160: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x24d160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x24d164: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x24d164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x24d168: 0xc053ba4  jal         func_14EE90
    ctx->pc = 0x24D168u;
    SET_GPR_U32(ctx, 31, 0x24D170u);
    ctx->pc = 0x14EE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE90u, 0x24D168u, 0x24D170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D170u;
label_24d170:
    // 0x24d170: 0x27a40188  addiu       $a0, $sp, 0x188
    ctx->pc = 0x24d170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x24d174: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x24d174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x24d178: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24d178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d17c: 0xc041998  jal         func_106660
    ctx->pc = 0x24D17Cu;
    SET_GPR_U32(ctx, 31, 0x24D184u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x24D17Cu, 0x24D184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D184u;
label_24d184:
    // 0x24d184: 0x1440fd32  bnez        $v0, . + 4 + (-0x2CE << 2)
    ctx->pc = 0x24D184u;
    {
        const bool branch_taken_0x24d184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d184) {
            ctx->pc = 0x24C650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c650;
        }
    }
    ctx->pc = 0x24D18Cu;
    // 0x24d18c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x24d18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x24d190: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x24d190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x24d194: 0xc0641e4  jal         func_190790
    ctx->pc = 0x24D194u;
    SET_GPR_U32(ctx, 31, 0x24D19Cu);
    ctx->pc = 0x190790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190790u, 0x24D194u, 0x24D19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D19Cu;
label_24d19c:
    // 0x24d19c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x24D19Cu;
    {
        const bool branch_taken_0x24d19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d19c) {
            ctx->pc = 0x24D20Cu;
            goto label_24d20c;
        }
    }
    ctx->pc = 0x24D1A4u;
label_24d1a4:
    // 0x24d1a4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x24d1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x24d1a8: 0xc0641dc  jal         func_190770
    ctx->pc = 0x24D1A8u;
    SET_GPR_U32(ctx, 31, 0x24D1B0u);
    ctx->pc = 0x190770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190770u, 0x24D1A8u, 0x24D1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D1B0u;
label_24d1b0:
    // 0x24d1b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24d1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d1b4: 0xafa3014c  sw          $v1, 0x14C($sp)
    ctx->pc = 0x24d1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 3));
    // 0x24d1b8: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x24d1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24d1bc: 0x8fa5014c  lw          $a1, 0x14C($sp)
    ctx->pc = 0x24d1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x24d1c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24d1c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d1c4: 0xc092cd4  jal         func_24B350
    ctx->pc = 0x24D1C4u;
    SET_GPR_U32(ctx, 31, 0x24D1CCu);
    ctx->pc = 0x24B350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B350u, 0x24D1C4u, 0x24D1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D1CCu;
label_24d1cc:
    // 0x24d1cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24d1ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d1d0: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x24d1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24d1d4: 0x8fa5014c  lw          $a1, 0x14C($sp)
    ctx->pc = 0x24d1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x24d1d8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x24d1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24d1dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24d1dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d1e0: 0xc0924d4  jal         func_249350
    ctx->pc = 0x24D1E0u;
    SET_GPR_U32(ctx, 31, 0x24D1E8u);
    ctx->pc = 0x249350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249350u, 0x24D1E0u, 0x24D1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D1E8u;
label_24d1e8:
    // 0x24d1e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x24d1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24d1ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24D1ECu;
    {
        const bool branch_taken_0x24d1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d1ec) {
            ctx->pc = 0x24D200u;
            goto label_24d200;
        }
    }
    ctx->pc = 0x24D1F4u;
    // 0x24d1f4: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x24d1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x24d1f8: 0xc0941d8  jal         func_250760
    ctx->pc = 0x24D1F8u;
    SET_GPR_U32(ctx, 31, 0x24D200u);
    ctx->pc = 0x250760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250760u, 0x24D1F8u, 0x24D200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D200u;
label_24d200:
    // 0x24d200: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x24d200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x24d204: 0xc0641cc  jal         func_190730
    ctx->pc = 0x24D204u;
    SET_GPR_U32(ctx, 31, 0x24D20Cu);
    ctx->pc = 0x190730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190730u, 0x24D204u, 0x24D20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D20Cu;
label_24d20c:
    // 0x24d20c: 0x27a4013c  addiu       $a0, $sp, 0x13C
    ctx->pc = 0x24d20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x24d210: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x24d210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x24d214: 0xc0641a0  jal         func_190680
    ctx->pc = 0x24D214u;
    SET_GPR_U32(ctx, 31, 0x24D21Cu);
    ctx->pc = 0x190680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190680u, 0x24D214u, 0x24D21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D21Cu;
label_24d21c:
    // 0x24d21c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x24d21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x24d220: 0x27a2013c  addiu       $v0, $sp, 0x13C
    ctx->pc = 0x24d220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x24d224: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24d224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d228: 0xc041998  jal         func_106660
    ctx->pc = 0x24D228u;
    SET_GPR_U32(ctx, 31, 0x24D230u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x24D228u, 0x24D230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D230u;
label_24d230:
    // 0x24d230: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x24D230u;
    {
        const bool branch_taken_0x24d230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d230) {
            ctx->pc = 0x24D1A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d1a4;
        }
    }
    ctx->pc = 0x24D238u;
    // 0x24d238: 0x93a301a0  lbu         $v1, 0x1A0($sp)
    ctx->pc = 0x24d238u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x24d23c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x24d23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x24d240: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x24D240u;
    {
        const bool branch_taken_0x24d240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d240) {
            ctx->pc = 0x24D390u;
            goto label_24d390;
        }
    }
    ctx->pc = 0x24D248u;
    // 0x24d248: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x24d248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24d24c: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x24d24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x24d250: 0xc09214c  jal         func_248530
    ctx->pc = 0x24D250u;
    SET_GPR_U32(ctx, 31, 0x24D258u);
    ctx->pc = 0x248530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248530u, 0x24D250u, 0x24D258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D258u;
label_24d258:
    // 0x24d258: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24d258u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d25c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x24D25Cu;
    {
        const bool branch_taken_0x24d25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d25c) {
            ctx->pc = 0x24D374u;
            goto label_24d374;
        }
    }
    ctx->pc = 0x24D264u;
label_24d264:
    // 0x24d264: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24d264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d268: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x24D268u;
    {
        const bool branch_taken_0x24d268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d268) {
            ctx->pc = 0x24D354u;
            goto label_24d354;
        }
    }
    ctx->pc = 0x24D270u;
label_24d270:
    // 0x24d270: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x24d270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24d274: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x24d274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x24d278: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24d278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d27c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x24d27cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d280: 0xc092158  jal         func_248560
    ctx->pc = 0x24D280u;
    SET_GPR_U32(ctx, 31, 0x24D288u);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x24D280u, 0x24D288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D288u;
label_24d288:
    // 0x24d288: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x24d288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24d28c: 0xafa40148  sw          $a0, 0x148($sp)
    ctx->pc = 0x24d28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 4));
    // 0x24d290: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x24d290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x24d294: 0x30640050  andi        $a0, $v1, 0x50
    ctx->pc = 0x24d294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)80);
    // 0x24d298: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x24d298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x24d29c: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24D29Cu;
    {
        const bool branch_taken_0x24d29c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x24d29c) {
            ctx->pc = 0x24D2C0u;
            goto label_24d2c0;
        }
    }
    ctx->pc = 0x24D2A4u;
    // 0x24d2a4: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x24d2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24d2a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24d2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d2ac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x24d2acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d2b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24d2b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d2b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24d2b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d2b8: 0xc093768  jal         func_24DDA0
    ctx->pc = 0x24D2B8u;
    SET_GPR_U32(ctx, 31, 0x24D2C0u);
    ctx->pc = 0x24DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DDA0u, 0x24D2B8u, 0x24D2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D2C0u;
label_24d2c0:
    // 0x24d2c0: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x24d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x24d2c4: 0x30420090  andi        $v0, $v0, 0x90
    ctx->pc = 0x24d2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)144);
    // 0x24d2c8: 0x24030090  addiu       $v1, $zero, 0x90
    ctx->pc = 0x24d2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x24d2cc: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24D2CCu;
    {
        const bool branch_taken_0x24d2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24d2cc) {
            ctx->pc = 0x24D2F0u;
            goto label_24d2f0;
        }
    }
    ctx->pc = 0x24D2D4u;
    // 0x24d2d4: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x24d2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24d2d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24d2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d2dc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x24d2dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d2e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24d2e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d2e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24d2e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d2e8: 0xc093768  jal         func_24DDA0
    ctx->pc = 0x24D2E8u;
    SET_GPR_U32(ctx, 31, 0x24D2F0u);
    ctx->pc = 0x24DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DDA0u, 0x24D2E8u, 0x24D2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D2F0u;
label_24d2f0:
    // 0x24d2f0: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x24d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x24d2f4: 0x30430060  andi        $v1, $v0, 0x60
    ctx->pc = 0x24d2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x24d2f8: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x24d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x24d2fc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24D2FCu;
    {
        const bool branch_taken_0x24d2fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24d2fc) {
            ctx->pc = 0x24D320u;
            goto label_24d320;
        }
    }
    ctx->pc = 0x24D304u;
    // 0x24d304: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x24d304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24d308: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24d308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d30c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x24d30cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d310: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24d310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d314: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x24d314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d318: 0xc093768  jal         func_24DDA0
    ctx->pc = 0x24D318u;
    SET_GPR_U32(ctx, 31, 0x24D320u);
    ctx->pc = 0x24DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DDA0u, 0x24D318u, 0x24D320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D320u;
label_24d320:
    // 0x24d320: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x24d320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x24d324: 0x306400a0  andi        $a0, $v1, 0xA0
    ctx->pc = 0x24d324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)160);
    // 0x24d328: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x24d328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x24d32c: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24D32Cu;
    {
        const bool branch_taken_0x24d32c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x24d32c) {
            ctx->pc = 0x24D350u;
            goto label_24d350;
        }
    }
    ctx->pc = 0x24D334u;
    // 0x24d334: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x24d334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24d338: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24d338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d33c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x24d33cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d340: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24d340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d344: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x24d344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d348: 0xc093768  jal         func_24DDA0
    ctx->pc = 0x24D348u;
    SET_GPR_U32(ctx, 31, 0x24D350u);
    ctx->pc = 0x24DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DDA0u, 0x24D348u, 0x24D350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D350u;
label_24d350:
    // 0x24d350: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24d350u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_24d354:
    // 0x24d354: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x24d354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24d358: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x24d358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x24d35c: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x24D35Cu;
    SET_GPR_U32(ctx, 31, 0x24D364u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x24D35Cu, 0x24D364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D364u;
label_24d364:
    // 0x24d364: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x24d364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24d368: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x24D368u;
    {
        const bool branch_taken_0x24d368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d368) {
            ctx->pc = 0x24D270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d270;
        }
    }
    ctx->pc = 0x24D370u;
    // 0x24d370: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x24d370u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_24d374:
    // 0x24d374: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x24d374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x24d378: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24d378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24d37c: 0xc0477d8  jal         func_11DF60
    ctx->pc = 0x24D37Cu;
    SET_GPR_U32(ctx, 31, 0x24D384u);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x24D37Cu, 0x24D384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D384u;
label_24d384:
    // 0x24d384: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x24d384u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24d388: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x24D388u;
    {
        const bool branch_taken_0x24d388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d388) {
            ctx->pc = 0x24D264u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d264;
        }
    }
    ctx->pc = 0x24D390u;
label_24d390:
    // 0x24d390: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x24d390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x24d394: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x24d394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24d398: 0xc06408c  jal         func_190230
    ctx->pc = 0x24D398u;
    SET_GPR_U32(ctx, 31, 0x24D3A0u);
    ctx->pc = 0x190230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190230u, 0x24D398u, 0x24D3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D3A0u;
label_24d3a0:
    // 0x24d3a0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24d3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24d3a4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x24d3a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24d3a8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x24d3a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24d3ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x24d3acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24d3b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24d3b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24d3b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24d3b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24d3b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24d3b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24d3bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24d3bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d3c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24d3c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d3c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24d3c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d3c8: 0x27bd01b0  addiu       $sp, $sp, 0x1B0
    ctx->pc = 0x24d3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x24d3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x24D3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D3D4u;
    // 0x24d3d4: 0x0  nop
    ctx->pc = 0x24d3d4u;
    // NOP
    // 0x24d3d8: 0x0  nop
    ctx->pc = 0x24d3d8u;
    // NOP
    // 0x24d3dc: 0x0  nop
    ctx->pc = 0x24d3dcu;
    // NOP
    ctx->pc = 0x24d3e0u;
}
