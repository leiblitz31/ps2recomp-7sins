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

// Function: sub_003ACF20
// Address: 0x3acf20 - 0x3ad058
void sub_003ACF20_0x3acf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ACF20_0x3acf20");
#endif

    switch (ctx->pc) {
        case 0x3acf50u: goto label_3acf50;
        case 0x3acfb0u: goto label_3acfb0;
        default: break;
    }

    ctx->pc = 0x3acf20u;

    // 0x3acf20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3acf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3acf24: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3acf24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3acf28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3acf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3acf2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3acf2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acf30: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x3acf30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3acf34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3acf34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acf38: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x3acf38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3acf3c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x3acf3cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x3acf40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3acf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3acf44: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3acf44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3acf48: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3ACF48u;
    SET_GPR_U32(ctx, 31, 0x3ACF50u);
    ctx->pc = 0x3ACF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACF48u;
    // 0x3acf4c: 0x8e040134  lw          $a0, 0x134($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3ACF48u, 0x3ACF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACF50u;
label_3acf50:
    // 0x3acf50: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3acf50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acf54: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3acf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3acf58: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3acf58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3acf5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ACF5Cu;
    {
        const bool branch_taken_0x3acf5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACF5Cu;
        // 0x3acf60: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acf5c) {
            ctx->pc = 0x3ACF70u;
            goto label_3acf70;
        }
    }
    ctx->pc = 0x3ACF64u;
    // 0x3acf64: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x3acf64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3acf68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3ACF68u;
    {
        const bool branch_taken_0x3acf68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACF68u;
        // 0x3acf6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acf68) {
            ctx->pc = 0x3ACF7Cu;
            goto label_3acf7c;
        }
    }
    ctx->pc = 0x3ACF70u;
label_3acf70:
    // 0x3acf70: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3acf70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3acf74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3acf74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acf78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3acf78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3acf7c:
    // 0x3acf7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3acf7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acf80: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x3acf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3acf84: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3acf84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3acf88: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3acf88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3acf8c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x3acf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x3acf90: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3acf90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3acf94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3acf94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3acf98: 0x58600027  blezl       $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x3ACF98u;
    {
        const bool branch_taken_0x3acf98 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3acf98) {
            ctx->pc = 0x3ACF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACF98u;
            // 0x3acf9c: 0x4615a002  mul.s       $f0, $f20, $f21 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD038u;
            goto label_3ad038;
        }
    }
    ctx->pc = 0x3ACFA0u;
    // 0x3acfa0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3acfa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acfa4: 0x26070024  addiu       $a3, $s0, 0x24
    ctx->pc = 0x3acfa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x3acfa8: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x3acfa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x3acfac: 0x0  nop
    ctx->pc = 0x3acfacu;
    // NOP
label_3acfb0:
    // 0x3acfb0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3ACFB0u;
    {
        const bool branch_taken_0x3acfb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACFB0u;
        // 0x3acfb4: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acfb0) {
            ctx->pc = 0x3ACFECu;
            goto label_3acfec;
        }
    }
    ctx->pc = 0x3ACFB8u;
    // 0x3acfb8: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x3acfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x3acfbc: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x3acfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3acfc0: 0x482000c  bltzl       $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3ACFC0u;
    {
        const bool branch_taken_0x3acfc0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3acfc0) {
            ctx->pc = 0x3ACFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACFC0u;
            // 0x3acfc4: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ACFF4u;
            goto label_3acff4;
        }
    }
    ctx->pc = 0x3ACFC8u;
    // 0x3acfc8: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x3acfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x3acfcc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x3acfccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3acfd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ACFD0u;
    {
        const bool branch_taken_0x3acfd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACFD0u;
        // 0x3acfd4: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acfd0) {
            ctx->pc = 0x3ACFE4u;
            goto label_3acfe4;
        }
    }
    ctx->pc = 0x3ACFD8u;
    // 0x3acfd8: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x3acfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x3acfdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3ACFDCu;
    {
        const bool branch_taken_0x3acfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACFDCu;
        // 0x3acfe0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acfdc) {
            ctx->pc = 0x3ACFF0u;
            goto label_3acff0;
        }
    }
    ctx->pc = 0x3ACFE4u;
label_3acfe4:
    // 0x3acfe4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3ACFE4u;
    {
        const bool branch_taken_0x3acfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACFE4u;
        // 0x3acfe8: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acfe4) {
            ctx->pc = 0x3ACFF4u;
            goto label_3acff4;
        }
    }
    ctx->pc = 0x3ACFECu;
label_3acfec:
    // 0x3acfec: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3acfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_3acff0:
    // 0x3acff0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3acff0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3acff4:
    // 0x3acff4: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x3acff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3acff8: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3ACFF8u;
    {
        const bool branch_taken_0x3acff8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3ACFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACFF8u;
        // 0x3acffc: 0xa82821  addu        $a1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acff8) {
            ctx->pc = 0x3AD018u;
            goto label_3ad018;
        }
    }
    ctx->pc = 0x3AD000u;
    // 0x3ad000: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x3ad000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3ad004: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x3ad004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ad008: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x3ad008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3ad00c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3ad00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ad010: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3ad010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3ad014: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x3ad014u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3ad018:
    // 0x3ad018: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3ad018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ad01c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3ad01cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ad020: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x3ad020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x3ad024: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ad024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ad028: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ad028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ad02c: 0x1c60ffe0  bgtz        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x3AD02Cu;
    {
        const bool branch_taken_0x3ad02c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x3AD030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD02Cu;
        // 0x3ad030: 0x28620080  slti        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad02c) {
            ctx->pc = 0x3ACFB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3acfb0;
        }
    }
    ctx->pc = 0x3AD034u;
    // 0x3ad034: 0x4615a002  mul.s       $f0, $f20, $f21
    ctx->pc = 0x3ad034u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
label_3ad038:
    // 0x3ad038: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3ad038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ad03c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ad03cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ad040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ad040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ad044: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x3ad044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3ad048: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x3ad048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3ad04c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD04Cu;
        // 0x3ad050: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD054u;
    // 0x3ad054: 0x0  nop
    ctx->pc = 0x3ad054u;
    // NOP
    ctx->pc = 0x3ad058u;
}
