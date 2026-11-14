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

// Function: sub_001F9680
// Address: 0x1f9680 - 0x1f97a0
void sub_001F9680_0x1f9680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9680_0x1f9680");
#endif

    switch (ctx->pc) {
        case 0x1f9698u: goto label_1f9698;
        case 0x1f96b0u: goto label_1f96b0;
        case 0x1f96bcu: goto label_1f96bc;
        case 0x1f96d4u: goto label_1f96d4;
        case 0x1f96e0u: goto label_1f96e0;
        case 0x1f96f8u: goto label_1f96f8;
        case 0x1f9704u: goto label_1f9704;
        case 0x1f971cu: goto label_1f971c;
        case 0x1f9728u: goto label_1f9728;
        case 0x1f9740u: goto label_1f9740;
        case 0x1f974cu: goto label_1f974c;
        case 0x1f9764u: goto label_1f9764;
        case 0x1f9770u: goto label_1f9770;
        case 0x1f9788u: goto label_1f9788;
        default: break;
    }

    ctx->pc = 0x1f9680u;

    // 0x1f9680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f9684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f9688: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1f9688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1f968c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f968cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9690: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F9690u;
    SET_GPR_U32(ctx, 31, 0x1F9698u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F9690u, 0x1F9698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9698u;
label_1f9698:
    // 0x1f9698: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f9698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f969c: 0x8c6502ac  lw          $a1, 0x2AC($v1)
    ctx->pc = 0x1f969cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 684)));
    // 0x1f96a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f96a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f96a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f96a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f96a8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F96A8u;
    SET_GPR_U32(ctx, 31, 0x1F96B0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F96A8u, 0x1F96B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F96B0u;
label_1f96b0:
    // 0x1f96b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f96b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f96b4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F96B4u;
    SET_GPR_U32(ctx, 31, 0x1F96BCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F96B4u, 0x1F96BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F96BCu;
label_1f96bc:
    // 0x1f96bc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f96bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f96c0: 0x8c6502b0  lw          $a1, 0x2B0($v1)
    ctx->pc = 0x1f96c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 688)));
    // 0x1f96c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f96c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f96c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f96c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f96cc: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F96CCu;
    SET_GPR_U32(ctx, 31, 0x1F96D4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F96CCu, 0x1F96D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F96D4u;
label_1f96d4:
    // 0x1f96d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f96d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f96d8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F96D8u;
    SET_GPR_U32(ctx, 31, 0x1F96E0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F96D8u, 0x1F96E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F96E0u;
label_1f96e0:
    // 0x1f96e0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f96e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f96e4: 0x8c6502b4  lw          $a1, 0x2B4($v1)
    ctx->pc = 0x1f96e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 692)));
    // 0x1f96e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f96e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f96ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f96ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f96f0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F96F0u;
    SET_GPR_U32(ctx, 31, 0x1F96F8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F96F0u, 0x1F96F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F96F8u;
label_1f96f8:
    // 0x1f96f8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f96f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f96fc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F96FCu;
    SET_GPR_U32(ctx, 31, 0x1F9704u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F96FCu, 0x1F9704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9704u;
label_1f9704:
    // 0x1f9704: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f9704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9708: 0x8c6502b8  lw          $a1, 0x2B8($v1)
    ctx->pc = 0x1f9708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 696)));
    // 0x1f970c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f970cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9710: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f9710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9714: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F9714u;
    SET_GPR_U32(ctx, 31, 0x1F971Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F9714u, 0x1F971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F971Cu;
label_1f971c:
    // 0x1f971c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f971cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9720: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F9720u;
    SET_GPR_U32(ctx, 31, 0x1F9728u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F9720u, 0x1F9728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9728u;
label_1f9728:
    // 0x1f9728: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f9728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f972c: 0x8c6502bc  lw          $a1, 0x2BC($v1)
    ctx->pc = 0x1f972cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 700)));
    // 0x1f9730: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f9730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9734: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f9734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9738: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F9738u;
    SET_GPR_U32(ctx, 31, 0x1F9740u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F9738u, 0x1F9740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9740u;
label_1f9740:
    // 0x1f9740: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f9740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9744: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F9744u;
    SET_GPR_U32(ctx, 31, 0x1F974Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F9744u, 0x1F974Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F974Cu;
label_1f974c:
    // 0x1f974c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f974cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9750: 0x8c6502c0  lw          $a1, 0x2C0($v1)
    ctx->pc = 0x1f9750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 704)));
    // 0x1f9754: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f9754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9758: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f9758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f975c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F975Cu;
    SET_GPR_U32(ctx, 31, 0x1F9764u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F975Cu, 0x1F9764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9764u;
label_1f9764:
    // 0x1f9764: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f9764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9768: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F9768u;
    SET_GPR_U32(ctx, 31, 0x1F9770u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F9768u, 0x1F9770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9770u;
label_1f9770:
    // 0x1f9770: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f9770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9774: 0x8c6502c4  lw          $a1, 0x2C4($v1)
    ctx->pc = 0x1f9774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 708)));
    // 0x1f9778: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f9778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f977c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f977cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9780: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F9780u;
    SET_GPR_U32(ctx, 31, 0x1F9788u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F9780u, 0x1F9788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9788u;
label_1f9788:
    // 0x1f9788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f978c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1f978cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f9790: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9798u;
    // 0x1f9798: 0x0  nop
    ctx->pc = 0x1f9798u;
    // NOP
    // 0x1f979c: 0x0  nop
    ctx->pc = 0x1f979cu;
    // NOP
    ctx->pc = 0x1f97a0u;
}
