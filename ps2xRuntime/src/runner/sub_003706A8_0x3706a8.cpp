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

// Function: sub_003706A8
// Address: 0x3706a8 - 0x370818
void sub_003706A8_0x3706a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003706A8_0x3706a8");
#endif

    switch (ctx->pc) {
        case 0x3706f0u: goto label_3706f0;
        case 0x37077cu: goto label_37077c;
        case 0x370788u: goto label_370788;
        case 0x370794u: goto label_370794;
        default: break;
    }

    ctx->pc = 0x3706a8u;

    // 0x3706a8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3706a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3706ac: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3706acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3706b0: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x3706b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3706b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3706b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3706b8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3706b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3706bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3706bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3706c0: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x3706c0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3706c4: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x3706c4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3706c8: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x3706c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3706cc: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3706ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3706d0: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x3706d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3706d4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3706d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3706d8: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x3706d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3706dc: 0x12000042  beqz        $s0, . + 4 + (0x42 << 2)
    ctx->pc = 0x3706DCu;
    {
        const bool branch_taken_0x3706dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3706E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3706DCu;
        // 0x3706e0: 0x4600b5c6  mov.s       $f23, $f22 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3706dc) {
            ctx->pc = 0x3707E8u;
            goto label_3707e8;
        }
    }
    ctx->pc = 0x3706E4u;
    // 0x3706e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3706e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3706e8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3706e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x3706ec: 0x0  nop
    ctx->pc = 0x3706ecu;
    // NOP
label_3706f0:
    // 0x3706f0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3706f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3706f4: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x3706f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3706f8: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x3706f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3706fc: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x3706fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x370700: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x370700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x370704: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x370704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x370708: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x370708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37070c: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x37070cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x370710: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x370710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x370714: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x370714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370718: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x370718u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x37071c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x37071cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x370720: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x370720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370724: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x370724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370728: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x370728u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x37072c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x37072cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x370730: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x370730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370734: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x370734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370738: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x370738u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37073c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x37073cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x370740: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x370740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x370744: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x370744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370748: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x370748u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x37074c: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x37074cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x370750: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x370750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370754: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x370754u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x370758: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x370758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x37075c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x37075cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370760: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x370760u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x370764: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x370764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x370768: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x370768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37076c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x37076cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x370770: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x370770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x370774: 0xc104d24  jal         func_413490
    ctx->pc = 0x370774u;
    SET_GPR_U32(ctx, 31, 0x37077Cu);
    ctx->pc = 0x370778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370774u;
    // 0x370778: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x370774u, 0x37077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37077Cu;
label_37077c:
    // 0x37077c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x37077cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x370780: 0xc104d24  jal         func_413490
    ctx->pc = 0x370780u;
    SET_GPR_U32(ctx, 31, 0x370788u);
    ctx->pc = 0x370784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370780u;
    // 0x370784: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x370780u, 0x370788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370788u;
label_370788:
    // 0x370788: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x370788u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x37078c: 0xc104d24  jal         func_413490
    ctx->pc = 0x37078Cu;
    SET_GPR_U32(ctx, 31, 0x370794u);
    ctx->pc = 0x370790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37078Cu;
    // 0x370790: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x37078Cu, 0x370794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370794u;
label_370794:
    // 0x370794: 0x4614a840  add.s       $f1, $f21, $f20
    ctx->pc = 0x370794u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x370798: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x370798u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37079c: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x37079cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x3707a0: 0x46150d41  sub.s       $f21, $f1, $f21
    ctx->pc = 0x3707a0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x3707a4: 0x46140d01  sub.s       $f20, $f1, $f20
    ctx->pc = 0x3707a4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x3707a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3707a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3707ac: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x3707acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x3707b0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3707b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x3707b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3707b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3707b8: 0x4601b834  c.lt.s      $f23, $f1
    ctx->pc = 0x3707b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3707bc: 0x0  nop
    ctx->pc = 0x3707bcu;
    // NOP
    // 0x3707c0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3707C0u;
    {
        const bool branch_taken_0x3707c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3707C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3707C0u;
        // 0x3707c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3707c0) {
            ctx->pc = 0x3707D8u;
            goto label_3707d8;
        }
    }
    ctx->pc = 0x3707C8u;
    // 0x3707c8: 0x46010044  c1          0x10044
    ctx->pc = 0x3707c8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x3707cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3707CCu;
    {
        const bool branch_taken_0x3707cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3707D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3707CCu;
        // 0x3707d0: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3707cc) {
            ctx->pc = 0x3707E0u;
            goto label_3707e0;
        }
    }
    ctx->pc = 0x3707D4u;
    // 0x3707d4: 0x0  nop
    ctx->pc = 0x3707d4u;
    // NOP
label_3707d8:
    // 0x3707d8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3707d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3707dc: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x3707dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3707e0:
    // 0x3707e0: 0x1600ffc3  bnez        $s0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x3707E0u;
    {
        const bool branch_taken_0x3707e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3707E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3707E0u;
        // 0x3707e4: 0x4601b580  add.s       $f22, $f22, $f1 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3707e0) {
            ctx->pc = 0x3706F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3706f0;
        }
    }
    ctx->pc = 0x3707E8u;
label_3707e8:
    // 0x3707e8: 0x4600b006  mov.s       $f0, $f22
    ctx->pc = 0x3707e8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[22]);
    // 0x3707ec: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3707ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3707f0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3707f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3707f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3707f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3707f8: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x3707f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3707fc: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x3707fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x370800: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x370800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x370804: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x370804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x370808: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x370808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37080c: 0x3e00008  jr          $ra
    ctx->pc = 0x37080Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37080Cu;
        // 0x370810: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37080Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370814u;
    // 0x370814: 0x0  nop
    ctx->pc = 0x370814u;
    // NOP
    ctx->pc = 0x370818u;
}
