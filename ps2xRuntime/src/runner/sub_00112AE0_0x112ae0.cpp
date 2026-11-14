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

// Function: sub_00112AE0
// Address: 0x112ae0 - 0x112cf0
void sub_00112AE0_0x112ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112AE0_0x112ae0");
#endif

    switch (ctx->pc) {
        case 0x112b1cu: goto label_112b1c;
        case 0x112b30u: goto label_112b30;
        case 0x112b44u: goto label_112b44;
        case 0x112b54u: goto label_112b54;
        case 0x112b6cu: goto label_112b6c;
        case 0x112b84u: goto label_112b84;
        case 0x112b9cu: goto label_112b9c;
        case 0x112bbcu: goto label_112bbc;
        case 0x112bd4u: goto label_112bd4;
        case 0x112be4u: goto label_112be4;
        case 0x112c0cu: goto label_112c0c;
        case 0x112c20u: goto label_112c20;
        case 0x112c34u: goto label_112c34;
        case 0x112c40u: goto label_112c40;
        case 0x112c54u: goto label_112c54;
        case 0x112c6cu: goto label_112c6c;
        case 0x112c94u: goto label_112c94;
        case 0x112ca8u: goto label_112ca8;
        case 0x112cc4u: goto label_112cc4;
        default: break;
    }

    ctx->pc = 0x112ae0u;

    // 0x112ae0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x112ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x112ae4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x112ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x112ae8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x112ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x112aec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x112aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x112af0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x112af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x112af4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x112af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x112af8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x112af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x112afc: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x112afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x112b00: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x112b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x112b04: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x112b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x112b08: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x112b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x112b0c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x112b0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112b10: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x112b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x112b14: 0xc04383c  jal         func_10E0F0
    ctx->pc = 0x112B14u;
    SET_GPR_U32(ctx, 31, 0x112B1Cu);
    ctx->pc = 0x10E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E0F0u, 0x112B14u, 0x112B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112B1Cu;
label_112b1c:
    // 0x112b1c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x112b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112b20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x112b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112b24: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x112b24u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x112b28: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x112B28u;
    {
        const bool branch_taken_0x112b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112b28) {
            ctx->pc = 0x112BA4u;
            goto label_112ba4;
        }
    }
    ctx->pc = 0x112B30u;
label_112b30:
    // 0x112b30: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x112b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b34: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x112b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x112b38: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x112b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x112b3c: 0xc0446a4  jal         func_111A90
    ctx->pc = 0x112B3Cu;
    SET_GPR_U32(ctx, 31, 0x112B44u);
    ctx->pc = 0x111A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A90u, 0x112B3Cu, 0x112B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112B44u;
label_112b44:
    // 0x112b44: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x112b44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b4c: 0xc044694  jal         func_111A50
    ctx->pc = 0x112B4Cu;
    SET_GPR_U32(ctx, 31, 0x112B54u);
    ctx->pc = 0x111A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A50u, 0x112B4Cu, 0x112B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112B54u;
label_112b54:
    // 0x112b54: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x112b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x112b58: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x112b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x112b5c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x112b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b60: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x112b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b64: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x112B64u;
    SET_GPR_U32(ctx, 31, 0x112B6Cu);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x112B64u, 0x112B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112B6Cu;
label_112b6c:
    // 0x112b6c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x112b6cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x112b70: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x112B70u;
    {
        const bool branch_taken_0x112b70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x112b70) {
            ctx->pc = 0x112B90u;
            goto label_112b90;
        }
    }
    ctx->pc = 0x112B78u;
    // 0x112b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b7c: 0xc04468c  jal         func_111A30
    ctx->pc = 0x112B7Cu;
    SET_GPR_U32(ctx, 31, 0x112B84u);
    ctx->pc = 0x111A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A30u, 0x112B7Cu, 0x112B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112B84u;
label_112b84:
    // 0x112b84: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x112b84u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112b88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x112B88u;
    {
        const bool branch_taken_0x112b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112b88) {
            ctx->pc = 0x112BA0u;
            goto label_112ba0;
        }
    }
    ctx->pc = 0x112B90u;
label_112b90:
    // 0x112b90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b94: 0xc044684  jal         func_111A10
    ctx->pc = 0x112B94u;
    SET_GPR_U32(ctx, 31, 0x112B9Cu);
    ctx->pc = 0x111A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A10u, 0x112B94u, 0x112B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112B9Cu;
label_112b9c:
    // 0x112b9c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x112b9cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_112ba0:
    // 0x112ba0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x112ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_112ba4:
    // 0x112ba4: 0x1600ffe2  bnez        $s0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x112BA4u;
    {
        const bool branch_taken_0x112ba4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x112ba4) {
            ctx->pc = 0x112B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112b30;
        }
    }
    ctx->pc = 0x112BACu;
    // 0x112bac: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x112bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x112bb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x112bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112bb4: 0xc043980  jal         func_10E600
    ctx->pc = 0x112BB4u;
    SET_GPR_U32(ctx, 31, 0x112BBCu);
    ctx->pc = 0x10E600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E600u, 0x112BB4u, 0x112BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112BBCu;
label_112bbc:
    // 0x112bbc: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x112BBCu;
    {
        const bool branch_taken_0x112bbc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x112bbc) {
            ctx->pc = 0x112C34u;
            goto label_112c34;
        }
    }
    ctx->pc = 0x112BC4u;
    // 0x112bc4: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x112bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x112bc8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x112bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x112bcc: 0xc043a80  jal         func_10EA00
    ctx->pc = 0x112BCCu;
    SET_GPR_U32(ctx, 31, 0x112BD4u);
    ctx->pc = 0x10EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EA00u, 0x112BCCu, 0x112BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112BD4u;
label_112bd4:
    // 0x112bd4: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x112bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x112bd8: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x112bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x112bdc: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x112BDCu;
    SET_GPR_U32(ctx, 31, 0x112BE4u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x112BDCu, 0x112BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112BE4u;
label_112be4:
    // 0x112be4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x112BE4u;
    {
        const bool branch_taken_0x112be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112be4) {
            ctx->pc = 0x112C28u;
            goto label_112c28;
        }
    }
    ctx->pc = 0x112BECu;
    // 0x112bec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x112becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x112bf0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x112bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x112bf4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x112bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112bf8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x112bf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112bfc: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x112bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x112c00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x112c00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c04: 0xc044b50  jal         func_112D40
    ctx->pc = 0x112C04u;
    SET_GPR_U32(ctx, 31, 0x112C0Cu);
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x112C04u, 0x112C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C0Cu;
label_112c0c:
    // 0x112c0c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x112c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112c10: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x112c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x112c14: 0x27868978  addiu       $a2, $gp, -0x7688
    ctx->pc = 0x112c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936952));
    // 0x112c18: 0xc044b3c  jal         func_112CF0
    ctx->pc = 0x112C18u;
    SET_GPR_U32(ctx, 31, 0x112C20u);
    ctx->pc = 0x112CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112CF0u, 0x112C18u, 0x112C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C20u;
label_112c20:
    // 0x112c20: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x112C20u;
    {
        const bool branch_taken_0x112c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112c20) {
            ctx->pc = 0x112CC4u;
            goto label_112cc4;
        }
    }
    ctx->pc = 0x112C28u;
label_112c28:
    // 0x112c28: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x112c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x112c2c: 0xc044a5c  jal         func_112970
    ctx->pc = 0x112C2Cu;
    SET_GPR_U32(ctx, 31, 0x112C34u);
    ctx->pc = 0x112970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112970u, 0x112C2Cu, 0x112C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C34u;
label_112c34:
    // 0x112c34: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x112c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x112c38: 0xc044a74  jal         func_1129D0
    ctx->pc = 0x112C38u;
    SET_GPR_U32(ctx, 31, 0x112C40u);
    ctx->pc = 0x1129D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1129D0u, 0x112C38u, 0x112C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C40u;
label_112c40:
    // 0x112c40: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x112c40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c44: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x112c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x112c48: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x112c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x112c4c: 0xc0446a4  jal         func_111A90
    ctx->pc = 0x112C4Cu;
    SET_GPR_U32(ctx, 31, 0x112C54u);
    ctx->pc = 0x111A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A90u, 0x112C4Cu, 0x112C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C54u;
label_112c54:
    // 0x112c54: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x112c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x112c58: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x112c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x112c5c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x112c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c60: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x112c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c64: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x112C64u;
    SET_GPR_U32(ctx, 31, 0x112C6Cu);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x112C64u, 0x112C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C6Cu;
label_112c6c:
    // 0x112c6c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x112C6Cu;
    {
        const bool branch_taken_0x112c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112c6c) {
            ctx->pc = 0x112CB0u;
            goto label_112cb0;
        }
    }
    ctx->pc = 0x112C74u;
    // 0x112c74: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x112c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x112c78: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x112c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x112c7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x112c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c80: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x112c80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c84: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x112c84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x112c88: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x112c88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c8c: 0xc044b50  jal         func_112D40
    ctx->pc = 0x112C8Cu;
    SET_GPR_U32(ctx, 31, 0x112C94u);
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x112C8Cu, 0x112C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C94u;
label_112c94:
    // 0x112c94: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x112c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112c98: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x112c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x112c9c: 0x2786897c  addiu       $a2, $gp, -0x7684
    ctx->pc = 0x112c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936956));
    // 0x112ca0: 0xc044b3c  jal         func_112CF0
    ctx->pc = 0x112CA0u;
    SET_GPR_U32(ctx, 31, 0x112CA8u);
    ctx->pc = 0x112CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112CF0u, 0x112CA0u, 0x112CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CA8u;
label_112ca8:
    // 0x112ca8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x112CA8u;
    {
        const bool branch_taken_0x112ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112ca8) {
            ctx->pc = 0x112CC4u;
            goto label_112cc4;
        }
    }
    ctx->pc = 0x112CB0u;
label_112cb0:
    // 0x112cb0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x112cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112cb4: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x112cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x112cb8: 0x27868980  addiu       $a2, $gp, -0x7680
    ctx->pc = 0x112cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936960));
    // 0x112cbc: 0xc044b3c  jal         func_112CF0
    ctx->pc = 0x112CBCu;
    SET_GPR_U32(ctx, 31, 0x112CC4u);
    ctx->pc = 0x112CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112CF0u, 0x112CBCu, 0x112CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CC4u;
label_112cc4:
    // 0x112cc4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x112cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x112cc8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x112cc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x112ccc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x112cccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112cd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x112cd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112cd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x112cd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112cd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x112cd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112cdc: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x112cdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x112ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x112CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112CE8u;
    // 0x112ce8: 0x0  nop
    ctx->pc = 0x112ce8u;
    // NOP
    // 0x112cec: 0x0  nop
    ctx->pc = 0x112cecu;
    // NOP
    ctx->pc = 0x112cf0u;
}
