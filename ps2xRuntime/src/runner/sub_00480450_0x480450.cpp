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

// Function: sub_00480450
// Address: 0x480450 - 0x480500
void sub_00480450_0x480450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480450_0x480450");
#endif

    switch (ctx->pc) {
        case 0x480494u: goto label_480494;
        case 0x4804d0u: goto label_4804d0;
        case 0x4804e8u: goto label_4804e8;
        default: break;
    }

    ctx->pc = 0x480450u;

    // 0x480450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x480450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x480454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x480454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x480458: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x480458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48045c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x48045cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x480460: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x480460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x480464: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x480464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x480468: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x480468u;
    {
        const bool branch_taken_0x480468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480468) {
            ctx->pc = 0x48049Cu;
            goto label_48049c;
        }
    }
    ctx->pc = 0x480470u;
    // 0x480470: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x480470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x480474: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x480474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x480478: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x480478u;
    {
        const bool branch_taken_0x480478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480478) {
            ctx->pc = 0x48049Cu;
            goto label_48049c;
        }
    }
    ctx->pc = 0x480480u;
    // 0x480480: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x480480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x480484: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x480484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x480488: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x480488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x48048c: 0xc1200bc  jal         func_4802F0
    ctx->pc = 0x48048Cu;
    SET_GPR_U32(ctx, 31, 0x480494u);
    ctx->pc = 0x4802F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4802F0u, 0x48048Cu, 0x480494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480494u;
label_480494:
    // 0x480494: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x480494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x480498: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x480498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_48049c:
    // 0x48049c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48049cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4804a0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x4804a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4804a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4804A4u;
    {
        const bool branch_taken_0x4804a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4804a4) {
            ctx->pc = 0x4804D8u;
            goto label_4804d8;
        }
    }
    ctx->pc = 0x4804ACu;
    // 0x4804ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4804acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4804b0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x4804b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4804b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4804B4u;
    {
        const bool branch_taken_0x4804b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4804b4) {
            ctx->pc = 0x4804D8u;
            goto label_4804d8;
        }
    }
    ctx->pc = 0x4804BCu;
    // 0x4804bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4804bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4804c0: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x4804c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x4804c4: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x4804c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4804c8: 0xc120048  jal         func_480120
    ctx->pc = 0x4804C8u;
    SET_GPR_U32(ctx, 31, 0x4804D0u);
    ctx->pc = 0x480120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480120u, 0x4804C8u, 0x4804D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4804D0u;
label_4804d0:
    // 0x4804d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4804d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4804d4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x4804d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_4804d8:
    // 0x4804d8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4804d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4804dc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x4804dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4804e0: 0xc0f534a  jal         func_3D4D28
    ctx->pc = 0x4804E0u;
    SET_GPR_U32(ctx, 31, 0x4804E8u);
    ctx->pc = 0x3D4D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4D28u, 0x4804E0u, 0x4804E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4804E8u;
label_4804e8:
    // 0x4804e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4804e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4804ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4804ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4804f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4804F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4804F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4804F8u;
    // 0x4804f8: 0x0  nop
    ctx->pc = 0x4804f8u;
    // NOP
    // 0x4804fc: 0x0  nop
    ctx->pc = 0x4804fcu;
    // NOP
    ctx->pc = 0x480500u;
}
