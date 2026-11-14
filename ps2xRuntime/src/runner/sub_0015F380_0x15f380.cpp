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

// Function: sub_0015F380
// Address: 0x15f380 - 0x15f4c0
void sub_0015F380_0x15f380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F380_0x15f380");
#endif

    switch (ctx->pc) {
        case 0x15f3e0u: goto label_15f3e0;
        case 0x15f3f4u: goto label_15f3f4;
        case 0x15f408u: goto label_15f408;
        case 0x15f41cu: goto label_15f41c;
        case 0x15f42cu: goto label_15f42c;
        case 0x15f470u: goto label_15f470;
        case 0x15f484u: goto label_15f484;
        case 0x15f490u: goto label_15f490;
        default: break;
    }

    ctx->pc = 0x15f380u;

    // 0x15f380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15f380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15f384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15f384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15f388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15f388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15f38c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x15f38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x15f390: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15f390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f394: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x15f394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x15f398: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x15F398u;
    {
        const bool branch_taken_0x15f398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f398) {
            ctx->pc = 0x15F49Cu;
            goto label_15f49c;
        }
    }
    ctx->pc = 0x15F3A0u;
    // 0x15f3a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f3a4: 0x8c4200fc  lw          $v0, 0xFC($v0)
    ctx->pc = 0x15f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x15f3a8: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x15f3a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x15f3ac: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F3ACu;
    {
        const bool branch_taken_0x15f3ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f3ac) {
            ctx->pc = 0x15F3C0u;
            goto label_15f3c0;
        }
    }
    ctx->pc = 0x15F3B4u;
    // 0x15f3b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15f3b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f3b8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x15F3B8u;
    {
        const bool branch_taken_0x15f3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f3b8) {
            ctx->pc = 0x15F4A0u;
            goto label_15f4a0;
        }
    }
    ctx->pc = 0x15F3C0u;
label_15f3c0:
    // 0x15f3c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15f3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15f3c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f3c8: 0xac430090  sw          $v1, 0x90($v0)
    ctx->pc = 0x15f3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 3));
    // 0x15f3cc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15f3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f3d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15f3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f3d4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x15f3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15f3d8: 0xc057d80  jal         func_15F600
    ctx->pc = 0x15F3D8u;
    SET_GPR_U32(ctx, 31, 0x15F3E0u);
    ctx->pc = 0x15F600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F600u, 0x15F3D8u, 0x15F3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F3E0u;
label_15f3e0:
    // 0x15f3e0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15f3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f3e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15f3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15f3e8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x15f3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15f3ec: 0xc057d80  jal         func_15F600
    ctx->pc = 0x15F3ECu;
    SET_GPR_U32(ctx, 31, 0x15F3F4u);
    ctx->pc = 0x15F600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F600u, 0x15F3ECu, 0x15F3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F3F4u;
label_15f3f4:
    // 0x15f3f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15f3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f3f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15f3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f3fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15f3fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f400: 0xc057d80  jal         func_15F600
    ctx->pc = 0x15F400u;
    SET_GPR_U32(ctx, 31, 0x15F408u);
    ctx->pc = 0x15F600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F600u, 0x15F400u, 0x15F408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F408u;
label_15f408:
    // 0x15f408: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15f408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f40c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15f40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15f410: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15f410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f414: 0xc057d80  jal         func_15F600
    ctx->pc = 0x15F414u;
    SET_GPR_U32(ctx, 31, 0x15F41Cu);
    ctx->pc = 0x15F600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F600u, 0x15F414u, 0x15F41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F41Cu;
label_15f41c:
    // 0x15f41c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f420: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x15f420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x15f424: 0xc057954  jal         func_15E550
    ctx->pc = 0x15F424u;
    SET_GPR_U32(ctx, 31, 0x15F42Cu);
    ctx->pc = 0x15E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E550u, 0x15F424u, 0x15F42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F42Cu;
label_15f42c:
    // 0x15f42c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15f42cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f430: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x15F430u;
    {
        const bool branch_taken_0x15f430 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f430) {
            ctx->pc = 0x15F478u;
            goto label_15f478;
        }
    }
    ctx->pc = 0x15F438u;
    // 0x15f438: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15f438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f43c: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x15f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x15f440: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15f440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15f444: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x15f444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x15f448: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x15f448u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x15f44c: 0x1810  mfhi        $v1
    ctx->pc = 0x15f44cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x15f450: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15f450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f454: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x15f454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    // 0x15f458: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15f458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f45c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15f45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f460: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x15f460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x15f464: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15f464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f468: 0xc0584ec  jal         func_1613B0
    ctx->pc = 0x15F468u;
    SET_GPR_U32(ctx, 31, 0x15F470u);
    ctx->pc = 0x1613B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1613B0u, 0x15F468u, 0x15F470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F470u;
label_15f470:
    // 0x15f470: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x15f470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f474: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x15f474u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_15f478:
    // 0x15f478: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15f478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f47c: 0xc0580cc  jal         func_160330
    ctx->pc = 0x15F47Cu;
    SET_GPR_U32(ctx, 31, 0x15F484u);
    ctx->pc = 0x160330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160330u, 0x15F47Cu, 0x15F484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F484u;
label_15f484:
    // 0x15f484: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15f484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f488: 0xc057dc4  jal         func_15F710
    ctx->pc = 0x15F488u;
    SET_GPR_U32(ctx, 31, 0x15F490u);
    ctx->pc = 0x15F710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F710u, 0x15F488u, 0x15F490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F490u;
label_15f490:
    // 0x15f490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f494: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15F494u;
    {
        const bool branch_taken_0x15f494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f494) {
            ctx->pc = 0x15F4A0u;
            goto label_15f4a0;
        }
    }
    ctx->pc = 0x15F49Cu;
label_15f49c:
    // 0x15f49c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15f49cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f4a0:
    // 0x15f4a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15f4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f4a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15f4a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f4a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15f4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15f4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x15F4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F4B4u;
    // 0x15f4b4: 0x0  nop
    ctx->pc = 0x15f4b4u;
    // NOP
    // 0x15f4b8: 0x0  nop
    ctx->pc = 0x15f4b8u;
    // NOP
    // 0x15f4bc: 0x0  nop
    ctx->pc = 0x15f4bcu;
    // NOP
    ctx->pc = 0x15f4c0u;
}
