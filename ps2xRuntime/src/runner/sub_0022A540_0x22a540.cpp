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

// Function: sub_0022A540
// Address: 0x22a540 - 0x22a650
void sub_0022A540_0x22a540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A540_0x22a540");
#endif

    switch (ctx->pc) {
        case 0x22a570u: goto label_22a570;
        case 0x22a57cu: goto label_22a57c;
        case 0x22a588u: goto label_22a588;
        case 0x22a5a0u: goto label_22a5a0;
        case 0x22a5b8u: goto label_22a5b8;
        case 0x22a5d4u: goto label_22a5d4;
        case 0x22a5fcu: goto label_22a5fc;
        case 0x22a614u: goto label_22a614;
        default: break;
    }

    ctx->pc = 0x22a540u;

    // 0x22a540: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22a540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22a544: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22a544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22a548: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22a548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22a54c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22a54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22a550: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22a550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22a554: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x22a554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x22a558: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x22a558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x22a55c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a560: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x22a560u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22a564: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x22a564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a568: 0xc089ea4  jal         func_227A90
    ctx->pc = 0x22A568u;
    SET_GPR_U32(ctx, 31, 0x22A570u);
    ctx->pc = 0x227A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A90u, 0x22A568u, 0x22A570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A570u;
label_22a570:
    // 0x22a570: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x22a570u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22a574: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x22A574u;
    {
        const bool branch_taken_0x22a574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a574) {
            ctx->pc = 0x22A5D8u;
            goto label_22a5d8;
        }
    }
    ctx->pc = 0x22A57Cu;
label_22a57c:
    // 0x22a57c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a580: 0xc08a90c  jal         func_22A430
    ctx->pc = 0x22A580u;
    SET_GPR_U32(ctx, 31, 0x22A588u);
    ctx->pc = 0x22A430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A430u, 0x22A580u, 0x22A588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A588u;
label_22a588:
    // 0x22a588: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x22a588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a58c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x22a58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x22a590: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22a590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a594: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x22a594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22a598: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x22A598u;
    SET_GPR_U32(ctx, 31, 0x22A5A0u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x22A598u, 0x22A5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A5A0u;
label_22a5a0:
    // 0x22a5a0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22A5A0u;
    {
        const bool branch_taken_0x22a5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a5a0) {
            ctx->pc = 0x22A5C8u;
            goto label_22a5c8;
        }
    }
    ctx->pc = 0x22A5A8u;
    // 0x22a5a8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x22a5a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a5ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a5b0: 0xc08a904  jal         func_22A410
    ctx->pc = 0x22A5B0u;
    SET_GPR_U32(ctx, 31, 0x22A5B8u);
    ctx->pc = 0x22A410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A410u, 0x22A5B0u, 0x22A5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A5B8u;
label_22a5b8:
    // 0x22a5b8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x22a5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22a5bc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x22a5bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a5c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22A5C0u;
    {
        const bool branch_taken_0x22a5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a5c0) {
            ctx->pc = 0x22A5D8u;
            goto label_22a5d8;
        }
    }
    ctx->pc = 0x22A5C8u;
label_22a5c8:
    // 0x22a5c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a5cc: 0xc08a8fc  jal         func_22A3F0
    ctx->pc = 0x22A5CCu;
    SET_GPR_U32(ctx, 31, 0x22A5D4u);
    ctx->pc = 0x22A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A3F0u, 0x22A5CCu, 0x22A5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A5D4u;
label_22a5d4:
    // 0x22a5d4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x22a5d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22a5d8:
    // 0x22a5d8: 0x1600ffe8  bnez        $s0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x22A5D8u;
    {
        const bool branch_taken_0x22a5d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a5d8) {
            ctx->pc = 0x22A57Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a57c;
        }
    }
    ctx->pc = 0x22A5E0u;
    // 0x22a5e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a5e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22a5e8: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22A5E8u;
    {
        const bool branch_taken_0x22a5e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x22a5e8) {
            ctx->pc = 0x22A61Cu;
            goto label_22a61c;
        }
    }
    ctx->pc = 0x22A5F0u;
    // 0x22a5f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a5f4: 0xc08a90c  jal         func_22A430
    ctx->pc = 0x22A5F4u;
    SET_GPR_U32(ctx, 31, 0x22A5FCu);
    ctx->pc = 0x22A430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A430u, 0x22A5F4u, 0x22A5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A5FCu;
label_22a5fc:
    // 0x22a5fc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x22a5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a600: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x22a600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x22a604: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x22a604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22a608: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22a608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a60c: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x22A60Cu;
    SET_GPR_U32(ctx, 31, 0x22A614u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x22A60Cu, 0x22A614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A614u;
label_22a614:
    // 0x22a614: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A614u;
    {
        const bool branch_taken_0x22a614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a614) {
            ctx->pc = 0x22A624u;
            goto label_22a624;
        }
    }
    ctx->pc = 0x22A61Cu;
label_22a61c:
    // 0x22a61c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a620: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x22a620u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22a624:
    // 0x22a624: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22a624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a628: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22a628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a62c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22a62cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a630: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22a630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a634: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22a634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a638: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x22a638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22a63c: 0x3e00008  jr          $ra
    ctx->pc = 0x22A63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A644u;
    // 0x22a644: 0x0  nop
    ctx->pc = 0x22a644u;
    // NOP
    // 0x22a648: 0x0  nop
    ctx->pc = 0x22a648u;
    // NOP
    // 0x22a64c: 0x0  nop
    ctx->pc = 0x22a64cu;
    // NOP
    ctx->pc = 0x22a650u;
}
