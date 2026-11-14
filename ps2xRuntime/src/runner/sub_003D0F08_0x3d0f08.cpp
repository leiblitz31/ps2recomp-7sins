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

// Function: sub_003D0F08
// Address: 0x3d0f08 - 0x3d1018
void sub_003D0F08_0x3d0f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0F08_0x3d0f08");
#endif

    switch (ctx->pc) {
        case 0x3d0f58u: goto label_3d0f58;
        default: break;
    }

    ctx->pc = 0x3d0f08u;

    // 0x3d0f08: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x3d0f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3d0f0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d0f0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d0f10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d0f10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0f14: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D0F14u;
    {
        const bool branch_taken_0x3d0f14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0F14u;
        // 0x3d0f18: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0f14) {
            ctx->pc = 0x3D0F34u;
            goto label_3d0f34;
        }
    }
    ctx->pc = 0x3D0F1Cu;
    // 0x3d0f1c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d0f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3d0f20: 0x8c43b1e8  lw          $v1, -0x4E18($v0)
    ctx->pc = 0x3d0f20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1E8u));
    // 0x3d0f24: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3d0f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3d0f28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3d0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d0f2c: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x3D0F2Cu;
    {
        const bool branch_taken_0x3d0f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D0F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0F2Cu;
        // 0x3d0f30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0f2c) {
            ctx->pc = 0x3D100Cu;
            goto label_3d100c;
        }
    }
    ctx->pc = 0x3D0F34u;
label_3d0f34:
    // 0x3d0f34: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x3d0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3d0f38: 0x18400030  blez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3D0F38u;
    {
        const bool branch_taken_0x3d0f38 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3D0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0F38u;
        // 0x3d0f3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0f38) {
            ctx->pc = 0x3D0FFCu;
            goto label_3d0ffc;
        }
    }
    ctx->pc = 0x3D0F40u;
    // 0x3d0f40: 0x8c880014  lw          $t0, 0x14($a0)
    ctx->pc = 0x3d0f40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3d0f44: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x3d0f44u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0f48: 0x8c8b001c  lw          $t3, 0x1C($a0)
    ctx->pc = 0x3d0f48u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x3d0f4c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3d0f4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d0f50: 0xc7838108  lwc1        $f3, -0x7EF8($gp)
    ctx->pc = 0x3d0f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3d0f54: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x3d0f54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3d0f58:
    // 0x3d0f58: 0x246a0001  addiu       $t2, $v1, 0x1
    ctx->pc = 0x3d0f58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d0f5c: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x3d0f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x3d0f60: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d0f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0f64: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3d0f64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d0f68: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x3d0f68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3d0f6c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3d0f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3d0f70: 0x94a40004  lhu         $a0, 0x4($a1)
    ctx->pc = 0x3d0f70u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3d0f74: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3d0f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3d0f78: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3d0f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3d0f7c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3d0f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d0f80: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3d0f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3d0f84: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3d0f84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3d0f88: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3d0f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d0f8c: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x3d0f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x3d0f90: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3d0f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d0f94: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3d0f94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3d0f98: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d0f98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3d0f9c: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x3d0f9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3d0fa0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3d0fa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3d0fa4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d0fa4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d0fa8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3d0fa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3d0fac: 0x2cc20006  sltiu       $v0, $a2, 0x6
    ctx->pc = 0x3d0facu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3d0fb0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3d0fb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3d0fb4: 0x122380a  movz        $a3, $t1, $v0
    ctx->pc = 0x3d0fb4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 9));
    // 0x3d0fb8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d0fb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3d0fbc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3d0fbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3d0fc0: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x3d0fc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3d0fc4: 0x123380a  movz        $a3, $t1, $v1
    ctx->pc = 0x3d0fc4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 9));
    // 0x3d0fc8: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x3d0fc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3d0fcc: 0x122380a  movz        $a3, $t1, $v0
    ctx->pc = 0x3d0fccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 9));
    // 0x3d0fd0: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x3d0fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x3d0fd4: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x3d0fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x3d0fd8: 0x14c40003  bne         $a2, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D0FD8u;
    {
        const bool branch_taken_0x3d0fd8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x3D0FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0FD8u;
        // 0x3d0fdc: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0fd8) {
            ctx->pc = 0x3D0FE8u;
            goto label_3d0fe8;
        }
    }
    ctx->pc = 0x3D0FE0u;
    // 0x3d0fe0: 0x10c50003  beq         $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D0FE0u;
    {
        const bool branch_taken_0x3d0fe0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x3D0FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0FE0u;
        // 0x3d0fe4: 0x140182d  daddu       $v1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0fe0) {
            ctx->pc = 0x3D0FF0u;
            goto label_3d0ff0;
        }
    }
    ctx->pc = 0x3D0FE8u;
label_3d0fe8:
    // 0x3d0fe8: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x3d0fe8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d0fec: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x3d0fecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3d0ff0:
    // 0x3d0ff0: 0x6d102a  slt         $v0, $v1, $t5
    ctx->pc = 0x3d0ff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x3d0ff4: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x3D0FF4u;
    {
        const bool branch_taken_0x3d0ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D0FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0FF4u;
        // 0x3d0ff8: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0ff4) {
            ctx->pc = 0x3D0F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0f58;
        }
    }
    ctx->pc = 0x3D0FFCu;
label_3d0ffc:
    // 0x3d0ffc: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D0FFCu;
    {
        const bool branch_taken_0x3d0ffc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0FFCu;
        // 0x3d1000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0ffc) {
            ctx->pc = 0x3D100Cu;
            goto label_3d100c;
        }
    }
    ctx->pc = 0x3D1004u;
    // 0x3d1004: 0x51800001  beql        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D1004u;
    {
        const bool branch_taken_0x3d1004 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1004) {
            ctx->pc = 0x3D1008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D1004u;
            // 0x3d1008: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D100Cu;
            goto label_3d100c;
        }
    }
    ctx->pc = 0x3D100Cu;
label_3d100c:
    // 0x3d100c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D100Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D100Cu;
        // 0x3d1010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D100Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D1014u;
    // 0x3d1014: 0x0  nop
    ctx->pc = 0x3d1014u;
    // NOP
    ctx->pc = 0x3d1018u;
}
