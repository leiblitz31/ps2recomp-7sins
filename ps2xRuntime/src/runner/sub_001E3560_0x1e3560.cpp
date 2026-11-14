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

// Function: sub_001E3560
// Address: 0x1e3560 - 0x1e3610
void sub_001E3560_0x1e3560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3560_0x1e3560");
#endif

    switch (ctx->pc) {
        case 0x1e358cu: goto label_1e358c;
        case 0x1e3598u: goto label_1e3598;
        case 0x1e35a8u: goto label_1e35a8;
        case 0x1e35b4u: goto label_1e35b4;
        case 0x1e35c4u: goto label_1e35c4;
        case 0x1e35d0u: goto label_1e35d0;
        case 0x1e35dcu: goto label_1e35dc;
        case 0x1e35f8u: goto label_1e35f8;
        default: break;
    }

    ctx->pc = 0x1e3560u;

    // 0x1e3560: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e3560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e3564: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e3568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e356c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e356cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e3570: 0xffa50040  sd          $a1, 0x40($sp)
    ctx->pc = 0x1e3570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 5));
    // 0x1e3574: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x1e3574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
    // 0x1e3578: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x1e3578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x1e357c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1e357cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e3580: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1e3580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e3584: 0xc077f40  jal         func_1DFD00
    ctx->pc = 0x1E3584u;
    SET_GPR_U32(ctx, 31, 0x1E358Cu);
    ctx->pc = 0x1DFD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFD00u, 0x1E3584u, 0x1E358Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E358Cu;
label_1e358c:
    // 0x1e358c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e358cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3590: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1E3590u;
    {
        const bool branch_taken_0x1e3590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3590) {
            ctx->pc = 0x1E35E0u;
            goto label_1e35e0;
        }
    }
    ctx->pc = 0x1E3598u;
label_1e3598:
    // 0x1e3598: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x1e3598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1e359c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1e359cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e35a0: 0xc078858  jal         func_1E2160
    ctx->pc = 0x1E35A0u;
    SET_GPR_U32(ctx, 31, 0x1E35A8u);
    ctx->pc = 0x1E2160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2160u, 0x1E35A0u, 0x1E35A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E35A8u;
label_1e35a8:
    // 0x1e35a8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e35a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e35ac: 0xc078d90  jal         func_1E3640
    ctx->pc = 0x1E35ACu;
    SET_GPR_U32(ctx, 31, 0x1E35B4u);
    ctx->pc = 0x1E3640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3640u, 0x1E35ACu, 0x1E35B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E35B4u;
label_1e35b4:
    // 0x1e35b4: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x1e35b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1e35b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e35b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e35bc: 0xc078820  jal         func_1E2080
    ctx->pc = 0x1E35BCu;
    SET_GPR_U32(ctx, 31, 0x1E35C4u);
    ctx->pc = 0x1E2080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2080u, 0x1E35BCu, 0x1E35C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E35C4u;
label_1e35c4:
    // 0x1e35c4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e35c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e35c8: 0xc078d84  jal         func_1E3610
    ctx->pc = 0x1E35C8u;
    SET_GPR_U32(ctx, 31, 0x1E35D0u);
    ctx->pc = 0x1E3610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3610u, 0x1E35C8u, 0x1E35D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E35D0u;
label_1e35d0:
    // 0x1e35d0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e35d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e35d4: 0xc078a30  jal         func_1E28C0
    ctx->pc = 0x1E35D4u;
    SET_GPR_U32(ctx, 31, 0x1E35DCu);
    ctx->pc = 0x1E28C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E28C0u, 0x1E35D4u, 0x1E35DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E35DCu;
label_1e35dc:
    // 0x1e35dc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1e35dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1e35e0:
    // 0x1e35e0: 0x1e00ffed  bgtz        $s0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1E35E0u;
    {
        const bool branch_taken_0x1e35e0 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1e35e0) {
            ctx->pc = 0x1E3598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3598;
        }
    }
    ctx->pc = 0x1E35E8u;
    // 0x1e35e8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1e35e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e35ec: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1e35ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e35f0: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x1E35F0u;
    SET_GPR_U32(ctx, 31, 0x1E35F8u);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x1E35F0u, 0x1E35F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E35F8u;
label_1e35f8:
    // 0x1e35f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e35f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e35fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e35fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3600: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1e3600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e3604: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E360Cu;
    // 0x1e360c: 0x0  nop
    ctx->pc = 0x1e360cu;
    // NOP
    ctx->pc = 0x1e3610u;
}
