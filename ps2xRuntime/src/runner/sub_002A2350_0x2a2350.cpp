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

// Function: sub_002A2350
// Address: 0x2a2350 - 0x2a2400
void sub_002A2350_0x2a2350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2350_0x2a2350");
#endif

    switch (ctx->pc) {
        case 0x2a238cu: goto label_2a238c;
        case 0x2a239cu: goto label_2a239c;
        case 0x2a23b4u: goto label_2a23b4;
        case 0x2a23c4u: goto label_2a23c4;
        case 0x2a23d0u: goto label_2a23d0;
        case 0x2a23e0u: goto label_2a23e0;
        default: break;
    }

    ctx->pc = 0x2a2350u;

    // 0x2a2350: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a2350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a2354: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a2354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a2358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a2358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a235c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a235cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a2360: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2a2360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2a2364: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2a2364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2368: 0x8c630194  lw          $v1, 0x194($v1)
    ctx->pc = 0x2a2368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
    // 0x2a236c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2a236cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a2370: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x2A2370u;
    {
        const bool branch_taken_0x2a2370 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2370) {
            ctx->pc = 0x2A23E0u;
            goto label_2a23e0;
        }
    }
    ctx->pc = 0x2A2378u;
    // 0x2a2378: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a2378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a237c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2a237cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2a2380: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2a2380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2a2384: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A2384u;
    SET_GPR_U32(ctx, 31, 0x2A238Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A2384u, 0x2A238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A238Cu;
label_2a238c:
    // 0x2a238c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a238cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2390: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a2390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2394: 0xc096fec  jal         func_25BFB0
    ctx->pc = 0x2A2394u;
    SET_GPR_U32(ctx, 31, 0x2A239Cu);
    ctx->pc = 0x25BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BFB0u, 0x2A2394u, 0x2A239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A239Cu;
label_2a239c:
    // 0x2a239c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a239cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a23a0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a23a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a23a4: 0xa040019c  sb          $zero, 0x19C($v0)
    ctx->pc = 0x2a23a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 412), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a23a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a23a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a23ac: 0xc097134  jal         func_25C4D0
    ctx->pc = 0x2A23ACu;
    SET_GPR_U32(ctx, 31, 0x2A23B4u);
    ctx->pc = 0x25C4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C4D0u, 0x2A23ACu, 0x2A23B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A23B4u;
label_2a23b4:
    // 0x2a23b4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2a23b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a23b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a23b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a23bc: 0xc0a821c  jal         func_2A0870
    ctx->pc = 0x2A23BCu;
    SET_GPR_U32(ctx, 31, 0x2A23C4u);
    ctx->pc = 0x2A0870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0870u, 0x2A23BCu, 0x2A23C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A23C4u;
label_2a23c4:
    // 0x2a23c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a23c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a23c8: 0xc09713c  jal         func_25C4F0
    ctx->pc = 0x2A23C8u;
    SET_GPR_U32(ctx, 31, 0x2A23D0u);
    ctx->pc = 0x25C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C4F0u, 0x2A23C8u, 0x2A23D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A23D0u;
label_2a23d0:
    // 0x2a23d0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2a23d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a23d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a23d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a23d8: 0xc0a82b8  jal         func_2A0AE0
    ctx->pc = 0x2A23D8u;
    SET_GPR_U32(ctx, 31, 0x2A23E0u);
    ctx->pc = 0x2A0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0AE0u, 0x2A23D8u, 0x2A23E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A23E0u;
label_2a23e0:
    // 0x2a23e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a23e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a23e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a23e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a23e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a23e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a23ec: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2a23ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a23f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A23F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A23F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A23F8u;
    // 0x2a23f8: 0x0  nop
    ctx->pc = 0x2a23f8u;
    // NOP
    // 0x2a23fc: 0x0  nop
    ctx->pc = 0x2a23fcu;
    // NOP
    ctx->pc = 0x2a2400u;
}
