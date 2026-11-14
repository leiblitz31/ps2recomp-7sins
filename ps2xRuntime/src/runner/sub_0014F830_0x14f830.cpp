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

// Function: sub_0014F830
// Address: 0x14f830 - 0x14f920
void sub_0014F830_0x14f830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F830_0x14f830");
#endif

    switch (ctx->pc) {
        case 0x14f85cu: goto label_14f85c;
        case 0x14f88cu: goto label_14f88c;
        case 0x14f8a4u: goto label_14f8a4;
        case 0x14f8b8u: goto label_14f8b8;
        case 0x14f8d0u: goto label_14f8d0;
        case 0x14f8e8u: goto label_14f8e8;
        case 0x14f8fcu: goto label_14f8fc;
        default: break;
    }

    ctx->pc = 0x14f830u;

    // 0x14f830: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14f830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14f834: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14f834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14f838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14f838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14f83c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14f83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14f840: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x14f840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x14f844: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x14f844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14f848: 0x1003002c  beq         $zero, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x14F848u;
    {
        const bool branch_taken_0x14f848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x14f848) {
            ctx->pc = 0x14F8FCu;
            goto label_14f8fc;
        }
    }
    ctx->pc = 0x14F850u;
    // 0x14f850: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x14f850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14f854: 0xc085530  jal         func_2154C0
    ctx->pc = 0x14F854u;
    SET_GPR_U32(ctx, 31, 0x14F85Cu);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x14F854u, 0x14F85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F85Cu;
label_14f85c:
    // 0x14f85c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x14f85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14f860: 0x10430017  beq         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x14F860u;
    {
        const bool branch_taken_0x14f860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14f860) {
            ctx->pc = 0x14F8C0u;
            goto label_14f8c0;
        }
    }
    ctx->pc = 0x14F868u;
    // 0x14f868: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14f868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14f86c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F86Cu;
    {
        const bool branch_taken_0x14f86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14f86c) {
            ctx->pc = 0x14F87Cu;
            goto label_14f87c;
        }
    }
    ctx->pc = 0x14F874u;
    // 0x14f874: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x14F874u;
    {
        const bool branch_taken_0x14f874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f874) {
            ctx->pc = 0x14F8FCu;
            goto label_14f8fc;
        }
    }
    ctx->pc = 0x14F87Cu;
label_14f87c:
    // 0x14f87c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x14f87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14f880: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14f880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14f884: 0xc085538  jal         func_2154E0
    ctx->pc = 0x14F884u;
    SET_GPR_U32(ctx, 31, 0x14F88Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x14F884u, 0x14F88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F88Cu;
label_14f88c:
    // 0x14f88c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14f88cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f890: 0x1011001a  beq         $zero, $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x14F890u;
    {
        const bool branch_taken_0x14f890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x14f890) {
            ctx->pc = 0x14F8FCu;
            goto label_14f8fc;
        }
    }
    ctx->pc = 0x14F898u;
    // 0x14f898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14f898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f89c: 0xc0a535c  jal         func_294D70
    ctx->pc = 0x14F89Cu;
    SET_GPR_U32(ctx, 31, 0x14F8A4u);
    ctx->pc = 0x294D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D70u, 0x14F89Cu, 0x14F8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F8A4u;
label_14f8a4:
    // 0x14f8a4: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x14f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x14f8a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14f8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f8ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14f8acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f8b0: 0xc052be8  jal         func_14AFA0
    ctx->pc = 0x14F8B0u;
    SET_GPR_U32(ctx, 31, 0x14F8B8u);
    ctx->pc = 0x14AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AFA0u, 0x14F8B0u, 0x14F8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F8B8u;
label_14f8b8:
    // 0x14f8b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14F8B8u;
    {
        const bool branch_taken_0x14f8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f8b8) {
            ctx->pc = 0x14F8FCu;
            goto label_14f8fc;
        }
    }
    ctx->pc = 0x14F8C0u;
label_14f8c0:
    // 0x14f8c0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x14f8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14f8c4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x14f8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14f8c8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x14F8C8u;
    SET_GPR_U32(ctx, 31, 0x14F8D0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x14F8C8u, 0x14F8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F8D0u;
label_14f8d0:
    // 0x14f8d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14f8d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f8d4: 0x10100009  beq         $zero, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14F8D4u;
    {
        const bool branch_taken_0x14f8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x14f8d4) {
            ctx->pc = 0x14F8FCu;
            goto label_14f8fc;
        }
    }
    ctx->pc = 0x14F8DCu;
    // 0x14f8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f8e0: 0xc0a5fd0  jal         func_297F40
    ctx->pc = 0x14F8E0u;
    SET_GPR_U32(ctx, 31, 0x14F8E8u);
    ctx->pc = 0x297F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297F40u, 0x14F8E0u, 0x14F8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F8E8u;
label_14f8e8:
    // 0x14f8e8: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x14f8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x14f8ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14f8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f8f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14f8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f8f4: 0xc052be8  jal         func_14AFA0
    ctx->pc = 0x14F8F4u;
    SET_GPR_U32(ctx, 31, 0x14F8FCu);
    ctx->pc = 0x14AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AFA0u, 0x14F8F4u, 0x14F8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F8FCu;
label_14f8fc:
    // 0x14f8fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14f8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f900: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14f900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14f904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f908: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x14f908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14f90c: 0x3e00008  jr          $ra
    ctx->pc = 0x14F90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F914u;
    // 0x14f914: 0x0  nop
    ctx->pc = 0x14f914u;
    // NOP
    // 0x14f918: 0x0  nop
    ctx->pc = 0x14f918u;
    // NOP
    // 0x14f91c: 0x0  nop
    ctx->pc = 0x14f91cu;
    // NOP
    ctx->pc = 0x14f920u;
}
