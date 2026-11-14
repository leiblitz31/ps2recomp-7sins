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

// Function: sub_003B1B58
// Address: 0x3b1b58 - 0x3b1d40
void sub_003B1B58_0x3b1b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1B58_0x3b1b58");
#endif

    switch (ctx->pc) {
        case 0x3b1b84u: goto label_3b1b84;
        case 0x3b1ba4u: goto label_3b1ba4;
        case 0x3b1bd0u: goto label_3b1bd0;
        case 0x3b1be4u: goto label_3b1be4;
        case 0x3b1c00u: goto label_3b1c00;
        case 0x3b1c4cu: goto label_3b1c4c;
        case 0x3b1c5cu: goto label_3b1c5c;
        case 0x3b1c74u: goto label_3b1c74;
        case 0x3b1cdcu: goto label_3b1cdc;
        case 0x3b1cecu: goto label_3b1cec;
        case 0x3b1d14u: goto label_3b1d14;
        default: break;
    }

    ctx->pc = 0x3b1b58u;

label_3b1b58:
    // 0x3b1b58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b1b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b1b5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b1b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3b1b60: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x3b1b60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3b1b64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b1b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1b68: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x3b1b68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3b1b6c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x3b1b6cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x3b1b70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b1b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b1b74: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3b1b74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3b1b78: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3b1b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3b1b7c: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3B1B7Cu;
    SET_GPR_U32(ctx, 31, 0x3B1B84u);
    ctx->pc = 0x3B1B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1B7Cu;
    // 0x3b1b80: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B1B7Cu, 0x3B1B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1B84u;
label_3b1b84:
    // 0x3b1b84: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3B1B84u;
    {
        const bool branch_taken_0x3b1b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1B84u;
        // 0x3b1b88: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1b84) {
            ctx->pc = 0x3B1BC8u;
            goto label_3b1bc8;
        }
    }
    ctx->pc = 0x3B1B8Cu;
    // 0x3b1b8c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3b1b8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b1b90: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3b1b90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3b1b94: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3b1b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3b1b98: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3b1b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b1b9c: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3B1B9Cu;
    SET_GPR_U32(ctx, 31, 0x3B1BA4u);
    ctx->pc = 0x3B1BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1B9Cu;
    // 0x3b1ba0: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3B1B9Cu, 0x3B1BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1BA4u;
label_3b1ba4:
    // 0x3b1ba4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x3b1ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b1ba8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3b1ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3b1bac: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x3b1bacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3b1bb0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3b1bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b1bb4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x3b1bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x3b1bb8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x3b1bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3b1bbc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3b1bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x3b1bc0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3B1BC0u;
    {
        const bool branch_taken_0x3b1bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1BC0u;
        // 0x3b1bc4: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1bc0) {
            ctx->pc = 0x3B1C00u;
            goto label_3b1c00;
        }
    }
    ctx->pc = 0x3B1BC8u;
label_3b1bc8:
    // 0x3b1bc8: 0xc0ec604  jal         func_3B1810
    ctx->pc = 0x3B1BC8u;
    SET_GPR_U32(ctx, 31, 0x3B1BD0u);
    ctx->pc = 0x3B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1810u, 0x3B1BC8u, 0x3B1BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1BD0u;
label_3b1bd0:
    // 0x3b1bd0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3b1bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3b1bd4: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x3b1bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x3b1bd8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3b1bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3b1bdc: 0xc0ec64a  jal         func_3B1928
    ctx->pc = 0x3B1BDCu;
    SET_GPR_U32(ctx, 31, 0x3B1BE4u);
    ctx->pc = 0x3B1BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1BDCu;
    // 0x3b1be0: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1928u, 0x3B1BDCu, 0x3B1BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1BE4u;
label_3b1be4:
    // 0x3b1be4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3b1be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3b1be8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3b1be8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3b1bec: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3b1becu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x3b1bf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b1bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1bf4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3b1bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3b1bf8: 0xc0ec6d6  jal         func_3B1B58
    ctx->pc = 0x3B1BF8u;
    SET_GPR_U32(ctx, 31, 0x3B1C00u);
    ctx->pc = 0x3B1BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1BF8u;
    // 0x3b1bfc: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1B58u;
    goto label_3b1b58;
    ctx->pc = 0x3B1C00u;
label_3b1c00:
    // 0x3b1c00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b1c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1c04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b1c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b1c08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b1c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b1c0c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x3b1c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3b1c10: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x3b1c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b1c14: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C14u;
        // 0x3b1c18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1C1Cu;
    // 0x3b1c1c: 0x0  nop
    ctx->pc = 0x3b1c1cu;
    // NOP
    // 0x3b1c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b1c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b1c24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b1c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b1c28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b1c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b1c2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b1c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1c30: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x3b1c30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3b1c34: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3b1c34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3b1c38: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x3b1c38u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x3b1c3c: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x3b1c3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x3b1c40: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3b1c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3b1c44: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3B1C44u;
    SET_GPR_U32(ctx, 31, 0x3B1C4Cu);
    ctx->pc = 0x3B1C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1C44u;
    // 0x3b1c48: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B1C44u, 0x3B1C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1C4Cu;
label_3b1c4c:
    // 0x3b1c4c: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x3b1c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3b1c50: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3b1c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3b1c54: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3B1C54u;
    SET_GPR_U32(ctx, 31, 0x3B1C5Cu);
    ctx->pc = 0x3B1C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1C54u;
    // 0x3b1c58: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3B1C54u, 0x3B1C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1C5Cu;
label_3b1c5c:
    // 0x3b1c5c: 0xc44d0008  lwc1        $f13, 0x8($v0)
    ctx->pc = 0x3b1c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3b1c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b1c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1c64: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x3b1c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b1c68: 0x46146b40  add.s       $f13, $f13, $f20
    ctx->pc = 0x3b1c68u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[20]);
    // 0x3b1c6c: 0xc0ebb40  jal         func_3AED00
    ctx->pc = 0x3B1C6Cu;
    SET_GPR_U32(ctx, 31, 0x3B1C74u);
    ctx->pc = 0x3B1C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1C6Cu;
    // 0x3b1c70: 0x46156300  add.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AED00u, 0x3B1C6Cu, 0x3B1C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1C74u;
label_3b1c74:
    // 0x3b1c74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b1c74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1c78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b1c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b1c7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b1c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b1c80: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x3b1c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3b1c84: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x3b1c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b1c88: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C88u;
        // 0x3b1c8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1C90u;
    // 0x3b1c90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b1c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3b1c94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b1c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b1c98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b1c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b1c9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b1c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1ca0: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x3b1ca0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3b1ca4: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x3b1ca4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3b1ca8: 0x46006646  mov.s       $f25, $f12
    ctx->pc = 0x3b1ca8u;
    ctx->f[25] = FPU_MOV_S(ctx->f[12]);
    // 0x3b1cac: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x3b1cacu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3b1cb0: 0x46007e06  mov.s       $f24, $f15
    ctx->pc = 0x3b1cb0u;
    ctx->f[24] = FPU_MOV_S(ctx->f[15]);
    // 0x3b1cb4: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x3b1cb4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3b1cb8: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x3b1cb8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x3b1cbc: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x3b1cbcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3b1cc0: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x3b1cc0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x3b1cc4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3b1cc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3b1cc8: 0x46008546  mov.s       $f21, $f16
    ctx->pc = 0x3b1cc8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[16]);
    // 0x3b1ccc: 0x46008d06  mov.s       $f20, $f17
    ctx->pc = 0x3b1cccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[17]);
    // 0x3b1cd0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3b1cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3b1cd4: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3B1CD4u;
    SET_GPR_U32(ctx, 31, 0x3B1CDCu);
    ctx->pc = 0x3B1CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1CD4u;
    // 0x3b1cd8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B1CD4u, 0x3B1CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1CDCu;
label_3b1cdc:
    // 0x3b1cdc: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x3b1cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3b1ce0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3b1ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3b1ce4: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3B1CE4u;
    SET_GPR_U32(ctx, 31, 0x3B1CECu);
    ctx->pc = 0x3B1CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1CE4u;
    // 0x3b1ce8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3B1CE4u, 0x3B1CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1CECu;
label_3b1cec:
    // 0x3b1cec: 0xc44f0008  lwc1        $f15, 0x8($v0)
    ctx->pc = 0x3b1cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x3b1cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b1cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1cf4: 0xc44e0004  lwc1        $f14, 0x4($v0)
    ctx->pc = 0x3b1cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3b1cf8: 0x46147c40  add.s       $f17, $f15, $f20
    ctx->pc = 0x3b1cf8u;
    ctx->f[17] = FPU_ADD_S(ctx->f[15], ctx->f[20]);
    // 0x3b1cfc: 0x46157400  add.s       $f16, $f14, $f21
    ctx->pc = 0x3b1cfcu;
    ctx->f[16] = FPU_ADD_S(ctx->f[14], ctx->f[21]);
    // 0x3b1d00: 0x46197300  add.s       $f12, $f14, $f25
    ctx->pc = 0x3b1d00u;
    ctx->f[12] = FPU_ADD_S(ctx->f[14], ctx->f[25]);
    // 0x3b1d04: 0x46167b40  add.s       $f13, $f15, $f22
    ctx->pc = 0x3b1d04u;
    ctx->f[13] = FPU_ADD_S(ctx->f[15], ctx->f[22]);
    // 0x3b1d08: 0x46177380  add.s       $f14, $f14, $f23
    ctx->pc = 0x3b1d08u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[23]);
    // 0x3b1d0c: 0xc0ebb98  jal         func_3AEE60
    ctx->pc = 0x3B1D0Cu;
    SET_GPR_U32(ctx, 31, 0x3B1D14u);
    ctx->pc = 0x3B1D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1D0Cu;
    // 0x3b1d10: 0x46187bc0  add.s       $f15, $f15, $f24 (Delay Slot)
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEE60u, 0x3B1D0Cu, 0x3B1D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1D14u;
label_3b1d14:
    // 0x3b1d14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b1d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1d18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b1d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b1d1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b1d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b1d20: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x3b1d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x3b1d24: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x3b1d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3b1d28: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x3b1d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3b1d2c: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x3b1d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3b1d30: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x3b1d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3b1d34: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x3b1d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b1d38: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D38u;
        // 0x3b1d3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1D40u;
}
