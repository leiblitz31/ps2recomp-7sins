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

// Function: sub_0048E600
// Address: 0x48e600 - 0x48e720
void sub_0048E600_0x48e600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E600_0x48e600");
#endif

    switch (ctx->pc) {
        case 0x48e630u: goto label_48e630;
        case 0x48e63cu: goto label_48e63c;
        case 0x48e650u: goto label_48e650;
        case 0x48e670u: goto label_48e670;
        case 0x48e690u: goto label_48e690;
        case 0x48e6a8u: goto label_48e6a8;
        case 0x48e6b8u: goto label_48e6b8;
        case 0x48e6d4u: goto label_48e6d4;
        case 0x48e6f4u: goto label_48e6f4;
        default: break;
    }

    ctx->pc = 0x48e600u;

    // 0x48e600: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x48e600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x48e604: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x48e604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x48e608: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48e608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x48e60c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48e60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48e610: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48e610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48e614: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x48e614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x48e618: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x48e618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x48e61c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x48e61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x48e620: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x48e620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48e624: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x48e624u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x48e628: 0xc123e88  jal         func_48FA20
    ctx->pc = 0x48E628u;
    SET_GPR_U32(ctx, 31, 0x48E630u);
    ctx->pc = 0x48FA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48FA20u, 0x48E628u, 0x48E630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E630u;
label_48e630:
    // 0x48e630: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x48e630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x48e634: 0xc041874  jal         func_1061D0
    ctx->pc = 0x48E634u;
    SET_GPR_U32(ctx, 31, 0x48E63Cu);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x48E634u, 0x48E63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E63Cu;
label_48e63c:
    // 0x48e63c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x48E63Cu;
    {
        const bool branch_taken_0x48e63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e63c) {
            ctx->pc = 0x48E65Cu;
            goto label_48e65c;
        }
    }
    ctx->pc = 0x48E644u;
    // 0x48e644: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x48e644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x48e648: 0xc041874  jal         func_1061D0
    ctx->pc = 0x48E648u;
    SET_GPR_U32(ctx, 31, 0x48E650u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x48E648u, 0x48E650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E650u;
label_48e650:
    // 0x48e650: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x48e650u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48e654: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x48E654u;
    {
        const bool branch_taken_0x48e654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48e654) {
            ctx->pc = 0x48E67Cu;
            goto label_48e67c;
        }
    }
    ctx->pc = 0x48E65Cu;
label_48e65c:
    // 0x48e65c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x48e65cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e660: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x48e660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x48e664: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48e664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48e668: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x48E668u;
    SET_GPR_U32(ctx, 31, 0x48E670u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x48E668u, 0x48E670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E670u;
label_48e670:
    // 0x48e670: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x48e670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e674: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x48E674u;
    {
        const bool branch_taken_0x48e674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e674) {
            ctx->pc = 0x48E6F8u;
            goto label_48e6f8;
        }
    }
    ctx->pc = 0x48E67Cu;
label_48e67c:
    // 0x48e67c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x48e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48e680: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x48e680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x48e684: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x48e684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x48e688: 0xc1238e0  jal         func_48E380
    ctx->pc = 0x48E688u;
    SET_GPR_U32(ctx, 31, 0x48E690u);
    ctx->pc = 0x48E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E380u, 0x48E688u, 0x48E690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E690u;
label_48e690:
    // 0x48e690: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x48e690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48e694: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x48e694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48e698: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x48e698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x48e69c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x48e69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x48e6a0: 0xc1239c8  jal         func_48E720
    ctx->pc = 0x48E6A0u;
    SET_GPR_U32(ctx, 31, 0x48E6A8u);
    ctx->pc = 0x48E720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E720u, 0x48E6A0u, 0x48E6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E6A8u;
label_48e6a8:
    // 0x48e6a8: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x48e6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x48e6ac: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x48e6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48e6b0: 0xc1238d4  jal         func_48E350
    ctx->pc = 0x48E6B0u;
    SET_GPR_U32(ctx, 31, 0x48E6B8u);
    ctx->pc = 0x48E350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E350u, 0x48E6B0u, 0x48E6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E6B8u;
label_48e6b8:
    // 0x48e6b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x48E6B8u;
    {
        const bool branch_taken_0x48e6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e6b8) {
            ctx->pc = 0x48E6E0u;
            goto label_48e6e0;
        }
    }
    ctx->pc = 0x48E6C0u;
    // 0x48e6c0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x48e6c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48e6c4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x48e6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x48e6c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48e6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48e6cc: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x48E6CCu;
    SET_GPR_U32(ctx, 31, 0x48E6D4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x48E6CCu, 0x48E6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E6D4u;
label_48e6d4:
    // 0x48e6d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x48e6d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e6d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x48E6D8u;
    {
        const bool branch_taken_0x48e6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e6d8) {
            ctx->pc = 0x48E6F8u;
            goto label_48e6f8;
        }
    }
    ctx->pc = 0x48E6E0u;
label_48e6e0:
    // 0x48e6e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x48e6e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e6e4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x48e6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x48e6e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48e6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48e6ec: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x48E6ECu;
    SET_GPR_U32(ctx, 31, 0x48E6F4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x48E6ECu, 0x48E6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E6F4u;
label_48e6f4:
    // 0x48e6f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x48e6f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48e6f8:
    // 0x48e6f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x48e6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48e6fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48e6fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48e700: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48e700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48e704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48e704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e708: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x48e708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x48e70c: 0x3e00008  jr          $ra
    ctx->pc = 0x48E70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E714u;
    // 0x48e714: 0x0  nop
    ctx->pc = 0x48e714u;
    // NOP
    // 0x48e718: 0x0  nop
    ctx->pc = 0x48e718u;
    // NOP
    // 0x48e71c: 0x0  nop
    ctx->pc = 0x48e71cu;
    // NOP
    ctx->pc = 0x48e720u;
}
