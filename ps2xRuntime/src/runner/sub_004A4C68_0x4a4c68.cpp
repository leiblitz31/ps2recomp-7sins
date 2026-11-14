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

// Function: sub_004A4C68
// Address: 0x4a4c68 - 0x4a4dc0
void sub_004A4C68_0x4a4c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4C68_0x4a4c68");
#endif

    switch (ctx->pc) {
        case 0x4a4c7cu: goto label_4a4c7c;
        case 0x4a4cd0u: goto label_4a4cd0;
        case 0x4a4d10u: goto label_4a4d10;
        case 0x4a4d70u: goto label_4a4d70;
        default: break;
    }

    ctx->pc = 0x4a4c68u;

    // 0x4a4c68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a4c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a4c6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a4c6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4c70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a4c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a4c74: 0xc1285cc  jal         func_4A1730
    ctx->pc = 0x4A4C74u;
    SET_GPR_U32(ctx, 31, 0x4A4C7Cu);
    ctx->pc = 0x4A4C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4C74u;
    // 0x4a4c78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1730u, 0x4A4C74u, 0x4A4C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4C7Cu;
label_4a4c7c:
    // 0x4a4c7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a4c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a4c80: 0x3e00008  jr          $ra
    ctx->pc = 0x4A4C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A4C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4C80u;
        // 0x4a4c84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A4C88u;
    // 0x4a4c88: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4a4c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4a4c8c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4a4c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x4a4c90: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4a4c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x4a4c94: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4a4c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4c98: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4a4c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x4a4c9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a4c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4ca0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a4ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4a4ca4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x4a4ca4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4ca8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4a4ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x4a4cac: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x4a4cacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4cb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a4cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a4cb4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4a4cb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4cb8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4a4cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4a4cbc: 0x129980b  movn        $s3, $t1, $t1
    ctx->pc = 0x4a4cbcu;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 9));
    // 0x4a4cc0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x4a4cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4a4cc4: 0x24a52610  addiu       $a1, $a1, 0x2610
    ctx->pc = 0x4a4cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9744));
    // 0x4a4cc8: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A4CC8u;
    SET_GPR_U32(ctx, 31, 0x4A4CD0u);
    ctx->pc = 0x4A4CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4CC8u;
    // 0x4a4ccc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A4CC8u, 0x4A4CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4CD0u;
label_4a4cd0:
    // 0x4a4cd0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4A4CD0u;
    {
        const bool branch_taken_0x4a4cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A4CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4CD0u;
        // 0x4a4cd4: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4cd0) {
            ctx->pc = 0x4A4D40u;
            goto label_4a4d40;
        }
    }
    ctx->pc = 0x4A4CD8u;
    // 0x4a4cd8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x4a4cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x4a4cdc: 0x2423021  addu        $a2, $s2, $v0
    ctx->pc = 0x4a4cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4a4ce0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4a4ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4a4ce4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x4a4ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4a4ce8: 0x2902821  addu        $a1, $s4, $s0
    ctx->pc = 0x4a4ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x4a4cec: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x4a4cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a4cf0: 0x12400029  beqz        $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x4A4CF0u;
    {
        const bool branch_taken_0x4a4cf0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4CF0u;
        // 0x4a4cf4: 0x24882  srl         $t1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4cf0) {
            ctx->pc = 0x4A4D98u;
            goto label_4a4d98;
        }
    }
    ctx->pc = 0x4A4CF8u;
    // 0x4a4cf8: 0x11200027  beqz        $t1, . + 4 + (0x27 << 2)
    ctx->pc = 0x4A4CF8u;
    {
        const bool branch_taken_0x4a4cf8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4CF8u;
        // 0x4a4cfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4cf8) {
            ctx->pc = 0x4A4D98u;
            goto label_4a4d98;
        }
    }
    ctx->pc = 0x4A4D00u;
    // 0x4a4d00: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x4a4d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x4a4d04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4a4d04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a4d08: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4a4d08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4d0c: 0x0  nop
    ctx->pc = 0x4a4d0cu;
    // NOP
label_4a4d10:
    // 0x4a4d10: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4a4d10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a4d14: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4a4d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4a4d18: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4a4d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4a4d1c: 0xe9182b  sltu        $v1, $a3, $t1
    ctx->pc = 0x4a4d1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4a4d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a4d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a4d24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a4d24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a4d28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4a4d28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4a4d2c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x4a4d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x4a4d30: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4A4D30u;
    {
        const bool branch_taken_0x4a4d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A4D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4D30u;
        // 0x4a4d34: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4d30) {
            ctx->pc = 0x4A4D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a4d10;
        }
    }
    ctx->pc = 0x4A4D38u;
    // 0x4a4d38: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4A4D38u;
    {
        const bool branch_taken_0x4a4d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4D38u;
        // 0x4a4d3c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4d38) {
            ctx->pc = 0x4A4D9Cu;
            goto label_4a4d9c;
        }
    }
    ctx->pc = 0x4A4D40u;
label_4a4d40:
    // 0x4a4d40: 0x101042  srl         $v0, $s0, 1
    ctx->pc = 0x4a4d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x4a4d44: 0x2424021  addu        $t0, $s2, $v0
    ctx->pc = 0x4a4d44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4a4d48: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4a4d48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4a4d4c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x4a4d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x4a4d50: 0x2902821  addu        $a1, $s4, $s0
    ctx->pc = 0x4a4d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x4a4d54: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x4a4d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a4d58: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x4A4D58u;
    {
        const bool branch_taken_0x4a4d58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4D58u;
        // 0x4a4d5c: 0x24842  srl         $t1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4d58) {
            ctx->pc = 0x4A4D98u;
            goto label_4a4d98;
        }
    }
    ctx->pc = 0x4A4D60u;
    // 0x4a4d60: 0x1120000d  beqz        $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x4A4D60u;
    {
        const bool branch_taken_0x4a4d60 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4D60u;
        // 0x4a4d64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4d60) {
            ctx->pc = 0x4A4D98u;
            goto label_4a4d98;
        }
    }
    ctx->pc = 0x4A4D68u;
    // 0x4a4d68: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x4a4d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x4a4d6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4a4d6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a4d70:
    // 0x4a4d70: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x4a4d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a4d74: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4a4d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4a4d78: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4a4d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4a4d7c: 0xe9182b  sltu        $v1, $a3, $t1
    ctx->pc = 0x4a4d7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4a4d80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4a4d80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4a4d84: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a4d84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x4a4d88: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x4a4d88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a4d8c: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4a4d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a4d90: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4A4D90u;
    {
        const bool branch_taken_0x4a4d90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A4D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4D90u;
        // 0x4a4d94: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4d90) {
            ctx->pc = 0x4A4D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a4d70;
        }
    }
    ctx->pc = 0x4A4D98u;
label_4a4d98:
    // 0x4a4d98: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4a4d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a4d9c:
    // 0x4a4d9c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4a4d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4da0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4a4da0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a4da4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4a4da4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a4da8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a4da8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a4dac: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4a4dacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a4db0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a4db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a4db4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A4DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A4DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4DB4u;
        // 0x4a4db8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A4DBCu;
    // 0x4a4dbc: 0x0  nop
    ctx->pc = 0x4a4dbcu;
    // NOP
    ctx->pc = 0x4a4dc0u;
}
