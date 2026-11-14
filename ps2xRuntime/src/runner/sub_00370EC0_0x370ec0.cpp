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

// Function: sub_00370EC0
// Address: 0x370ec0 - 0x370fd8
void sub_00370EC0_0x370ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370EC0_0x370ec0");
#endif

    switch (ctx->pc) {
        case 0x370f28u: goto label_370f28;
        case 0x370f4cu: goto label_370f4c;
        default: break;
    }

    ctx->pc = 0x370ec0u;

    // 0x370ec0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x370ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x370ec4: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x370ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370ec8: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x370ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x370ecc: 0xc4a40014  lwc1        $f4, 0x14($a1)
    ctx->pc = 0x370eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x370ed0: 0xc483003c  lwc1        $f3, 0x3C($a0)
    ctx->pc = 0x370ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x370ed4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x370ed4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x370ed8: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x370ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x370edc: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x370edcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x370ee0: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x370ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370ee4: 0xc4a4001c  lwc1        $f4, 0x1C($a1)
    ctx->pc = 0x370ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x370ee8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x370ee8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x370eec: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x370eecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x370ef0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x370ef0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x370ef4: 0x46040080  add.s       $f2, $f0, $f4
    ctx->pc = 0x370ef4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x370ef8: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x370ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370efc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x370efcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x370f00: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x370f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370f04: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x370f04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370f08: 0x0  nop
    ctx->pc = 0x370f08u;
    // NOP
    // 0x370f0c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x370F0Cu;
    {
        const bool branch_taken_0x370f0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x370F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370F0Cu;
        // 0x370f10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370f0c) {
            ctx->pc = 0x370F28u;
            goto label_370f28;
        }
    }
    ctx->pc = 0x370F14u;
    // 0x370f14: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x370f14u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x370f18: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x370f18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370f1c: 0x0  nop
    ctx->pc = 0x370f1cu;
    // NOP
    // 0x370f20: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x370F20u;
    {
        const bool branch_taken_0x370f20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x370F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370F20u;
        // 0x370f24: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370f20) {
            ctx->pc = 0x370F44u;
            goto label_370f44;
        }
    }
    ctx->pc = 0x370F28u;
label_370f28:
    // 0x370f28: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x370f28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x370f2c: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x370f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x370f30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x370f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370f34: 0x54460007  bnel        $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x370F34u;
    {
        const bool branch_taken_0x370f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x370f34) {
            ctx->pc = 0x370F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x370F34u;
            // 0x370f38: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x370F54u;
            goto label_370f54;
        }
    }
    ctx->pc = 0x370F3Cu;
    // 0x370f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x370F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370F3Cu;
        // 0x370f40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370F44u;
label_370f44:
    // 0x370f44: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x370F44u;
    {
        const bool branch_taken_0x370f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370F44u;
        // 0x370f48: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370f44) {
            ctx->pc = 0x370F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370f28;
        }
    }
    ctx->pc = 0x370F4Cu;
label_370f4c:
    // 0x370f4c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x370F4Cu;
    {
        const bool branch_taken_0x370f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370F4Cu;
        // 0x370f50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370f4c) {
            ctx->pc = 0x370FC0u;
            goto label_370fc0;
        }
    }
    ctx->pc = 0x370F54u;
label_370f54:
    // 0x370f54: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x370f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370f58: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x370f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x370f5c: 0xc4440014  lwc1        $f4, 0x14($v0)
    ctx->pc = 0x370f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x370f60: 0xc4a3003c  lwc1        $f3, 0x3C($a1)
    ctx->pc = 0x370f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x370f64: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x370f64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x370f68: 0xc4a10040  lwc1        $f1, 0x40($a1)
    ctx->pc = 0x370f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370f6c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x370f6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x370f70: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x370f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x370f74: 0xc444001c  lwc1        $f4, 0x1C($v0)
    ctx->pc = 0x370f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x370f78: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x370f78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x370f7c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x370f7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x370f80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x370f80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x370f84: 0x46040040  add.s       $f1, $f0, $f4
    ctx->pc = 0x370f84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x370f88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x370f88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370f8c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x370f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370f90: 0xc4a20044  lwc1        $f2, 0x44($a1)
    ctx->pc = 0x370f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x370f94: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x370f94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x370f98: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x370f98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370f9c: 0x0  nop
    ctx->pc = 0x370f9cu;
    // NOP
    // 0x370fa0: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x370FA0u;
    {
        const bool branch_taken_0x370fa0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x370fa0) {
            ctx->pc = 0x370FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x370FA0u;
            // 0x370fa4: 0xac660024  sw          $a2, 0x24($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x370FC4u;
            goto label_370fc4;
        }
    }
    ctx->pc = 0x370FA8u;
    // 0x370fa8: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x370fa8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x370fac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x370facu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370fb0: 0x0  nop
    ctx->pc = 0x370fb0u;
    // NOP
    // 0x370fb4: 0x4501ffe5  bc1t        . + 4 + (-0x1B << 2)
    ctx->pc = 0x370FB4u;
    {
        const bool branch_taken_0x370fb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x370FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370FB4u;
        // 0x370fb8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370fb4) {
            ctx->pc = 0x370F4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370f4c;
        }
    }
    ctx->pc = 0x370FBCu;
    // 0x370fbc: 0x0  nop
    ctx->pc = 0x370fbcu;
    // NOP
label_370fc0:
    // 0x370fc0: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x370fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
label_370fc4:
    // 0x370fc4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x370fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x370fc8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x370fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x370fcc: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x370fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x370fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x370FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370FD0u;
        // 0x370fd4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370FD8u;
}
