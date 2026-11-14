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

// Function: sub_00152B60
// Address: 0x152b60 - 0x152d70
void sub_00152B60_0x152b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152B60_0x152b60");
#endif

    switch (ctx->pc) {
        case 0x152b9cu: goto label_152b9c;
        case 0x152bb0u: goto label_152bb0;
        case 0x152bc4u: goto label_152bc4;
        case 0x152bd4u: goto label_152bd4;
        case 0x152becu: goto label_152bec;
        case 0x152c04u: goto label_152c04;
        case 0x152c1cu: goto label_152c1c;
        case 0x152c3cu: goto label_152c3c;
        case 0x152c54u: goto label_152c54;
        case 0x152c64u: goto label_152c64;
        case 0x152c8cu: goto label_152c8c;
        case 0x152ca0u: goto label_152ca0;
        case 0x152cb4u: goto label_152cb4;
        case 0x152cc0u: goto label_152cc0;
        case 0x152cd4u: goto label_152cd4;
        case 0x152cecu: goto label_152cec;
        case 0x152d14u: goto label_152d14;
        case 0x152d28u: goto label_152d28;
        case 0x152d44u: goto label_152d44;
        default: break;
    }

    ctx->pc = 0x152b60u;

    // 0x152b60: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x152b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x152b64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x152b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x152b68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x152b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x152b6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x152b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x152b70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x152b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x152b74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x152b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x152b78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152b7c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x152b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x152b80: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x152b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x152b84: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x152b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x152b88: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x152b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x152b8c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x152b8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152b90: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x152b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x152b94: 0xc0528e8  jal         func_14A3A0
    ctx->pc = 0x152B94u;
    SET_GPR_U32(ctx, 31, 0x152B9Cu);
    ctx->pc = 0x14A3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A3A0u, 0x152B94u, 0x152B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152B9Cu;
label_152b9c:
    // 0x152b9c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x152b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152ba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x152ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152ba4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x152ba4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x152ba8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x152BA8u;
    {
        const bool branch_taken_0x152ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152ba8) {
            ctx->pc = 0x152C24u;
            goto label_152c24;
        }
    }
    ctx->pc = 0x152BB0u;
label_152bb0:
    // 0x152bb0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x152bb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152bb4: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x152bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x152bb8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x152bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x152bbc: 0xc052bcc  jal         func_14AF30
    ctx->pc = 0x152BBCu;
    SET_GPR_U32(ctx, 31, 0x152BC4u);
    ctx->pc = 0x14AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AF30u, 0x152BBCu, 0x152BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152BC4u;
label_152bc4:
    // 0x152bc4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x152bc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152bcc: 0xc052bbc  jal         func_14AEF0
    ctx->pc = 0x152BCCu;
    SET_GPR_U32(ctx, 31, 0x152BD4u);
    ctx->pc = 0x14AEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AEF0u, 0x152BCCu, 0x152BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152BD4u;
label_152bd4:
    // 0x152bd4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x152bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x152bd8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x152bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x152bdc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x152bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152be0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x152be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152be4: 0xc052b28  jal         func_14ACA0
    ctx->pc = 0x152BE4u;
    SET_GPR_U32(ctx, 31, 0x152BECu);
    ctx->pc = 0x14ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACA0u, 0x152BE4u, 0x152BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152BECu;
label_152bec:
    // 0x152bec: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x152becu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x152bf0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x152BF0u;
    {
        const bool branch_taken_0x152bf0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x152bf0) {
            ctx->pc = 0x152C10u;
            goto label_152c10;
        }
    }
    ctx->pc = 0x152BF8u;
    // 0x152bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152bfc: 0xc052bb4  jal         func_14AED0
    ctx->pc = 0x152BFCu;
    SET_GPR_U32(ctx, 31, 0x152C04u);
    ctx->pc = 0x14AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AED0u, 0x152BFCu, 0x152C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C04u;
label_152c04:
    // 0x152c04: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x152c04u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152c08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x152C08u;
    {
        const bool branch_taken_0x152c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152c08) {
            ctx->pc = 0x152C20u;
            goto label_152c20;
        }
    }
    ctx->pc = 0x152C10u;
label_152c10:
    // 0x152c10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c14: 0xc052bac  jal         func_14AEB0
    ctx->pc = 0x152C14u;
    SET_GPR_U32(ctx, 31, 0x152C1Cu);
    ctx->pc = 0x14AEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AEB0u, 0x152C14u, 0x152C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C1Cu;
label_152c1c:
    // 0x152c1c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x152c1cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_152c20:
    // 0x152c20: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x152c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_152c24:
    // 0x152c24: 0x1600ffe2  bnez        $s0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x152C24u;
    {
        const bool branch_taken_0x152c24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x152c24) {
            ctx->pc = 0x152BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152bb0;
        }
    }
    ctx->pc = 0x152C2Cu;
    // 0x152c2c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x152c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x152c30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x152c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c34: 0xc046fec  jal         func_11BFB0
    ctx->pc = 0x152C34u;
    SET_GPR_U32(ctx, 31, 0x152C3Cu);
    ctx->pc = 0x11BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BFB0u, 0x152C34u, 0x152C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C3Cu;
label_152c3c:
    // 0x152c3c: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x152C3Cu;
    {
        const bool branch_taken_0x152c3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x152c3c) {
            ctx->pc = 0x152CB4u;
            goto label_152cb4;
        }
    }
    ctx->pc = 0x152C44u;
    // 0x152c44: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x152c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x152c48: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x152c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x152c4c: 0xc047048  jal         func_11C120
    ctx->pc = 0x152C4Cu;
    SET_GPR_U32(ctx, 31, 0x152C54u);
    ctx->pc = 0x11C120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C120u, 0x152C4Cu, 0x152C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C54u;
label_152c54:
    // 0x152c54: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x152c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x152c58: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x152c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x152c5c: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x152C5Cu;
    SET_GPR_U32(ctx, 31, 0x152C64u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x152C5Cu, 0x152C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C64u;
label_152c64:
    // 0x152c64: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x152C64u;
    {
        const bool branch_taken_0x152c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152c64) {
            ctx->pc = 0x152CA8u;
            goto label_152ca8;
        }
    }
    ctx->pc = 0x152C6Cu;
    // 0x152c6c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x152c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x152c70: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x152c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x152c74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x152c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c78: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x152c78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c7c: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x152c7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x152c80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x152c80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c84: 0xc054b70  jal         func_152DC0
    ctx->pc = 0x152C84u;
    SET_GPR_U32(ctx, 31, 0x152C8Cu);
    ctx->pc = 0x152DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152DC0u, 0x152C84u, 0x152C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C8Cu;
label_152c8c:
    // 0x152c8c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x152c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x152c90: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x152c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x152c94: 0x27868d14  addiu       $a2, $gp, -0x72EC
    ctx->pc = 0x152c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937876));
    // 0x152c98: 0xc054b5c  jal         func_152D70
    ctx->pc = 0x152C98u;
    SET_GPR_U32(ctx, 31, 0x152CA0u);
    ctx->pc = 0x152D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152D70u, 0x152C98u, 0x152CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152CA0u;
label_152ca0:
    // 0x152ca0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x152CA0u;
    {
        const bool branch_taken_0x152ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152ca0) {
            ctx->pc = 0x152D44u;
            goto label_152d44;
        }
    }
    ctx->pc = 0x152CA8u;
label_152ca8:
    // 0x152ca8: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x152ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x152cac: 0xc0548e4  jal         func_152390
    ctx->pc = 0x152CACu;
    SET_GPR_U32(ctx, 31, 0x152CB4u);
    ctx->pc = 0x152390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152390u, 0x152CACu, 0x152CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152CB4u;
label_152cb4:
    // 0x152cb4: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x152cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x152cb8: 0xc0548fc  jal         func_1523F0
    ctx->pc = 0x152CB8u;
    SET_GPR_U32(ctx, 31, 0x152CC0u);
    ctx->pc = 0x1523F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1523F0u, 0x152CB8u, 0x152CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152CC0u;
label_152cc0:
    // 0x152cc0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x152cc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152cc4: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x152cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x152cc8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x152cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x152ccc: 0xc052bcc  jal         func_14AF30
    ctx->pc = 0x152CCCu;
    SET_GPR_U32(ctx, 31, 0x152CD4u);
    ctx->pc = 0x14AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AF30u, 0x152CCCu, 0x152CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152CD4u;
label_152cd4:
    // 0x152cd4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x152cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x152cd8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x152cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x152cdc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x152cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ce0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x152ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ce4: 0xc052b28  jal         func_14ACA0
    ctx->pc = 0x152CE4u;
    SET_GPR_U32(ctx, 31, 0x152CECu);
    ctx->pc = 0x14ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACA0u, 0x152CE4u, 0x152CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152CECu;
label_152cec:
    // 0x152cec: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x152CECu;
    {
        const bool branch_taken_0x152cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152cec) {
            ctx->pc = 0x152D30u;
            goto label_152d30;
        }
    }
    ctx->pc = 0x152CF4u;
    // 0x152cf4: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x152cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x152cf8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x152cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x152cfc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x152cfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d00: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x152d00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d04: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x152d04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x152d08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x152d08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d0c: 0xc054b70  jal         func_152DC0
    ctx->pc = 0x152D0Cu;
    SET_GPR_U32(ctx, 31, 0x152D14u);
    ctx->pc = 0x152DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152DC0u, 0x152D0Cu, 0x152D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D14u;
label_152d14:
    // 0x152d14: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x152d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x152d18: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x152d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x152d1c: 0x27868d18  addiu       $a2, $gp, -0x72E8
    ctx->pc = 0x152d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937880));
    // 0x152d20: 0xc054b5c  jal         func_152D70
    ctx->pc = 0x152D20u;
    SET_GPR_U32(ctx, 31, 0x152D28u);
    ctx->pc = 0x152D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152D70u, 0x152D20u, 0x152D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D28u;
label_152d28:
    // 0x152d28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x152D28u;
    {
        const bool branch_taken_0x152d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152d28) {
            ctx->pc = 0x152D44u;
            goto label_152d44;
        }
    }
    ctx->pc = 0x152D30u;
label_152d30:
    // 0x152d30: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x152d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x152d34: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x152d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x152d38: 0x27868d1c  addiu       $a2, $gp, -0x72E4
    ctx->pc = 0x152d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937884));
    // 0x152d3c: 0xc054b5c  jal         func_152D70
    ctx->pc = 0x152D3Cu;
    SET_GPR_U32(ctx, 31, 0x152D44u);
    ctx->pc = 0x152D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152D70u, 0x152D3Cu, 0x152D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D44u;
label_152d44:
    // 0x152d44: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x152d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x152d48: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x152d48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x152d4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x152d4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152d50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x152d50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152d54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152d54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152d58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152d58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152d5c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x152d5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x152d60: 0x3e00008  jr          $ra
    ctx->pc = 0x152D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152D68u;
    // 0x152d68: 0x0  nop
    ctx->pc = 0x152d68u;
    // NOP
    // 0x152d6c: 0x0  nop
    ctx->pc = 0x152d6cu;
    // NOP
    ctx->pc = 0x152d70u;
}
