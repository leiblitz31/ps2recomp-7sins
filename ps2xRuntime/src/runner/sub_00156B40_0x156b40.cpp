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

// Function: sub_00156B40
// Address: 0x156b40 - 0x156cf0
void sub_00156B40_0x156b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156B40_0x156b40");
#endif

    switch (ctx->pc) {
        case 0x156b40u: goto label_156b40;
        case 0x156b44u: goto label_156b44;
        case 0x156b48u: goto label_156b48;
        case 0x156b4cu: goto label_156b4c;
        case 0x156b50u: goto label_156b50;
        case 0x156b54u: goto label_156b54;
        case 0x156b58u: goto label_156b58;
        case 0x156b5cu: goto label_156b5c;
        case 0x156b60u: goto label_156b60;
        case 0x156b64u: goto label_156b64;
        case 0x156b68u: goto label_156b68;
        case 0x156b6cu: goto label_156b6c;
        case 0x156b70u: goto label_156b70;
        case 0x156b74u: goto label_156b74;
        case 0x156b78u: goto label_156b78;
        case 0x156b7cu: goto label_156b7c;
        case 0x156b80u: goto label_156b80;
        case 0x156b84u: goto label_156b84;
        case 0x156b88u: goto label_156b88;
        case 0x156b8cu: goto label_156b8c;
        case 0x156b90u: goto label_156b90;
        case 0x156b94u: goto label_156b94;
        case 0x156b98u: goto label_156b98;
        case 0x156b9cu: goto label_156b9c;
        case 0x156ba0u: goto label_156ba0;
        case 0x156ba4u: goto label_156ba4;
        case 0x156ba8u: goto label_156ba8;
        case 0x156bacu: goto label_156bac;
        case 0x156bb0u: goto label_156bb0;
        case 0x156bb4u: goto label_156bb4;
        case 0x156bb8u: goto label_156bb8;
        case 0x156bbcu: goto label_156bbc;
        case 0x156bc0u: goto label_156bc0;
        case 0x156bc4u: goto label_156bc4;
        case 0x156bc8u: goto label_156bc8;
        case 0x156bccu: goto label_156bcc;
        case 0x156bd0u: goto label_156bd0;
        case 0x156bd4u: goto label_156bd4;
        case 0x156bd8u: goto label_156bd8;
        case 0x156bdcu: goto label_156bdc;
        case 0x156be0u: goto label_156be0;
        case 0x156be4u: goto label_156be4;
        case 0x156be8u: goto label_156be8;
        case 0x156becu: goto label_156bec;
        case 0x156bf0u: goto label_156bf0;
        case 0x156bf4u: goto label_156bf4;
        case 0x156bf8u: goto label_156bf8;
        case 0x156bfcu: goto label_156bfc;
        case 0x156c00u: goto label_156c00;
        case 0x156c04u: goto label_156c04;
        case 0x156c08u: goto label_156c08;
        case 0x156c0cu: goto label_156c0c;
        case 0x156c10u: goto label_156c10;
        case 0x156c14u: goto label_156c14;
        case 0x156c18u: goto label_156c18;
        case 0x156c1cu: goto label_156c1c;
        case 0x156c20u: goto label_156c20;
        case 0x156c24u: goto label_156c24;
        case 0x156c28u: goto label_156c28;
        case 0x156c2cu: goto label_156c2c;
        case 0x156c30u: goto label_156c30;
        case 0x156c34u: goto label_156c34;
        case 0x156c38u: goto label_156c38;
        case 0x156c3cu: goto label_156c3c;
        case 0x156c40u: goto label_156c40;
        case 0x156c44u: goto label_156c44;
        case 0x156c48u: goto label_156c48;
        case 0x156c4cu: goto label_156c4c;
        case 0x156c50u: goto label_156c50;
        case 0x156c54u: goto label_156c54;
        case 0x156c58u: goto label_156c58;
        case 0x156c5cu: goto label_156c5c;
        case 0x156c60u: goto label_156c60;
        case 0x156c64u: goto label_156c64;
        case 0x156c68u: goto label_156c68;
        case 0x156c6cu: goto label_156c6c;
        case 0x156c70u: goto label_156c70;
        case 0x156c74u: goto label_156c74;
        case 0x156c78u: goto label_156c78;
        case 0x156c7cu: goto label_156c7c;
        case 0x156c80u: goto label_156c80;
        case 0x156c84u: goto label_156c84;
        case 0x156c88u: goto label_156c88;
        case 0x156c8cu: goto label_156c8c;
        case 0x156c90u: goto label_156c90;
        case 0x156c94u: goto label_156c94;
        case 0x156c98u: goto label_156c98;
        case 0x156c9cu: goto label_156c9c;
        case 0x156ca0u: goto label_156ca0;
        case 0x156ca4u: goto label_156ca4;
        case 0x156ca8u: goto label_156ca8;
        case 0x156cacu: goto label_156cac;
        case 0x156cb0u: goto label_156cb0;
        case 0x156cb4u: goto label_156cb4;
        case 0x156cb8u: goto label_156cb8;
        case 0x156cbcu: goto label_156cbc;
        case 0x156cc0u: goto label_156cc0;
        case 0x156cc4u: goto label_156cc4;
        case 0x156cc8u: goto label_156cc8;
        case 0x156cccu: goto label_156ccc;
        case 0x156cd0u: goto label_156cd0;
        case 0x156cd4u: goto label_156cd4;
        case 0x156cd8u: goto label_156cd8;
        case 0x156cdcu: goto label_156cdc;
        case 0x156ce0u: goto label_156ce0;
        case 0x156ce4u: goto label_156ce4;
        case 0x156ce8u: goto label_156ce8;
        case 0x156cecu: goto label_156cec;
        default: break;
    }

    ctx->pc = 0x156b40u;

label_156b40:
    // 0x156b40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x156b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_156b44:
    // 0x156b44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x156b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_156b48:
    // 0x156b48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x156b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_156b4c:
    // 0x156b4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x156b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_156b50:
    // 0x156b50: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x156b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_156b54:
    // 0x156b54: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x156b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
label_156b58:
    // 0x156b58: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x156b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_156b5c:
    // 0x156b5c: 0x90630044  lbu         $v1, 0x44($v1)
    ctx->pc = 0x156b5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 68)));
label_156b60:
    // 0x156b60: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x156b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_156b64:
    // 0x156b64: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
label_156b68:
    if (ctx->pc == 0x156B68u) {
        ctx->pc = 0x156B6Cu;
        goto label_156b6c;
    }
    ctx->pc = 0x156B64u;
    {
        const bool branch_taken_0x156b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x156b64) {
            ctx->pc = 0x156CD8u;
            goto label_156cd8;
        }
    }
    ctx->pc = 0x156B6Cu;
label_156b6c:
    // 0x156b6c: 0xc08e094  jal         func_238250
label_156b70:
    if (ctx->pc == 0x156B70u) {
        ctx->pc = 0x156B74u;
        goto label_156b74;
    }
    ctx->pc = 0x156B6Cu;
    SET_GPR_U32(ctx, 31, 0x156B74u);
    ctx->pc = 0x238250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238250u, 0x156B6Cu, 0x156B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156B74u;
label_156b74:
    // 0x156b74: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x156b74u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_156b78:
    // 0x156b78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x156b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156b7c:
    // 0x156b7c: 0xc08e054  jal         func_238150
label_156b80:
    if (ctx->pc == 0x156B80u) {
        ctx->pc = 0x156B84u;
        goto label_156b84;
    }
    ctx->pc = 0x156B7Cu;
    SET_GPR_U32(ctx, 31, 0x156B84u);
    ctx->pc = 0x238150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238150u, 0x156B7Cu, 0x156B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156B84u;
label_156b84:
    // 0x156b84: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x156b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_156b88:
    // 0x156b88: 0x1002000b  beq         $zero, $v0, . + 4 + (0xB << 2)
label_156b8c:
    if (ctx->pc == 0x156B8Cu) {
        ctx->pc = 0x156B90u;
        goto label_156b90;
    }
    ctx->pc = 0x156B88u;
    {
        const bool branch_taken_0x156b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x156b88) {
            ctx->pc = 0x156BB8u;
            goto label_156bb8;
        }
    }
    ctx->pc = 0x156B90u;
label_156b90:
    // 0x156b90: 0x27a2004c  addiu       $v0, $sp, 0x4C
    ctx->pc = 0x156b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_156b94:
    // 0x156b94: 0xc7808d3c  lwc1        $f0, -0x72C4($gp)
    ctx->pc = 0x156b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_156b98:
    // 0x156b98: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x156b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_156b9c:
    // 0x156b9c: 0xc12242c  jal         func_4890B0
label_156ba0:
    if (ctx->pc == 0x156BA0u) {
        ctx->pc = 0x156BA4u;
        goto label_156ba4;
    }
    ctx->pc = 0x156B9Cu;
    SET_GPR_U32(ctx, 31, 0x156BA4u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x156B9Cu, 0x156BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156BA4u;
label_156ba4:
    // 0x156ba4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x156ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_156ba8:
    // 0x156ba8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x156ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_156bac:
    // 0x156bac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x156bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_156bb0:
    // 0x156bb0: 0xc105fa6  jal         func_417E98
label_156bb4:
    if (ctx->pc == 0x156BB4u) {
        ctx->pc = 0x156BB8u;
        goto label_156bb8;
    }
    ctx->pc = 0x156BB0u;
    SET_GPR_U32(ctx, 31, 0x156BB8u);
    ctx->pc = 0x417E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E98u, 0x156BB0u, 0x156BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156BB8u;
label_156bb8:
    // 0x156bb8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x156bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_156bbc:
    // 0x156bbc: 0x24422e10  addiu       $v0, $v0, 0x2E10
    ctx->pc = 0x156bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11792));
label_156bc0:
    // 0x156bc0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x156bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_156bc4:
    // 0x156bc4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x156bc4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_156bc8:
    // 0x156bc8: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x156bc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_156bcc:
    // 0x156bcc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x156bccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_156bd0:
    // 0x156bd0: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x156bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
label_156bd4:
    // 0x156bd4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x156bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_156bd8:
    // 0x156bd8: 0xc0e65d6  jal         func_399758
label_156bdc:
    if (ctx->pc == 0x156BDCu) {
        ctx->pc = 0x156BE0u;
        goto label_156be0;
    }
    ctx->pc = 0x156BD8u;
    SET_GPR_U32(ctx, 31, 0x156BE0u);
    ctx->pc = 0x399758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399758u, 0x156BD8u, 0x156BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156BE0u;
label_156be0:
    // 0x156be0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x156be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_156be4:
    // 0x156be4: 0xc11c204  jal         func_470810
label_156be8:
    if (ctx->pc == 0x156BE8u) {
        ctx->pc = 0x156BECu;
        goto label_156bec;
    }
    ctx->pc = 0x156BE4u;
    SET_GPR_U32(ctx, 31, 0x156BECu);
    ctx->pc = 0x470810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470810u, 0x156BE4u, 0x156BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156BECu;
label_156bec:
    // 0x156bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_156bf0:
    // 0x156bf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x156bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_156bf4:
    // 0x156bf4: 0xc0e6e40  jal         func_39B900
label_156bf8:
    if (ctx->pc == 0x156BF8u) {
        ctx->pc = 0x156BFCu;
        goto label_156bfc;
    }
    ctx->pc = 0x156BF4u;
    SET_GPR_U32(ctx, 31, 0x156BFCu);
    ctx->pc = 0x39B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B900u, 0x156BF4u, 0x156BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156BFCu;
label_156bfc:
    // 0x156bfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x156bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156c00:
    // 0x156c00: 0xc11c38c  jal         func_470E30
label_156c04:
    if (ctx->pc == 0x156C04u) {
        ctx->pc = 0x156C08u;
        goto label_156c08;
    }
    ctx->pc = 0x156C00u;
    SET_GPR_U32(ctx, 31, 0x156C08u);
    ctx->pc = 0x470E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470E30u, 0x156C00u, 0x156C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156C08u;
label_156c08:
    // 0x156c08: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x156c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_156c0c:
    // 0x156c0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156c10:
    // 0x156c10: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x156c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_156c14:
    // 0x156c14: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x156c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_156c18:
    // 0x156c18: 0x40f809  jalr        $v0
label_156c1c:
    if (ctx->pc == 0x156C1Cu) {
        ctx->pc = 0x156C20u;
        goto label_156c20;
    }
    ctx->pc = 0x156C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156C20u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156C18u, 0x156C20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156C20u;
label_156c20:
    // 0x156c20: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x156c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_156c24:
    // 0x156c24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156c28:
    // 0x156c28: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x156c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_156c2c:
    // 0x156c2c: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x156c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_156c30:
    // 0x156c30: 0x40f809  jalr        $v0
label_156c34:
    if (ctx->pc == 0x156C34u) {
        ctx->pc = 0x156C38u;
        goto label_156c38;
    }
    ctx->pc = 0x156C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156C38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156C30u, 0x156C38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156C38u;
label_156c38:
    // 0x156c38: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x156c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_156c3c:
    // 0x156c3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x156c3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_156c40:
    // 0x156c40: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x156c40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_156c44:
    // 0x156c44: 0x320f809  jalr        $t9
label_156c48:
    if (ctx->pc == 0x156C48u) {
        ctx->pc = 0x156C4Cu;
        goto label_156c4c;
    }
    ctx->pc = 0x156C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x156C4Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156C44u, 0x156C4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156C4Cu;
label_156c4c:
    // 0x156c4c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x156c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_156c50:
    // 0x156c50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x156c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_156c54:
    // 0x156c54: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x156c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_156c58:
    // 0x156c58: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x156c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_156c5c:
    // 0x156c5c: 0x40f809  jalr        $v0
label_156c60:
    if (ctx->pc == 0x156C60u) {
        ctx->pc = 0x156C64u;
        goto label_156c64;
    }
    ctx->pc = 0x156C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156C64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156C5Cu, 0x156C64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156C64u;
label_156c64:
    // 0x156c64: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x156c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_156c68:
    // 0x156c68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x156c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_156c6c:
    // 0x156c6c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x156c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_156c70:
    // 0x156c70: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x156c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_156c74:
    // 0x156c74: 0x40f809  jalr        $v0
label_156c78:
    if (ctx->pc == 0x156C78u) {
        ctx->pc = 0x156C7Cu;
        goto label_156c7c;
    }
    ctx->pc = 0x156C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156C7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156C74u, 0x156C7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156C7Cu;
label_156c7c:
    // 0x156c7c: 0xc11c448  jal         func_471120
label_156c80:
    if (ctx->pc == 0x156C80u) {
        ctx->pc = 0x156C84u;
        goto label_156c84;
    }
    ctx->pc = 0x156C7Cu;
    SET_GPR_U32(ctx, 31, 0x156C84u);
    ctx->pc = 0x471120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471120u, 0x156C7Cu, 0x156C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156C84u;
label_156c84:
    // 0x156c84: 0xc11c204  jal         func_470810
label_156c88:
    if (ctx->pc == 0x156C88u) {
        ctx->pc = 0x156C8Cu;
        goto label_156c8c;
    }
    ctx->pc = 0x156C84u;
    SET_GPR_U32(ctx, 31, 0x156C8Cu);
    ctx->pc = 0x470810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470810u, 0x156C84u, 0x156C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156C8Cu;
label_156c8c:
    // 0x156c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_156c90:
    // 0x156c90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x156c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_156c94:
    // 0x156c94: 0xc0e6e36  jal         func_39B8D8
label_156c98:
    if (ctx->pc == 0x156C98u) {
        ctx->pc = 0x156C9Cu;
        goto label_156c9c;
    }
    ctx->pc = 0x156C94u;
    SET_GPR_U32(ctx, 31, 0x156C9Cu);
    ctx->pc = 0x39B8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B8D8u, 0x156C94u, 0x156C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156C9Cu;
label_156c9c:
    // 0x156c9c: 0xc12242c  jal         func_4890B0
label_156ca0:
    if (ctx->pc == 0x156CA0u) {
        ctx->pc = 0x156CA4u;
        goto label_156ca4;
    }
    ctx->pc = 0x156C9Cu;
    SET_GPR_U32(ctx, 31, 0x156CA4u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x156C9Cu, 0x156CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156CA4u;
label_156ca4:
    // 0x156ca4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x156ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_156ca8:
    // 0x156ca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156cac:
    // 0x156cac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x156cacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156cb0:
    // 0x156cb0: 0xc105fb4  jal         func_417ED0
label_156cb4:
    if (ctx->pc == 0x156CB4u) {
        ctx->pc = 0x156CB8u;
        goto label_156cb8;
    }
    ctx->pc = 0x156CB0u;
    SET_GPR_U32(ctx, 31, 0x156CB8u);
    ctx->pc = 0x417ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417ED0u, 0x156CB0u, 0x156CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156CB8u;
label_156cb8:
    // 0x156cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_156cbc:
    // 0x156cbc: 0xc0e653c  jal         func_3994F0
label_156cc0:
    if (ctx->pc == 0x156CC0u) {
        ctx->pc = 0x156CC4u;
        goto label_156cc4;
    }
    ctx->pc = 0x156CBCu;
    SET_GPR_U32(ctx, 31, 0x156CC4u);
    ctx->pc = 0x3994F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3994F0u, 0x156CBCu, 0x156CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156CC4u;
label_156cc4:
    // 0x156cc4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_156cc8:
    if (ctx->pc == 0x156CC8u) {
        ctx->pc = 0x156CCCu;
        goto label_156ccc;
    }
    ctx->pc = 0x156CC4u;
    {
        const bool branch_taken_0x156cc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x156cc4) {
            ctx->pc = 0x156CD8u;
            goto label_156cd8;
        }
    }
    ctx->pc = 0x156CCCu;
label_156ccc:
    // 0x156ccc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_156cd0:
    // 0x156cd0: 0xc08e054  jal         func_238150
label_156cd4:
    if (ctx->pc == 0x156CD4u) {
        ctx->pc = 0x156CD8u;
        goto label_156cd8;
    }
    ctx->pc = 0x156CD0u;
    SET_GPR_U32(ctx, 31, 0x156CD8u);
    ctx->pc = 0x238150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238150u, 0x156CD0u, 0x156CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156CD8u;
label_156cd8:
    // 0x156cd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x156cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_156cdc:
    // 0x156cdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x156cdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_156ce0:
    // 0x156ce0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x156ce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_156ce4:
    // 0x156ce4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x156ce4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_156ce8:
    // 0x156ce8: 0x3e00008  jr          $ra
label_156cec:
    if (ctx->pc == 0x156CECu) {
        ctx->pc = 0x156CF0u;
        goto label_fallthrough_0x156ce8;
    }
    ctx->pc = 0x156CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x156ce8:
    ctx->pc = 0x156CF0u;
}
