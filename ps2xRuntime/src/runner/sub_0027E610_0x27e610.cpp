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

// Function: sub_0027E610
// Address: 0x27e610 - 0x27e7c0
void sub_0027E610_0x27e610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E610_0x27e610");
#endif

    switch (ctx->pc) {
        case 0x27e63cu: goto label_27e63c;
        case 0x27e648u: goto label_27e648;
        case 0x27e674u: goto label_27e674;
        case 0x27e684u: goto label_27e684;
        case 0x27e690u: goto label_27e690;
        case 0x27e6a0u: goto label_27e6a0;
        case 0x27e6b8u: goto label_27e6b8;
        case 0x27e6ccu: goto label_27e6cc;
        case 0x27e6e4u: goto label_27e6e4;
        case 0x27e6f4u: goto label_27e6f4;
        case 0x27e70cu: goto label_27e70c;
        case 0x27e71cu: goto label_27e71c;
        case 0x27e728u: goto label_27e728;
        case 0x27e738u: goto label_27e738;
        case 0x27e750u: goto label_27e750;
        case 0x27e764u: goto label_27e764;
        case 0x27e77cu: goto label_27e77c;
        case 0x27e78cu: goto label_27e78c;
        default: break;
    }

    ctx->pc = 0x27e610u;

    // 0x27e610: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x27e610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x27e614: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x27e614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x27e618: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27e618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x27e61c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27e61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x27e620: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27e620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x27e624: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27e624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27e628: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27e628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27e62c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27e62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27e630: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27e630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27e634: 0xc090864  jal         func_242190
    ctx->pc = 0x27E634u;
    SET_GPR_U32(ctx, 31, 0x27E63Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x27E634u, 0x27E63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E63Cu;
label_27e63c:
    // 0x27e63c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27e63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e640: 0xc090590  jal         func_241640
    ctx->pc = 0x27E640u;
    SET_GPR_U32(ctx, 31, 0x27E648u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x27E640u, 0x27E648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E648u;
label_27e648:
    // 0x27e648: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x27e648u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e64c: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x27e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x27e650: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x27e650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x27e654: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27e654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e658: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x27e658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e65c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27e65cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27e660: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x27e660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x27e664: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27e664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e668: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27e668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e66c: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x27E66Cu;
    SET_GPR_U32(ctx, 31, 0x27E674u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x27E66Cu, 0x27E674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E674u;
label_27e674:
    // 0x27e674: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x27e674u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e678: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27e678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e67c: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x27E67Cu;
    SET_GPR_U32(ctx, 31, 0x27E684u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x27E67Cu, 0x27E684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E684u;
label_27e684:
    // 0x27e684: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27e684u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e688: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x27E688u;
    {
        const bool branch_taken_0x27e688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e688) {
            ctx->pc = 0x27E6E8u;
            goto label_27e6e8;
        }
    }
    ctx->pc = 0x27E690u;
label_27e690:
    // 0x27e690: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x27e690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x27e694: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x27e694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x27e698: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27E698u;
    SET_GPR_U32(ctx, 31, 0x27E6A0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27E698u, 0x27E6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E6A0u;
label_27e6a0:
    // 0x27e6a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27e6a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e6a4: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x27E6A4u;
    {
        const bool branch_taken_0x27e6a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e6a4) {
            ctx->pc = 0x27E6E4u;
            goto label_27e6e4;
        }
    }
    ctx->pc = 0x27E6ACu;
    // 0x27e6ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27e6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e6b0: 0xc09f9f0  jal         func_27E7C0
    ctx->pc = 0x27E6B0u;
    SET_GPR_U32(ctx, 31, 0x27E6B8u);
    ctx->pc = 0x27E7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E7C0u, 0x27E6B0u, 0x27E6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E6B8u;
label_27e6b8:
    // 0x27e6b8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27E6B8u;
    {
        const bool branch_taken_0x27e6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e6b8) {
            ctx->pc = 0x27E6E4u;
            goto label_27e6e4;
        }
    }
    ctx->pc = 0x27E6C0u;
    // 0x27e6c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27e6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e6c4: 0xc068158  jal         func_1A0560
    ctx->pc = 0x27E6C4u;
    SET_GPR_U32(ctx, 31, 0x27E6CCu);
    ctx->pc = 0x1A0560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0560u, 0x27E6C4u, 0x27E6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E6CCu;
label_27e6cc:
    // 0x27e6cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E6CCu;
    {
        const bool branch_taken_0x27e6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e6cc) {
            ctx->pc = 0x27E6E4u;
            goto label_27e6e4;
        }
    }
    ctx->pc = 0x27E6D4u;
    // 0x27e6d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27e6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e6d8: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x27e6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27e6dc: 0xc0a6350  jal         func_298D40
    ctx->pc = 0x27E6DCu;
    SET_GPR_U32(ctx, 31, 0x27E6E4u);
    ctx->pc = 0x298D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298D40u, 0x27E6DCu, 0x27E6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E6E4u;
label_27e6e4:
    // 0x27e6e4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x27e6e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_27e6e8:
    // 0x27e6e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27e6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e6ec: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x27E6ECu;
    SET_GPR_U32(ctx, 31, 0x27E6F4u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x27E6ECu, 0x27E6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E6F4u;
label_27e6f4:
    // 0x27e6f4: 0x1662ffe6  bne         $s3, $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x27E6F4u;
    {
        const bool branch_taken_0x27e6f4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x27e6f4) {
            ctx->pc = 0x27E690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e690;
        }
    }
    ctx->pc = 0x27E6FCu;
    // 0x27e6fc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27e6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e700: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x27e700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27e704: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x27E704u;
    SET_GPR_U32(ctx, 31, 0x27E70Cu);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x27E704u, 0x27E70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E70Cu;
label_27e70c:
    // 0x27e70c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27e70cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e710: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27e710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e714: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x27E714u;
    SET_GPR_U32(ctx, 31, 0x27E71Cu);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x27E714u, 0x27E71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E71Cu;
label_27e71c:
    // 0x27e71c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27e71cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e720: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x27E720u;
    {
        const bool branch_taken_0x27e720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e720) {
            ctx->pc = 0x27E780u;
            goto label_27e780;
        }
    }
    ctx->pc = 0x27E728u;
label_27e728:
    // 0x27e728: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x27e728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27e72c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x27e72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x27e730: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27E730u;
    SET_GPR_U32(ctx, 31, 0x27E738u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27E730u, 0x27E738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E738u;
label_27e738:
    // 0x27e738: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27e738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e73c: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x27E73Cu;
    {
        const bool branch_taken_0x27e73c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e73c) {
            ctx->pc = 0x27E77Cu;
            goto label_27e77c;
        }
    }
    ctx->pc = 0x27E744u;
    // 0x27e744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e748: 0xc09f9f0  jal         func_27E7C0
    ctx->pc = 0x27E748u;
    SET_GPR_U32(ctx, 31, 0x27E750u);
    ctx->pc = 0x27E7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E7C0u, 0x27E748u, 0x27E750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E750u;
label_27e750:
    // 0x27e750: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27E750u;
    {
        const bool branch_taken_0x27e750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e750) {
            ctx->pc = 0x27E77Cu;
            goto label_27e77c;
        }
    }
    ctx->pc = 0x27E758u;
    // 0x27e758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e75c: 0xc068158  jal         func_1A0560
    ctx->pc = 0x27E75Cu;
    SET_GPR_U32(ctx, 31, 0x27E764u);
    ctx->pc = 0x1A0560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0560u, 0x27E75Cu, 0x27E764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E764u;
label_27e764:
    // 0x27e764: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E764u;
    {
        const bool branch_taken_0x27e764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e764) {
            ctx->pc = 0x27E77Cu;
            goto label_27e77c;
        }
    }
    ctx->pc = 0x27E76Cu;
    // 0x27e76c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e770: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x27e770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27e774: 0xc0a6350  jal         func_298D40
    ctx->pc = 0x27E774u;
    SET_GPR_U32(ctx, 31, 0x27E77Cu);
    ctx->pc = 0x298D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298D40u, 0x27E774u, 0x27E77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E77Cu;
label_27e77c:
    // 0x27e77c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x27e77cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_27e780:
    // 0x27e780: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27e780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e784: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x27E784u;
    SET_GPR_U32(ctx, 31, 0x27E78Cu);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x27E784u, 0x27E78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E78Cu;
label_27e78c:
    // 0x27e78c: 0x1622ffe6  bne         $s1, $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x27E78Cu;
    {
        const bool branch_taken_0x27e78c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x27e78c) {
            ctx->pc = 0x27E728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e728;
        }
    }
    ctx->pc = 0x27E794u;
    // 0x27e794: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x27e794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27e798: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27e798u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27e79c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27e79cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27e7a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27e7a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27e7a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27e7a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27e7a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27e7a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e7ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27e7acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e7b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27e7b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e7b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x27e7b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27e7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x27E7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E7C0u;
}
