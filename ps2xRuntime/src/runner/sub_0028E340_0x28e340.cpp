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

// Function: sub_0028E340
// Address: 0x28e340 - 0x28e4a0
void sub_0028E340_0x28e340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E340_0x28e340");
#endif

    switch (ctx->pc) {
        case 0x28e374u: goto label_28e374;
        case 0x28e388u: goto label_28e388;
        case 0x28e3acu: goto label_28e3ac;
        case 0x28e3d4u: goto label_28e3d4;
        case 0x28e3f8u: goto label_28e3f8;
        case 0x28e420u: goto label_28e420;
        case 0x28e450u: goto label_28e450;
        case 0x28e460u: goto label_28e460;
        case 0x28e484u: goto label_28e484;
        default: break;
    }

    ctx->pc = 0x28e340u;

    // 0x28e340: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x28e340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x28e344: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28e344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28e348: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28e348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28e34c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28e34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28e350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28e350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28e354: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x28e354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x28e358: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x28e358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x28e35c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x28e35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x28e360: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x28e360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x28e364: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x28e364u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x28e368: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x28e368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28e36c: 0xc0a1b50  jal         func_286D40
    ctx->pc = 0x28E36Cu;
    SET_GPR_U32(ctx, 31, 0x28E374u);
    ctx->pc = 0x286D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286D40u, 0x28E36Cu, 0x28E374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E374u;
label_28e374:
    // 0x28e374: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x28e374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x28e378: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x28e378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x28e37c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x28e37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x28e380: 0xc041954  jal         func_106550
    ctx->pc = 0x28E380u;
    SET_GPR_U32(ctx, 31, 0x28E388u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x28E380u, 0x28E388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E388u;
label_28e388:
    // 0x28e388: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x28e388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x28e38c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28e390: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x28e390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28e394: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x28e394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28e398: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x28e398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x28e39c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28e39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28e3a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3a4: 0xc0a3e00  jal         func_28F800
    ctx->pc = 0x28E3A4u;
    SET_GPR_U32(ctx, 31, 0x28E3ACu);
    ctx->pc = 0x28F800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F800u, 0x28E3A4u, 0x28E3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E3ACu;
label_28e3ac:
    // 0x28e3ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28e3acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3b0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x28e3b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3b4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x28e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28e3b8: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x28e3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x28e3bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28e3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28e3c0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x28e3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28e3c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28e3c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3c8: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x28e3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x28e3cc: 0xc0a39e8  jal         func_28E7A0
    ctx->pc = 0x28E3CCu;
    SET_GPR_U32(ctx, 31, 0x28E3D4u);
    ctx->pc = 0x28E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E7A0u, 0x28E3CCu, 0x28E3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E3D4u;
label_28e3d4:
    // 0x28e3d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28e3d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3d8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x28e3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28e3dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e3e0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28E3E0u;
    {
        const bool branch_taken_0x28e3e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28e3e0) {
            ctx->pc = 0x28E404u;
            goto label_28e404;
        }
    }
    ctx->pc = 0x28E3E8u;
    // 0x28e3e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3ec: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x28e3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28e3f0: 0xc0a3978  jal         func_28E5E0
    ctx->pc = 0x28E3F0u;
    SET_GPR_U32(ctx, 31, 0x28E3F8u);
    ctx->pc = 0x28E5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E5E0u, 0x28E3F0u, 0x28E3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E3F8u;
label_28e3f8:
    // 0x28e3f8: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x28e3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x28e3fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28E3FCu;
    {
        const bool branch_taken_0x28e3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e3fc) {
            ctx->pc = 0x28E424u;
            goto label_28e424;
        }
    }
    ctx->pc = 0x28E404u;
label_28e404:
    // 0x28e404: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x28e404u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x28e408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e40c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x28e40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28e410: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x28e410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28e414: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x28e414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x28e418: 0xc0a3958  jal         func_28E560
    ctx->pc = 0x28E418u;
    SET_GPR_U32(ctx, 31, 0x28E420u);
    ctx->pc = 0x28E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E560u, 0x28E418u, 0x28E420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E420u;
label_28e420:
    // 0x28e420: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28e420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e424:
    // 0x28e424: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x28e424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28e428: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28E428u;
    {
        const bool branch_taken_0x28e428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e428) {
            ctx->pc = 0x28E454u;
            goto label_28e454;
        }
    }
    ctx->pc = 0x28E430u;
    // 0x28e430: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x28e430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28e434: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x28e434u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x28e438: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x28e438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28e43c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x28e43cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28e440: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28e440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e444: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x28e444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28e448: 0xc0a39e8  jal         func_28E7A0
    ctx->pc = 0x28E448u;
    SET_GPR_U32(ctx, 31, 0x28E450u);
    ctx->pc = 0x28E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E7A0u, 0x28E448u, 0x28E450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E450u;
label_28e450:
    // 0x28e450: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28e450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e454:
    // 0x28e454: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x28e454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28e458: 0xc0a393c  jal         func_28E4F0
    ctx->pc = 0x28E458u;
    SET_GPR_U32(ctx, 31, 0x28E460u);
    ctx->pc = 0x28E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E4F0u, 0x28E458u, 0x28E460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E460u;
label_28e460:
    // 0x28e460: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x28e460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x28e464: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x28e464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x28e468: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28e468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28e46c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x28e46cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x28e470: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x28e470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28e474: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28e474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e478: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28e478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e47c: 0xc0a3928  jal         func_28E4A0
    ctx->pc = 0x28E47Cu;
    SET_GPR_U32(ctx, 31, 0x28E484u);
    ctx->pc = 0x28E4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E4A0u, 0x28E47Cu, 0x28E484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E484u;
label_28e484:
    // 0x28e484: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28e484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e488: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28e488u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e48c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28e48cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e490: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28e490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e494: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x28e494u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x28e498: 0x3e00008  jr          $ra
    ctx->pc = 0x28E498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E4A0u;
}
