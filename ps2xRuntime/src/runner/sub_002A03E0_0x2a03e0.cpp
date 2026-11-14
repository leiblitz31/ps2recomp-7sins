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

// Function: sub_002A03E0
// Address: 0x2a03e0 - 0x2a0520
void sub_002A03E0_0x2a03e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A03E0_0x2a03e0");
#endif

    switch (ctx->pc) {
        case 0x2a0410u: goto label_2a0410;
        case 0x2a042cu: goto label_2a042c;
        case 0x2a0454u: goto label_2a0454;
        case 0x2a0460u: goto label_2a0460;
        case 0x2a048cu: goto label_2a048c;
        case 0x2a04a4u: goto label_2a04a4;
        case 0x2a04b0u: goto label_2a04b0;
        case 0x2a04dcu: goto label_2a04dc;
        case 0x2a04f4u: goto label_2a04f4;
        case 0x2a0504u: goto label_2a0504;
        default: break;
    }

    ctx->pc = 0x2a03e0u;

    // 0x2a03e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2a03e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2a03e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a03e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a03e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a03e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a03ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a03ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a03f0: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2a03f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x2a03f4: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x2a03f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x2a03f8: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x2a03f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x2a03fc: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x2a03fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
    // 0x2a0400: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a0400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a0404: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2a0404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0408: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2A0408u;
    SET_GPR_U32(ctx, 31, 0x2A0410u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2A0408u, 0x2A0410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0410u;
label_2a0410:
    // 0x2a0410: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a0410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0414: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2a0414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x2a0418: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2a0418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a041c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2a041cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a0420: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a0420u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0424: 0xc08a320  jal         func_228C80
    ctx->pc = 0x2A0424u;
    SET_GPR_U32(ctx, 31, 0x2A042Cu);
    ctx->pc = 0x228C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228C80u, 0x2A0424u, 0x2A042Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A042Cu;
label_2a042c:
    // 0x2a042c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a042cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0430: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a0430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0434: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x2a0434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x2a0438: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x2a0438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x2a043c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a043cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0440: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2a0440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2a0444: 0x24a502e0  addiu       $a1, $a1, 0x2E0
    ctx->pc = 0x2a0444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 736));
    // 0x2a0448: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x2a0448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2a044c: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x2A044Cu;
    SET_GPR_U32(ctx, 31, 0x2A0454u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x2A044Cu, 0x2A0454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0454u;
label_2a0454:
    // 0x2a0454: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2a0454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2a0458: 0xc0e27da  jal         func_389F68
    ctx->pc = 0x2A0458u;
    SET_GPR_U32(ctx, 31, 0x2A0460u);
    ctx->pc = 0x389F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389F68u, 0x2A0458u, 0x2A0460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0460u;
label_2a0460:
    // 0x2a0460: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a0460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0464: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2a0464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a0468: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0468u;
    {
        const bool branch_taken_0x2a0468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0468) {
            ctx->pc = 0x2A0478u;
            goto label_2a0478;
        }
    }
    ctx->pc = 0x2A0470u;
    // 0x2a0470: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2a0470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a0474: 0xac500044  sw          $s0, 0x44($v0)
    ctx->pc = 0x2a0474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 16));
label_2a0478:
    // 0x2a0478: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2a0478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a047c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a047cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a0480: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a0480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0484: 0xc0e2700  jal         func_389C00
    ctx->pc = 0x2A0484u;
    SET_GPR_U32(ctx, 31, 0x2A048Cu);
    ctx->pc = 0x389C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389C00u, 0x2A0484u, 0x2A048Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A048Cu;
label_2a048c:
    // 0x2a048c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2a048cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a0490: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a0490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a0494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0498: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2a0498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a049c: 0xc0e2686  jal         func_389A18
    ctx->pc = 0x2A049Cu;
    SET_GPR_U32(ctx, 31, 0x2A04A4u);
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x2A049Cu, 0x2A04A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A04A4u;
label_2a04a4:
    // 0x2a04a4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x2a04a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2a04a8: 0xc0e27da  jal         func_389F68
    ctx->pc = 0x2A04A8u;
    SET_GPR_U32(ctx, 31, 0x2A04B0u);
    ctx->pc = 0x389F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389F68u, 0x2A04A8u, 0x2A04B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A04B0u;
label_2a04b0:
    // 0x2a04b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a04b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a04b4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2a04b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a04b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A04B8u;
    {
        const bool branch_taken_0x2a04b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a04b8) {
            ctx->pc = 0x2A04C8u;
            goto label_2a04c8;
        }
    }
    ctx->pc = 0x2A04C0u;
    // 0x2a04c0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2a04c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a04c4: 0xac500048  sw          $s0, 0x48($v0)
    ctx->pc = 0x2a04c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 16));
label_2a04c8:
    // 0x2a04c8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2a04c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a04cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a04ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a04d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a04d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a04d4: 0xc0e2700  jal         func_389C00
    ctx->pc = 0x2A04D4u;
    SET_GPR_U32(ctx, 31, 0x2A04DCu);
    ctx->pc = 0x389C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389C00u, 0x2A04D4u, 0x2A04DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A04DCu;
label_2a04dc:
    // 0x2a04dc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2a04dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a04e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a04e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a04e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a04e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a04e8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2a04e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a04ec: 0xc0e2686  jal         func_389A18
    ctx->pc = 0x2A04ECu;
    SET_GPR_U32(ctx, 31, 0x2A04F4u);
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x2A04ECu, 0x2A04F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A04F4u;
label_2a04f4:
    // 0x2a04f4: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2a04f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x2a04f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a04f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a04fc: 0xc08a614  jal         func_229850
    ctx->pc = 0x2A04FCu;
    SET_GPR_U32(ctx, 31, 0x2A0504u);
    ctx->pc = 0x229850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229850u, 0x2A04FCu, 0x2A0504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0504u;
label_2a0504:
    // 0x2a0504: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a0504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a0508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a050c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a050cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0510: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2a0510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a0514: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A051Cu;
    // 0x2a051c: 0x0  nop
    ctx->pc = 0x2a051cu;
    // NOP
    ctx->pc = 0x2a0520u;
}
