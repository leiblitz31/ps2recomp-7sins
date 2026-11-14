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

// Function: sub_0047C320
// Address: 0x47c320 - 0x47c3d0
void sub_0047C320_0x47c320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047C320_0x47c320");
#endif

    switch (ctx->pc) {
        case 0x47c348u: goto label_47c348;
        case 0x47c374u: goto label_47c374;
        case 0x47c380u: goto label_47c380;
        case 0x47c38cu: goto label_47c38c;
        case 0x47c3a8u: goto label_47c3a8;
        default: break;
    }

    ctx->pc = 0x47c320u;

    // 0x47c320: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x47c320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x47c324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47c324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x47c328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47c328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47c32c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47c32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47c330: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x47c330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x47c334: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x47c334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x47c338: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x47c338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47c33c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x47c33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47c340: 0xc11eb9c  jal         func_47AE70
    ctx->pc = 0x47C340u;
    SET_GPR_U32(ctx, 31, 0x47C348u);
    ctx->pc = 0x47AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47AE70u, 0x47C340u, 0x47C348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C348u;
label_47c348:
    // 0x47c348: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47c348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c34c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x47c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x47c350: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47C350u;
    {
        const bool branch_taken_0x47c350 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x47c350) {
            ctx->pc = 0x47C364u;
            goto label_47c364;
        }
    }
    ctx->pc = 0x47C358u;
    // 0x47c358: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47c358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c35c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x47C35Cu;
    {
        const bool branch_taken_0x47c35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c35c) {
            ctx->pc = 0x47C3ACu;
            goto label_47c3ac;
        }
    }
    ctx->pc = 0x47C364u;
label_47c364:
    // 0x47c364: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x47c364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47c368: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47c368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c36c: 0xc11eff0  jal         func_47BFC0
    ctx->pc = 0x47C36Cu;
    SET_GPR_U32(ctx, 31, 0x47C374u);
    ctx->pc = 0x47BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC0u, 0x47C36Cu, 0x47C374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C374u;
label_47c374:
    // 0x47c374: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x47c374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47c378: 0xc0e27ae  jal         func_389EB8
    ctx->pc = 0x47C378u;
    SET_GPR_U32(ctx, 31, 0x47C380u);
    ctx->pc = 0x389EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389EB8u, 0x47C378u, 0x47C380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C380u;
label_47c380:
    // 0x47c380: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x47c380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47c384: 0xc11f000  jal         func_47C000
    ctx->pc = 0x47C384u;
    SET_GPR_U32(ctx, 31, 0x47C38Cu);
    ctx->pc = 0x47C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C000u, 0x47C384u, 0x47C38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C38Cu;
label_47c38c:
    // 0x47c38c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x47c38cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c390: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x47c390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x47c394: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x47c394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x47c398: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x47c398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47c39c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x47c39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c3a0: 0xc11f0f4  jal         func_47C3D0
    ctx->pc = 0x47C3A0u;
    SET_GPR_U32(ctx, 31, 0x47C3A8u);
    ctx->pc = 0x47C3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C3D0u, 0x47C3A0u, 0x47C3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C3A8u;
label_47c3a8:
    // 0x47c3a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47c3ac:
    // 0x47c3ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47c3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47c3b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47c3b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47c3b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47c3b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47c3b8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x47c3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x47c3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x47C3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47C3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47C3C4u;
    // 0x47c3c4: 0x0  nop
    ctx->pc = 0x47c3c4u;
    // NOP
    // 0x47c3c8: 0x0  nop
    ctx->pc = 0x47c3c8u;
    // NOP
    // 0x47c3cc: 0x0  nop
    ctx->pc = 0x47c3ccu;
    // NOP
    ctx->pc = 0x47c3d0u;
}
