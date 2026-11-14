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

// Function: sub_00384038
// Address: 0x384038 - 0x3842a8
void sub_00384038_0x384038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384038_0x384038");
#endif

    switch (ctx->pc) {
        case 0x384094u: goto label_384094;
        default: break;
    }

    ctx->pc = 0x384038u;

    // 0x384038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x384038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38403c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x38403cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x384040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x384044: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x384044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x384048: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x384048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38404c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x38404cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x384050: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x384050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x384054: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x384054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x384058: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x384058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x38405c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x38405cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x384060: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x384060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x384064: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x384064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x384068: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x384068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x38406c: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x38406cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x384070: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x384070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x384074: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x384074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x384078: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x384078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x38407c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x38407cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x384080: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x384080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x384084: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x384084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x384088: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x384088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x38408c: 0xc103eb2  jal         func_40FAC8
    ctx->pc = 0x38408Cu;
    SET_GPR_U32(ctx, 31, 0x384094u);
    ctx->pc = 0x384090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38408Cu;
    // 0x384090: 0xe4410034  swc1        $f1, 0x34($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FAC8u, 0x38408Cu, 0x384094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384094u;
label_384094:
    // 0x384094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x384094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x384098: 0x3e00008  jr          $ra
    ctx->pc = 0x384098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384098u;
        // 0x38409c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3840A0u;
    // 0x3840a0: 0x24870008  addiu       $a3, $a0, 0x8
    ctx->pc = 0x3840a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3840a4: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x3840a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3840a8: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x3840a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3840ac: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3840acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3840b0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3840b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3840b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3840b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3840b8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3840b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3840bc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3840bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3840c0: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x3840c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3840c4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x3840c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3840c8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3840c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3840cc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3840ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3840d0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3840d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3840d4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3840d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3840d8: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x3840d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x3840dc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3840dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3840e0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3840e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3840e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3840e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3840e8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3840e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3840ec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3840ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3840f0: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x3840f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x3840f4: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x3840f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3840f8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x3840f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3840fc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3840fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x384100: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x384100u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x384104: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x384104u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x384108: 0xe4e2000c  swc1        $f2, 0xC($a3)
    ctx->pc = 0x384108u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x38410c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x38410cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x384110: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x384110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x384114: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x384114u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x384118: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x384118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x38411c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x38411cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x384120: 0xe4e10010  swc1        $f1, 0x10($a3)
    ctx->pc = 0x384120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x384124: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x384124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x384128: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x384128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38412c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x38412cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x384130: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x384130u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x384134: 0x460c1080  add.s       $f2, $f2, $f12
    ctx->pc = 0x384134u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x384138: 0x3e00008  jr          $ra
    ctx->pc = 0x384138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384138u;
        // 0x38413c: 0xe4e20014  swc1        $f2, 0x14($a3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384140u;
    // 0x384140: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x384140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x384144: 0x24870008  addiu       $a3, $a0, 0x8
    ctx->pc = 0x384144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x384148: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x384148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38414c: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x38414cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x384150: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x384150u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x384154: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x384154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x384158: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x384158u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x38415c: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x38415cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[1]); }
    // 0x384160: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x384160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x384164: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x384164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x384168: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x384168u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x38416c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x38416cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x384170: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x384170u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x384174: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x384174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x384178: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x384178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38417c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x38417cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x384180: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x384180u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x384184: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x384184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x384188: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x384188u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x38418c: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x38418cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x384190: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x384190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x384194: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x384194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x384198: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x384198u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x38419c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x38419cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3841a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3841a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3841a4: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x3841a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x3841a8: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x3841a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3841ac: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3841acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3841b0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3841b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3841b4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3841b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3841b8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3841b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3841bc: 0xe4e2000c  swc1        $f2, 0xC($a3)
    ctx->pc = 0x3841bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x3841c0: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x3841c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3841c4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x3841c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3841c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3841c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3841cc: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3841ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3841d0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3841d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3841d4: 0xe4e10010  swc1        $f1, 0x10($a3)
    ctx->pc = 0x3841d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x3841d8: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x3841d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3841dc: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x3841dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3841e0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3841e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3841e4: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x3841e4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3841e8: 0x460c1080  add.s       $f2, $f2, $f12
    ctx->pc = 0x3841e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x3841ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3841ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3841F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3841ECu;
        // 0x3841f0: 0xe4e20014  swc1        $f2, 0x14($a3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3841ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3841F4u;
    // 0x3841f4: 0x0  nop
    ctx->pc = 0x3841f4u;
    // NOP
    // 0x3841f8: 0x24870008  addiu       $a3, $a0, 0x8
    ctx->pc = 0x3841f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3841fc: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x3841fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x384200: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x384200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x384204: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x384204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x384208: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x384208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38420c: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x38420cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x384210: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x384210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x384214: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x384214u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x384218: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x384218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x38421c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x38421cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x384220: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x384220u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x384224: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x384224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x384228: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x384228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38422c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x38422cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x384230: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x384230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x384234: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x384234u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x384238: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x384238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x38423c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x38423cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x384240: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x384240u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x384244: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x384244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x384248: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x384248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38424c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x38424cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x384250: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x384250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x384254: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x384254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x384258: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x384258u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x38425c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x38425cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x384260: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x384260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x384264: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x384264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x384268: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x384268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38426c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x38426cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x384270: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x384270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x384274: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x384274u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x384278: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x384278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x38427c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x38427cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x384280: 0xe4e1000c  swc1        $f1, 0xC($a3)
    ctx->pc = 0x384280u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x384284: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x384284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x384288: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x384288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38428c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x38428cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x384290: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x384290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x384294: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x384294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x384298: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x384298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38429c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x38429cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3842a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3842A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3842A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3842A0u;
        // 0x3842a4: 0xe4e10014  swc1        $f1, 0x14($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3842A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3842A8u;
}
