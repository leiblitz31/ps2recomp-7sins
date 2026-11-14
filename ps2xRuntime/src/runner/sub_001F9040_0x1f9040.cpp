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

// Function: sub_001F9040
// Address: 0x1f9040 - 0x1f91b0
void sub_001F9040_0x1f9040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9040_0x1f9040");
#endif

    switch (ctx->pc) {
        case 0x1f9060u: goto label_1f9060;
        case 0x1f9078u: goto label_1f9078;
        case 0x1f9084u: goto label_1f9084;
        case 0x1f909cu: goto label_1f909c;
        case 0x1f90a8u: goto label_1f90a8;
        case 0x1f90c0u: goto label_1f90c0;
        case 0x1f90ccu: goto label_1f90cc;
        case 0x1f90e4u: goto label_1f90e4;
        case 0x1f90f0u: goto label_1f90f0;
        case 0x1f9108u: goto label_1f9108;
        case 0x1f9114u: goto label_1f9114;
        case 0x1f912cu: goto label_1f912c;
        case 0x1f9138u: goto label_1f9138;
        case 0x1f9144u: goto label_1f9144;
        case 0x1f915cu: goto label_1f915c;
        case 0x1f9170u: goto label_1f9170;
        default: break;
    }

    ctx->pc = 0x1f9040u;

    // 0x1f9040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f9040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f9044: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f9044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f9048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f9048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f904c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f904cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f9050: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1f9050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1f9054: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f9054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9058: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F9058u;
    SET_GPR_U32(ctx, 31, 0x1F9060u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F9058u, 0x1F9060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9060u;
label_1f9060:
    // 0x1f9060: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f9060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9064: 0x8c650144  lw          $a1, 0x144($v1)
    ctx->pc = 0x1f9064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
    // 0x1f9068: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f9068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f906c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f906cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9070: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F9070u;
    SET_GPR_U32(ctx, 31, 0x1F9078u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F9070u, 0x1F9078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9078u;
label_1f9078:
    // 0x1f9078: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f9078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f907c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F907Cu;
    SET_GPR_U32(ctx, 31, 0x1F9084u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F907Cu, 0x1F9084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9084u;
label_1f9084:
    // 0x1f9084: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f9084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9088: 0x8c650154  lw          $a1, 0x154($v1)
    ctx->pc = 0x1f9088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1f908c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f908cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9090: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f9090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9094: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F9094u;
    SET_GPR_U32(ctx, 31, 0x1F909Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F9094u, 0x1F909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F909Cu;
label_1f909c:
    // 0x1f909c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f909cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f90a0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F90A0u;
    SET_GPR_U32(ctx, 31, 0x1F90A8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F90A0u, 0x1F90A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F90A8u;
label_1f90a8:
    // 0x1f90a8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f90a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f90ac: 0x8c650164  lw          $a1, 0x164($v1)
    ctx->pc = 0x1f90acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 356)));
    // 0x1f90b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f90b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f90b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f90b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f90b8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F90B8u;
    SET_GPR_U32(ctx, 31, 0x1F90C0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F90B8u, 0x1F90C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F90C0u;
label_1f90c0:
    // 0x1f90c0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f90c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f90c4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F90C4u;
    SET_GPR_U32(ctx, 31, 0x1F90CCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F90C4u, 0x1F90CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F90CCu;
label_1f90cc:
    // 0x1f90cc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f90ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f90d0: 0x8c650174  lw          $a1, 0x174($v1)
    ctx->pc = 0x1f90d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
    // 0x1f90d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f90d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f90d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f90d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f90dc: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F90DCu;
    SET_GPR_U32(ctx, 31, 0x1F90E4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F90DCu, 0x1F90E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F90E4u;
label_1f90e4:
    // 0x1f90e4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f90e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f90e8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F90E8u;
    SET_GPR_U32(ctx, 31, 0x1F90F0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F90E8u, 0x1F90F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F90F0u;
label_1f90f0:
    // 0x1f90f0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f90f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f90f4: 0x8c650188  lw          $a1, 0x188($v1)
    ctx->pc = 0x1f90f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 392)));
    // 0x1f90f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f90f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f90fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f90fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9100: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F9100u;
    SET_GPR_U32(ctx, 31, 0x1F9108u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F9100u, 0x1F9108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9108u;
label_1f9108:
    // 0x1f9108: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f9108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f910c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F910Cu;
    SET_GPR_U32(ctx, 31, 0x1F9114u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F910Cu, 0x1F9114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9114u;
label_1f9114:
    // 0x1f9114: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f9114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9118: 0x8c650198  lw          $a1, 0x198($v1)
    ctx->pc = 0x1f9118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 408)));
    // 0x1f911c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f911cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9120: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f9120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9124: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F9124u;
    SET_GPR_U32(ctx, 31, 0x1F912Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F9124u, 0x1F912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F912Cu;
label_1f912c:
    // 0x1f912c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f912cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9130: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F9130u;
    {
        const bool branch_taken_0x1f9130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9130) {
            ctx->pc = 0x1F9174u;
            goto label_1f9174;
        }
    }
    ctx->pc = 0x1F9138u;
label_1f9138:
    // 0x1f9138: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f9138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f913c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F913Cu;
    SET_GPR_U32(ctx, 31, 0x1F9144u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F913Cu, 0x1F9144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9144u;
label_1f9144:
    // 0x1f9144: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f9144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9148: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f9148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f914c: 0x24440220  addiu       $a0, $v0, 0x220
    ctx->pc = 0x1f914cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    // 0x1f9150: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f9150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9154: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F9154u;
    SET_GPR_U32(ctx, 31, 0x1F915Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F9154u, 0x1F915Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F915Cu;
label_1f915c:
    // 0x1f915c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f915cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f9160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9164: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f9164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9168: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F9168u;
    SET_GPR_U32(ctx, 31, 0x1F9170u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F9168u, 0x1F9170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9170u;
label_1f9170:
    // 0x1f9170: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f9170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f9174:
    // 0x1f9174: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f9174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9178: 0x8c6300a4  lw          $v1, 0xA4($v1)
    ctx->pc = 0x1f9178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x1f917c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1f917cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f9180: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1F9180u;
    {
        const bool branch_taken_0x1f9180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9180) {
            ctx->pc = 0x1F9138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9138;
        }
    }
    ctx->pc = 0x1F9188u;
    // 0x1f9188: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f9188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f918c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f918cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9190: 0xac64023c  sw          $a0, 0x23C($v1)
    ctx->pc = 0x1f9190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 572), GPR_U32(ctx, 4));
    // 0x1f9194: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f9194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9198: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f9198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f919c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f919cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f91a0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1f91a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f91a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F91A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F91A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F91ACu;
    // 0x1f91ac: 0x0  nop
    ctx->pc = 0x1f91acu;
    // NOP
    ctx->pc = 0x1f91b0u;
}
