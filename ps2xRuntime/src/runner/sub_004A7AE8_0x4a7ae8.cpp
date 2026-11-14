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

// Function: sub_004A7AE8
// Address: 0x4a7ae8 - 0x4a7cf0
void sub_004A7AE8_0x4a7ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A7AE8_0x4a7ae8");
#endif

    switch (ctx->pc) {
        case 0x4a7ae8u: goto label_4a7ae8;
        case 0x4a7aecu: goto label_4a7aec;
        case 0x4a7af0u: goto label_4a7af0;
        case 0x4a7af4u: goto label_4a7af4;
        case 0x4a7af8u: goto label_4a7af8;
        case 0x4a7afcu: goto label_4a7afc;
        case 0x4a7b00u: goto label_4a7b00;
        case 0x4a7b04u: goto label_4a7b04;
        case 0x4a7b08u: goto label_4a7b08;
        case 0x4a7b0cu: goto label_4a7b0c;
        case 0x4a7b10u: goto label_4a7b10;
        case 0x4a7b14u: goto label_4a7b14;
        case 0x4a7b18u: goto label_4a7b18;
        case 0x4a7b1cu: goto label_4a7b1c;
        case 0x4a7b20u: goto label_4a7b20;
        case 0x4a7b24u: goto label_4a7b24;
        case 0x4a7b28u: goto label_4a7b28;
        case 0x4a7b2cu: goto label_4a7b2c;
        case 0x4a7b30u: goto label_4a7b30;
        case 0x4a7b34u: goto label_4a7b34;
        case 0x4a7b38u: goto label_4a7b38;
        case 0x4a7b3cu: goto label_4a7b3c;
        case 0x4a7b40u: goto label_4a7b40;
        case 0x4a7b44u: goto label_4a7b44;
        case 0x4a7b48u: goto label_4a7b48;
        case 0x4a7b4cu: goto label_4a7b4c;
        case 0x4a7b50u: goto label_4a7b50;
        case 0x4a7b54u: goto label_4a7b54;
        case 0x4a7b58u: goto label_4a7b58;
        case 0x4a7b5cu: goto label_4a7b5c;
        case 0x4a7b60u: goto label_4a7b60;
        case 0x4a7b64u: goto label_4a7b64;
        case 0x4a7b68u: goto label_4a7b68;
        case 0x4a7b6cu: goto label_4a7b6c;
        case 0x4a7b70u: goto label_4a7b70;
        case 0x4a7b74u: goto label_4a7b74;
        case 0x4a7b78u: goto label_4a7b78;
        case 0x4a7b7cu: goto label_4a7b7c;
        case 0x4a7b80u: goto label_4a7b80;
        case 0x4a7b84u: goto label_4a7b84;
        case 0x4a7b88u: goto label_4a7b88;
        case 0x4a7b8cu: goto label_4a7b8c;
        case 0x4a7b90u: goto label_4a7b90;
        case 0x4a7b94u: goto label_4a7b94;
        case 0x4a7b98u: goto label_4a7b98;
        case 0x4a7b9cu: goto label_4a7b9c;
        case 0x4a7ba0u: goto label_4a7ba0;
        case 0x4a7ba4u: goto label_4a7ba4;
        case 0x4a7ba8u: goto label_4a7ba8;
        case 0x4a7bacu: goto label_4a7bac;
        case 0x4a7bb0u: goto label_4a7bb0;
        case 0x4a7bb4u: goto label_4a7bb4;
        case 0x4a7bb8u: goto label_4a7bb8;
        case 0x4a7bbcu: goto label_4a7bbc;
        case 0x4a7bc0u: goto label_4a7bc0;
        case 0x4a7bc4u: goto label_4a7bc4;
        case 0x4a7bc8u: goto label_4a7bc8;
        case 0x4a7bccu: goto label_4a7bcc;
        case 0x4a7bd0u: goto label_4a7bd0;
        case 0x4a7bd4u: goto label_4a7bd4;
        case 0x4a7bd8u: goto label_4a7bd8;
        case 0x4a7bdcu: goto label_4a7bdc;
        case 0x4a7be0u: goto label_4a7be0;
        case 0x4a7be4u: goto label_4a7be4;
        case 0x4a7be8u: goto label_4a7be8;
        case 0x4a7becu: goto label_4a7bec;
        case 0x4a7bf0u: goto label_4a7bf0;
        case 0x4a7bf4u: goto label_4a7bf4;
        case 0x4a7bf8u: goto label_4a7bf8;
        case 0x4a7bfcu: goto label_4a7bfc;
        case 0x4a7c00u: goto label_4a7c00;
        case 0x4a7c04u: goto label_4a7c04;
        case 0x4a7c08u: goto label_4a7c08;
        case 0x4a7c0cu: goto label_4a7c0c;
        case 0x4a7c10u: goto label_4a7c10;
        case 0x4a7c14u: goto label_4a7c14;
        case 0x4a7c18u: goto label_4a7c18;
        case 0x4a7c1cu: goto label_4a7c1c;
        case 0x4a7c20u: goto label_4a7c20;
        case 0x4a7c24u: goto label_4a7c24;
        case 0x4a7c28u: goto label_4a7c28;
        case 0x4a7c2cu: goto label_4a7c2c;
        case 0x4a7c30u: goto label_4a7c30;
        case 0x4a7c34u: goto label_4a7c34;
        case 0x4a7c38u: goto label_4a7c38;
        case 0x4a7c3cu: goto label_4a7c3c;
        case 0x4a7c40u: goto label_4a7c40;
        case 0x4a7c44u: goto label_4a7c44;
        case 0x4a7c48u: goto label_4a7c48;
        case 0x4a7c4cu: goto label_4a7c4c;
        case 0x4a7c50u: goto label_4a7c50;
        case 0x4a7c54u: goto label_4a7c54;
        case 0x4a7c58u: goto label_4a7c58;
        case 0x4a7c5cu: goto label_4a7c5c;
        case 0x4a7c60u: goto label_4a7c60;
        case 0x4a7c64u: goto label_4a7c64;
        case 0x4a7c68u: goto label_4a7c68;
        case 0x4a7c6cu: goto label_4a7c6c;
        case 0x4a7c70u: goto label_4a7c70;
        case 0x4a7c74u: goto label_4a7c74;
        case 0x4a7c78u: goto label_4a7c78;
        case 0x4a7c7cu: goto label_4a7c7c;
        case 0x4a7c80u: goto label_4a7c80;
        case 0x4a7c84u: goto label_4a7c84;
        case 0x4a7c88u: goto label_4a7c88;
        case 0x4a7c8cu: goto label_4a7c8c;
        case 0x4a7c90u: goto label_4a7c90;
        case 0x4a7c94u: goto label_4a7c94;
        case 0x4a7c98u: goto label_4a7c98;
        case 0x4a7c9cu: goto label_4a7c9c;
        case 0x4a7ca0u: goto label_4a7ca0;
        case 0x4a7ca4u: goto label_4a7ca4;
        case 0x4a7ca8u: goto label_4a7ca8;
        case 0x4a7cacu: goto label_4a7cac;
        case 0x4a7cb0u: goto label_4a7cb0;
        case 0x4a7cb4u: goto label_4a7cb4;
        case 0x4a7cb8u: goto label_4a7cb8;
        case 0x4a7cbcu: goto label_4a7cbc;
        case 0x4a7cc0u: goto label_4a7cc0;
        case 0x4a7cc4u: goto label_4a7cc4;
        case 0x4a7cc8u: goto label_4a7cc8;
        case 0x4a7cccu: goto label_4a7ccc;
        case 0x4a7cd0u: goto label_4a7cd0;
        case 0x4a7cd4u: goto label_4a7cd4;
        case 0x4a7cd8u: goto label_4a7cd8;
        case 0x4a7cdcu: goto label_4a7cdc;
        case 0x4a7ce0u: goto label_4a7ce0;
        case 0x4a7ce4u: goto label_4a7ce4;
        case 0x4a7ce8u: goto label_4a7ce8;
        case 0x4a7cecu: goto label_4a7cec;
        default: break;
    }

    ctx->pc = 0x4a7ae8u;

label_4a7ae8:
    // 0x4a7ae8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4a7ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4a7aec:
    // 0x4a7aec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a7aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4a7af0:
    // 0x4a7af0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4a7af0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a7af4:
    // 0x4a7af4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4a7af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_4a7af8:
    // 0x4a7af8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4a7af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_4a7afc:
    // 0x4a7afc: 0x2664002c  addiu       $a0, $s3, 0x2C
    ctx->pc = 0x4a7afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
label_4a7b00:
    // 0x4a7b00: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4a7b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_4a7b04:
    // 0x4a7b04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a7b04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a7b08:
    // 0x4a7b08: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4a7b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_4a7b0c:
    // 0x4a7b0c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4a7b0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4a7b10:
    // 0x4a7b10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a7b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4a7b14:
    // 0x4a7b14: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x4a7b14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_4a7b18:
    // 0x4a7b18: 0xa5800b  movn        $s0, $a1, $a1
    ctx->pc = 0x4a7b18u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
label_4a7b1c:
    // 0x4a7b1c: 0xc6880b  movn        $s1, $a2, $a2
    ctx->pc = 0x4a7b1cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 6));
label_4a7b20:
    // 0x4a7b20: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x4a7b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4a7b24:
    // 0x4a7b24: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x4a7b24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_4a7b28:
    // 0x4a7b28: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x4a7b28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4a7b2c:
    // 0x4a7b2c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a7b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4a7b30:
    // 0x4a7b30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a7b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7b34:
    // 0x4a7b34: 0xc12931a  jal         func_4A4C68
label_4a7b38:
    if (ctx->pc == 0x4A7B38u) {
        ctx->pc = 0x4A7B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7B34u;
        // 0x4a7b38: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7B3Cu;
        goto label_4a7b3c;
    }
    ctx->pc = 0x4A7B34u;
    SET_GPR_U32(ctx, 31, 0x4A7B3Cu);
    ctx->pc = 0x4A7B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7B34u;
    // 0x4a7b38: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4C68u, 0x4A7B34u, 0x4A7B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7B3Cu;
label_4a7b3c:
    // 0x4a7b3c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4a7b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4a7b40:
    // 0x4a7b40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a7b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a7b44:
    // 0x4a7b44: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4a7b44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a7b48:
    // 0x4a7b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a7b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a7b4c:
    // 0x4a7b4c: 0xc129624  jal         func_4A5890
label_4a7b50:
    if (ctx->pc == 0x4A7B50u) {
        ctx->pc = 0x4A7B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7B4Cu;
        // 0x4a7b50: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7B54u;
        goto label_4a7b54;
    }
    ctx->pc = 0x4A7B4Cu;
    SET_GPR_U32(ctx, 31, 0x4A7B54u);
    ctx->pc = 0x4A7B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7B4Cu;
    // 0x4a7b50: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5890u, 0x4A7B4Cu, 0x4A7B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7B54u;
label_4a7b54:
    // 0x4a7b54: 0xc129844  jal         func_4A6110
label_4a7b58:
    if (ctx->pc == 0x4A7B58u) {
        ctx->pc = 0x4A7B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7B54u;
        // 0x4a7b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7B5Cu;
        goto label_4a7b5c;
    }
    ctx->pc = 0x4A7B54u;
    SET_GPR_U32(ctx, 31, 0x4A7B5Cu);
    ctx->pc = 0x4A7B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7B54u;
    // 0x4a7b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6110u, 0x4A7B54u, 0x4A7B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7B5Cu;
label_4a7b5c:
    // 0x4a7b5c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a7b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4a7b60:
    // 0x4a7b60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a7b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a7b64:
    // 0x4a7b64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a7b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a7b68:
    // 0x4a7b68: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4a7b68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a7b6c:
    // 0x4a7b6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a7b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4a7b70:
    // 0x4a7b70: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4a7b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4a7b74:
    // 0x4a7b74: 0xc129624  jal         func_4A5890
label_4a7b78:
    if (ctx->pc == 0x4A7B78u) {
        ctx->pc = 0x4A7B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7B74u;
        // 0x4a7b78: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7B7Cu;
        goto label_4a7b7c;
    }
    ctx->pc = 0x4A7B74u;
    SET_GPR_U32(ctx, 31, 0x4A7B7Cu);
    ctx->pc = 0x4A7B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7B74u;
    // 0x4a7b78: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5890u, 0x4A7B74u, 0x4A7B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7B7Cu;
label_4a7b7c:
    // 0x4a7b7c: 0xc129844  jal         func_4A6110
label_4a7b80:
    if (ctx->pc == 0x4A7B80u) {
        ctx->pc = 0x4A7B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7B7Cu;
        // 0x4a7b80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7B84u;
        goto label_4a7b84;
    }
    ctx->pc = 0x4A7B7Cu;
    SET_GPR_U32(ctx, 31, 0x4A7B84u);
    ctx->pc = 0x4A7B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7B7Cu;
    // 0x4a7b80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6110u, 0x4A7B7Cu, 0x4A7B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7B84u;
label_4a7b84:
    // 0x4a7b84: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a7b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4a7b88:
    // 0x4a7b88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a7b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4a7b8c:
    // 0x4a7b8c: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
label_4a7b90:
    if (ctx->pc == 0x4A7B90u) {
        ctx->pc = 0x4A7B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7B8Cu;
        // 0x4a7b90: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7B94u;
        goto label_4a7b94;
    }
    ctx->pc = 0x4A7B8Cu;
    {
        const bool branch_taken_0x4a7b8c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7B8Cu;
        // 0x4a7b90: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7b8c) {
            ctx->pc = 0x4A7BBCu;
            goto label_4a7bbc;
        }
    }
    ctx->pc = 0x4A7B94u;
label_4a7b94:
    // 0x4a7b94: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x4a7b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_4a7b98:
    // 0x4a7b98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a7b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a7b9c:
    // 0x4a7b9c: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x4a7b9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_4a7ba0:
    // 0x4a7ba0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4a7ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4a7ba4:
    // 0x4a7ba4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4a7ba4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_4a7ba8:
    // 0x4a7ba8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a7ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4a7bac:
    // 0x4a7bac: 0xc12acd0  jal         func_4AB340
label_4a7bb0:
    if (ctx->pc == 0x4A7BB0u) {
        ctx->pc = 0x4A7BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7BACu;
        // 0x4a7bb0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7BB4u;
        goto label_4a7bb4;
    }
    ctx->pc = 0x4A7BACu;
    SET_GPR_U32(ctx, 31, 0x4A7BB4u);
    ctx->pc = 0x4A7BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7BACu;
    // 0x4a7bb0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A7BACu, 0x4A7BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7BB4u;
label_4a7bb4:
    // 0x4a7bb4: 0x10000009  b           . + 4 + (0x9 << 2)
label_4a7bb8:
    if (ctx->pc == 0x4A7BB8u) {
        ctx->pc = 0x4A7BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7BB4u;
        // 0x4a7bb8: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7BBCu;
        goto label_4a7bbc;
    }
    ctx->pc = 0x4A7BB4u;
    {
        const bool branch_taken_0x4a7bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7BB4u;
        // 0x4a7bb8: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7bb4) {
            ctx->pc = 0x4A7BDCu;
            goto label_4a7bdc;
        }
    }
    ctx->pc = 0x4A7BBCu;
label_4a7bbc:
    // 0x4a7bbc: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x4a7bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_4a7bc0:
    // 0x4a7bc0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4a7bc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_4a7bc4:
    // 0x4a7bc4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a7bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4a7bc8:
    // 0x4a7bc8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a7bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4a7bcc:
    // 0x4a7bcc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a7bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4a7bd0:
    // 0x4a7bd0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4a7bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4a7bd4:
    // 0x4a7bd4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4a7bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_4a7bd8:
    // 0x4a7bd8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4a7bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a7bdc:
    // 0x4a7bdc: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_4a7be0:
    if (ctx->pc == 0x4A7BE0u) {
        ctx->pc = 0x4A7BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7BDCu;
        // 0x4a7be0: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7BE4u;
        goto label_4a7be4;
    }
    ctx->pc = 0x4A7BDCu;
    {
        const bool branch_taken_0x4a7bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7BDCu;
        // 0x4a7be0: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7bdc) {
            ctx->pc = 0x4A7C04u;
            goto label_4a7c04;
        }
    }
    ctx->pc = 0x4A7BE4u;
label_4a7be4:
    // 0x4a7be4: 0xc12a4d4  jal         func_4A9350
label_4a7be8:
    if (ctx->pc == 0x4A7BE8u) {
        ctx->pc = 0x4A7BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7BE4u;
        // 0x4a7be8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7BECu;
        goto label_4a7bec;
    }
    ctx->pc = 0x4A7BE4u;
    SET_GPR_U32(ctx, 31, 0x4A7BECu);
    ctx->pc = 0x4A7BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7BE4u;
    // 0x4a7be8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9350u, 0x4A7BE4u, 0x4A7BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7BECu;
label_4a7bec:
    // 0x4a7bec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a7becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4a7bf0:
    // 0x4a7bf0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4a7bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a7bf4:
    // 0x4a7bf4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4a7bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4a7bf8:
    // 0x4a7bf8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4a7bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_4a7bfc:
    // 0x4a7bfc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4a7bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_4a7c00:
    // 0x4a7c00: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4a7c00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4a7c04:
    // 0x4a7c04: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x4a7c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4a7c08:
    // 0x4a7c08: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_4a7c0c:
    if (ctx->pc == 0x4A7C0Cu) {
        ctx->pc = 0x4A7C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7C08u;
        // 0x4a7c0c: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7C10u;
        goto label_4a7c10;
    }
    ctx->pc = 0x4A7C08u;
    {
        const bool branch_taken_0x4a7c08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7C08u;
        // 0x4a7c0c: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7c08) {
            ctx->pc = 0x4A7C54u;
            goto label_4a7c54;
        }
    }
    ctx->pc = 0x4A7C10u;
label_4a7c10:
    // 0x4a7c10: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x4a7c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_4a7c14:
    // 0x4a7c14: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x4a7c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_4a7c18:
    // 0x4a7c18: 0x40f809  jalr        $v0
label_4a7c1c:
    if (ctx->pc == 0x4A7C1Cu) {
        ctx->pc = 0x4A7C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7C18u;
        // 0x4a7c1c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7C20u;
        goto label_4a7c20;
    }
    ctx->pc = 0x4A7C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A7C20u);
        ctx->pc = 0x4A7C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7C18u;
        // 0x4a7c1c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A7C18u, 0x4A7C20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A7C20u;
label_4a7c20:
    // 0x4a7c20: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x4a7c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_4a7c24:
    // 0x4a7c24: 0x40f809  jalr        $v0
label_4a7c28:
    if (ctx->pc == 0x4A7C28u) {
        ctx->pc = 0x4A7C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7C24u;
        // 0x4a7c28: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7C2Cu;
        goto label_4a7c2c;
    }
    ctx->pc = 0x4A7C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A7C2Cu);
        ctx->pc = 0x4A7C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7C24u;
        // 0x4a7c28: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A7C24u, 0x4A7C2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A7C2Cu;
label_4a7c2c:
    // 0x4a7c2c: 0x8f83c1e8  lw          $v1, -0x3E18($gp)
    ctx->pc = 0x4a7c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951400)));
label_4a7c30:
    // 0x4a7c30: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4a7c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4a7c34:
    // 0x4a7c34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a7c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a7c38:
    // 0x4a7c38: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4a7c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a7c3c:
    // 0x4a7c3c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4a7c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_4a7c40:
    // 0x4a7c40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a7c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4a7c44:
    // 0x4a7c44: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x4a7c44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_4a7c48:
    // 0x4a7c48: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4a7c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4a7c4c:
    // 0x4a7c4c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4a7c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_4a7c50:
    // 0x4a7c50: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4a7c50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_4a7c54:
    // 0x4a7c54: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x4a7c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_4a7c58:
    // 0x4a7c58: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4a7c5c:
    if (ctx->pc == 0x4A7C5Cu) {
        ctx->pc = 0x4A7C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7C58u;
        // 0x4a7c5c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7C60u;
        goto label_4a7c60;
    }
    ctx->pc = 0x4A7C58u;
    {
        const bool branch_taken_0x4a7c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7C58u;
        // 0x4a7c5c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7c58) {
            ctx->pc = 0x4A7C84u;
            goto label_4a7c84;
        }
    }
    ctx->pc = 0x4A7C60u;
label_4a7c60:
    // 0x4a7c60: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4a7c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a7c64:
    // 0x4a7c64: 0xc12a4d4  jal         func_4A9350
label_4a7c68:
    if (ctx->pc == 0x4A7C68u) {
        ctx->pc = 0x4A7C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7C64u;
        // 0x4a7c68: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7C6Cu;
        goto label_4a7c6c;
    }
    ctx->pc = 0x4A7C64u;
    SET_GPR_U32(ctx, 31, 0x4A7C6Cu);
    ctx->pc = 0x4A7C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7C64u;
    // 0x4a7c68: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9350u, 0x4A7C64u, 0x4A7C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7C6Cu;
label_4a7c6c:
    // 0x4a7c6c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a7c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4a7c70:
    // 0x4a7c70: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4a7c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a7c74:
    // 0x4a7c74: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4a7c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4a7c78:
    // 0x4a7c78: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4a7c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_4a7c7c:
    // 0x4a7c7c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4a7c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_4a7c80:
    // 0x4a7c80: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4a7c80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4a7c84:
    // 0x4a7c84: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x4a7c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_4a7c88:
    // 0x4a7c88: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x4a7c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_4a7c8c:
    // 0x4a7c8c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4a7c90:
    if (ctx->pc == 0x4A7C90u) {
        ctx->pc = 0x4A7C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7C8Cu;
        // 0x4a7c90: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7C94u;
        goto label_4a7c94;
    }
    ctx->pc = 0x4A7C8Cu;
    {
        const bool branch_taken_0x4a7c8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7C8Cu;
        // 0x4a7c90: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7c8c) {
            ctx->pc = 0x4A7CB8u;
            goto label_4a7cb8;
        }
    }
    ctx->pc = 0x4A7C94u;
label_4a7c94:
    // 0x4a7c94: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4a7c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a7c98:
    // 0x4a7c98: 0xc12a4d4  jal         func_4A9350
label_4a7c9c:
    if (ctx->pc == 0x4A7C9Cu) {
        ctx->pc = 0x4A7C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7C98u;
        // 0x4a7c9c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7CA0u;
        goto label_4a7ca0;
    }
    ctx->pc = 0x4A7C98u;
    SET_GPR_U32(ctx, 31, 0x4A7CA0u);
    ctx->pc = 0x4A7C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7C98u;
    // 0x4a7c9c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9350u, 0x4A7C98u, 0x4A7CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7CA0u;
label_4a7ca0:
    // 0x4a7ca0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a7ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4a7ca4:
    // 0x4a7ca4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4a7ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a7ca8:
    // 0x4a7ca8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4a7ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4a7cac:
    // 0x4a7cac: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x4a7cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_4a7cb0:
    // 0x4a7cb0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4a7cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_4a7cb4:
    // 0x4a7cb4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4a7cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4a7cb8:
    // 0x4a7cb8: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_4a7cbc:
    if (ctx->pc == 0x4A7CBCu) {
        ctx->pc = 0x4A7CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7CB8u;
        // 0x4a7cbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7CC0u;
        goto label_4a7cc0;
    }
    ctx->pc = 0x4A7CB8u;
    {
        const bool branch_taken_0x4a7cb8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7CB8u;
        // 0x4a7cbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7cb8) {
            ctx->pc = 0x4A7CC8u;
            goto label_4a7cc8;
        }
    }
    ctx->pc = 0x4A7CC0u;
label_4a7cc0:
    // 0x4a7cc0: 0xc12ac8e  jal         func_4AB238
label_4a7cc4:
    if (ctx->pc == 0x4A7CC4u) {
        ctx->pc = 0x4A7CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7CC0u;
        // 0x4a7cc4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7CC8u;
        goto label_4a7cc8;
    }
    ctx->pc = 0x4A7CC0u;
    SET_GPR_U32(ctx, 31, 0x4A7CC8u);
    ctx->pc = 0x4A7CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7CC0u;
    // 0x4a7cc4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB238u, 0x4A7CC0u, 0x4A7CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7CC8u;
label_4a7cc8:
    // 0x4a7cc8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4a7cc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a7ccc:
    // 0x4a7ccc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4a7cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a7cd0:
    // 0x4a7cd0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4a7cd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a7cd4:
    // 0x4a7cd4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4a7cd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a7cd8:
    // 0x4a7cd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a7cd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a7cdc:
    // 0x4a7cdc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4a7cdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a7ce0:
    // 0x4a7ce0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a7ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a7ce4:
    // 0x4a7ce4: 0x3e00008  jr          $ra
label_4a7ce8:
    if (ctx->pc == 0x4A7CE8u) {
        ctx->pc = 0x4A7CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7CE4u;
        // 0x4a7ce8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7CECu;
        goto label_4a7cec;
    }
    ctx->pc = 0x4A7CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A7CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7CE4u;
        // 0x4a7ce8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A7CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A7CECu;
label_4a7cec:
    // 0x4a7cec: 0x0  nop
    ctx->pc = 0x4a7cecu;
    // NOP
    ctx->pc = 0x4a7cf0u;
}
