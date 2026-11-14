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

// Function: sub_001F92C0
// Address: 0x1f92c0 - 0x1f93b0
void sub_001F92C0_0x1f92c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F92C0_0x1f92c0");
#endif

    switch (ctx->pc) {
        case 0x1f92e0u: goto label_1f92e0;
        case 0x1f92ecu: goto label_1f92ec;
        case 0x1f9304u: goto label_1f9304;
        case 0x1f9310u: goto label_1f9310;
        case 0x1f9328u: goto label_1f9328;
        case 0x1f9334u: goto label_1f9334;
        case 0x1f934cu: goto label_1f934c;
        case 0x1f9358u: goto label_1f9358;
        case 0x1f9370u: goto label_1f9370;
        case 0x1f9384u: goto label_1f9384;
        default: break;
    }

    ctx->pc = 0x1f92c0u;

    // 0x1f92c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f92c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f92c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f92c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f92c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f92c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f92cc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1f92ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1f92d0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1f92d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1f92d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f92d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f92d8: 0xc07e2fc  jal         func_1F8BF0
    ctx->pc = 0x1F92D8u;
    SET_GPR_U32(ctx, 31, 0x1F92E0u);
    ctx->pc = 0x1F8BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8BF0u, 0x1F92D8u, 0x1F92E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F92E0u;
label_1f92e0:
    // 0x1f92e0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f92e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f92e4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F92E4u;
    SET_GPR_U32(ctx, 31, 0x1F92ECu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F92E4u, 0x1F92ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F92ECu;
label_1f92ec:
    // 0x1f92ec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f92ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f92f0: 0x8c650148  lw          $a1, 0x148($v1)
    ctx->pc = 0x1f92f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 328)));
    // 0x1f92f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f92f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f92f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f92f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f92fc: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F92FCu;
    SET_GPR_U32(ctx, 31, 0x1F9304u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F92FCu, 0x1F9304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9304u;
label_1f9304:
    // 0x1f9304: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f9304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9308: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F9308u;
    SET_GPR_U32(ctx, 31, 0x1F9310u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F9308u, 0x1F9310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9310u;
label_1f9310:
    // 0x1f9310: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9314: 0x8c650178  lw          $a1, 0x178($v1)
    ctx->pc = 0x1f9314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 376)));
    // 0x1f9318: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f9318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f931c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f931cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9320: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F9320u;
    SET_GPR_U32(ctx, 31, 0x1F9328u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F9320u, 0x1F9328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9328u;
label_1f9328:
    // 0x1f9328: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f9328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f932c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F932Cu;
    SET_GPR_U32(ctx, 31, 0x1F9334u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F932Cu, 0x1F9334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9334u;
label_1f9334:
    // 0x1f9334: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9338: 0x8c65018c  lw          $a1, 0x18C($v1)
    ctx->pc = 0x1f9338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
    // 0x1f933c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f933cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9340: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f9340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9344: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F9344u;
    SET_GPR_U32(ctx, 31, 0x1F934Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F9344u, 0x1F934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F934Cu;
label_1f934c:
    // 0x1f934c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f934cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9350: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F9350u;
    SET_GPR_U32(ctx, 31, 0x1F9358u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F9350u, 0x1F9358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9358u;
label_1f9358:
    // 0x1f9358: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f9358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f935c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f935cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9360: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1f9360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1f9364: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1f9364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9368: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F9368u;
    SET_GPR_U32(ctx, 31, 0x1F9370u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F9368u, 0x1F9370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9370u;
label_1f9370:
    // 0x1f9370: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f9370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9378: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f9378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f937c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F937Cu;
    SET_GPR_U32(ctx, 31, 0x1F9384u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F937Cu, 0x1F9384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9384u;
label_1f9384:
    // 0x1f9384: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f9384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9388: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f938c: 0xac640230  sw          $a0, 0x230($v1)
    ctx->pc = 0x1f938cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 560), GPR_U32(ctx, 4));
    // 0x1f9390: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f9390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f9394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9398: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1f9398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f939c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F939Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F939Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F93A4u;
    // 0x1f93a4: 0x0  nop
    ctx->pc = 0x1f93a4u;
    // NOP
    // 0x1f93a8: 0x0  nop
    ctx->pc = 0x1f93a8u;
    // NOP
    // 0x1f93ac: 0x0  nop
    ctx->pc = 0x1f93acu;
    // NOP
    ctx->pc = 0x1f93b0u;
}
