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

// Function: sub_00158F10
// Address: 0x158f10 - 0x159120
void sub_00158F10_0x158f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158F10_0x158f10");
#endif

    switch (ctx->pc) {
        case 0x158f4cu: goto label_158f4c;
        case 0x158f60u: goto label_158f60;
        case 0x158f74u: goto label_158f74;
        case 0x158f84u: goto label_158f84;
        case 0x158f9cu: goto label_158f9c;
        case 0x158fb4u: goto label_158fb4;
        case 0x158fccu: goto label_158fcc;
        case 0x158fecu: goto label_158fec;
        case 0x159004u: goto label_159004;
        case 0x159014u: goto label_159014;
        case 0x15903cu: goto label_15903c;
        case 0x159050u: goto label_159050;
        case 0x159064u: goto label_159064;
        case 0x159070u: goto label_159070;
        case 0x159084u: goto label_159084;
        case 0x15909cu: goto label_15909c;
        case 0x1590c4u: goto label_1590c4;
        case 0x1590d8u: goto label_1590d8;
        case 0x1590f4u: goto label_1590f4;
        default: break;
    }

    ctx->pc = 0x158f10u;

    // 0x158f10: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x158f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x158f14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x158f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x158f18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x158f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x158f1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x158f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x158f20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x158f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x158f24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x158f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x158f28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x158f2c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x158f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x158f30: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x158f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x158f34: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x158f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x158f38: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x158f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x158f3c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x158f3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158f40: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x158f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x158f44: 0xc0558a4  jal         func_156290
    ctx->pc = 0x158F44u;
    SET_GPR_U32(ctx, 31, 0x158F4Cu);
    ctx->pc = 0x156290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156290u, 0x158F44u, 0x158F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158F4Cu;
label_158f4c:
    // 0x158f4c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x158f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158f50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x158f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158f54: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x158f54u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x158f58: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x158F58u;
    {
        const bool branch_taken_0x158f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158f58) {
            ctx->pc = 0x158FD4u;
            goto label_158fd4;
        }
    }
    ctx->pc = 0x158F60u;
label_158f60:
    // 0x158f60: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x158f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158f64: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x158f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x158f68: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x158f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x158f6c: 0xc0564d8  jal         func_159360
    ctx->pc = 0x158F6Cu;
    SET_GPR_U32(ctx, 31, 0x158F74u);
    ctx->pc = 0x159360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159360u, 0x158F6Cu, 0x158F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158F74u;
label_158f74:
    // 0x158f74: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x158f74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158f78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158f7c: 0xc0564c8  jal         func_159320
    ctx->pc = 0x158F7Cu;
    SET_GPR_U32(ctx, 31, 0x158F84u);
    ctx->pc = 0x159320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159320u, 0x158F7Cu, 0x158F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158F84u;
label_158f84:
    // 0x158f84: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x158f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x158f88: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x158f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x158f8c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x158f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x158f90: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x158f90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158f94: 0xc0564bc  jal         func_1592F0
    ctx->pc = 0x158F94u;
    SET_GPR_U32(ctx, 31, 0x158F9Cu);
    ctx->pc = 0x1592F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592F0u, 0x158F94u, 0x158F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158F9Cu;
label_158f9c:
    // 0x158f9c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x158f9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x158fa0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x158FA0u;
    {
        const bool branch_taken_0x158fa0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x158fa0) {
            ctx->pc = 0x158FC0u;
            goto label_158fc0;
        }
    }
    ctx->pc = 0x158FA8u;
    // 0x158fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158fac: 0xc0564b4  jal         func_1592D0
    ctx->pc = 0x158FACu;
    SET_GPR_U32(ctx, 31, 0x158FB4u);
    ctx->pc = 0x1592D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592D0u, 0x158FACu, 0x158FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158FB4u;
label_158fb4:
    // 0x158fb4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x158fb4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158fb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x158FB8u;
    {
        const bool branch_taken_0x158fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158fb8) {
            ctx->pc = 0x158FD0u;
            goto label_158fd0;
        }
    }
    ctx->pc = 0x158FC0u;
label_158fc0:
    // 0x158fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158fc4: 0xc0564ac  jal         func_1592B0
    ctx->pc = 0x158FC4u;
    SET_GPR_U32(ctx, 31, 0x158FCCu);
    ctx->pc = 0x1592B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592B0u, 0x158FC4u, 0x158FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158FCCu;
label_158fcc:
    // 0x158fcc: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x158fccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_158fd0:
    // 0x158fd0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x158fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_158fd4:
    // 0x158fd4: 0x1600ffe2  bnez        $s0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x158FD4u;
    {
        const bool branch_taken_0x158fd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x158fd4) {
            ctx->pc = 0x158F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158f60;
        }
    }
    ctx->pc = 0x158FDCu;
    // 0x158fdc: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x158fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x158fe0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x158fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158fe4: 0xc0564a0  jal         func_159280
    ctx->pc = 0x158FE4u;
    SET_GPR_U32(ctx, 31, 0x158FECu);
    ctx->pc = 0x159280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159280u, 0x158FE4u, 0x158FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158FECu;
label_158fec:
    // 0x158fec: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x158FECu;
    {
        const bool branch_taken_0x158fec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x158fec) {
            ctx->pc = 0x159064u;
            goto label_159064;
        }
    }
    ctx->pc = 0x158FF4u;
    // 0x158ff4: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x158ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x158ff8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x158ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x158ffc: 0xc056490  jal         func_159240
    ctx->pc = 0x158FFCu;
    SET_GPR_U32(ctx, 31, 0x159004u);
    ctx->pc = 0x159240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159240u, 0x158FFCu, 0x159004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159004u;
label_159004:
    // 0x159004: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x159004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x159008: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x159008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x15900c: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x15900Cu;
    SET_GPR_U32(ctx, 31, 0x159014u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x15900Cu, 0x159014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159014u;
label_159014:
    // 0x159014: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x159014u;
    {
        const bool branch_taken_0x159014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159014) {
            ctx->pc = 0x159058u;
            goto label_159058;
        }
    }
    ctx->pc = 0x15901Cu;
    // 0x15901c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15901cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x159020: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x159020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x159024: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x159024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159028: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x159028u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15902c: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x15902cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x159030: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x159030u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159034: 0xc05656c  jal         func_1595B0
    ctx->pc = 0x159034u;
    SET_GPR_U32(ctx, 31, 0x15903Cu);
    ctx->pc = 0x1595B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595B0u, 0x159034u, 0x15903Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15903Cu;
label_15903c:
    // 0x15903c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15903cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x159040: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x159040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x159044: 0x27868dc8  addiu       $a2, $gp, -0x7238
    ctx->pc = 0x159044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938056));
    // 0x159048: 0xc056470  jal         func_1591C0
    ctx->pc = 0x159048u;
    SET_GPR_U32(ctx, 31, 0x159050u);
    ctx->pc = 0x1591C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1591C0u, 0x159048u, 0x159050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159050u;
label_159050:
    // 0x159050: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x159050u;
    {
        const bool branch_taken_0x159050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159050) {
            ctx->pc = 0x1590F4u;
            goto label_1590f4;
        }
    }
    ctx->pc = 0x159058u;
label_159058:
    // 0x159058: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x159058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x15905c: 0xc056460  jal         func_159180
    ctx->pc = 0x15905Cu;
    SET_GPR_U32(ctx, 31, 0x159064u);
    ctx->pc = 0x159180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159180u, 0x15905Cu, 0x159064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159064u;
label_159064:
    // 0x159064: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x159064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x159068: 0xc056448  jal         func_159120
    ctx->pc = 0x159068u;
    SET_GPR_U32(ctx, 31, 0x159070u);
    ctx->pc = 0x159120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159120u, 0x159068u, 0x159070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159070u;
label_159070:
    // 0x159070: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x159070u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159074: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x159074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x159078: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x159078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15907c: 0xc0564d8  jal         func_159360
    ctx->pc = 0x15907Cu;
    SET_GPR_U32(ctx, 31, 0x159084u);
    ctx->pc = 0x159360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159360u, 0x15907Cu, 0x159084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159084u;
label_159084:
    // 0x159084: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x159084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x159088: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x159088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x15908c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x15908cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x159090: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x159090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159094: 0xc0564bc  jal         func_1592F0
    ctx->pc = 0x159094u;
    SET_GPR_U32(ctx, 31, 0x15909Cu);
    ctx->pc = 0x1592F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592F0u, 0x159094u, 0x15909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15909Cu;
label_15909c:
    // 0x15909c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15909Cu;
    {
        const bool branch_taken_0x15909c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15909c) {
            ctx->pc = 0x1590E0u;
            goto label_1590e0;
        }
    }
    ctx->pc = 0x1590A4u;
    // 0x1590a4: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1590a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1590a8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1590a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1590ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1590acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1590b0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1590b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1590b4: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x1590b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1590b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1590b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1590bc: 0xc05656c  jal         func_1595B0
    ctx->pc = 0x1590BCu;
    SET_GPR_U32(ctx, 31, 0x1590C4u);
    ctx->pc = 0x1595B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595B0u, 0x1590BCu, 0x1590C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1590C4u;
label_1590c4:
    // 0x1590c4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1590c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1590c8: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x1590c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1590cc: 0x27868dcc  addiu       $a2, $gp, -0x7234
    ctx->pc = 0x1590ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938060));
    // 0x1590d0: 0xc056470  jal         func_1591C0
    ctx->pc = 0x1590D0u;
    SET_GPR_U32(ctx, 31, 0x1590D8u);
    ctx->pc = 0x1591C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1591C0u, 0x1590D0u, 0x1590D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1590D8u;
label_1590d8:
    // 0x1590d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1590D8u;
    {
        const bool branch_taken_0x1590d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1590d8) {
            ctx->pc = 0x1590F4u;
            goto label_1590f4;
        }
    }
    ctx->pc = 0x1590E0u;
label_1590e0:
    // 0x1590e0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1590e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1590e4: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x1590e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1590e8: 0x27868dd0  addiu       $a2, $gp, -0x7230
    ctx->pc = 0x1590e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938064));
    // 0x1590ec: 0xc056470  jal         func_1591C0
    ctx->pc = 0x1590ECu;
    SET_GPR_U32(ctx, 31, 0x1590F4u);
    ctx->pc = 0x1591C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1591C0u, 0x1590ECu, 0x1590F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1590F4u;
label_1590f4:
    // 0x1590f4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1590f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1590f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1590f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1590fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1590fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159100: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x159100u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159104: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x159104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159108: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15910c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x15910cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x159110: 0x3e00008  jr          $ra
    ctx->pc = 0x159110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159118u;
    // 0x159118: 0x0  nop
    ctx->pc = 0x159118u;
    // NOP
    // 0x15911c: 0x0  nop
    ctx->pc = 0x15911cu;
    // NOP
    ctx->pc = 0x159120u;
}
