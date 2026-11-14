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

// Function: sub_0027BE40
// Address: 0x27be40 - 0x27bf70
void sub_0027BE40_0x27be40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BE40_0x27be40");
#endif

    switch (ctx->pc) {
        case 0x27be88u: goto label_27be88;
        case 0x27be98u: goto label_27be98;
        case 0x27beacu: goto label_27beac;
        case 0x27bef0u: goto label_27bef0;
        case 0x27bf24u: goto label_27bf24;
        case 0x27bf5cu: goto label_27bf5c;
        default: break;
    }

    ctx->pc = 0x27be40u;

    // 0x27be40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27be40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27be44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27be44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27be48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27be48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27be4c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x27be4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x27be50: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x27be50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x27be54: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x27be54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27be58: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x27be58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27be5c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x27be5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27be60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x27be60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27be64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27be64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27be68: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x27be68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27be6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27be70: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x27be70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27be74: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x27be74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x27be78: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x27be78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x27be7c: 0x2447000c  addiu       $a3, $v0, 0xC
    ctx->pc = 0x27be7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x27be80: 0xc045a70  jal         func_1169C0
    ctx->pc = 0x27BE80u;
    SET_GPR_U32(ctx, 31, 0x27BE88u);
    ctx->pc = 0x1169C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1169C0u, 0x27BE80u, 0x27BE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BE88u;
label_27be88:
    // 0x27be88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27be88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27be8c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x27be8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27be90: 0xc04febc  jal         func_13FAF0
    ctx->pc = 0x27BE90u;
    SET_GPR_U32(ctx, 31, 0x27BE98u);
    ctx->pc = 0x13FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FAF0u, 0x27BE90u, 0x27BE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BE98u;
label_27be98:
    // 0x27be98: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x27be98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27be9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27be9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bea0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27bea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27bea4: 0xc064300  jal         func_190C00
    ctx->pc = 0x27BEA4u;
    SET_GPR_U32(ctx, 31, 0x27BEACu);
    ctx->pc = 0x190C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C00u, 0x27BEA4u, 0x27BEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BEACu;
label_27beac:
    // 0x27beac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x27beacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27beb0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x27beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27beb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27beb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27beb8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x27beb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x27bebc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27bebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bec0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27bec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bec4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27bec4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27bec8: 0x3e00008  jr          $ra
    ctx->pc = 0x27BEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BED0u;
    // 0x27bed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27bed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27bed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27bed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27bed8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x27bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27bedc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x27bedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x27bee0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27bee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bee4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x27bee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27bee8: 0xc0852e4  jal         func_214B90
    ctx->pc = 0x27BEE8u;
    SET_GPR_U32(ctx, 31, 0x27BEF0u);
    ctx->pc = 0x214B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214B90u, 0x27BEE8u, 0x27BEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BEF0u;
label_27bef0:
    // 0x27bef0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x27bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27bef4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27bef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27bef8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x27bef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x27befc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27BEFCu;
    {
        const bool branch_taken_0x27befc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27befc) {
            ctx->pc = 0x27BF3Cu;
            goto label_27bf3c;
        }
    }
    ctx->pc = 0x27BF04u;
    // 0x27bf04: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x27bf04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27bf08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bf0c: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x27bf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x27bf10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bf14: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x27bf14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x27bf18: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x27bf18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27bf1c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27BF1Cu;
    SET_GPR_U32(ctx, 31, 0x27BF24u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27BF1Cu, 0x27BF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BF24u;
label_27bf24:
    // 0x27bf24: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x27bf24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bf28: 0xac620044  sw          $v0, 0x44($v1)
    ctx->pc = 0x27bf28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
    // 0x27bf2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bf30: 0xa0400066  sb          $zero, 0x66($v0)
    ctx->pc = 0x27bf30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 102), (uint8_t)GPR_U32(ctx, 0));
    // 0x27bf34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27BF34u;
    {
        const bool branch_taken_0x27bf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bf34) {
            ctx->pc = 0x27BF4Cu;
            goto label_27bf4c;
        }
    }
    ctx->pc = 0x27BF3Cu;
label_27bf3c:
    // 0x27bf3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bf40: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x27bf40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x27bf44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bf48: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x27bf48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_27bf4c:
    // 0x27bf4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bf50: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x27bf50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x27bf54: 0xc09efdc  jal         func_27BF70
    ctx->pc = 0x27BF54u;
    SET_GPR_U32(ctx, 31, 0x27BF5Cu);
    ctx->pc = 0x27BF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BF70u, 0x27BF54u, 0x27BF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BF5Cu;
label_27bf5c:
    // 0x27bf5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27bf5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bf60: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27bf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27bf64: 0x3e00008  jr          $ra
    ctx->pc = 0x27BF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BF6Cu;
    // 0x27bf6c: 0x0  nop
    ctx->pc = 0x27bf6cu;
    // NOP
    ctx->pc = 0x27bf70u;
}
