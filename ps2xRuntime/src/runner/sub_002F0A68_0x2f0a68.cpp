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

// Function: sub_002F0A68
// Address: 0x2f0a68 - 0x2f0cc8
void sub_002F0A68_0x2f0a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0A68_0x2f0a68");
#endif

    switch (ctx->pc) {
        case 0x2f0a68u: goto label_2f0a68;
        case 0x2f0a6cu: goto label_2f0a6c;
        case 0x2f0a70u: goto label_2f0a70;
        case 0x2f0a74u: goto label_2f0a74;
        case 0x2f0a78u: goto label_2f0a78;
        case 0x2f0a7cu: goto label_2f0a7c;
        case 0x2f0a80u: goto label_2f0a80;
        case 0x2f0a84u: goto label_2f0a84;
        case 0x2f0a88u: goto label_2f0a88;
        case 0x2f0a8cu: goto label_2f0a8c;
        case 0x2f0a90u: goto label_2f0a90;
        case 0x2f0a94u: goto label_2f0a94;
        case 0x2f0a98u: goto label_2f0a98;
        case 0x2f0a9cu: goto label_2f0a9c;
        case 0x2f0aa0u: goto label_2f0aa0;
        case 0x2f0aa4u: goto label_2f0aa4;
        case 0x2f0aa8u: goto label_2f0aa8;
        case 0x2f0aacu: goto label_2f0aac;
        case 0x2f0ab0u: goto label_2f0ab0;
        case 0x2f0ab4u: goto label_2f0ab4;
        case 0x2f0ab8u: goto label_2f0ab8;
        case 0x2f0abcu: goto label_2f0abc;
        case 0x2f0ac0u: goto label_2f0ac0;
        case 0x2f0ac4u: goto label_2f0ac4;
        case 0x2f0ac8u: goto label_2f0ac8;
        case 0x2f0accu: goto label_2f0acc;
        case 0x2f0ad0u: goto label_2f0ad0;
        case 0x2f0ad4u: goto label_2f0ad4;
        case 0x2f0ad8u: goto label_2f0ad8;
        case 0x2f0adcu: goto label_2f0adc;
        case 0x2f0ae0u: goto label_2f0ae0;
        case 0x2f0ae4u: goto label_2f0ae4;
        case 0x2f0ae8u: goto label_2f0ae8;
        case 0x2f0aecu: goto label_2f0aec;
        case 0x2f0af0u: goto label_2f0af0;
        case 0x2f0af4u: goto label_2f0af4;
        case 0x2f0af8u: goto label_2f0af8;
        case 0x2f0afcu: goto label_2f0afc;
        case 0x2f0b00u: goto label_2f0b00;
        case 0x2f0b04u: goto label_2f0b04;
        case 0x2f0b08u: goto label_2f0b08;
        case 0x2f0b0cu: goto label_2f0b0c;
        case 0x2f0b10u: goto label_2f0b10;
        case 0x2f0b14u: goto label_2f0b14;
        case 0x2f0b18u: goto label_2f0b18;
        case 0x2f0b1cu: goto label_2f0b1c;
        case 0x2f0b20u: goto label_2f0b20;
        case 0x2f0b24u: goto label_2f0b24;
        case 0x2f0b28u: goto label_2f0b28;
        case 0x2f0b2cu: goto label_2f0b2c;
        case 0x2f0b30u: goto label_2f0b30;
        case 0x2f0b34u: goto label_2f0b34;
        case 0x2f0b38u: goto label_2f0b38;
        case 0x2f0b3cu: goto label_2f0b3c;
        case 0x2f0b40u: goto label_2f0b40;
        case 0x2f0b44u: goto label_2f0b44;
        case 0x2f0b48u: goto label_2f0b48;
        case 0x2f0b4cu: goto label_2f0b4c;
        case 0x2f0b50u: goto label_2f0b50;
        case 0x2f0b54u: goto label_2f0b54;
        case 0x2f0b58u: goto label_2f0b58;
        case 0x2f0b5cu: goto label_2f0b5c;
        case 0x2f0b60u: goto label_2f0b60;
        case 0x2f0b64u: goto label_2f0b64;
        case 0x2f0b68u: goto label_2f0b68;
        case 0x2f0b6cu: goto label_2f0b6c;
        case 0x2f0b70u: goto label_2f0b70;
        case 0x2f0b74u: goto label_2f0b74;
        case 0x2f0b78u: goto label_2f0b78;
        case 0x2f0b7cu: goto label_2f0b7c;
        case 0x2f0b80u: goto label_2f0b80;
        case 0x2f0b84u: goto label_2f0b84;
        case 0x2f0b88u: goto label_2f0b88;
        case 0x2f0b8cu: goto label_2f0b8c;
        case 0x2f0b90u: goto label_2f0b90;
        case 0x2f0b94u: goto label_2f0b94;
        case 0x2f0b98u: goto label_2f0b98;
        case 0x2f0b9cu: goto label_2f0b9c;
        case 0x2f0ba0u: goto label_2f0ba0;
        case 0x2f0ba4u: goto label_2f0ba4;
        case 0x2f0ba8u: goto label_2f0ba8;
        case 0x2f0bacu: goto label_2f0bac;
        case 0x2f0bb0u: goto label_2f0bb0;
        case 0x2f0bb4u: goto label_2f0bb4;
        case 0x2f0bb8u: goto label_2f0bb8;
        case 0x2f0bbcu: goto label_2f0bbc;
        case 0x2f0bc0u: goto label_2f0bc0;
        case 0x2f0bc4u: goto label_2f0bc4;
        case 0x2f0bc8u: goto label_2f0bc8;
        case 0x2f0bccu: goto label_2f0bcc;
        case 0x2f0bd0u: goto label_2f0bd0;
        case 0x2f0bd4u: goto label_2f0bd4;
        case 0x2f0bd8u: goto label_2f0bd8;
        case 0x2f0bdcu: goto label_2f0bdc;
        case 0x2f0be0u: goto label_2f0be0;
        case 0x2f0be4u: goto label_2f0be4;
        case 0x2f0be8u: goto label_2f0be8;
        case 0x2f0becu: goto label_2f0bec;
        case 0x2f0bf0u: goto label_2f0bf0;
        case 0x2f0bf4u: goto label_2f0bf4;
        case 0x2f0bf8u: goto label_2f0bf8;
        case 0x2f0bfcu: goto label_2f0bfc;
        case 0x2f0c00u: goto label_2f0c00;
        case 0x2f0c04u: goto label_2f0c04;
        case 0x2f0c08u: goto label_2f0c08;
        case 0x2f0c0cu: goto label_2f0c0c;
        case 0x2f0c10u: goto label_2f0c10;
        case 0x2f0c14u: goto label_2f0c14;
        case 0x2f0c18u: goto label_2f0c18;
        case 0x2f0c1cu: goto label_2f0c1c;
        case 0x2f0c20u: goto label_2f0c20;
        case 0x2f0c24u: goto label_2f0c24;
        case 0x2f0c28u: goto label_2f0c28;
        case 0x2f0c2cu: goto label_2f0c2c;
        case 0x2f0c30u: goto label_2f0c30;
        case 0x2f0c34u: goto label_2f0c34;
        case 0x2f0c38u: goto label_2f0c38;
        case 0x2f0c3cu: goto label_2f0c3c;
        case 0x2f0c40u: goto label_2f0c40;
        case 0x2f0c44u: goto label_2f0c44;
        case 0x2f0c48u: goto label_2f0c48;
        case 0x2f0c4cu: goto label_2f0c4c;
        case 0x2f0c50u: goto label_2f0c50;
        case 0x2f0c54u: goto label_2f0c54;
        case 0x2f0c58u: goto label_2f0c58;
        case 0x2f0c5cu: goto label_2f0c5c;
        case 0x2f0c60u: goto label_2f0c60;
        case 0x2f0c64u: goto label_2f0c64;
        case 0x2f0c68u: goto label_2f0c68;
        case 0x2f0c6cu: goto label_2f0c6c;
        case 0x2f0c70u: goto label_2f0c70;
        case 0x2f0c74u: goto label_2f0c74;
        case 0x2f0c78u: goto label_2f0c78;
        case 0x2f0c7cu: goto label_2f0c7c;
        case 0x2f0c80u: goto label_2f0c80;
        case 0x2f0c84u: goto label_2f0c84;
        case 0x2f0c88u: goto label_2f0c88;
        case 0x2f0c8cu: goto label_2f0c8c;
        case 0x2f0c90u: goto label_2f0c90;
        case 0x2f0c94u: goto label_2f0c94;
        case 0x2f0c98u: goto label_2f0c98;
        case 0x2f0c9cu: goto label_2f0c9c;
        case 0x2f0ca0u: goto label_2f0ca0;
        case 0x2f0ca4u: goto label_2f0ca4;
        case 0x2f0ca8u: goto label_2f0ca8;
        case 0x2f0cacu: goto label_2f0cac;
        case 0x2f0cb0u: goto label_2f0cb0;
        case 0x2f0cb4u: goto label_2f0cb4;
        case 0x2f0cb8u: goto label_2f0cb8;
        case 0x2f0cbcu: goto label_2f0cbc;
        case 0x2f0cc0u: goto label_2f0cc0;
        case 0x2f0cc4u: goto label_2f0cc4;
        default: break;
    }

    ctx->pc = 0x2f0a68u;

label_2f0a68:
    // 0x2f0a68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f0a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2f0a6c:
    // 0x2f0a6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f0a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f0a70:
    // 0x2f0a70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f0a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f0a74:
    // 0x2f0a74: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f0a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2f0a78:
    // 0x2f0a78: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x2f0a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_2f0a7c:
    // 0x2f0a7c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_2f0a80:
    if (ctx->pc == 0x2F0A80u) {
        ctx->pc = 0x2F0A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A7Cu;
        // 0x2f0a80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0A84u;
        goto label_2f0a84;
    }
    ctx->pc = 0x2F0A7Cu;
    {
        const bool branch_taken_0x2f0a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0a7c) {
            ctx->pc = 0x2F0A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0A7Cu;
            // 0x2f0a80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0AC8u;
            goto label_2f0ac8;
        }
    }
    ctx->pc = 0x2F0A84u;
label_2f0a84:
    // 0x2f0a84: 0xc0bb542  jal         func_2ED508
label_2f0a88:
    if (ctx->pc == 0x2F0A88u) {
        ctx->pc = 0x2F0A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A84u;
        // 0x2f0a88: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0A8Cu;
        goto label_2f0a8c;
    }
    ctx->pc = 0x2F0A84u;
    SET_GPR_U32(ctx, 31, 0x2F0A8Cu);
    ctx->pc = 0x2F0A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0A84u;
    // 0x2f0a88: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED508u, 0x2F0A84u, 0x2F0A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0A8Cu;
label_2f0a8c:
    // 0x2f0a8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f0a8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f0a90:
    // 0x2f0a90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f0a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f0a94:
    // 0x2f0a94: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_2f0a98:
    if (ctx->pc == 0x2F0A98u) {
        ctx->pc = 0x2F0A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A94u;
        // 0x2f0a98: 0xae0301d4  sw          $v1, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0A9Cu;
        goto label_2f0a9c;
    }
    ctx->pc = 0x2F0A94u;
    {
        const bool branch_taken_0x2f0a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A94u;
        // 0x2f0a98: 0xae0301d4  sw          $v1, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0a94) {
            ctx->pc = 0x2F0AC8u;
            goto label_2f0ac8;
        }
    }
    ctx->pc = 0x2F0A9Cu;
label_2f0a9c:
    // 0x2f0a9c: 0x2462007c  addiu       $v0, $v1, 0x7C
    ctx->pc = 0x2f0a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 124));
label_2f0aa0:
    // 0x2f0aa0: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2f0aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2f0aa4:
    // 0x2f0aa4: 0x0  nop
    ctx->pc = 0x2f0aa4u;
    // NOP
label_2f0aa8:
    // 0x2f0aa8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f0aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2f0aac:
    // 0x2f0aac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2f0aacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2f0ab0:
    // 0x2f0ab0: 0x0  nop
    ctx->pc = 0x2f0ab0u;
    // NOP
label_2f0ab4:
    // 0x2f0ab4: 0x0  nop
    ctx->pc = 0x2f0ab4u;
    // NOP
label_2f0ab8:
    // 0x2f0ab8: 0x0  nop
    ctx->pc = 0x2f0ab8u;
    // NOP
label_2f0abc:
    // 0x2f0abc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
label_2f0ac0:
    if (ctx->pc == 0x2F0AC0u) {
        ctx->pc = 0x2F0AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0ABCu;
        // 0x2f0ac0: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0AC4u;
        goto label_2f0ac4;
    }
    ctx->pc = 0x2F0ABCu;
    {
        const bool branch_taken_0x2f0abc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2F0AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0ABCu;
        // 0x2f0ac0: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0abc) {
            ctx->pc = 0x2F0AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f0aa8;
        }
    }
    ctx->pc = 0x2F0AC4u;
label_2f0ac4:
    // 0x2f0ac4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f0ac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0ac8:
    // 0x2f0ac8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f0acc:
    // 0x2f0acc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f0accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2f0ad0:
    // 0x2f0ad0: 0x3e00008  jr          $ra
label_2f0ad4:
    if (ctx->pc == 0x2F0AD4u) {
        ctx->pc = 0x2F0AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0AD0u;
        // 0x2f0ad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0AD8u;
        goto label_2f0ad8;
    }
    ctx->pc = 0x2F0AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0AD0u;
        // 0x2f0ad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0AD8u;
label_2f0ad8:
    // 0x2f0ad8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f0ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f0adc:
    // 0x2f0adc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f0adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2f0ae0:
    // 0x2f0ae0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f0ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f0ae4:
    // 0x2f0ae4: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x2f0ae4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_2f0ae8:
    // 0x2f0ae8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f0ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f0aec:
    // 0x2f0aec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f0aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2f0af0:
    // 0x2f0af0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f0af0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f0af4:
    // 0x2f0af4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2f0af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2f0af8:
    // 0x2f0af8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2f0afc:
    if (ctx->pc == 0x2F0AFCu) {
        ctx->pc = 0x2F0AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0AF8u;
        // 0x2f0afc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0B00u;
        goto label_2f0b00;
    }
    ctx->pc = 0x2F0AF8u;
    {
        const bool branch_taken_0x2f0af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0AF8u;
        // 0x2f0afc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0af8) {
            ctx->pc = 0x2F0B10u;
            goto label_2f0b10;
        }
    }
    ctx->pc = 0x2F0B00u;
label_2f0b00:
    // 0x2f0b00: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2f0b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2f0b04:
    // 0x2f0b04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f0b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f0b08:
    // 0x2f0b08: 0x1000000d  b           . + 4 + (0xD << 2)
label_2f0b0c:
    if (ctx->pc == 0x2F0B0Cu) {
        ctx->pc = 0x2F0B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B08u;
        // 0x2f0b0c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0B10u;
        goto label_2f0b10;
    }
    ctx->pc = 0x2F0B08u;
    {
        const bool branch_taken_0x2f0b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B08u;
        // 0x2f0b0c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0b08) {
            ctx->pc = 0x2F0B40u;
            goto label_2f0b40;
        }
    }
    ctx->pc = 0x2F0B10u;
label_2f0b10:
    // 0x2f0b10: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x2f0b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_2f0b14:
    // 0x2f0b14: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2f0b18:
    if (ctx->pc == 0x2F0B18u) {
        ctx->pc = 0x2F0B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B14u;
        // 0x2f0b18: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0B1Cu;
        goto label_2f0b1c;
    }
    ctx->pc = 0x2F0B14u;
    {
        const bool branch_taken_0x2f0b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B14u;
        // 0x2f0b18: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0b14) {
            ctx->pc = 0x2F0B34u;
            goto label_2f0b34;
        }
    }
    ctx->pc = 0x2F0B1Cu;
label_2f0b1c:
    // 0x2f0b1c: 0xc0bc29a  jal         func_2F0A68
label_2f0b20:
    if (ctx->pc == 0x2F0B20u) {
        ctx->pc = 0x2F0B24u;
        goto label_2f0b24;
    }
    ctx->pc = 0x2F0B1Cu;
    SET_GPR_U32(ctx, 31, 0x2F0B24u);
    ctx->pc = 0x2F0A68u;
    goto label_2f0a68;
    ctx->pc = 0x2F0B24u;
label_2f0b24:
    // 0x2f0b24: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2f0b28:
    if (ctx->pc == 0x2F0B28u) {
        ctx->pc = 0x2F0B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B24u;
        // 0x2f0b28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0B2Cu;
        goto label_2f0b2c;
    }
    ctx->pc = 0x2F0B24u;
    {
        const bool branch_taken_0x2f0b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B24u;
        // 0x2f0b28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0b24) {
            ctx->pc = 0x2F0B40u;
            goto label_2f0b40;
        }
    }
    ctx->pc = 0x2F0B2Cu;
label_2f0b2c:
    // 0x2f0b2c: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x2f0b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_2f0b30:
    // 0x2f0b30: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2f0b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2f0b34:
    // 0x2f0b34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f0b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f0b38:
    // 0x2f0b38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f0b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f0b3c:
    // 0x2f0b3c: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x2f0b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
label_2f0b40:
    // 0x2f0b40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0b40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f0b44:
    // 0x2f0b44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f0b44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2f0b48:
    // 0x2f0b48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f0b48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f0b4c:
    // 0x2f0b4c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2f0b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2f0b50:
    // 0x2f0b50: 0x3e00008  jr          $ra
label_2f0b54:
    if (ctx->pc == 0x2F0B54u) {
        ctx->pc = 0x2F0B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B50u;
        // 0x2f0b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0B58u;
        goto label_2f0b58;
    }
    ctx->pc = 0x2F0B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B50u;
        // 0x2f0b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0B58u;
label_2f0b58:
    // 0x2f0b58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f0b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f0b5c:
    // 0x2f0b5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f0b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2f0b60:
    // 0x2f0b60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f0b60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f0b64:
    // 0x2f0b64: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x2f0b64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_2f0b68:
    // 0x2f0b68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f0b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f0b6c:
    // 0x2f0b6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f0b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2f0b70:
    // 0x2f0b70: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2f0b74:
    if (ctx->pc == 0x2F0B74u) {
        ctx->pc = 0x2F0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B70u;
        // 0x2f0b74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0B78u;
        goto label_2f0b78;
    }
    ctx->pc = 0x2F0B70u;
    {
        const bool branch_taken_0x2f0b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B70u;
        // 0x2f0b74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0b70) {
            ctx->pc = 0x2F0B88u;
            goto label_2f0b88;
        }
    }
    ctx->pc = 0x2F0B78u;
label_2f0b78:
    // 0x2f0b78: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2f0b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2f0b7c:
    // 0x2f0b7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f0b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f0b80:
    // 0x2f0b80: 0x10000026  b           . + 4 + (0x26 << 2)
label_2f0b84:
    if (ctx->pc == 0x2F0B84u) {
        ctx->pc = 0x2F0B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B80u;
        // 0x2f0b84: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0B88u;
        goto label_2f0b88;
    }
    ctx->pc = 0x2F0B80u;
    {
        const bool branch_taken_0x2f0b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B80u;
        // 0x2f0b84: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0b80) {
            ctx->pc = 0x2F0C1Cu;
            goto label_2f0c1c;
        }
    }
    ctx->pc = 0x2F0B88u;
label_2f0b88:
    // 0x2f0b88: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x2f0b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_2f0b8c:
    // 0x2f0b8c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_2f0b90:
    if (ctx->pc == 0x2F0B90u) {
        ctx->pc = 0x2F0B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B8Cu;
        // 0x2f0b90: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0B94u;
        goto label_2f0b94;
    }
    ctx->pc = 0x2F0B8Cu;
    {
        const bool branch_taken_0x2f0b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B8Cu;
        // 0x2f0b90: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0b8c) {
            ctx->pc = 0x2F0BACu;
            goto label_2f0bac;
        }
    }
    ctx->pc = 0x2F0B94u;
label_2f0b94:
    // 0x2f0b94: 0xc0bc29a  jal         func_2F0A68
label_2f0b98:
    if (ctx->pc == 0x2F0B98u) {
        ctx->pc = 0x2F0B9Cu;
        goto label_2f0b9c;
    }
    ctx->pc = 0x2F0B94u;
    SET_GPR_U32(ctx, 31, 0x2F0B9Cu);
    ctx->pc = 0x2F0A68u;
    goto label_2f0a68;
    ctx->pc = 0x2F0B9Cu;
label_2f0b9c:
    // 0x2f0b9c: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_2f0ba0:
    if (ctx->pc == 0x2F0BA0u) {
        ctx->pc = 0x2F0BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B9Cu;
        // 0x2f0ba0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0BA4u;
        goto label_2f0ba4;
    }
    ctx->pc = 0x2F0B9Cu;
    {
        const bool branch_taken_0x2f0b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B9Cu;
        // 0x2f0ba0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0b9c) {
            ctx->pc = 0x2F0C1Cu;
            goto label_2f0c1c;
        }
    }
    ctx->pc = 0x2F0BA4u;
label_2f0ba4:
    // 0x2f0ba4: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x2f0ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_2f0ba8:
    // 0x2f0ba8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2f0ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2f0bac:
    // 0x2f0bac: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2f0bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f0bb0:
    // 0x2f0bb0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2f0bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f0bb4:
    // 0x2f0bb4: 0x54a0000c  bnel        $a1, $zero, . + 4 + (0xC << 2)
label_2f0bb8:
    if (ctx->pc == 0x2F0BB8u) {
        ctx->pc = 0x2F0BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BB4u;
        // 0x2f0bb8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0BBCu;
        goto label_2f0bbc;
    }
    ctx->pc = 0x2F0BB4u;
    {
        const bool branch_taken_0x2f0bb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0bb4) {
            ctx->pc = 0x2F0BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0BB4u;
            // 0x2f0bb8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0BE8u;
            goto label_2f0be8;
        }
    }
    ctx->pc = 0x2F0BBCu;
label_2f0bbc:
    // 0x2f0bbc: 0xc0bc36c  jal         func_2F0DB0
label_2f0bc0:
    if (ctx->pc == 0x2F0BC0u) {
        ctx->pc = 0x2F0BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BBCu;
        // 0x2f0bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0BC4u;
        goto label_2f0bc4;
    }
    ctx->pc = 0x2F0BBCu;
    SET_GPR_U32(ctx, 31, 0x2F0BC4u);
    ctx->pc = 0x2F0BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0BBCu;
    // 0x2f0bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0DB0u, 0x2F0BBCu, 0x2F0BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0BC4u;
label_2f0bc4:
    // 0x2f0bc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0bc8:
    // 0x2f0bc8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f0bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f0bcc:
    // 0x2f0bcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f0bccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2f0bd0:
    // 0x2f0bd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0bd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f0bd4:
    // 0x2f0bd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f0bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f0bd8:
    // 0x2f0bd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f0bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f0bdc:
    // 0x2f0bdc: 0x80bc354  j           func_2F0D50
label_2f0be0:
    if (ctx->pc == 0x2F0BE0u) {
        ctx->pc = 0x2F0BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BDCu;
        // 0x2f0be0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0BE4u;
        goto label_2f0be4;
    }
    ctx->pc = 0x2F0BDCu;
    ctx->pc = 0x2F0BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0BDCu;
    // 0x2f0be0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0D50u, 0x2F0BDCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2F0BE4u;
label_2f0be4:
    // 0x2f0be4: 0x0  nop
    ctx->pc = 0x2f0be4u;
    // NOP
label_2f0be8:
    // 0x2f0be8: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_2f0bec:
    if (ctx->pc == 0x2F0BECu) {
        ctx->pc = 0x2F0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BE8u;
        // 0x2f0bec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0BF0u;
        goto label_2f0bf0;
    }
    ctx->pc = 0x2F0BE8u;
    {
        const bool branch_taken_0x2f0be8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BE8u;
        // 0x2f0bec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0be8) {
            ctx->pc = 0x2F0C1Cu;
            goto label_2f0c1c;
        }
    }
    ctx->pc = 0x2F0BF0u;
label_2f0bf0:
    // 0x2f0bf0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f0bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f0bf4:
    // 0x2f0bf4: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
label_2f0bf8:
    if (ctx->pc == 0x2F0BF8u) {
        ctx->pc = 0x2F0BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BF4u;
        // 0x2f0bf8: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0BFCu;
        goto label_2f0bfc;
    }
    ctx->pc = 0x2F0BF4u;
    {
        const bool branch_taken_0x2f0bf4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f0bf4) {
            ctx->pc = 0x2F0BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0BF4u;
            // 0x2f0bf8: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0C10u;
            goto label_2f0c10;
        }
    }
    ctx->pc = 0x2F0BFCu;
label_2f0bfc:
    // 0x2f0bfc: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2f0bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2f0c00:
    // 0x2f0c00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f0c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0c04:
    // 0x2f0c04: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f0c08:
    if (ctx->pc == 0x2F0C08u) {
        ctx->pc = 0x2F0C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C04u;
        // 0x2f0c08: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C0Cu;
        goto label_2f0c0c;
    }
    ctx->pc = 0x2F0C04u;
    {
        const bool branch_taken_0x2f0c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C04u;
        // 0x2f0c08: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c04) {
            ctx->pc = 0x2F0C1Cu;
            goto label_2f0c1c;
        }
    }
    ctx->pc = 0x2F0C0Cu;
label_2f0c0c:
    // 0x2f0c0c: 0x0  nop
    ctx->pc = 0x2f0c0cu;
    // NOP
label_2f0c10:
    // 0x2f0c10: 0xa0f809  jalr        $a1
label_2f0c14:
    if (ctx->pc == 0x2F0C14u) {
        ctx->pc = 0x2F0C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C10u;
        // 0x2f0c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C18u;
        goto label_2f0c18;
    }
    ctx->pc = 0x2F0C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2F0C18u);
        ctx->pc = 0x2F0C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C10u;
        // 0x2f0c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0C10u, 0x2F0C18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0C18u;
label_2f0c18:
    // 0x2f0c18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f0c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0c1c:
    // 0x2f0c1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0c1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f0c20:
    // 0x2f0c20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f0c20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2f0c24:
    // 0x2f0c24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f0c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f0c28:
    // 0x2f0c28: 0x3e00008  jr          $ra
label_2f0c2c:
    if (ctx->pc == 0x2F0C2Cu) {
        ctx->pc = 0x2F0C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C28u;
        // 0x2f0c2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C30u;
        goto label_2f0c30;
    }
    ctx->pc = 0x2F0C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C28u;
        // 0x2f0c2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0C30u;
label_2f0c30:
    // 0x2f0c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f0c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f0c34:
    // 0x2f0c34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f0c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f0c38:
    // 0x2f0c38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f0c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f0c3c:
    // 0x2f0c3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f0c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f0c40:
    // 0x2f0c40: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x2f0c40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_2f0c44:
    // 0x2f0c44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f0c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2f0c48:
    // 0x2f0c48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f0c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2f0c4c:
    // 0x2f0c4c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_2f0c50:
    if (ctx->pc == 0x2F0C50u) {
        ctx->pc = 0x2F0C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C4Cu;
        // 0x2f0c50: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C54u;
        goto label_2f0c54;
    }
    ctx->pc = 0x2F0C4Cu;
    {
        const bool branch_taken_0x2f0c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C4Cu;
        // 0x2f0c50: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c4c) {
            ctx->pc = 0x2F0CB4u;
            goto label_2f0cb4;
        }
    }
    ctx->pc = 0x2F0C54u;
label_2f0c54:
    // 0x2f0c54: 0x8e2501d4  lw          $a1, 0x1D4($s1)
    ctx->pc = 0x2f0c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_2f0c58:
    // 0x2f0c58: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
label_2f0c5c:
    if (ctx->pc == 0x2F0C5Cu) {
        ctx->pc = 0x2F0C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C58u;
        // 0x2f0c5c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C60u;
        goto label_2f0c60;
    }
    ctx->pc = 0x2F0C58u;
    {
        const bool branch_taken_0x2f0c58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C58u;
        // 0x2f0c5c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c58) {
            ctx->pc = 0x2F0C7Cu;
            goto label_2f0c7c;
        }
    }
    ctx->pc = 0x2F0C60u;
label_2f0c60:
    // 0x2f0c60: 0xc0bc29a  jal         func_2F0A68
label_2f0c64:
    if (ctx->pc == 0x2F0C64u) {
        ctx->pc = 0x2F0C68u;
        goto label_2f0c68;
    }
    ctx->pc = 0x2F0C60u;
    SET_GPR_U32(ctx, 31, 0x2F0C68u);
    ctx->pc = 0x2F0A68u;
    goto label_2f0a68;
    ctx->pc = 0x2F0C68u;
label_2f0c68:
    // 0x2f0c68: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2f0c6c:
    if (ctx->pc == 0x2F0C6Cu) {
        ctx->pc = 0x2F0C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C68u;
        // 0x2f0c6c: 0x8e2501d4  lw          $a1, 0x1D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C70u;
        goto label_2f0c70;
    }
    ctx->pc = 0x2F0C68u;
    {
        const bool branch_taken_0x2f0c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0c68) {
            ctx->pc = 0x2F0C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0C68u;
            // 0x2f0c6c: 0x8e2501d4  lw          $a1, 0x1D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0C78u;
            goto label_2f0c78;
        }
    }
    ctx->pc = 0x2F0C70u;
label_2f0c70:
    // 0x2f0c70: 0x10000010  b           . + 4 + (0x10 << 2)
label_2f0c74:
    if (ctx->pc == 0x2F0C74u) {
        ctx->pc = 0x2F0C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C70u;
        // 0x2f0c74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C78u;
        goto label_2f0c78;
    }
    ctx->pc = 0x2F0C70u;
    {
        const bool branch_taken_0x2f0c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C70u;
        // 0x2f0c74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c70) {
            ctx->pc = 0x2F0CB4u;
            goto label_2f0cb4;
        }
    }
    ctx->pc = 0x2F0C78u;
label_2f0c78:
    // 0x2f0c78: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2f0c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2f0c7c:
    // 0x2f0c7c: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x2f0c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2f0c80:
    // 0x2f0c80: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2f0c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f0c84:
    // 0x2f0c84: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_2f0c88:
    if (ctx->pc == 0x2F0C88u) {
        ctx->pc = 0x2F0C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C84u;
        // 0x2f0c88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C8Cu;
        goto label_2f0c8c;
    }
    ctx->pc = 0x2F0C84u;
    {
        const bool branch_taken_0x2f0c84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C84u;
        // 0x2f0c88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c84) {
            ctx->pc = 0x2F0CB4u;
            goto label_2f0cb4;
        }
    }
    ctx->pc = 0x2F0C8Cu;
label_2f0c8c:
    // 0x2f0c8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f0c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f0c90:
    // 0x2f0c90: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
label_2f0c94:
    if (ctx->pc == 0x2F0C94u) {
        ctx->pc = 0x2F0C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C90u;
        // 0x2f0c94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C98u;
        goto label_2f0c98;
    }
    ctx->pc = 0x2F0C90u;
    {
        const bool branch_taken_0x2f0c90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F0C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C90u;
        // 0x2f0c94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c90) {
            ctx->pc = 0x2F0CB4u;
            goto label_2f0cb4;
        }
    }
    ctx->pc = 0x2F0C98u;
label_2f0c98:
    // 0x2f0c98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f0c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0c9c:
    // 0x2f0c9c: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
label_2f0ca0:
    if (ctx->pc == 0x2F0CA0u) {
        ctx->pc = 0x2F0CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C9Cu;
        // 0x2f0ca0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0CA4u;
        goto label_2f0ca4;
    }
    ctx->pc = 0x2F0C9Cu;
    {
        const bool branch_taken_0x2f0c9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F0CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C9Cu;
        // 0x2f0ca0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c9c) {
            ctx->pc = 0x2F0CB4u;
            goto label_2f0cb4;
        }
    }
    ctx->pc = 0x2F0CA4u;
label_2f0ca4:
    // 0x2f0ca4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2f0ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2f0ca8:
    // 0x2f0ca8: 0xa0f809  jalr        $a1
label_2f0cac:
    if (ctx->pc == 0x2F0CACu) {
        ctx->pc = 0x2F0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0CA8u;
        // 0x2f0cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0CB0u;
        goto label_2f0cb0;
    }
    ctx->pc = 0x2F0CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2F0CB0u);
        ctx->pc = 0x2F0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0CA8u;
        // 0x2f0cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0CA8u, 0x2F0CB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0CB0u;
label_2f0cb0:
    // 0x2f0cb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f0cb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0cb4:
    // 0x2f0cb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f0cb8:
    // 0x2f0cb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f0cb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2f0cbc:
    // 0x2f0cbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f0cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f0cc0:
    // 0x2f0cc0: 0x3e00008  jr          $ra
label_2f0cc4:
    if (ctx->pc == 0x2F0CC4u) {
        ctx->pc = 0x2F0CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0CC0u;
        // 0x2f0cc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0CC8u;
        goto label_fallthrough_0x2f0cc0;
    }
    ctx->pc = 0x2F0CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0CC0u;
        // 0x2f0cc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f0cc0:
    ctx->pc = 0x2F0CC8u;
}
