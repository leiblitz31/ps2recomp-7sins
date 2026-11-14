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

// Function: sub_001F94A0
// Address: 0x1f94a0 - 0x1f9590
void sub_001F94A0_0x1f94a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F94A0_0x1f94a0");
#endif

    switch (ctx->pc) {
        case 0x1f94c0u: goto label_1f94c0;
        case 0x1f94ccu: goto label_1f94cc;
        case 0x1f94e4u: goto label_1f94e4;
        case 0x1f94f0u: goto label_1f94f0;
        case 0x1f9508u: goto label_1f9508;
        case 0x1f9514u: goto label_1f9514;
        case 0x1f952cu: goto label_1f952c;
        case 0x1f9538u: goto label_1f9538;
        case 0x1f9550u: goto label_1f9550;
        case 0x1f9564u: goto label_1f9564;
        default: break;
    }

    ctx->pc = 0x1f94a0u;

    // 0x1f94a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f94a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f94a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f94a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f94a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f94a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f94ac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1f94acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1f94b0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1f94b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1f94b4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f94b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f94b8: 0xc07e3b4  jal         func_1F8ED0
    ctx->pc = 0x1F94B8u;
    SET_GPR_U32(ctx, 31, 0x1F94C0u);
    ctx->pc = 0x1F8ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8ED0u, 0x1F94B8u, 0x1F94C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F94C0u;
label_1f94c0:
    // 0x1f94c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f94c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f94c4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F94C4u;
    SET_GPR_U32(ctx, 31, 0x1F94CCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F94C4u, 0x1F94CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F94CCu;
label_1f94cc:
    // 0x1f94cc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f94ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f94d0: 0x8c650140  lw          $a1, 0x140($v1)
    ctx->pc = 0x1f94d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x1f94d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f94d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f94d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f94d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f94dc: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F94DCu;
    SET_GPR_U32(ctx, 31, 0x1F94E4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F94DCu, 0x1F94E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F94E4u;
label_1f94e4:
    // 0x1f94e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f94e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f94e8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F94E8u;
    SET_GPR_U32(ctx, 31, 0x1F94F0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F94E8u, 0x1F94F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F94F0u;
label_1f94f0:
    // 0x1f94f0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f94f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f94f4: 0x8c650170  lw          $a1, 0x170($v1)
    ctx->pc = 0x1f94f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 368)));
    // 0x1f94f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f94f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f94fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f94fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9500: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F9500u;
    SET_GPR_U32(ctx, 31, 0x1F9508u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F9500u, 0x1F9508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9508u;
label_1f9508:
    // 0x1f9508: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f9508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f950c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F950Cu;
    SET_GPR_U32(ctx, 31, 0x1F9514u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F950Cu, 0x1F9514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9514u;
label_1f9514:
    // 0x1f9514: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9518: 0x8c650184  lw          $a1, 0x184($v1)
    ctx->pc = 0x1f9518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 388)));
    // 0x1f951c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f951cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9520: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f9520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9524: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F9524u;
    SET_GPR_U32(ctx, 31, 0x1F952Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F9524u, 0x1F952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F952Cu;
label_1f952c:
    // 0x1f952c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f952cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9530: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F9530u;
    SET_GPR_U32(ctx, 31, 0x1F9538u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F9530u, 0x1F9538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9538u;
label_1f9538:
    // 0x1f9538: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f9538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f953c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f953cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9540: 0x24440214  addiu       $a0, $v0, 0x214
    ctx->pc = 0x1f9540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 532));
    // 0x1f9544: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1f9544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9548: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F9548u;
    SET_GPR_U32(ctx, 31, 0x1F9550u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F9548u, 0x1F9550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9550u;
label_1f9550:
    // 0x1f9550: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f9550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9558: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f9558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f955c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F955Cu;
    SET_GPR_U32(ctx, 31, 0x1F9564u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F955Cu, 0x1F9564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9564u;
label_1f9564:
    // 0x1f9564: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f9564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9568: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f956c: 0xac640238  sw          $a0, 0x238($v1)
    ctx->pc = 0x1f956cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 568), GPR_U32(ctx, 4));
    // 0x1f9570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f9570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f9574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9578: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1f9578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f957c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F957Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F957Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9584u;
    // 0x1f9584: 0x0  nop
    ctx->pc = 0x1f9584u;
    // NOP
    // 0x1f9588: 0x0  nop
    ctx->pc = 0x1f9588u;
    // NOP
    // 0x1f958c: 0x0  nop
    ctx->pc = 0x1f958cu;
    // NOP
    ctx->pc = 0x1f9590u;
}
