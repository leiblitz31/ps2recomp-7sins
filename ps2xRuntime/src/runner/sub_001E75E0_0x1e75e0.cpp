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

// Function: sub_001E75E0
// Address: 0x1e75e0 - 0x1e7820
void sub_001E75E0_0x1e75e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E75E0_0x1e75e0");
#endif

    switch (ctx->pc) {
        case 0x1e764cu: goto label_1e764c;
        case 0x1e76bcu: goto label_1e76bc;
        case 0x1e7708u: goto label_1e7708;
        case 0x1e7730u: goto label_1e7730;
        case 0x1e7754u: goto label_1e7754;
        case 0x1e7798u: goto label_1e7798;
        case 0x1e77c8u: goto label_1e77c8;
        case 0x1e77d8u: goto label_1e77d8;
        case 0x1e7804u: goto label_1e7804;
        default: break;
    }

    ctx->pc = 0x1e75e0u;

    // 0x1e75e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e75e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e75e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e75e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e75e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e75e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e75ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e75ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e75f0: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1e75f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x1e75f4: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x1e75f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x1e75f8: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x1e75f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x1e75fc: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x1e75fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
    // 0x1e7600: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1e7600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e7604: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x1E7604u;
    {
        const bool branch_taken_0x1e7604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7604) {
            ctx->pc = 0x1E7804u;
            goto label_1e7804;
        }
    }
    ctx->pc = 0x1E760Cu;
    // 0x1e760c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e760cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7610: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1e7610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e7614: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e7614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7618: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1e7618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e761c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e761cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7620: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1e7620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e7624: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e7624u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e7628: 0x1812  mflo        $v1
    ctx->pc = 0x1e7628u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1e762c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e762cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e7630: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e7630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e7634: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1E7634u;
    {
        const bool branch_taken_0x1e7634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7634) {
            ctx->pc = 0x1E77E0u;
            goto label_1e77e0;
        }
    }
    ctx->pc = 0x1E763Cu;
    // 0x1e763c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e763cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e7640: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1e7640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e7644: 0xc079f40  jal         func_1E7D00
    ctx->pc = 0x1E7644u;
    SET_GPR_U32(ctx, 31, 0x1E764Cu);
    ctx->pc = 0x1E7D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7D00u, 0x1E7644u, 0x1E764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E764Cu;
label_1e764c:
    // 0x1e764c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e764cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7650: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1e7650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e7654: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e7654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e7658: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e7658u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e765c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1e765cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e7660: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e7660u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e7664: 0x8812  mflo        $s1
    ctx->pc = 0x1e7664u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x1e7668: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e7668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e766c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1e766cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e7670: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e7670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e7674: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x1e7674u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e7678: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x1E7678u;
    {
        const bool branch_taken_0x1e7678 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7678) {
            ctx->pc = 0x1E7738u;
            goto label_1e7738;
        }
    }
    ctx->pc = 0x1E7680u;
    // 0x1e7680: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e7680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7684: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1e7684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e7688: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1e7688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e768c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e768cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e7690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e7690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7694: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e7694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e7698: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1e7698u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1e769c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e769cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e76a0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e76a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e76a4: 0xa3a0005c  sb          $zero, 0x5C($sp)
    ctx->pc = 0x1e76a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e76a8: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1e76a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e76ac: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1e76acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e76b0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x1e76b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1e76b4: 0xc079f20  jal         func_1E7C80
    ctx->pc = 0x1E76B4u;
    SET_GPR_U32(ctx, 31, 0x1E76BCu);
    ctx->pc = 0x1E7C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7C80u, 0x1E76B4u, 0x1E76BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E76BCu;
label_1e76bc:
    // 0x1e76bc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e76bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e76c0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1e76c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e76c4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e76c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e76c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e76c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e76cc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e76ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e76d0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e76d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e76d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e76d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e76d8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e76d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1e76dc: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1e76dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e76e0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e76e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e76e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e76e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e76e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e76e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e76ec: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x1e76ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e76f0: 0xa3a00058  sb          $zero, 0x58($sp)
    ctx->pc = 0x1e76f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e76f4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1e76f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e76f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e76f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e76fc: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x1e76fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1e7700: 0xc079ef0  jal         func_1E7BC0
    ctx->pc = 0x1E7700u;
    SET_GPR_U32(ctx, 31, 0x1E7708u);
    ctx->pc = 0x1E7BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7BC0u, 0x1E7700u, 0x1E7708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7708u;
label_1e7708:
    // 0x1e7708: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1e7708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e770c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e770cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e7710: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e7710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7714: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e7714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e7718: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e7718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e771c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1e771cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7720: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1e7720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e7724: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1e7724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e7728: 0xc079ed8  jal         func_1E7B60
    ctx->pc = 0x1E7728u;
    SET_GPR_U32(ctx, 31, 0x1E7730u);
    ctx->pc = 0x1E7B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7B60u, 0x1E7728u, 0x1E7730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7730u;
label_1e7730:
    // 0x1e7730: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1E7730u;
    {
        const bool branch_taken_0x1e7730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7730) {
            ctx->pc = 0x1E77C8u;
            goto label_1e77c8;
        }
    }
    ctx->pc = 0x1E7738u;
label_1e7738:
    // 0x1e7738: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e7738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e773c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e773cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e7740: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1e7740u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e7744: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1e7744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e7748: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1e7748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e774c: 0xc079ec8  jal         func_1E7B20
    ctx->pc = 0x1E774Cu;
    SET_GPR_U32(ctx, 31, 0x1E7754u);
    ctx->pc = 0x1E7B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7B20u, 0x1E774Cu, 0x1E7754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7754u;
label_1e7754:
    // 0x1e7754: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e7754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e7758: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x1e7758u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e775c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e775cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e7760: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e7760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7764: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1e7764u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e7768: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e7768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e776c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e776cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e7770: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e7770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e7774: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e7774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1e7778: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e7778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e777c: 0xa3a00054  sb          $zero, 0x54($sp)
    ctx->pc = 0x1e777cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e7780: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1e7780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e7784: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e7784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7788: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1e7788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e778c: 0x27a70054  addiu       $a3, $sp, 0x54
    ctx->pc = 0x1e778cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1e7790: 0xc079f20  jal         func_1E7C80
    ctx->pc = 0x1E7790u;
    SET_GPR_U32(ctx, 31, 0x1E7798u);
    ctx->pc = 0x1E7C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7C80u, 0x1E7790u, 0x1E7798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7798u;
label_1e7798:
    // 0x1e7798: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e7798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e779c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1e779cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e77a0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e77a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e77a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e77a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e77a8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e77a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e77ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e77acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e77b0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e77b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1e77b4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1e77b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e77b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e77b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e77bc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1e77bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e77c0: 0xc079ed8  jal         func_1E7B60
    ctx->pc = 0x1E77C0u;
    SET_GPR_U32(ctx, 31, 0x1E77C8u);
    ctx->pc = 0x1E7B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7B60u, 0x1E77C0u, 0x1E77C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E77C8u;
label_1e77c8:
    // 0x1e77c8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e77c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e77cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1e77ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e77d0: 0xc075840  jal         func_1D6100
    ctx->pc = 0x1E77D0u;
    SET_GPR_U32(ctx, 31, 0x1E77D8u);
    ctx->pc = 0x1D6100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6100u, 0x1E77D0u, 0x1E77D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E77D8u;
label_1e77d8:
    // 0x1e77d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E77D8u;
    {
        const bool branch_taken_0x1e77d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e77d8) {
            ctx->pc = 0x1E7804u;
            goto label_1e7804;
        }
    }
    ctx->pc = 0x1E77E0u;
label_1e77e0:
    // 0x1e77e0: 0xa3a00050  sb          $zero, 0x50($sp)
    ctx->pc = 0x1e77e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e77e4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e77e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e77e8: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1e77e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e77ec: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x1e77ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e77f0: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1e77f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e77f4: 0x8fa80080  lw          $t0, 0x80($sp)
    ctx->pc = 0x1e77f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e77f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e77f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e77fc: 0xc079e08  jal         func_1E7820
    ctx->pc = 0x1E77FCu;
    SET_GPR_U32(ctx, 31, 0x1E7804u);
    ctx->pc = 0x1E7820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7820u, 0x1E77FCu, 0x1E7804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7804u;
label_1e7804:
    // 0x1e7804: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e7804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7808: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e780c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e780cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7810: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1e7810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e7814: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E781Cu;
    // 0x1e781c: 0x0  nop
    ctx->pc = 0x1e781cu;
    // NOP
    ctx->pc = 0x1e7820u;
}
