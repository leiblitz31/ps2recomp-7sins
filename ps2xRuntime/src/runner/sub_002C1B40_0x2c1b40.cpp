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

// Function: sub_002C1B40
// Address: 0x2c1b40 - 0x2c1ed0
void sub_002C1B40_0x2c1b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1B40_0x2c1b40");
#endif

    switch (ctx->pc) {
        case 0x2c1b84u: goto label_2c1b84;
        case 0x2c1b94u: goto label_2c1b94;
        case 0x2c1bb0u: goto label_2c1bb0;
        case 0x2c1bc4u: goto label_2c1bc4;
        case 0x2c1be0u: goto label_2c1be0;
        case 0x2c1bf0u: goto label_2c1bf0;
        case 0x2c1c04u: goto label_2c1c04;
        case 0x2c1c14u: goto label_2c1c14;
        case 0x2c1c20u: goto label_2c1c20;
        case 0x2c1c2cu: goto label_2c1c2c;
        case 0x2c1c4cu: goto label_2c1c4c;
        case 0x2c1c58u: goto label_2c1c58;
        case 0x2c1c68u: goto label_2c1c68;
        case 0x2c1c78u: goto label_2c1c78;
        case 0x2c1c94u: goto label_2c1c94;
        case 0x2c1ca0u: goto label_2c1ca0;
        case 0x2c1cb4u: goto label_2c1cb4;
        case 0x2c1cc4u: goto label_2c1cc4;
        case 0x2c1cd8u: goto label_2c1cd8;
        case 0x2c1ce8u: goto label_2c1ce8;
        case 0x2c1cf4u: goto label_2c1cf4;
        case 0x2c1d00u: goto label_2c1d00;
        case 0x2c1d10u: goto label_2c1d10;
        case 0x2c1d1cu: goto label_2c1d1c;
        case 0x2c1d30u: goto label_2c1d30;
        case 0x2c1d3cu: goto label_2c1d3c;
        case 0x2c1d4cu: goto label_2c1d4c;
        case 0x2c1d74u: goto label_2c1d74;
        case 0x2c1d98u: goto label_2c1d98;
        case 0x2c1dd8u: goto label_2c1dd8;
        case 0x2c1de4u: goto label_2c1de4;
        case 0x2c1df8u: goto label_2c1df8;
        case 0x2c1e10u: goto label_2c1e10;
        case 0x2c1e28u: goto label_2c1e28;
        case 0x2c1e50u: goto label_2c1e50;
        case 0x2c1e60u: goto label_2c1e60;
        case 0x2c1e70u: goto label_2c1e70;
        case 0x2c1e80u: goto label_2c1e80;
        case 0x2c1e98u: goto label_2c1e98;
        default: break;
    }

    ctx->pc = 0x2c1b40u;

    // 0x2c1b40: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2c1b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x2c1b44: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2c1b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2c1b48: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2c1b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2c1b4c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2c1b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2c1b50: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c1b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2c1b54: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c1b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c1b58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c1b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c1b5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c1b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c1b60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c1b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c1b64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c1b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c1b68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c1b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c1b6c: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x2c1b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
    // 0x2c1b70: 0xafa60150  sw          $a2, 0x150($sp)
    ctx->pc = 0x2c1b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 6));
    // 0x2c1b74: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2c1b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2c1b78: 0x8c440098  lw          $a0, 0x98($v0)
    ctx->pc = 0x2c1b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2c1b7c: 0xc090018  jal         func_240060
    ctx->pc = 0x2C1B7Cu;
    SET_GPR_U32(ctx, 31, 0x2C1B84u);
    ctx->pc = 0x240060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240060u, 0x2C1B7Cu, 0x2C1B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1B84u;
label_2c1b84:
    // 0x2c1b84: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2c1b84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1b88: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c1b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1b8c: 0xc0b07b4  jal         func_2C1ED0
    ctx->pc = 0x2C1B8Cu;
    SET_GPR_U32(ctx, 31, 0x2C1B94u);
    ctx->pc = 0x2C1ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1ED0u, 0x2C1B8Cu, 0x2C1B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1B94u;
label_2c1b94:
    // 0x2c1b94: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c1b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c1b98: 0x146000bf  bnez        $v1, . + 4 + (0xBF << 2)
    ctx->pc = 0x2C1B98u;
    {
        const bool branch_taken_0x2c1b98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1b98) {
            ctx->pc = 0x2C1E98u;
            goto label_2c1e98;
        }
    }
    ctx->pc = 0x2C1BA0u;
    // 0x2c1ba0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x2c1ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2c1ba4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2c1ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c1ba8: 0xc048094  jal         func_120250
    ctx->pc = 0x2C1BA8u;
    SET_GPR_U32(ctx, 31, 0x2C1BB0u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2C1BA8u, 0x2C1BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1BB0u;
label_2c1bb0:
    // 0x2c1bb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c1bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1bb4: 0x2405047d  addiu       $a1, $zero, 0x47D
    ctx->pc = 0x2c1bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1149));
    // 0x2c1bb8: 0x2786a4c8  addiu       $a2, $gp, -0x5B38
    ctx->pc = 0x2c1bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943944));
    // 0x2c1bbc: 0xc041a50  jal         func_106940
    ctx->pc = 0x2C1BBCu;
    SET_GPR_U32(ctx, 31, 0x2C1BC4u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2C1BBCu, 0x2C1BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1BC4u;
label_2c1bc4:
    // 0x2c1bc4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2c1bc4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1bc8: 0x82e30000  lb          $v1, 0x0($s7)
    ctx->pc = 0x2c1bc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2c1bcc: 0x106000b2  beqz        $v1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x2C1BCCu;
    {
        const bool branch_taken_0x2c1bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1bcc) {
            ctx->pc = 0x2C1E98u;
            goto label_2c1e98;
        }
    }
    ctx->pc = 0x2C1BD4u;
    // 0x2c1bd4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2c1bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2c1bd8: 0xc0514a8  jal         func_1452A0
    ctx->pc = 0x2C1BD8u;
    SET_GPR_U32(ctx, 31, 0x2C1BE0u);
    ctx->pc = 0x1452A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452A0u, 0x2C1BD8u, 0x2C1BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1BE0u;
label_2c1be0:
    // 0x2c1be0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2c1be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2c1be4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2c1be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1be8: 0xc040304  jal         func_100C10
    ctx->pc = 0x2C1BE8u;
    SET_GPR_U32(ctx, 31, 0x2C1BF0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2C1BE8u, 0x2C1BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1BF0u;
label_2c1bf0:
    // 0x2c1bf0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2c1bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2c1bf4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2c1bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2c1bf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c1bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1bfc: 0xc061bf0  jal         func_186FC0
    ctx->pc = 0x2C1BFCu;
    SET_GPR_U32(ctx, 31, 0x2C1C04u);
    ctx->pc = 0x186FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186FC0u, 0x2C1BFCu, 0x2C1C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1C04u;
label_2c1c04:
    // 0x2c1c04: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2c1c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2c1c08: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c1c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c1c0c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2C1C0Cu;
    SET_GPR_U32(ctx, 31, 0x2C1C14u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2C1C0Cu, 0x2C1C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1C14u;
label_2c1c14:
    // 0x2c1c14: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c1c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1c18: 0xc08feb4  jal         func_23FAD0
    ctx->pc = 0x2C1C18u;
    SET_GPR_U32(ctx, 31, 0x2C1C20u);
    ctx->pc = 0x23FAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAD0u, 0x2C1C18u, 0x2C1C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1C20u;
label_2c1c20:
    // 0x2c1c20: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c1c20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1c24: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x2C1C24u;
    {
        const bool branch_taken_0x2c1c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1c24) {
            ctx->pc = 0x2C1E74u;
            goto label_2c1e74;
        }
    }
    ctx->pc = 0x2C1C2Cu;
label_2c1c2c:
    // 0x2c1c2c: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x2c1c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1c30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c1c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c1c34: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2c1c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c1c38: 0x1462008d  bne         $v1, $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x2C1C38u;
    {
        const bool branch_taken_0x2c1c38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c1c38) {
            ctx->pc = 0x2C1E70u;
            goto label_2c1e70;
        }
    }
    ctx->pc = 0x2C1C40u;
    // 0x2c1c40: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x2c1c40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c1c44: 0xc090864  jal         func_242190
    ctx->pc = 0x2C1C44u;
    SET_GPR_U32(ctx, 31, 0x2C1C4Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2C1C44u, 0x2C1C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1C4Cu;
label_2c1c4c:
    // 0x2c1c4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c1c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1c50: 0xc0905a0  jal         func_241680
    ctx->pc = 0x2C1C50u;
    SET_GPR_U32(ctx, 31, 0x2C1C58u);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x2C1C50u, 0x2C1C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1C58u;
label_2c1c58:
    // 0x2c1c58: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2c1c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2c1c5c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2c1c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2c1c60: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2C1C60u;
    SET_GPR_U32(ctx, 31, 0x2C1C68u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2C1C60u, 0x2C1C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1C68u;
label_2c1c68:
    // 0x2c1c68: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x2c1c68u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c1c6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c1c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1c70: 0xc09a714  jal         func_269C50
    ctx->pc = 0x2C1C70u;
    SET_GPR_U32(ctx, 31, 0x2C1C78u);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x2C1C70u, 0x2C1C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1C78u;
label_2c1c78:
    // 0x2c1c78: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2c1c78u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1c7c: 0x101e007c  beq         $zero, $fp, . + 4 + (0x7C << 2)
    ctx->pc = 0x2C1C7Cu;
    {
        const bool branch_taken_0x2c1c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 30));
        if (branch_taken_0x2c1c7c) {
            ctx->pc = 0x2C1E70u;
            goto label_2c1e70;
        }
    }
    ctx->pc = 0x2C1C84u;
    // 0x2c1c84: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c1c84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1c88: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2c1c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2c1c8c: 0xc0514a8  jal         func_1452A0
    ctx->pc = 0x2C1C8Cu;
    SET_GPR_U32(ctx, 31, 0x2C1C94u);
    ctx->pc = 0x1452A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452A0u, 0x2C1C8Cu, 0x2C1C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1C94u;
label_2c1c94:
    // 0x2c1c94: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2c1c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1c98: 0xc048094  jal         func_120250
    ctx->pc = 0x2C1C98u;
    SET_GPR_U32(ctx, 31, 0x2C1CA0u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2C1C98u, 0x2C1CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1CA0u;
label_2c1ca0:
    // 0x2c1ca0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c1ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1ca4: 0x2405047d  addiu       $a1, $zero, 0x47D
    ctx->pc = 0x2c1ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1149));
    // 0x2c1ca8: 0x2786a4c8  addiu       $a2, $gp, -0x5B38
    ctx->pc = 0x2c1ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943944));
    // 0x2c1cac: 0xc041a50  jal         func_106940
    ctx->pc = 0x2C1CACu;
    SET_GPR_U32(ctx, 31, 0x2C1CB4u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2C1CACu, 0x2C1CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1CB4u;
label_2c1cb4:
    // 0x2c1cb4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2c1cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2c1cb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c1cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1cbc: 0xc040304  jal         func_100C10
    ctx->pc = 0x2C1CBCu;
    SET_GPR_U32(ctx, 31, 0x2C1CC4u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2C1CBCu, 0x2C1CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1CC4u;
label_2c1cc4:
    // 0x2c1cc4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2c1cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2c1cc8: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2c1cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2c1ccc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c1cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1cd0: 0xc061bf0  jal         func_186FC0
    ctx->pc = 0x2C1CD0u;
    SET_GPR_U32(ctx, 31, 0x2C1CD8u);
    ctx->pc = 0x186FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186FC0u, 0x2C1CD0u, 0x2C1CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1CD8u;
label_2c1cd8:
    // 0x2c1cd8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2c1cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2c1cdc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c1cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c1ce0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2C1CE0u;
    SET_GPR_U32(ctx, 31, 0x2C1CE8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2C1CE0u, 0x2C1CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1CE8u;
label_2c1ce8:
    // 0x2c1ce8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c1ce8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1cec: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2C1CECu;
    {
        const bool branch_taken_0x2c1cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1cec) {
            ctx->pc = 0x2C1D8Cu;
            goto label_2c1d8c;
        }
    }
    ctx->pc = 0x2C1CF4u;
label_2c1cf4:
    // 0x2c1cf4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c1cf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1cf8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2C1CF8u;
    {
        const bool branch_taken_0x2c1cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1cf8) {
            ctx->pc = 0x2C1D68u;
            goto label_2c1d68;
        }
    }
    ctx->pc = 0x2C1D00u;
label_2c1d00:
    // 0x2c1d00: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2c1d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2c1d04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c1d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1d08: 0xc042ff0  jal         func_10BFC0
    ctx->pc = 0x2C1D08u;
    SET_GPR_U32(ctx, 31, 0x2C1D10u);
    ctx->pc = 0x10BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BFC0u, 0x2C1D08u, 0x2C1D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1D10u;
label_2c1d10:
    // 0x2c1d10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c1d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1d14: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2C1D14u;
    SET_GPR_U32(ctx, 31, 0x2C1D1Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2C1D14u, 0x2C1D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1D1Cu;
label_2c1d1c:
    // 0x2c1d1c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2c1d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2c1d20: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2c1d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2c1d24: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c1d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1d28: 0xc042ff0  jal         func_10BFC0
    ctx->pc = 0x2C1D28u;
    SET_GPR_U32(ctx, 31, 0x2C1D30u);
    ctx->pc = 0x10BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BFC0u, 0x2C1D28u, 0x2C1D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1D30u;
label_2c1d30:
    // 0x2c1d30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c1d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1d34: 0xc041874  jal         func_1061D0
    ctx->pc = 0x2C1D34u;
    SET_GPR_U32(ctx, 31, 0x2C1D3Cu);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x2C1D34u, 0x2C1D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1D3Cu;
label_2c1d3c:
    // 0x2c1d3c: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x2c1d3cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c1d40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c1d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1d44: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2C1D44u;
    SET_GPR_U32(ctx, 31, 0x2C1D4Cu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2C1D44u, 0x2C1D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1D4Cu;
label_2c1d4c:
    // 0x2c1d4c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1D4Cu;
    {
        const bool branch_taken_0x2c1d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1d4c) {
            ctx->pc = 0x2C1D64u;
            goto label_2c1d64;
        }
    }
    ctx->pc = 0x2C1D54u;
    // 0x2c1d54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1d58: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x2c1d58u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c1d5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C1D5Cu;
    {
        const bool branch_taken_0x2c1d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1d5c) {
            ctx->pc = 0x2C1D80u;
            goto label_2c1d80;
        }
    }
    ctx->pc = 0x2C1D64u;
label_2c1d64:
    // 0x2c1d64: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2c1d64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2c1d68:
    // 0x2c1d68: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2c1d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2c1d6c: 0xc043104  jal         func_10C410
    ctx->pc = 0x2C1D6Cu;
    SET_GPR_U32(ctx, 31, 0x2C1D74u);
    ctx->pc = 0x10C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C410u, 0x2C1D6Cu, 0x2C1D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1D74u;
label_2c1d74:
    // 0x2c1d74: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2c1d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c1d78: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2C1D78u;
    {
        const bool branch_taken_0x2c1d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1d78) {
            ctx->pc = 0x2C1D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1d00;
        }
    }
    ctx->pc = 0x2C1D80u;
label_2c1d80:
    // 0x2c1d80: 0x16a00008  bnez        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C1D80u;
    {
        const bool branch_taken_0x2c1d80 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1d80) {
            ctx->pc = 0x2C1DA4u;
            goto label_2c1da4;
        }
    }
    ctx->pc = 0x2C1D88u;
    // 0x2c1d88: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2c1d88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2c1d8c:
    // 0x2c1d8c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2c1d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2c1d90: 0xc043104  jal         func_10C410
    ctx->pc = 0x2C1D90u;
    SET_GPR_U32(ctx, 31, 0x2C1D98u);
    ctx->pc = 0x10C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C410u, 0x2C1D90u, 0x2C1D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1D98u;
label_2c1d98:
    // 0x2c1d98: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2c1d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c1d9c: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2C1D9Cu;
    {
        const bool branch_taken_0x2c1d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1d9c) {
            ctx->pc = 0x2C1CF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1cf4;
        }
    }
    ctx->pc = 0x2C1DA4u;
label_2c1da4:
    // 0x2c1da4: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x2c1da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x2c1da8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1dac: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2C1DACu;
    {
        const bool branch_taken_0x2c1dac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c1dac) {
            ctx->pc = 0x2C1E60u;
            goto label_2c1e60;
        }
    }
    ctx->pc = 0x2C1DB4u;
    // 0x2c1db4: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2c1db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2c1db8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1dbc: 0x0  nop
    ctx->pc = 0x2c1dbcu;
    // NOP
    // 0x2c1dc0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2c1dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2c1dc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1dc8: 0xa222000c  sb          $v0, 0xC($s1)
    ctx->pc = 0x2c1dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c1dcc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2c1dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2c1dd0: 0xc09d084  jal         func_274210
    ctx->pc = 0x2C1DD0u;
    SET_GPR_U32(ctx, 31, 0x2C1DD8u);
    ctx->pc = 0x274210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274210u, 0x2C1DD0u, 0x2C1DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1DD8u;
label_2c1dd8:
    // 0x2c1dd8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2c1dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c1ddc: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2C1DDCu;
    SET_GPR_U32(ctx, 31, 0x2C1DE4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2C1DDCu, 0x2C1DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1DE4u;
label_2c1de4:
    // 0x2c1de4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2c1de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2c1de8: 0x24050503  addiu       $a1, $zero, 0x503
    ctx->pc = 0x2c1de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x2c1dec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c1decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1df0: 0xc0433dc  jal         func_10CF70
    ctx->pc = 0x2C1DF0u;
    SET_GPR_U32(ctx, 31, 0x2C1DF8u);
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x2C1DF0u, 0x2C1DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1DF8u;
label_2c1df8:
    // 0x2c1df8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2c1df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2c1dfc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c1dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2c1e00: 0x24a5e120  addiu       $a1, $a1, -0x1EE0
    ctx->pc = 0x2c1e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959392));
    // 0x2c1e04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c1e04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1e08: 0xc047314  jal         func_11CC50
    ctx->pc = 0x2C1E08u;
    SET_GPR_U32(ctx, 31, 0x2C1E10u);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x2C1E08u, 0x2C1E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1E10u;
label_2c1e10:
    // 0x2c1e10: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2c1e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2c1e14: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c1e14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2c1e18: 0x24a5e130  addiu       $a1, $a1, -0x1ED0
    ctx->pc = 0x2c1e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959408));
    // 0x2c1e1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c1e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1e20: 0xc047314  jal         func_11CC50
    ctx->pc = 0x2C1E20u;
    SET_GPR_U32(ctx, 31, 0x2C1E28u);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x2C1E20u, 0x2C1E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1E28u;
label_2c1e28:
    // 0x2c1e28: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2c1e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c1e2c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2c1e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x2c1e30: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2c1e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2c1e34: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x2c1e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x2c1e38: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2c1e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2c1e3c: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x2c1e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x2c1e40: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2c1e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2c1e44: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2c1e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2c1e48: 0xc0b0e68  jal         func_2C39A0
    ctx->pc = 0x2C1E48u;
    SET_GPR_U32(ctx, 31, 0x2C1E50u);
    ctx->pc = 0x2C39A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39A0u, 0x2C1E48u, 0x2C1E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1E50u;
label_2c1e50:
    // 0x2c1e50: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2c1e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2c1e54: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c1e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c1e58: 0xc09d098  jal         func_274260
    ctx->pc = 0x2C1E58u;
    SET_GPR_U32(ctx, 31, 0x2C1E60u);
    ctx->pc = 0x274260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274260u, 0x2C1E58u, 0x2C1E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1E60u;
label_2c1e60:
    // 0x2c1e60: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2c1e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2c1e64: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c1e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c1e68: 0xc051428  jal         func_1450A0
    ctx->pc = 0x2C1E68u;
    SET_GPR_U32(ctx, 31, 0x2C1E70u);
    ctx->pc = 0x1450A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1450A0u, 0x2C1E68u, 0x2C1E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1E70u;
label_2c1e70:
    // 0x2c1e70: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x2c1e70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_2c1e74:
    // 0x2c1e74: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c1e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1e78: 0xc08feac  jal         func_23FAB0
    ctx->pc = 0x2C1E78u;
    SET_GPR_U32(ctx, 31, 0x2C1E80u);
    ctx->pc = 0x23FAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAB0u, 0x2C1E78u, 0x2C1E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1E80u;
label_2c1e80:
    // 0x2c1e80: 0x1682ff6a  bne         $s4, $v0, . + 4 + (-0x96 << 2)
    ctx->pc = 0x2C1E80u;
    {
        const bool branch_taken_0x2c1e80 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c1e80) {
            ctx->pc = 0x2C1C2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1c2c;
        }
    }
    ctx->pc = 0x2C1E88u;
    // 0x2c1e88: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2c1e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2c1e8c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c1e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c1e90: 0xc051428  jal         func_1450A0
    ctx->pc = 0x2C1E90u;
    SET_GPR_U32(ctx, 31, 0x2C1E98u);
    ctx->pc = 0x1450A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1450A0u, 0x2C1E90u, 0x2C1E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1E98u;
label_2c1e98:
    // 0x2c1e98: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2c1e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c1e9c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2c1e9cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c1ea0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2c1ea0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c1ea4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c1ea4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c1ea8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c1ea8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c1eac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c1eacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c1eb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c1eb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1eb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c1eb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1eb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c1eb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1ebc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c1ebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1ec0: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x2c1ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2c1ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1ECCu;
    // 0x2c1ecc: 0x0  nop
    ctx->pc = 0x2c1eccu;
    // NOP
    ctx->pc = 0x2c1ed0u;
}
