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

// Function: sub_00327AF8
// Address: 0x327af8 - 0x327be0
void sub_00327AF8_0x327af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327AF8_0x327af8");
#endif

    switch (ctx->pc) {
        case 0x327b34u: goto label_327b34;
        case 0x327b3cu: goto label_327b3c;
        case 0x327b58u: goto label_327b58;
        case 0x327ba4u: goto label_327ba4;
        default: break;
    }

    ctx->pc = 0x327af8u;

    // 0x327af8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x327af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x327afc: 0x8f83a654  lw          $v1, -0x59AC($gp)
    ctx->pc = 0x327afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944340)));
    // 0x327b00: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x327b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x327b04: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x327b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x327b08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x327b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x327b0c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x327b0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327b10: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x327b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x327b14: 0xc3a021  addu        $s4, $a2, $v1
    ctx->pc = 0x327b14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x327b18: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x327b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x327b1c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x327b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x327b20: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x327b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x327b24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x327b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x327b28: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x327b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x327b2c: 0xc103440  jal         func_40D100
    ctx->pc = 0x327B2Cu;
    SET_GPR_U32(ctx, 31, 0x327B34u);
    ctx->pc = 0x327B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327B2Cu;
    // 0x327b30: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x327B2Cu, 0x327B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327B34u;
label_327b34:
    // 0x327b34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x327B34u;
    {
        const bool branch_taken_0x327b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x327B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B34u;
        // 0x327b38: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327b34) {
            ctx->pc = 0x327B44u;
            goto label_327b44;
        }
    }
    ctx->pc = 0x327B3Cu;
label_327b3c:
    // 0x327b3c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x327B3Cu;
    {
        const bool branch_taken_0x327b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B3Cu;
        // 0x327b40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327b3c) {
            ctx->pc = 0x327BC0u;
            goto label_327bc0;
        }
    }
    ctx->pc = 0x327B44u;
label_327b44:
    // 0x327b44: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x327B44u;
    {
        const bool branch_taken_0x327b44 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x327B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B44u;
        // 0x327b48: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327b44) {
            ctx->pc = 0x327BBCu;
            goto label_327bbc;
        }
    }
    ctx->pc = 0x327B4Cu;
    // 0x327b4c: 0x3c11cccc  lui         $s1, 0xCCCC
    ctx->pc = 0x327b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52428 << 16));
    // 0x327b50: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x327b50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327b54: 0x3631cccd  ori         $s1, $s1, 0xCCCD
    ctx->pc = 0x327b54u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)52429);
label_327b58:
    // 0x327b58: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x327b58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x327b5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x327b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327b60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x327b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327b64: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x327b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x327b68: 0x2481821  addu        $v1, $s2, $t0
    ctx->pc = 0x327b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x327b6c: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x327b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x327b70: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x327b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x327b74: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x327b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x327b78: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x327b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x327b7c: 0x84670004  lh          $a3, 0x4($v1)
    ctx->pc = 0x327b7cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x327b80: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x327b80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x327b84: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x327b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327b88: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x327b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x327b8c: 0x84680006  lh          $t0, 0x6($v1)
    ctx->pc = 0x327b8cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x327b90: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x327b90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x327b94: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x327b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x327b98: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x327b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x327b9c: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x327B9Cu;
    SET_GPR_U32(ctx, 31, 0x327BA4u);
    ctx->pc = 0x327BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327B9Cu;
    // 0x327ba0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x327B9Cu, 0x327BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327BA4u;
label_327ba4:
    // 0x327ba4: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x327BA4u;
    {
        const bool branch_taken_0x327ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327BA4u;
        // 0x327ba8: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327ba4) {
            ctx->pc = 0x327B3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327b3c;
        }
    }
    ctx->pc = 0x327BACu;
    // 0x327bac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x327bacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x327bb0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x327bb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x327bb4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x327BB4u;
    {
        const bool branch_taken_0x327bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x327BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327BB4u;
        // 0x327bb8: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327bb4) {
            ctx->pc = 0x327B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327b58;
        }
    }
    ctx->pc = 0x327BBCu;
label_327bbc:
    // 0x327bbc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x327bbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_327bc0:
    // 0x327bc0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x327bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x327bc4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x327bc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x327bc8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x327bc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x327bcc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x327bccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x327bd0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x327bd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x327bd4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x327bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x327BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327BD8u;
        // 0x327bdc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327BE0u;
}
