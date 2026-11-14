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

// Function: sub_002E1A30
// Address: 0x2e1a30 - 0x2e1c90
void sub_002E1A30_0x2e1a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1A30_0x2e1a30");
#endif

    switch (ctx->pc) {
        case 0x2e1a50u: goto label_2e1a50;
        case 0x2e1a64u: goto label_2e1a64;
        case 0x2e1a80u: goto label_2e1a80;
        case 0x2e1a94u: goto label_2e1a94;
        case 0x2e1ab0u: goto label_2e1ab0;
        case 0x2e1ac4u: goto label_2e1ac4;
        case 0x2e1ae0u: goto label_2e1ae0;
        case 0x2e1af4u: goto label_2e1af4;
        case 0x2e1b48u: goto label_2e1b48;
        case 0x2e1b60u: goto label_2e1b60;
        case 0x2e1b84u: goto label_2e1b84;
        case 0x2e1ba0u: goto label_2e1ba0;
        case 0x2e1c08u: goto label_2e1c08;
        case 0x2e1c30u: goto label_2e1c30;
        case 0x2e1c48u: goto label_2e1c48;
        case 0x2e1c5cu: goto label_2e1c5c;
        case 0x2e1c7cu: goto label_2e1c7c;
        default: break;
    }

    ctx->pc = 0x2e1a30u;

    // 0x2e1a30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e1a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e1a34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e1a38: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e1a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2e1a3c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e1a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1a40: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2e1a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2e1a44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1a48: 0xc0b8670  jal         func_2E19C0
    ctx->pc = 0x2E1A48u;
    SET_GPR_U32(ctx, 31, 0x2E1A50u);
    ctx->pc = 0x2E19C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E19C0u, 0x2E1A48u, 0x2E1A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1A50u;
label_2e1a50:
    // 0x2e1a50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e1a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e1a54: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e1a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1a58: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x2e1a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e1a5c: 0xc0b828c  jal         func_2E0A30
    ctx->pc = 0x2E1A5Cu;
    SET_GPR_U32(ctx, 31, 0x2E1A64u);
    ctx->pc = 0x2E0A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0A30u, 0x2E1A5Cu, 0x2E1A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1A64u;
label_2e1a64:
    // 0x2e1a64: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e1a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1a68: 0xac62007c  sw          $v0, 0x7C($v1)
    ctx->pc = 0x2e1a68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 2));
    // 0x2e1a6c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e1a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1a70: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2e1a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2e1a74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1a78: 0xc0b8670  jal         func_2E19C0
    ctx->pc = 0x2E1A78u;
    SET_GPR_U32(ctx, 31, 0x2E1A80u);
    ctx->pc = 0x2E19C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E19C0u, 0x2E1A78u, 0x2E1A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1A80u;
label_2e1a80:
    // 0x2e1a80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e1a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e1a84: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e1a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1a88: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x2e1a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e1a8c: 0xc0b826c  jal         func_2E09B0
    ctx->pc = 0x2E1A8Cu;
    SET_GPR_U32(ctx, 31, 0x2E1A94u);
    ctx->pc = 0x2E09B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E09B0u, 0x2E1A8Cu, 0x2E1A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1A94u;
label_2e1a94:
    // 0x2e1a94: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e1a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1a98: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e1a98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2e1a9c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e1a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1aa0: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2e1aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2e1aa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1aa8: 0xc0b8670  jal         func_2E19C0
    ctx->pc = 0x2E1AA8u;
    SET_GPR_U32(ctx, 31, 0x2E1AB0u);
    ctx->pc = 0x2E19C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E19C0u, 0x2E1AA8u, 0x2E1AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1AB0u;
label_2e1ab0:
    // 0x2e1ab0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e1ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e1ab4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e1ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1ab8: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x2e1ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2e1abc: 0xc0b828c  jal         func_2E0A30
    ctx->pc = 0x2E1ABCu;
    SET_GPR_U32(ctx, 31, 0x2E1AC4u);
    ctx->pc = 0x2E0A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0A30u, 0x2E1ABCu, 0x2E1AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1AC4u;
label_2e1ac4:
    // 0x2e1ac4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e1ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1ac8: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x2e1ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x2e1acc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e1accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1ad0: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2e1ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2e1ad4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1ad8: 0xc0b8670  jal         func_2E19C0
    ctx->pc = 0x2E1AD8u;
    SET_GPR_U32(ctx, 31, 0x2E1AE0u);
    ctx->pc = 0x2E19C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E19C0u, 0x2E1AD8u, 0x2E1AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1AE0u;
label_2e1ae0:
    // 0x2e1ae0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e1ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e1ae4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e1ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1ae8: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x2e1ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2e1aec: 0xc0b826c  jal         func_2E09B0
    ctx->pc = 0x2E1AECu;
    SET_GPR_U32(ctx, 31, 0x2E1AF4u);
    ctx->pc = 0x2E09B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E09B0u, 0x2E1AECu, 0x2E1AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1AF4u;
label_2e1af4:
    // 0x2e1af4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e1af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1af8: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x2e1af8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
    // 0x2e1afc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e1afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1b00: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x2e1b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x2e1b04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e1b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1b08: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x2e1b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x2e1b0c: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E1B0Cu;
    {
        const bool branch_taken_0x2e1b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e1b0c) {
            ctx->pc = 0x2E1B78u;
            goto label_2e1b78;
        }
    }
    ctx->pc = 0x2E1B14u;
    // 0x2e1b14: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e1b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1b18: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x2e1b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2e1b1c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e1b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1b20: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x2e1b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2e1b24: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E1B24u;
    {
        const bool branch_taken_0x2e1b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e1b24) {
            ctx->pc = 0x2E1B78u;
            goto label_2e1b78;
        }
    }
    ctx->pc = 0x2E1B2Cu;
    // 0x2e1b2c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e1b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1b30: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e1b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1b34: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e1b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1b38: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2e1b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x2e1b3c: 0x8c460088  lw          $a2, 0x88($v0)
    ctx->pc = 0x2e1b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2e1b40: 0xc0b8390  jal         func_2E0E40
    ctx->pc = 0x2E1B40u;
    SET_GPR_U32(ctx, 31, 0x2E1B48u);
    ctx->pc = 0x2E0E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0E40u, 0x2E1B40u, 0x2E1B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1B48u;
label_2e1b48:
    // 0x2e1b48: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2e1b48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2e1b4c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e1b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1b50: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2e1b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2e1b54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1b58: 0xc0b8670  jal         func_2E19C0
    ctx->pc = 0x2E1B58u;
    SET_GPR_U32(ctx, 31, 0x2E1B60u);
    ctx->pc = 0x2E19C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E19C0u, 0x2E1B58u, 0x2E1B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1B60u;
label_2e1b60:
    // 0x2e1b60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e1b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e1b64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e1b68: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2e1b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2e1b6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e1b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1b70: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2E1B70u;
    {
        const bool branch_taken_0x2e1b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1b70) {
            ctx->pc = 0x2E1C80u;
            goto label_2e1c80;
        }
    }
    ctx->pc = 0x2E1B78u;
label_2e1b78:
    // 0x2e1b78: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e1b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1b7c: 0xc0b82e0  jal         func_2E0B80
    ctx->pc = 0x2E1B7Cu;
    SET_GPR_U32(ctx, 31, 0x2E1B84u);
    ctx->pc = 0x2E0B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0B80u, 0x2E1B7Cu, 0x2E1B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1B84u;
label_2e1b84:
    // 0x2e1b84: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e1b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1b88: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e1b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1b8c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e1b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1b90: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x2e1b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x2e1b94: 0x8c460080  lw          $a2, 0x80($v0)
    ctx->pc = 0x2e1b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2e1b98: 0xc0b8390  jal         func_2E0E40
    ctx->pc = 0x2E1B98u;
    SET_GPR_U32(ctx, 31, 0x2E1BA0u);
    ctx->pc = 0x2E0E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0E40u, 0x2E1B98u, 0x2E1BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1BA0u;
label_2e1ba0:
    // 0x2e1ba0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e1ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1ba4: 0xac620094  sw          $v0, 0x94($v1)
    ctx->pc = 0x2e1ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 2));
    // 0x2e1ba8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e1ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1bac: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x2e1bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x2e1bb0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e1bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1bb4: 0xac43008c  sw          $v1, 0x8C($v0)
    ctx->pc = 0x2e1bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 3));
    // 0x2e1bb8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e1bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1bbc: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x2e1bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2e1bc0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e1bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1bc4: 0xac430090  sw          $v1, 0x90($v0)
    ctx->pc = 0x2e1bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 3));
    // 0x2e1bc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1bcc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e1bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1bd0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2e1bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2e1bd4: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x2e1bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x2e1bd8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e1bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1bdc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2e1bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1be0: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x2e1be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1be4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e1be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1be8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e1be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1bec: 0x8c840094  lw          $a0, 0x94($a0)
    ctx->pc = 0x2e1becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x2e1bf0: 0x8ca5007c  lw          $a1, 0x7C($a1)
    ctx->pc = 0x2e1bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x2e1bf4: 0x8cc60080  lw          $a2, 0x80($a2)
    ctx->pc = 0x2e1bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x2e1bf8: 0x8c670084  lw          $a3, 0x84($v1)
    ctx->pc = 0x2e1bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x2e1bfc: 0x8c480088  lw          $t0, 0x88($v0)
    ctx->pc = 0x2e1bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2e1c00: 0xc0b7b08  jal         func_2DEC20
    ctx->pc = 0x2E1C00u;
    SET_GPR_U32(ctx, 31, 0x2E1C08u);
    ctx->pc = 0x2DEC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEC20u, 0x2E1C00u, 0x2E1C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1C08u;
label_2e1c08:
    // 0x2e1c08: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e1c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1c0c: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x2e1c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2e1c10: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2e1c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2e1c14: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e1c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1c18: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x2e1c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2e1c1c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2e1c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2e1c20: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e1c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1c24: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x2e1c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2e1c28: 0xc0b8204  jal         func_2E0810
    ctx->pc = 0x2E1C28u;
    SET_GPR_U32(ctx, 31, 0x2E1C30u);
    ctx->pc = 0x2E0810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0810u, 0x2E1C28u, 0x2E1C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1C30u;
label_2e1c30:
    // 0x2e1c30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1C30u;
    {
        const bool branch_taken_0x2e1c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1c30) {
            ctx->pc = 0x2E1C48u;
            goto label_2e1c48;
        }
    }
    ctx->pc = 0x2E1C38u;
    // 0x2e1c38: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e1c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1c3c: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x2e1c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2e1c40: 0xc0b8260  jal         func_2E0980
    ctx->pc = 0x2E1C40u;
    SET_GPR_U32(ctx, 31, 0x2E1C48u);
    ctx->pc = 0x2E0980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0980u, 0x2E1C40u, 0x2E1C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1C48u;
label_2e1c48:
    // 0x2e1c48: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e1c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1c4c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x2e1c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2e1c50: 0x2445003c  addiu       $a1, $v0, 0x3C
    ctx->pc = 0x2e1c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2e1c54: 0xc0b8240  jal         func_2E0900
    ctx->pc = 0x2E1C54u;
    SET_GPR_U32(ctx, 31, 0x2E1C5Cu);
    ctx->pc = 0x2E0900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0900u, 0x2E1C54u, 0x2E1C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1C5Cu;
label_2e1c5c:
    // 0x2e1c5c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e1c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1c60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e1c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1c64: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2e1c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2e1c68: 0x2465003c  addiu       $a1, $v1, 0x3C
    ctx->pc = 0x2e1c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x2e1c6c: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x2e1c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e1c70: 0x24470094  addiu       $a3, $v0, 0x94
    ctx->pc = 0x2e1c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x2e1c74: 0xc0b821c  jal         func_2E0870
    ctx->pc = 0x2E1C74u;
    SET_GPR_U32(ctx, 31, 0x2E1C7Cu);
    ctx->pc = 0x2E0870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0870u, 0x2E1C74u, 0x2E1C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1C7Cu;
label_2e1c7c:
    // 0x2e1c7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e1c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e1c80:
    // 0x2e1c80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1c84: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e1c84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e1c88: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1C90u;
}
