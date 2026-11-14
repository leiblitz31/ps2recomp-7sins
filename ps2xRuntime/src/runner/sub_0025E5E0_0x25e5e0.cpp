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

// Function: sub_0025E5E0
// Address: 0x25e5e0 - 0x25e770
void sub_0025E5E0_0x25e5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E5E0_0x25e5e0");
#endif

    switch (ctx->pc) {
        case 0x25e608u: goto label_25e608;
        case 0x25e644u: goto label_25e644;
        case 0x25e660u: goto label_25e660;
        case 0x25e694u: goto label_25e694;
        case 0x25e6b0u: goto label_25e6b0;
        case 0x25e700u: goto label_25e700;
        case 0x25e710u: goto label_25e710;
        case 0x25e73cu: goto label_25e73c;
        case 0x25e748u: goto label_25e748;
        default: break;
    }

    ctx->pc = 0x25e5e0u;

    // 0x25e5e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x25e5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x25e5e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25e5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25e5e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25e5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25e5ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25e5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25e5f0: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x25e5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x25e5f4: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x25e5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x25e5f8: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x25e5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x25e5fc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25e5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e600: 0xc09762c  jal         func_25D8B0
    ctx->pc = 0x25E600u;
    SET_GPR_U32(ctx, 31, 0x25E608u);
    ctx->pc = 0x25D8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D8B0u, 0x25E600u, 0x25E608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E608u;
label_25e608:
    // 0x25e608: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x25e608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25e60c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x25e60cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25e610: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x25e610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x25e614: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x25e614u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x25e618: 0x8012  mflo        $s0
    ctx->pc = 0x25e618u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x25e61c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e620: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x25e620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25e624: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25e624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e628: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x25e628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25e62c: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x25E62Cu;
    {
        const bool branch_taken_0x25e62c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25e62c) {
            ctx->pc = 0x25E718u;
            goto label_25e718;
        }
    }
    ctx->pc = 0x25E634u;
    // 0x25e634: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x25e634u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25e638: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25e638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e63c: 0xc097970  jal         func_25E5C0
    ctx->pc = 0x25E63Cu;
    SET_GPR_U32(ctx, 31, 0x25E644u);
    ctx->pc = 0x25E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E5C0u, 0x25E63Cu, 0x25E644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E644u;
label_25e644:
    // 0x25e644: 0x1622000c  bne         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25E644u;
    {
        const bool branch_taken_0x25e644 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x25e644) {
            ctx->pc = 0x25E678u;
            goto label_25e678;
        }
    }
    ctx->pc = 0x25E64Cu;
    // 0x25e64c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e650: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x25e650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25e654: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x25e654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25e658: 0xc097950  jal         func_25E540
    ctx->pc = 0x25E658u;
    SET_GPR_U32(ctx, 31, 0x25E660u);
    ctx->pc = 0x25E540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E540u, 0x25E658u, 0x25E660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E660u;
label_25e660:
    // 0x25e660: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x25e660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e664: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x25e664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25e668: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x25e668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x25e66c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x25e66cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x25e670: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x25E670u;
    {
        const bool branch_taken_0x25e670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e670) {
            ctx->pc = 0x25E73Cu;
            goto label_25e73c;
        }
    }
    ctx->pc = 0x25E678u;
label_25e678:
    // 0x25e678: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x25e678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e67c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e680: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x25e680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25e684: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x25e684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25e688: 0x2445ffe8  addiu       $a1, $v0, -0x18
    ctx->pc = 0x25e688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x25e68c: 0xc097950  jal         func_25E540
    ctx->pc = 0x25E68Cu;
    SET_GPR_U32(ctx, 31, 0x25E694u);
    ctx->pc = 0x25E540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E540u, 0x25E68Cu, 0x25E694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E694u;
label_25e694:
    // 0x25e694: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x25e694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e698: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x25e698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25e69c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x25e69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x25e6a0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x25e6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x25e6a4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x25e6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25e6a8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x25e6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25e6ac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x25e6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_25e6b0:
    // 0x25e6b0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x25e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25e6b4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x25e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x25e6b8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x25e6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x25e6bc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x25e6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x25e6c0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x25e6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x25e6c4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x25e6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x25e6c8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x25e6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x25e6cc: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x25E6CCu;
    {
        const bool branch_taken_0x25e6cc = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x25e6cc) {
            ctx->pc = 0x25E6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e6b0;
        }
    }
    ctx->pc = 0x25E6D4u;
    // 0x25e6d4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e6d8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x25e6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25e6dc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e6e0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x25e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25e6e4: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x25e6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x25e6e8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x25e6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25e6ec: 0x2465ffd0  addiu       $a1, $v1, -0x30
    ctx->pc = 0x25e6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x25e6f0: 0x2446ffe8  addiu       $a2, $v0, -0x18
    ctx->pc = 0x25e6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x25e6f4: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x25e6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x25e6f8: 0xc0979fc  jal         func_25E7F0
    ctx->pc = 0x25E6F8u;
    SET_GPR_U32(ctx, 31, 0x25E700u);
    ctx->pc = 0x25E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E7F0u, 0x25E6F8u, 0x25E700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E700u;
label_25e700:
    // 0x25e700: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x25e700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25e704: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x25e704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25e708: 0xc0979dc  jal         func_25E770
    ctx->pc = 0x25E708u;
    SET_GPR_U32(ctx, 31, 0x25E710u);
    ctx->pc = 0x25E770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E770u, 0x25E708u, 0x25E710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E710u;
label_25e710:
    // 0x25e710: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25E710u;
    {
        const bool branch_taken_0x25e710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e710) {
            ctx->pc = 0x25E73Cu;
            goto label_25e73c;
        }
    }
    ctx->pc = 0x25E718u;
label_25e718:
    // 0x25e718: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x25e718u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x25e71c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25e71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e720: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x25e720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25e724: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x25e724u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25e728: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x25e728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x25e72c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x25e72cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25e730: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25e730u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e734: 0xc097878  jal         func_25E1E0
    ctx->pc = 0x25E734u;
    SET_GPR_U32(ctx, 31, 0x25E73Cu);
    ctx->pc = 0x25E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E1E0u, 0x25E734u, 0x25E73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E73Cu;
label_25e73c:
    // 0x25e73c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25e73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e740: 0xc09762c  jal         func_25D8B0
    ctx->pc = 0x25E740u;
    SET_GPR_U32(ctx, 31, 0x25E748u);
    ctx->pc = 0x25D8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D8B0u, 0x25E740u, 0x25E748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E748u;
label_25e748:
    // 0x25e748: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x25e748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x25e74c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x25e74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25e750: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x25e750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x25e754: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25e754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25e758: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25e758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e75c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25e75cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e760: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25e760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e764: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x25e764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25e768: 0x3e00008  jr          $ra
    ctx->pc = 0x25E768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E770u;
}
