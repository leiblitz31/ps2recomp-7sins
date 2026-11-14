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

// Function: sub_002A22A0
// Address: 0x2a22a0 - 0x2a2350
void sub_002A22A0_0x2a22a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A22A0_0x2a22a0");
#endif

    switch (ctx->pc) {
        case 0x2a22dcu: goto label_2a22dc;
        case 0x2a22ecu: goto label_2a22ec;
        case 0x2a2308u: goto label_2a2308;
        case 0x2a2318u: goto label_2a2318;
        case 0x2a2324u: goto label_2a2324;
        case 0x2a2334u: goto label_2a2334;
        default: break;
    }

    ctx->pc = 0x2a22a0u;

    // 0x2a22a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a22a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a22a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a22a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a22a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a22a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a22ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a22acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a22b0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2a22b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2a22b4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2a22b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a22b8: 0x8c630194  lw          $v1, 0x194($v1)
    ctx->pc = 0x2a22b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
    // 0x2a22bc: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2a22bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a22c0: 0x1420001c  bnez        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A22C0u;
    {
        const bool branch_taken_0x2a22c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a22c0) {
            ctx->pc = 0x2A2334u;
            goto label_2a2334;
        }
    }
    ctx->pc = 0x2A22C8u;
    // 0x2a22c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a22c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a22cc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2a22ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2a22d0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2a22d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2a22d4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A22D4u;
    SET_GPR_U32(ctx, 31, 0x2A22DCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A22D4u, 0x2A22DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A22DCu;
label_2a22dc:
    // 0x2a22dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a22dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a22e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a22e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a22e4: 0xc096fec  jal         func_25BFB0
    ctx->pc = 0x2A22E4u;
    SET_GPR_U32(ctx, 31, 0x2A22ECu);
    ctx->pc = 0x25BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BFB0u, 0x2A22E4u, 0x2A22ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A22ECu;
label_2a22ec:
    // 0x2a22ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a22ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a22f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a22f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a22f4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a22f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a22f8: 0xa043019c  sb          $v1, 0x19C($v0)
    ctx->pc = 0x2a22f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 412), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a22fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a22fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2300: 0xc097134  jal         func_25C4D0
    ctx->pc = 0x2A2300u;
    SET_GPR_U32(ctx, 31, 0x2A2308u);
    ctx->pc = 0x25C4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C4D0u, 0x2A2300u, 0x2A2308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2308u;
label_2a2308:
    // 0x2a2308: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2a2308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a230c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a230cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2310: 0xc0a821c  jal         func_2A0870
    ctx->pc = 0x2A2310u;
    SET_GPR_U32(ctx, 31, 0x2A2318u);
    ctx->pc = 0x2A0870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0870u, 0x2A2310u, 0x2A2318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2318u;
label_2a2318:
    // 0x2a2318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a231c: 0xc09713c  jal         func_25C4F0
    ctx->pc = 0x2A231Cu;
    SET_GPR_U32(ctx, 31, 0x2A2324u);
    ctx->pc = 0x25C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C4F0u, 0x2A231Cu, 0x2A2324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2324u;
label_2a2324:
    // 0x2a2324: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2a2324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2328: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a2328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a232c: 0xc0a82b8  jal         func_2A0AE0
    ctx->pc = 0x2A232Cu;
    SET_GPR_U32(ctx, 31, 0x2A2334u);
    ctx->pc = 0x2A0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0AE0u, 0x2A232Cu, 0x2A2334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2334u;
label_2a2334:
    // 0x2a2334: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a2334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2338: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a2338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a233c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a233cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2340: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2a2340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a2344: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A234Cu;
    // 0x2a234c: 0x0  nop
    ctx->pc = 0x2a234cu;
    // NOP
    ctx->pc = 0x2a2350u;
}
