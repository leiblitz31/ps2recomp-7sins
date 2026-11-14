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

// Function: sub_00418130
// Address: 0x418130 - 0x418200
void sub_00418130_0x418130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418130_0x418130");
#endif

    switch (ctx->pc) {
        case 0x4181e8u: goto label_4181e8;
        default: break;
    }

    ctx->pc = 0x418130u;

    // 0x418130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x418130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x418134: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x418134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x418138: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x418138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x41813c: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x41813cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x418140: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x418140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x418144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x418144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418148: 0xe60c0080  swc1        $f12, 0x80($s0)
    ctx->pc = 0x418148u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x41814c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41814cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x418150: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x418150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x418154: 0xc446001c  lwc1        $f6, 0x1C($v0)
    ctx->pc = 0x418154u;
    { uint32_t bits = FAST_READ32(0x61E89Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x418158: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x418158u;
    {
        const bool branch_taken_0x418158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x41815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418158u;
        // 0x41815c: 0xc4450018  lwc1        $f5, 0x18($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x418158) {
            ctx->pc = 0x418174u;
            goto label_418174;
        }
    }
    ctx->pc = 0x418160u;
    // 0x418160: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x418160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x418164: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x418164u;
    {
        const bool branch_taken_0x418164 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x418164) {
            ctx->pc = 0x418174u;
            goto label_418174;
        }
    }
    ctx->pc = 0x41816Cu;
    // 0x41816c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x41816Cu;
    {
        const bool branch_taken_0x41816c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x418170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41816Cu;
        // 0x418170: 0xc6040084  lwc1        $f4, 0x84($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41816c) {
            ctx->pc = 0x41818Cu;
            goto label_41818c;
        }
    }
    ctx->pc = 0x418174u;
label_418174:
    // 0x418174: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x418174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x418178: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x418178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x41817c: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x41817cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x418180: 0xc6020080  lwc1        $f2, 0x80($s0)
    ctx->pc = 0x418180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x418184: 0x46010103  div.s       $f4, $f0, $f1
    ctx->pc = 0x418184u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x418188: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x418188u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_41818c:
    // 0x41818c: 0x46053041  sub.s       $f1, $f6, $f5
    ctx->pc = 0x41818cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x418190: 0xc7808048  lwc1        $f0, -0x7FB8($gp)
    ctx->pc = 0x418190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x418194: 0x460c2081  sub.s       $f2, $f4, $f12
    ctx->pc = 0x418194u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[12]);
    // 0x418198: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x418198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x41819c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x41819cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4181a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4181a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4181a4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x4181a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4181a8: 0x460c2080  add.s       $f2, $f4, $f12
    ctx->pc = 0x4181a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[12]);
    // 0x4181ac: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x4181acu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x4181b0: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x4181b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4181b4: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x4181b4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x4181b8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4181b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4181bc: 0x46053041  sub.s       $f1, $f6, $f5
    ctx->pc = 0x4181bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x4181c0: 0x46053000  add.s       $f0, $f6, $f5
    ctx->pc = 0x4181c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x4181c4: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x4181c4u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x4181c8: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x4181c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x4181cc: 0xe601008c  swc1        $f1, 0x8C($s0)
    ctx->pc = 0x4181ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x4181d0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x4181d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x4181d4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4181d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x4181d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4181D8u;
    {
        const bool branch_taken_0x4181d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4181DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4181D8u;
        // 0x4181dc: 0xe6000090  swc1        $f0, 0x90($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4181d8) {
            ctx->pc = 0x4181E8u;
            goto label_4181e8;
        }
    }
    ctx->pc = 0x4181E0u;
    // 0x4181e0: 0xc106794  jal         func_419E50
    ctx->pc = 0x4181E0u;
    SET_GPR_U32(ctx, 31, 0x4181E8u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x4181E0u, 0x4181E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4181E8u;
label_4181e8:
    // 0x4181e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4181e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4181ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4181ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4181f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4181f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4181f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4181F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4181F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4181F4u;
        // 0x4181f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4181F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4181FCu;
    // 0x4181fc: 0x0  nop
    ctx->pc = 0x4181fcu;
    // NOP
    ctx->pc = 0x418200u;
}
