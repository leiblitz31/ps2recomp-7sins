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

// Function: sub_00282D40
// Address: 0x282d40 - 0x282f50
void sub_00282D40_0x282d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282D40_0x282d40");
#endif

    switch (ctx->pc) {
        case 0x282d7cu: goto label_282d7c;
        case 0x282d90u: goto label_282d90;
        case 0x282da4u: goto label_282da4;
        case 0x282db4u: goto label_282db4;
        case 0x282dccu: goto label_282dcc;
        case 0x282de4u: goto label_282de4;
        case 0x282dfcu: goto label_282dfc;
        case 0x282e1cu: goto label_282e1c;
        case 0x282e34u: goto label_282e34;
        case 0x282e44u: goto label_282e44;
        case 0x282e6cu: goto label_282e6c;
        case 0x282e80u: goto label_282e80;
        case 0x282e94u: goto label_282e94;
        case 0x282ea0u: goto label_282ea0;
        case 0x282eb4u: goto label_282eb4;
        case 0x282eccu: goto label_282ecc;
        case 0x282ef4u: goto label_282ef4;
        case 0x282f08u: goto label_282f08;
        case 0x282f24u: goto label_282f24;
        default: break;
    }

    ctx->pc = 0x282d40u;

    // 0x282d40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x282d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x282d44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x282d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x282d48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x282d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x282d4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x282d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x282d50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x282d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x282d54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x282d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x282d58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x282d5c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x282d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x282d60: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x282d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x282d64: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x282d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x282d68: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x282d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x282d6c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x282d6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282d70: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x282d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x282d74: 0xc0a01c8  jal         func_280720
    ctx->pc = 0x282D74u;
    SET_GPR_U32(ctx, 31, 0x282D7Cu);
    ctx->pc = 0x280720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280720u, 0x282D74u, 0x282D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282D7Cu;
label_282d7c:
    // 0x282d7c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x282d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282d80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x282d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282d84: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x282d84u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x282d88: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x282D88u;
    {
        const bool branch_taken_0x282d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282d88) {
            ctx->pc = 0x282E04u;
            goto label_282e04;
        }
    }
    ctx->pc = 0x282D90u;
label_282d90:
    // 0x282d90: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x282d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d94: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x282d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x282d98: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x282d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x282d9c: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x282D9Cu;
    SET_GPR_U32(ctx, 31, 0x282DA4u);
    ctx->pc = 0x283190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283190u, 0x282D9Cu, 0x282DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282DA4u;
label_282da4:
    // 0x282da4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x282da4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282dac: 0xc0a0c54  jal         func_283150
    ctx->pc = 0x282DACu;
    SET_GPR_U32(ctx, 31, 0x282DB4u);
    ctx->pc = 0x283150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283150u, 0x282DACu, 0x282DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282DB4u;
label_282db4:
    // 0x282db4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x282db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x282db8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x282db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x282dbc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x282dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282dc0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x282dc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282dc4: 0xc0a0c48  jal         func_283120
    ctx->pc = 0x282DC4u;
    SET_GPR_U32(ctx, 31, 0x282DCCu);
    ctx->pc = 0x283120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283120u, 0x282DC4u, 0x282DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282DCCu;
label_282dcc:
    // 0x282dcc: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x282dccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x282dd0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x282DD0u;
    {
        const bool branch_taken_0x282dd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x282dd0) {
            ctx->pc = 0x282DF0u;
            goto label_282df0;
        }
    }
    ctx->pc = 0x282DD8u;
    // 0x282dd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ddc: 0xc0a0c40  jal         func_283100
    ctx->pc = 0x282DDCu;
    SET_GPR_U32(ctx, 31, 0x282DE4u);
    ctx->pc = 0x283100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283100u, 0x282DDCu, 0x282DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282DE4u;
label_282de4:
    // 0x282de4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x282de4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282de8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x282DE8u;
    {
        const bool branch_taken_0x282de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282de8) {
            ctx->pc = 0x282E00u;
            goto label_282e00;
        }
    }
    ctx->pc = 0x282DF0u;
label_282df0:
    // 0x282df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282df4: 0xc0a0c38  jal         func_2830E0
    ctx->pc = 0x282DF4u;
    SET_GPR_U32(ctx, 31, 0x282DFCu);
    ctx->pc = 0x2830E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830E0u, 0x282DF4u, 0x282DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282DFCu;
label_282dfc:
    // 0x282dfc: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x282dfcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_282e00:
    // 0x282e00: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x282e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_282e04:
    // 0x282e04: 0x1600ffe2  bnez        $s0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x282E04u;
    {
        const bool branch_taken_0x282e04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x282e04) {
            ctx->pc = 0x282D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282d90;
        }
    }
    ctx->pc = 0x282E0Cu;
    // 0x282e0c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x282e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x282e10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x282e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282e14: 0xc0a0c2c  jal         func_2830B0
    ctx->pc = 0x282E14u;
    SET_GPR_U32(ctx, 31, 0x282E1Cu);
    ctx->pc = 0x2830B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830B0u, 0x282E14u, 0x282E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282E1Cu;
label_282e1c:
    // 0x282e1c: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x282E1Cu;
    {
        const bool branch_taken_0x282e1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x282e1c) {
            ctx->pc = 0x282E94u;
            goto label_282e94;
        }
    }
    ctx->pc = 0x282E24u;
    // 0x282e24: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x282e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x282e28: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x282e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x282e2c: 0xc0a0c1c  jal         func_283070
    ctx->pc = 0x282E2Cu;
    SET_GPR_U32(ctx, 31, 0x282E34u);
    ctx->pc = 0x283070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283070u, 0x282E2Cu, 0x282E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282E34u;
label_282e34:
    // 0x282e34: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x282e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x282e38: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x282e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x282e3c: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x282E3Cu;
    SET_GPR_U32(ctx, 31, 0x282E44u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x282E3Cu, 0x282E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282E44u;
label_282e44:
    // 0x282e44: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x282E44u;
    {
        const bool branch_taken_0x282e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282e44) {
            ctx->pc = 0x282E88u;
            goto label_282e88;
        }
    }
    ctx->pc = 0x282E4Cu;
    // 0x282e4c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x282e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x282e50: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x282e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x282e54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x282e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282e58: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x282e58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282e5c: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x282e5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x282e60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282e60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282e64: 0xc0a0e78  jal         func_2839E0
    ctx->pc = 0x282E64u;
    SET_GPR_U32(ctx, 31, 0x282E6Cu);
    ctx->pc = 0x2839E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2839E0u, 0x282E64u, 0x282E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282E6Cu;
label_282e6c:
    // 0x282e6c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x282e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x282e70: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x282e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x282e74: 0x2786a258  addiu       $a2, $gp, -0x5DA8
    ctx->pc = 0x282e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943320));
    // 0x282e78: 0xc0a0bfc  jal         func_282FF0
    ctx->pc = 0x282E78u;
    SET_GPR_U32(ctx, 31, 0x282E80u);
    ctx->pc = 0x282FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282FF0u, 0x282E78u, 0x282E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282E80u;
label_282e80:
    // 0x282e80: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x282E80u;
    {
        const bool branch_taken_0x282e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282e80) {
            ctx->pc = 0x282F24u;
            goto label_282f24;
        }
    }
    ctx->pc = 0x282E88u;
label_282e88:
    // 0x282e88: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x282e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x282e8c: 0xc0a0bec  jal         func_282FB0
    ctx->pc = 0x282E8Cu;
    SET_GPR_U32(ctx, 31, 0x282E94u);
    ctx->pc = 0x282FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282FB0u, 0x282E8Cu, 0x282E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282E94u;
label_282e94:
    // 0x282e94: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x282e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x282e98: 0xc0a0bd4  jal         func_282F50
    ctx->pc = 0x282E98u;
    SET_GPR_U32(ctx, 31, 0x282EA0u);
    ctx->pc = 0x282F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282F50u, 0x282E98u, 0x282EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282EA0u;
label_282ea0:
    // 0x282ea0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x282ea0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ea4: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x282ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x282ea8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x282ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x282eac: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x282EACu;
    SET_GPR_U32(ctx, 31, 0x282EB4u);
    ctx->pc = 0x283190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283190u, 0x282EACu, 0x282EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282EB4u;
label_282eb4:
    // 0x282eb4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x282eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x282eb8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x282eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x282ebc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x282ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ec0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x282ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ec4: 0xc0a0c48  jal         func_283120
    ctx->pc = 0x282EC4u;
    SET_GPR_U32(ctx, 31, 0x282ECCu);
    ctx->pc = 0x283120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283120u, 0x282EC4u, 0x282ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282ECCu;
label_282ecc:
    // 0x282ecc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x282ECCu;
    {
        const bool branch_taken_0x282ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282ecc) {
            ctx->pc = 0x282F10u;
            goto label_282f10;
        }
    }
    ctx->pc = 0x282ED4u;
    // 0x282ed4: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x282ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x282ed8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x282ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x282edc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x282edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ee0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x282ee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ee4: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x282ee4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x282ee8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282ee8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282eec: 0xc0a0e78  jal         func_2839E0
    ctx->pc = 0x282EECu;
    SET_GPR_U32(ctx, 31, 0x282EF4u);
    ctx->pc = 0x2839E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2839E0u, 0x282EECu, 0x282EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282EF4u;
label_282ef4:
    // 0x282ef4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x282ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x282ef8: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x282ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x282efc: 0x2786a25c  addiu       $a2, $gp, -0x5DA4
    ctx->pc = 0x282efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943324));
    // 0x282f00: 0xc0a0bfc  jal         func_282FF0
    ctx->pc = 0x282F00u;
    SET_GPR_U32(ctx, 31, 0x282F08u);
    ctx->pc = 0x282FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282FF0u, 0x282F00u, 0x282F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282F08u;
label_282f08:
    // 0x282f08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x282F08u;
    {
        const bool branch_taken_0x282f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282f08) {
            ctx->pc = 0x282F24u;
            goto label_282f24;
        }
    }
    ctx->pc = 0x282F10u;
label_282f10:
    // 0x282f10: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x282f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x282f14: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x282f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x282f18: 0x2786a260  addiu       $a2, $gp, -0x5DA0
    ctx->pc = 0x282f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943328));
    // 0x282f1c: 0xc0a0bfc  jal         func_282FF0
    ctx->pc = 0x282F1Cu;
    SET_GPR_U32(ctx, 31, 0x282F24u);
    ctx->pc = 0x282FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282FF0u, 0x282F1Cu, 0x282F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282F24u;
label_282f24:
    // 0x282f24: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x282f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x282f28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x282f28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x282f2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x282f2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282f30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x282f30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282f34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x282f34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282f38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282f3c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x282f3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x282f40: 0x3e00008  jr          $ra
    ctx->pc = 0x282F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282F48u;
    // 0x282f48: 0x0  nop
    ctx->pc = 0x282f48u;
    // NOP
    // 0x282f4c: 0x0  nop
    ctx->pc = 0x282f4cu;
    // NOP
    ctx->pc = 0x282f50u;
}
