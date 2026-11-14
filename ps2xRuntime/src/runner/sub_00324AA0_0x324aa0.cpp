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

// Function: sub_00324AA0
// Address: 0x324aa0 - 0x324d38
void sub_00324AA0_0x324aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324AA0_0x324aa0");
#endif

    switch (ctx->pc) {
        case 0x324ae4u: goto label_324ae4;
        case 0x324aecu: goto label_324aec;
        case 0x324b00u: goto label_324b00;
        case 0x324b1cu: goto label_324b1c;
        case 0x324b68u: goto label_324b68;
        case 0x324b88u: goto label_324b88;
        case 0x324ba8u: goto label_324ba8;
        case 0x324bd4u: goto label_324bd4;
        case 0x324bf8u: goto label_324bf8;
        case 0x324c14u: goto label_324c14;
        case 0x324c34u: goto label_324c34;
        case 0x324c54u: goto label_324c54;
        case 0x324c8cu: goto label_324c8c;
        case 0x324ca8u: goto label_324ca8;
        case 0x324cc8u: goto label_324cc8;
        case 0x324ce8u: goto label_324ce8;
        default: break;
    }

    ctx->pc = 0x324aa0u;

    // 0x324aa0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x324aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x324aa4: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x324aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x324aa8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x324aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x324aac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x324aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324ab0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x324ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x324ab4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x324ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x324ab8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x324ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x324abc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x324abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324ac0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x324ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x324ac4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x324ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x324ac8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x324ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x324acc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x324accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x324ad0: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x324ad0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x324ad4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x324ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x324ad8: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x324ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x324adc: 0xc103440  jal         func_40D100
    ctx->pc = 0x324ADCu;
    SET_GPR_U32(ctx, 31, 0x324AE4u);
    ctx->pc = 0x324AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324ADCu;
    // 0x324ae0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x324ADCu, 0x324AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324AE4u;
label_324ae4:
    // 0x324ae4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x324AE4u;
    {
        const bool branch_taken_0x324ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324AE4u;
        // 0x324ae8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324ae4) {
            ctx->pc = 0x324AF4u;
            goto label_324af4;
        }
    }
    ctx->pc = 0x324AECu;
label_324aec:
    // 0x324aec: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x324AECu;
    {
        const bool branch_taken_0x324aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324AECu;
        // 0x324af0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324aec) {
            ctx->pc = 0x324D14u;
            goto label_324d14;
        }
    }
    ctx->pc = 0x324AF4u;
label_324af4:
    // 0x324af4: 0x27b50004  addiu       $s5, $sp, 0x4
    ctx->pc = 0x324af4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x324af8: 0x148180  sll         $s0, $s4, 6
    ctx->pc = 0x324af8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x324afc: 0x0  nop
    ctx->pc = 0x324afcu;
    // NOP
label_324b00:
    // 0x324b00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324b04: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x324b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x324b08: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x324b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324b0c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x324b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x324b10: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x324b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x324b14: 0xc103440  jal         func_40D100
    ctx->pc = 0x324B14u;
    SET_GPR_U32(ctx, 31, 0x324B1Cu);
    ctx->pc = 0x324B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324B14u;
    // 0x324b18: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x324B14u, 0x324B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324B1Cu;
label_324b1c:
    // 0x324b1c: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x324B1Cu;
    {
        const bool branch_taken_0x324b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324B1Cu;
        // 0x324b20: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324b1c) {
            ctx->pc = 0x324AECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324aec;
        }
    }
    ctx->pc = 0x324B24u;
    // 0x324b24: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x324b24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x324b28: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x324B28u;
    {
        const bool branch_taken_0x324b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324B28u;
        // 0x324b2c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324b28) {
            ctx->pc = 0x324CFCu;
            goto label_324cfc;
        }
    }
    ctx->pc = 0x324B30u;
    // 0x324b30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x324b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x324b34: 0x2442b730  addiu       $v0, $v0, -0x48D0
    ctx->pc = 0x324b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948656));
    // 0x324b38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x324b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x324b3c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x324b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x324b40: 0x800008  jr          $a0
    ctx->pc = 0x324B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x324B48u: goto label_324b48;
            case 0x324BE4u: goto label_324be4;
            case 0x324C70u: goto label_324c70;
            case 0x324CFCu: goto label_324cfc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324B40u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x324B48u;
label_324b48:
    // 0x324b48: 0x2709021  addu        $s2, $s3, $s0
    ctx->pc = 0x324b48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x324b4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324b50: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x324b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324b54: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x324b54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x324b58: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x324b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x324b5c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x324b5cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x324b60: 0xc10341a  jal         func_40D068
    ctx->pc = 0x324B60u;
    SET_GPR_U32(ctx, 31, 0x324B68u);
    ctx->pc = 0x324B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324B60u;
    // 0x324b64: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x324B60u, 0x324B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324B68u;
label_324b68:
    // 0x324b68: 0x1040ffe0  beqz        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x324B68u;
    {
        const bool branch_taken_0x324b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324B68u;
        // 0x324b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324b68) {
            ctx->pc = 0x324AECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324aec;
        }
    }
    ctx->pc = 0x324B70u;
    // 0x324b70: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x324b70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x324b74: 0x37a5000c  ori         $a1, $sp, 0xC
    ctx->pc = 0x324b74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x324b78: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x324b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x324b7c: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x324b7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x324b80: 0xc103440  jal         func_40D100
    ctx->pc = 0x324B80u;
    SET_GPR_U32(ctx, 31, 0x324B88u);
    ctx->pc = 0x324B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324B80u;
    // 0x324b84: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x324B80u, 0x324B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324B88u;
label_324b88:
    // 0x324b88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x324B88u;
    {
        const bool branch_taken_0x324b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324B88u;
        // 0x324b8c: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324b88) {
            ctx->pc = 0x324B98u;
            goto label_324b98;
        }
    }
    ctx->pc = 0x324B90u;
    // 0x324b90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x324B90u;
    {
        const bool branch_taken_0x324b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324B90u;
        // 0x324b94: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324b90) {
            ctx->pc = 0x324BB4u;
            goto label_324bb4;
        }
    }
    ctx->pc = 0x324B98u;
label_324b98:
    // 0x324b98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x324B98u;
    {
        const bool branch_taken_0x324b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324B98u;
        // 0x324b9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324b98) {
            ctx->pc = 0x324BB0u;
            goto label_324bb0;
        }
    }
    ctx->pc = 0x324BA0u;
    // 0x324ba0: 0xc105778  jal         func_415DE0
    ctx->pc = 0x324BA0u;
    SET_GPR_U32(ctx, 31, 0x324BA8u);
    ctx->pc = 0x324BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324BA0u;
    // 0x324ba4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DE0u, 0x324BA0u, 0x324BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324BA8u;
label_324ba8:
    // 0x324ba8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x324BA8u;
    {
        const bool branch_taken_0x324ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324BA8u;
        // 0x324bac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324ba8) {
            ctx->pc = 0x324BB4u;
            goto label_324bb4;
        }
    }
    ctx->pc = 0x324BB0u;
label_324bb0:
    // 0x324bb0: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x324bb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_324bb4:
    // 0x324bb4: 0x1060ffcd  beqz        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x324BB4u;
    {
        const bool branch_taken_0x324bb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x324BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324BB4u;
        // 0x324bb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324bb4) {
            ctx->pc = 0x324AECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324aec;
        }
    }
    ctx->pc = 0x324BBCu;
    // 0x324bbc: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x324bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x324bc0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x324bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x324bc4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x324bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x324bc8: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x324bc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x324bcc: 0xc103440  jal         func_40D100
    ctx->pc = 0x324BCCu;
    SET_GPR_U32(ctx, 31, 0x324BD4u);
    ctx->pc = 0x324BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324BCCu;
    // 0x324bd0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x324BCCu, 0x324BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324BD4u;
label_324bd4:
    // 0x324bd4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x324BD4u;
    {
        const bool branch_taken_0x324bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324BD4u;
        // 0x324bd8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324bd4) {
            ctx->pc = 0x324C3Cu;
            goto label_324c3c;
        }
    }
    ctx->pc = 0x324BDCu;
    // 0x324bdc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x324BDCu;
    {
        const bool branch_taken_0x324bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x324bdc) {
            ctx->pc = 0x324C44u;
            goto label_324c44;
        }
    }
    ctx->pc = 0x324BE4u;
label_324be4:
    // 0x324be4: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x324be4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x324be8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324bec: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x324becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x324bf0: 0xc10341a  jal         func_40D068
    ctx->pc = 0x324BF0u;
    SET_GPR_U32(ctx, 31, 0x324BF8u);
    ctx->pc = 0x324BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324BF0u;
    // 0x324bf4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x324BF0u, 0x324BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324BF8u;
label_324bf8:
    // 0x324bf8: 0x1040ffbc  beqz        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x324BF8u;
    {
        const bool branch_taken_0x324bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324BF8u;
        // 0x324bfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324bf8) {
            ctx->pc = 0x324AECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324aec;
        }
    }
    ctx->pc = 0x324C00u;
    // 0x324c00: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x324c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x324c04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x324c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324c08: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x324c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x324c0c: 0xc103440  jal         func_40D100
    ctx->pc = 0x324C0Cu;
    SET_GPR_U32(ctx, 31, 0x324C14u);
    ctx->pc = 0x324C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324C0Cu;
    // 0x324c10: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x324C0Cu, 0x324C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324C14u;
label_324c14:
    // 0x324c14: 0x1040ffb5  beqz        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x324C14u;
    {
        const bool branch_taken_0x324c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C14u;
        // 0x324c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324c14) {
            ctx->pc = 0x324AECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324aec;
        }
    }
    ctx->pc = 0x324C1Cu;
    // 0x324c1c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x324c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x324c20: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x324c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x324c24: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x324c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x324c28: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x324c28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x324c2c: 0xc103440  jal         func_40D100
    ctx->pc = 0x324C2Cu;
    SET_GPR_U32(ctx, 31, 0x324C34u);
    ctx->pc = 0x324C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324C2Cu;
    // 0x324c30: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x324C2Cu, 0x324C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324C34u;
label_324c34:
    // 0x324c34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x324C34u;
    {
        const bool branch_taken_0x324c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C34u;
        // 0x324c38: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324c34) {
            ctx->pc = 0x324C44u;
            goto label_324c44;
        }
    }
    ctx->pc = 0x324C3Cu;
label_324c3c:
    // 0x324c3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x324C3Cu;
    {
        const bool branch_taken_0x324c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C3Cu;
        // 0x324c40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324c3c) {
            ctx->pc = 0x324C60u;
            goto label_324c60;
        }
    }
    ctx->pc = 0x324C44u;
label_324c44:
    // 0x324c44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x324C44u;
    {
        const bool branch_taken_0x324c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C44u;
        // 0x324c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324c44) {
            ctx->pc = 0x324C5Cu;
            goto label_324c5c;
        }
    }
    ctx->pc = 0x324C4Cu;
    // 0x324c4c: 0xc105778  jal         func_415DE0
    ctx->pc = 0x324C4Cu;
    SET_GPR_U32(ctx, 31, 0x324C54u);
    ctx->pc = 0x324C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324C4Cu;
    // 0x324c50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DE0u, 0x324C4Cu, 0x324C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324C54u;
label_324c54:
    // 0x324c54: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x324C54u;
    {
        const bool branch_taken_0x324c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C54u;
        // 0x324c58: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324c54) {
            ctx->pc = 0x324C60u;
            goto label_324c60;
        }
    }
    ctx->pc = 0x324C5Cu;
label_324c5c:
    // 0x324c5c: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x324c5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_324c60:
    // 0x324c60: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x324C60u;
    {
        const bool branch_taken_0x324c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x324C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C60u;
        // 0x324c64: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324c60) {
            ctx->pc = 0x324D00u;
            goto label_324d00;
        }
    }
    ctx->pc = 0x324C68u;
    // 0x324c68: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x324C68u;
    {
        const bool branch_taken_0x324c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C68u;
        // 0x324c6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324c68) {
            ctx->pc = 0x324D14u;
            goto label_324d14;
        }
    }
    ctx->pc = 0x324C70u;
label_324c70:
    // 0x324c70: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x324c70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x324c74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324c78: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x324c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x324c7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x324c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324c80: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x324c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x324c84: 0xc103440  jal         func_40D100
    ctx->pc = 0x324C84u;
    SET_GPR_U32(ctx, 31, 0x324C8Cu);
    ctx->pc = 0x324C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324C84u;
    // 0x324c88: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x324C84u, 0x324C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324C8Cu;
label_324c8c:
    // 0x324c8c: 0x1040ff97  beqz        $v0, . + 4 + (-0x69 << 2)
    ctx->pc = 0x324C8Cu;
    {
        const bool branch_taken_0x324c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C8Cu;
        // 0x324c90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324c8c) {
            ctx->pc = 0x324AECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324aec;
        }
    }
    ctx->pc = 0x324C94u;
    // 0x324c94: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x324c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x324c98: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x324c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324c9c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x324c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x324ca0: 0xc103440  jal         func_40D100
    ctx->pc = 0x324CA0u;
    SET_GPR_U32(ctx, 31, 0x324CA8u);
    ctx->pc = 0x324CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324CA0u;
    // 0x324ca4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x324CA0u, 0x324CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324CA8u;
label_324ca8:
    // 0x324ca8: 0x1040ff90  beqz        $v0, . + 4 + (-0x70 << 2)
    ctx->pc = 0x324CA8u;
    {
        const bool branch_taken_0x324ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324CA8u;
        // 0x324cac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324ca8) {
            ctx->pc = 0x324AECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324aec;
        }
    }
    ctx->pc = 0x324CB0u;
    // 0x324cb0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x324cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x324cb4: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x324cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x324cb8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x324cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x324cbc: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x324cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x324cc0: 0xc103440  jal         func_40D100
    ctx->pc = 0x324CC0u;
    SET_GPR_U32(ctx, 31, 0x324CC8u);
    ctx->pc = 0x324CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324CC0u;
    // 0x324cc4: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x324CC0u, 0x324CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324CC8u;
label_324cc8:
    // 0x324cc8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x324CC8u;
    {
        const bool branch_taken_0x324cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324CC8u;
        // 0x324ccc: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324cc8) {
            ctx->pc = 0x324CD8u;
            goto label_324cd8;
        }
    }
    ctx->pc = 0x324CD0u;
    // 0x324cd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x324CD0u;
    {
        const bool branch_taken_0x324cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324CD0u;
        // 0x324cd4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324cd0) {
            ctx->pc = 0x324CF4u;
            goto label_324cf4;
        }
    }
    ctx->pc = 0x324CD8u;
label_324cd8:
    // 0x324cd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x324CD8u;
    {
        const bool branch_taken_0x324cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324CD8u;
        // 0x324cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324cd8) {
            ctx->pc = 0x324CF0u;
            goto label_324cf0;
        }
    }
    ctx->pc = 0x324CE0u;
    // 0x324ce0: 0xc105778  jal         func_415DE0
    ctx->pc = 0x324CE0u;
    SET_GPR_U32(ctx, 31, 0x324CE8u);
    ctx->pc = 0x324CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324CE0u;
    // 0x324ce4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DE0u, 0x324CE0u, 0x324CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324CE8u;
label_324ce8:
    // 0x324ce8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x324CE8u;
    {
        const bool branch_taken_0x324ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324CE8u;
        // 0x324cec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324ce8) {
            ctx->pc = 0x324CF4u;
            goto label_324cf4;
        }
    }
    ctx->pc = 0x324CF0u;
label_324cf0:
    // 0x324cf0: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x324cf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_324cf4:
    // 0x324cf4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x324CF4u;
    {
        const bool branch_taken_0x324cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x324CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324CF4u;
        // 0x324cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324cf4) {
            ctx->pc = 0x324D14u;
            goto label_324d14;
        }
    }
    ctx->pc = 0x324CFCu;
label_324cfc:
    // 0x324cfc: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x324cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_324d00:
    // 0x324d00: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x324d00u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324d04: 0x2e830002  sltiu       $v1, $s4, 0x2
    ctx->pc = 0x324d04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x324d08: 0x1460ff7d  bnez        $v1, . + 4 + (-0x83 << 2)
    ctx->pc = 0x324D08u;
    {
        const bool branch_taken_0x324d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x324D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324D08u;
        // 0x324d0c: 0x148180  sll         $s0, $s4, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324d08) {
            ctx->pc = 0x324B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324b00;
        }
    }
    ctx->pc = 0x324D10u;
    // 0x324d10: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x324d10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_324d14:
    // 0x324d14: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x324d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x324d18: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x324d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x324d1c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x324d1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x324d20: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x324d20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x324d24: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x324d24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x324d28: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x324d28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x324d2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x324d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324d30: 0x3e00008  jr          $ra
    ctx->pc = 0x324D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324D30u;
        // 0x324d34: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324D38u;
}
