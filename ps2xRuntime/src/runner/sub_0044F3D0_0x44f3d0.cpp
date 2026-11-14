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

// Function: sub_0044F3D0
// Address: 0x44f3d0 - 0x44f4a0
void sub_0044F3D0_0x44f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F3D0_0x44f3d0");
#endif

    switch (ctx->pc) {
        case 0x44f3f0u: goto label_44f3f0;
        case 0x44f3fcu: goto label_44f3fc;
        case 0x44f410u: goto label_44f410;
        case 0x44f41cu: goto label_44f41c;
        case 0x44f430u: goto label_44f430;
        case 0x44f440u: goto label_44f440;
        case 0x44f454u: goto label_44f454;
        case 0x44f464u: goto label_44f464;
        case 0x44f47cu: goto label_44f47c;
        default: break;
    }

    ctx->pc = 0x44f3d0u;

    // 0x44f3d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x44f3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x44f3d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44f3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x44f3d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44f3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x44f3dc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x44f3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x44f3e0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x44f3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x44f3e4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x44f3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44f3e8: 0xc041b48  jal         func_106D20
    ctx->pc = 0x44F3E8u;
    SET_GPR_U32(ctx, 31, 0x44F3F0u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x44F3E8u, 0x44F3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F3F0u;
label_44f3f0:
    // 0x44f3f0: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x44f3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x44f3f4: 0xc113e90  jal         func_44FA40
    ctx->pc = 0x44F3F4u;
    SET_GPR_U32(ctx, 31, 0x44F3FCu);
    ctx->pc = 0x44FA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FA40u, 0x44F3F4u, 0x44F3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F3FCu;
label_44f3fc:
    // 0x44f3fc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x44f3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44f400: 0x24640018  addiu       $a0, $v1, 0x18
    ctx->pc = 0x44f400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x44f404: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44f404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f408: 0xc113e50  jal         func_44F940
    ctx->pc = 0x44F408u;
    SET_GPR_U32(ctx, 31, 0x44F410u);
    ctx->pc = 0x44F940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F940u, 0x44F408u, 0x44F410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F410u;
label_44f410:
    // 0x44f410: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x44f410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x44f414: 0xc113e48  jal         func_44F920
    ctx->pc = 0x44F414u;
    SET_GPR_U32(ctx, 31, 0x44F41Cu);
    ctx->pc = 0x44F920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F920u, 0x44F414u, 0x44F41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F41Cu;
label_44f41c:
    // 0x44f41c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x44f41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44f420: 0x24640024  addiu       $a0, $v1, 0x24
    ctx->pc = 0x44f420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x44f424: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44f424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f428: 0xc113e08  jal         func_44F820
    ctx->pc = 0x44F428u;
    SET_GPR_U32(ctx, 31, 0x44F430u);
    ctx->pc = 0x44F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F820u, 0x44F428u, 0x44F430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F430u;
label_44f430:
    // 0x44f430: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x44f430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44f434: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x44f434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44f438: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x44F438u;
    SET_GPR_U32(ctx, 31, 0x44F440u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x44F438u, 0x44F440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F440u;
label_44f440:
    // 0x44f440: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x44f440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44f444: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x44f444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x44f448: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x44f448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x44f44c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x44F44Cu;
    SET_GPR_U32(ctx, 31, 0x44F454u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x44F44Cu, 0x44F454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F454u;
label_44f454:
    // 0x44f454: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x44f454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x44f458: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44f458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f45c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x44F45Cu;
    SET_GPR_U32(ctx, 31, 0x44F464u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x44F45Cu, 0x44F464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F464u;
label_44f464:
    // 0x44f464: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x44f464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f468: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x44F468u;
    {
        const bool branch_taken_0x44f468 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x44f468) {
            ctx->pc = 0x44F480u;
            goto label_44f480;
        }
    }
    ctx->pc = 0x44F470u;
    // 0x44f470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44f470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f474: 0xc1148e4  jal         func_452390
    ctx->pc = 0x44F474u;
    SET_GPR_U32(ctx, 31, 0x44F47Cu);
    ctx->pc = 0x452390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452390u, 0x44F474u, 0x44F47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F47Cu;
label_44f47c:
    // 0x44f47c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x44f47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44f480:
    // 0x44f480: 0xaf90bf28  sw          $s0, -0x40D8($gp)
    ctx->pc = 0x44f480u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950696), GPR_U32(ctx, 16));
    // 0x44f484: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x44f484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44f488: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44f488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f48c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44f48cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44f490: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x44f490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x44f494: 0x3e00008  jr          $ra
    ctx->pc = 0x44F494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F49Cu;
    // 0x44f49c: 0x0  nop
    ctx->pc = 0x44f49cu;
    // NOP
    ctx->pc = 0x44f4a0u;
}
