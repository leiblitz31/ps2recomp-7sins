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

// Function: sub_00118860
// Address: 0x118860 - 0x118910
void sub_00118860_0x118860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118860_0x118860");
#endif

    switch (ctx->pc) {
        case 0x118874u: goto label_118874;
        case 0x118880u: goto label_118880;
        case 0x1188acu: goto label_1188ac;
        case 0x1188c0u: goto label_1188c0;
        case 0x1188d4u: goto label_1188d4;
        case 0x1188e8u: goto label_1188e8;
        default: break;
    }

    ctx->pc = 0x118860u;

    // 0x118860: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x118860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x118864: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118868: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x118868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11886c: 0xc116edc  jal         func_45BB70
    ctx->pc = 0x11886Cu;
    SET_GPR_U32(ctx, 31, 0x118874u);
    ctx->pc = 0x45BB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BB70u, 0x11886Cu, 0x118874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118874u;
label_118874:
    // 0x118874: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x118874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118878: 0xc116ea4  jal         func_45BA90
    ctx->pc = 0x118878u;
    SET_GPR_U32(ctx, 31, 0x118880u);
    ctx->pc = 0x45BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BA90u, 0x118878u, 0x118880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118880u;
label_118880:
    // 0x118880: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x118880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x118884: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x118884u;
    {
        const bool branch_taken_0x118884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x118884) {
            ctx->pc = 0x118894u;
            goto label_118894;
        }
    }
    ctx->pc = 0x11888Cu;
    // 0x11888c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x11888Cu;
    {
        const bool branch_taken_0x11888c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11888c) {
            ctx->pc = 0x1188F8u;
            goto label_1188f8;
        }
    }
    ctx->pc = 0x118894u;
label_118894:
    // 0x118894: 0x8f83ba64  lw          $v1, -0x459C($gp)
    ctx->pc = 0x118894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949476)));
    // 0x118898: 0x10030017  beq         $zero, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x118898u;
    {
        const bool branch_taken_0x118898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x118898) {
            ctx->pc = 0x1188F8u;
            goto label_1188f8;
        }
    }
    ctx->pc = 0x1188A0u;
    // 0x1188a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1188a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1188a4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1188A4u;
    {
        const bool branch_taken_0x1188a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1188a4) {
            ctx->pc = 0x1188ECu;
            goto label_1188ec;
        }
    }
    ctx->pc = 0x1188ACu;
label_1188ac:
    // 0x1188ac: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x1188acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x1188b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1188b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1188b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1188b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1188b8: 0xc116e00  jal         func_45B800
    ctx->pc = 0x1188B8u;
    SET_GPR_U32(ctx, 31, 0x1188C0u);
    ctx->pc = 0x45B800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B800u, 0x1188B8u, 0x1188C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1188C0u;
label_1188c0:
    // 0x1188c0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1188c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1188c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1188c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1188c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1188c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1188cc: 0xc116d44  jal         func_45B510
    ctx->pc = 0x1188CCu;
    SET_GPR_U32(ctx, 31, 0x1188D4u);
    ctx->pc = 0x45B510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B510u, 0x1188CCu, 0x1188D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1188D4u;
label_1188d4:
    // 0x1188d4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1188d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x1188d8: 0x8f84ba64  lw          $a0, -0x459C($gp)
    ctx->pc = 0x1188d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949476)));
    // 0x1188dc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1188dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1188e0: 0xc04c5a8  jal         func_1316A0
    ctx->pc = 0x1188E0u;
    SET_GPR_U32(ctx, 31, 0x1188E8u);
    ctx->pc = 0x1316A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316A0u, 0x1188E0u, 0x1188E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1188E8u;
label_1188e8:
    // 0x1188e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1188e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1188ec:
    // 0x1188ec: 0x2e010022  sltiu       $at, $s0, 0x22
    ctx->pc = 0x1188ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)34) ? 1 : 0);
    // 0x1188f0: 0x1420ffee  bnez        $at, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1188F0u;
    {
        const bool branch_taken_0x1188f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1188f0) {
            ctx->pc = 0x1188ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1188ac;
        }
    }
    ctx->pc = 0x1188F8u;
label_1188f8:
    // 0x1188f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1188f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1188fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1188fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118900: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x118900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x118904: 0x3e00008  jr          $ra
    ctx->pc = 0x118904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11890Cu;
    // 0x11890c: 0x0  nop
    ctx->pc = 0x11890cu;
    // NOP
    ctx->pc = 0x118910u;
}
