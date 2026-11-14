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

// Function: sub_0023E3B0
// Address: 0x23e3b0 - 0x23e4b0
void sub_0023E3B0_0x23e3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E3B0_0x23e3b0");
#endif

    switch (ctx->pc) {
        case 0x23e3d4u: goto label_23e3d4;
        case 0x23e3f0u: goto label_23e3f0;
        case 0x23e424u: goto label_23e424;
        case 0x23e434u: goto label_23e434;
        case 0x23e454u: goto label_23e454;
        case 0x23e48cu: goto label_23e48c;
        default: break;
    }

    ctx->pc = 0x23e3b0u;

    // 0x23e3b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23e3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23e3b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23e3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23e3b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23e3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23e3bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23e3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23e3c0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x23e3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x23e3c4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x23e3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x23e3c8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x23e3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e3cc: 0xc08f948  jal         func_23E520
    ctx->pc = 0x23E3CCu;
    SET_GPR_U32(ctx, 31, 0x23E3D4u);
    ctx->pc = 0x23E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E520u, 0x23E3CCu, 0x23E3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E3D4u;
label_23e3d4:
    // 0x23e3d4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x23e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23e3d8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x23e3d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x23e3dc: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x23E3DCu;
    {
        const bool branch_taken_0x23e3dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e3dc) {
            ctx->pc = 0x23E48Cu;
            goto label_23e48c;
        }
    }
    ctx->pc = 0x23E3E4u;
    // 0x23e3e4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x23e3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e3e8: 0xc08f670  jal         func_23D9C0
    ctx->pc = 0x23E3E8u;
    SET_GPR_U32(ctx, 31, 0x23E3F0u);
    ctx->pc = 0x23D9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C0u, 0x23E3E8u, 0x23E3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E3F0u;
label_23e3f0:
    // 0x23e3f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23e3f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e3f4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x23e3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e3f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e3fc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23E3FCu;
    {
        const bool branch_taken_0x23e3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e3fc) {
            ctx->pc = 0x23E43Cu;
            goto label_23e43c;
        }
    }
    ctx->pc = 0x23E404u;
    // 0x23e404: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23e404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e408: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x23e408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e40c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x23e40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e410: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x23e410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23e414: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x23e414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23e418: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x23e418u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23e41c: 0xc08f92c  jal         func_23E4B0
    ctx->pc = 0x23E41Cu;
    SET_GPR_U32(ctx, 31, 0x23E424u);
    ctx->pc = 0x23E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E4B0u, 0x23E41Cu, 0x23E424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E424u;
label_23e424:
    // 0x23e424: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23e424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e428: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x23e428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e42c: 0xc08f614  jal         func_23D850
    ctx->pc = 0x23E42Cu;
    SET_GPR_U32(ctx, 31, 0x23E434u);
    ctx->pc = 0x23D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D850u, 0x23E42Cu, 0x23E434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E434u;
label_23e434:
    // 0x23e434: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23E434u;
    {
        const bool branch_taken_0x23e434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e434) {
            ctx->pc = 0x23E458u;
            goto label_23e458;
        }
    }
    ctx->pc = 0x23E43Cu;
label_23e43c:
    // 0x23e43c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x23e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e440: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x23e440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x23e444: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x23e444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23e448: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23e448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e44c: 0xc08f8ac  jal         func_23E2B0
    ctx->pc = 0x23E44Cu;
    SET_GPR_U32(ctx, 31, 0x23E454u);
    ctx->pc = 0x23E2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E2B0u, 0x23E44Cu, 0x23E454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E454u;
label_23e454:
    // 0x23e454: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23e454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e458:
    // 0x23e458: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x23e458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x23e45c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x23e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23e460: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x23e460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x23e464: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x23e464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23e468: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x23e468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23e46c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x23e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x23e470: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x23e470u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23e474: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x23e474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x23e478: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x23e478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23e47c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x23e47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e480: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23e480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e484: 0xc08f600  jal         func_23D800
    ctx->pc = 0x23E484u;
    SET_GPR_U32(ctx, 31, 0x23E48Cu);
    ctx->pc = 0x23D800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D800u, 0x23E484u, 0x23E48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E48Cu;
label_23e48c:
    // 0x23e48c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23e48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e490: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23e490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23e494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e498: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x23e498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23e49c: 0x3e00008  jr          $ra
    ctx->pc = 0x23E49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E4A4u;
    // 0x23e4a4: 0x0  nop
    ctx->pc = 0x23e4a4u;
    // NOP
    // 0x23e4a8: 0x0  nop
    ctx->pc = 0x23e4a8u;
    // NOP
    // 0x23e4ac: 0x0  nop
    ctx->pc = 0x23e4acu;
    // NOP
    ctx->pc = 0x23e4b0u;
}
